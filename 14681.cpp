#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (x > 1000 || x < -1000 || x == 0 || y > 1000 || y < -1000 || y == 0) return -1;

	if (x > 0 && y > 0) printf("%d", 1);
	else if (x < 0 && y > 0) printf("%d", 2);
	else if (x < 0 && y < 0) printf("%d", 3);
	else printf("%d", 4);

	return 0;
}