#define _USE_MATH_DEFINES 
#include <string> 
#include <stack>
#include <algorithm> 
#include <cmath> 
#include <iomanip> 
#include <fstream> 
#include <deque> 
#include <vector> 
#include <stdlib.h> 
#include <set> 
#include <queue>
#include <iostream>
#include <climits>

using namespace std;

class Player {
public:
	string country, nickname;
	int level;

	void print_information() {
		cout << "Your Nickname: " << nickname << '\n';
		cout << "Your Level: " << level << '\n';
		cout << "Your Age: " << country << '\n';
	}
};
class Archer {
public:
	string type_of_bow;
	double skill_value;

	bool clan_invite_checking() {
		if (skill_value > 50) {
			return true;
		}
		else {
			return false;
		}
	}
};
class somePlayer: public Player, public Archer {
public:
	somePlayer(string country, string nickname, string type_of_bow, int level, double skill_value) {
		this->country = country;
		this->nickname = nickname;//
		this->type_of_bow = type_of_bow;//
		this->level = level;//
		this->skill_value = skill_value;
	}

	void to_file() {
		ofstream out("info.txt");
		out << get_info();
	}
	void to_console() {
		cout << get_info();
	}

private:
	string get_info() {
		string s1 = "Your nickname: " + nickname + "\n Your Bow is: " + type_of_bow + "\n Your Level is: " + to_string(level)
			+ "\n Your skill value is: " + to_string(skill_value) + "\n Your country: " + country;

		if (clan_invite_checking()) {
			s1 += "\n\n\n YOU ALSO CAN FIND CLAN NOW";
		}
		return s1;
	}
};

int main() {
	somePlayer a("Russia", "ZXCghoul", "MegaBow", 33, 55);
	a.to_console();
	a.to_file();
	cout << endl;
	int arr[5] = { 1,123,3,3,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" +to_string(i) + "]: address=" << arr + i << "\tvalue=" << *(arr + i) << endl;
	}
}