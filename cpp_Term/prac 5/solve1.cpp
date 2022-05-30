#include <string> 
#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool isLeap(int year) {
	return ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}

class Calendar {
public:
	int year;
	string start_day;
	bool leap = isLeap(year);

	string month_of_year[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	map<string, int> day_of_week = {
	{ "MO", 1 },
	{ "TU", 2 },
	{ "WE", 3 },
	{ "TH", 4 },
	{ "FR", 5 },
	{ "SA", 6 },
	{ "SU", 7 },
	};
	vector<vector<int>> full_calendar;
	Calendar(string _start_day, int _year) : year(_year), start_day(_start_day) {}




	void create_calendar() {
		int mDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int curr_day = day_of_week[start_day], curr_month = 1;
		int temp_day = 1;
		while (curr_month <= 12) {
			vector<int>temp_month;
			while (curr_day <= 7) {
				temp_month.push_back(temp_day);
				curr_day++;
			}
			curr_day = day_of_week["MO"];
			curr_month++;
		}
	}

};



int main() {
	/*
	1 €нвар€ - суббота
	ввод: номера мес€ца
	вывод: таблица из семи столбцов, обозначающа€ распределение дней мес€ца по дн€м недели
*/



	return 0;
}