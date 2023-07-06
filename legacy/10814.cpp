#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct information
{
	int age = 0;
	string name;
};

bool compare(const information& a, const information& b)
{
	return a.age < b.age;
}

int main() {

	information Information;
	vector<information> myvector;
	int input_age = 0;
	string input_name;
	int N = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input_age >> input_name;
		Information.age = input_age;
		Information.name = input_name;
		myvector.push_back(Information);
	}

	stable_sort(myvector.begin(), myvector.end(), compare);

	for (int i = 0; i < N; i++)
		cout << myvector[i].age << ' ' << myvector[i].name << '\n';

	return 0;
}