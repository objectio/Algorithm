#include <iostream>
#include <cstring>
#include <string>
using namespace std;

#define MAX_STACK_SIZE 101
int stack[101];
int top = -1;


int	Is_full() {
	return (top == MAX_STACK_SIZE - 1);
}

int Is_empty() {
	return (top == -1);
}

void push(int x) {
	stack[++top] = x;
}

void pop() {
	if (Is_empty() == 1) {
		cout << "-1" << "\n";
	}
	else {
		cout << stack[top--] << "\n";
	}
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char com[10];
		cin >> com;

		if (!strcmp(com, "push")) {
			int x;
			cin >> x;
			push(x);
		}
		else if (!strcmp(com, "pop")) {
			pop();
		}
		else if (!strcmp(com, "size")) {
			printf("%d\n", top + 1);
		}
		else if (!strcmp(com, "empty")) {
			if (Is_empty() == 1) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (!strcmp(com, "top")) {
			if (Is_empty() == 1) cout << "-1" << "\n";
			else cout << stack[top] << "\n";
		}
	}

	return 0;
}