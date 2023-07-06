#include <iostream>
#include <vector> // vector 선언시 필요
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N + 1, vector<int>(N + 1, 0)); // 벡터로 2차원 배열 생성
    vector<vector<int>> D(N + 1, vector<int>(N + 1, 0)); // 벡터로 2차원 배열 생성 
    int X1, Y1, X2, Y2;
    int res = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> A[i][j];

            if (i == 1 && j == 1)
                D[i][j] = A[i][j];
            else
                D[i][j] = D[i - 1][j] + D[i][j - 1] - D[i - 1][j - 1] + A[i][j];
        }
    }

    for (int i = 1; i <= M; i++) {
        cin >> X1 >> Y1 >> X2 >> Y2;
        if (X1 == 1 && Y1 == 1) D[X1][Y1] = 0;
        if (X2 == 1 && Y2 == 1) D[X2][Y2] = 0;
        res = D[X2][Y2] - D[X2][Y1 - 1] - D[X1 - 1][Y2] + D[X1 - 1][Y1 - 1];
        cout << res << endl;
    }
}
