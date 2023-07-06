#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int suNo, quizNo;
	int data;
    cin >> suNo >> quizNo;
    int S[100001] = {};

    for (int i = 1; i <= suNo; i++) {
		cin >> data;
		if (i == 1)
			S[i] = data;
        else
			S[i] = S[i - 1] + data;
    }

    for (int i = 0; i < quizNo; i++) {
       int front, back;
	   cin >> front >> back;

	   cout << S[back] - S[front - 1];
    }

}
