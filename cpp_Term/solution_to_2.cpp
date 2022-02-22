#include <iostream>
#include <string>
using namespace std;


int main() {
	string s1, s2;
	int count = 0;
	cin >> s1;

	while (cin >> s2) {
		if (s1 == s2) {
			cout << s1 << " pos: " << count + 1 << '\n';
		}
		count++;
	}
}

