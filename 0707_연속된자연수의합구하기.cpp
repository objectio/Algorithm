#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 1; // 경우의 수(=우리가 원하는 결과) 본인 자신을 미리 카운트
    int start_index = 1;
    int end_index = 1;
    int sum = 1;
    
    while (end_index != N) // end_index == N 인 경우(본인자신_를 제외, count의 초기값이 1인 이유
    {
        if (sum == N) {
            count++;

            /*start_index--;
            sum += start_index;*/
            end_index++;
            sum += end_index;
        }
        else if (sum < N) {
            end_index++;
            sum += end_index;
            //start_index--;
            //sum += start_index;
        }
        else if (sum > N) {
            sum -= start_index;
            start_index++;
            //sum -= end_index;
            //end_index--;
        }

    }
    cout << count << "\n";
}
