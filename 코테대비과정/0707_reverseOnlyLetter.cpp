#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>

int main() {
	std::string s;

	std::cin >> s;
	int start = 0;
	int end = s.length() - 1;

	while (start <= end) {
		if (isalpha(s[start])) {
			if (isalpha(s[end])) {
				char temp = s[end];
				s[end] = s[start];
				s[start] = temp;
				start++;
				end--;
			}
			else {
				end--;
			}
		}
		else
			start++;
	}
	std::cout << s << std::endl;

	return 0;
}