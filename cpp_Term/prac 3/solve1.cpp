#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>

using namespace std;


int main() {

	time_t now = time(0);

	string date_bd;
	cin >> date_bd; // format is dd.mm.yyyy
	int day = stoi(date_bd.substr(0, 2)), month = stoi(date_bd.substr(3, 4)), year = stoi(date_bd.substr(6, 9));

	struct tm timeinfo = { 0 };
	timeinfo.tm_year = year - 1900;
	timeinfo.tm_mon = month - 1;
	timeinfo.tm_mday = day;

	time_t btime = mktime(&timeinfo);

	int now_days = now / 86400;
	int btime_days = btime / 86400;

	cout << "Your age in days is: " << now_days - btime_days;
	system("pause");
	return 0;

}