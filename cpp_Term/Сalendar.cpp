#include <string> 
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;

bool isLeap(int year) {
	return ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}

class Calendar {
public:
	int year;
	string start_day;
	bool leap = isLeap(year);
	string day_of_week_arr[7] = { "MO","TU","WE","TH","FR","SA","SU" };
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
	vector<string>first_month_day;
	Calendar(string _start_day, int _year) : year(_year), start_day(_start_day) {}

	int mDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



	void create_calendar() {
		if (leap)mDays[1] = 29;
		int curr_day = day_of_week[start_day], curr_month = 1;

		for (int i = 0; i < 12; i++) { // i ->> month
			first_month_day.push_back(day_of_week_arr[curr_day - 1]);
			vector<int>temp_month;
			for (int j = 1; j <= mDays[i]; j++) {
				temp_month.push_back(j);
				if (curr_day >= 7) {
					curr_day = 1;
				}
				else {
					curr_day++;
				}

			}

			full_calendar.push_back(temp_month);
		}
	}

	void print_calendar() {
		for (int i = 0; i < full_calendar.size(); i++) {
			for (int j = 0; j < full_calendar[i].size(); j++) {
				cout << full_calendar[i][j] << ' ';
			}
			cout << endl;
		}

		for (int i = 0; i < first_month_day.size(); i++) {
			cout << first_month_day[i] << endl;
		}

	}

	void print_month(int num) {
		string stroke = "";
		for (int i = 0; i < month_of_year[num].size(); i++) {
			stroke += "-";
		}
		cout << setw(5) << "+" + stroke + "+" << endl;
		cout << "|" << month_of_year[num] << "|" << endl;
		cout << setw(5) << "+" + stroke + "+" << endl;

		int curr_day = day_of_week[first_month_day[num]];

		for (int i = 0; i < 7; i++) {
			cout << day_of_week_arr[i] << ' ';
		}
		cout << endl;
		for (int i = 0; i < curr_day-1; i++) {
			cout << "  " << ' ';
		}
		for (int i = 1; i <= mDays[num]; i++, curr_day++) {
			if (curr_day > 7) {
				cout << endl;
				curr_day = 1;
			}
			if (i < 10) {
				cout << '0' << i << ' ';
			}
			else {
				cout << i << ' ';
			}
		}
		cout << "\n2022\n";
	}
};



int main() {
	/*
	1 €нвар€ - суббота
	ввод: номера мес€ца
	вывод: таблица из семи столбцов, обозначающа€ распределение дней мес€ца по дн€м недели
*/
	Calendar year_2022("SA", 2022);
	year_2022.create_calendar();
//	year_2022.print_calendar();
	year_2022.print_month(1);
	


	return 0;
}