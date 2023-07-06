#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int sum = 0;
	int i, j, k = 0;
	int n = 9;
	int arr[10];
	arr[0] = 0;

	for (i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + n);

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {

			if (sum - arr[i] - arr[j] == 100) {

				for (k = 0; k < n; k++) {
					if (k == i || k == j) continue;
					printf("%d\n", arr[k]);
				}
				return 0;
			}
		}
	}

	return 0;
}