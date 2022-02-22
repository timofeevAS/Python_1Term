#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int from_binary_to_decimal(string digit) {
	int result = 0;
	for (int i = digit.size()-1; i >=0 ; i--) {
		result += pow(2,digit.size()-i-1)*(digit[i]-'0');
	}
	return result;
}

string from_decimal_to_binary(int digit) {
	string result = "";

	while (digit > 0) {
		char value = (digit % 2) + '0';
		result.push_back(value);
		digit /= 2;
	}

	reverse(result.begin(), result.end());
	return result;

}

int main() {

	string digit;
	cin >> digit;
	
	int decimal_digit = from_binary_to_decimal(digit);
	cout << "Decimal: " << decimal_digit << '\n';

	string binary_digit = from_decimal_to_binary(decimal_digit);

	cout << "Binary: " << binary_digit << '\n';

	return 0;
}