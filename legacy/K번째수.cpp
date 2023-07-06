#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> arr;

    for (int a = 0; a < commands.size(); a++)
    {
        arr.clear();
        for (int i = commands[a][0] - 1; i <= commands[a][1] - 1; i++)
            arr.push_back(array[i]);

        sort(arr.begin(), arr.end());

        int j = 0;
        j = commands[a][2] - 1;
        answer.push_back(arr[j]);
    }

    return answer;
}

int main()
{
    vector<int> answer;
    vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
    vector<vector<int>> commands = { {2, 5, 3},{4, 4, 1},{1, 7, 3} };

    answer = solution(array, commands);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }
    return 0;
}