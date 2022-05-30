#include <string> 
#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
	string name, feature, sound;
	Animal(string _name) : name(_name), feature(""), sound("") {}
	
	string get_sound() {
		return sound;
	}
	string get_action() {
		return feature;
	}
};

class Farm_Animal : public Animal{
public:
	Farm_Animal(string _name) :Animal(_name) {};
	vector <string> resource;
	void get_resource(string res) {
		for (int i = 0; i < resource.size(); i++) {
			if (resource[i] == res) {
				cout << "String was found: " << res << endl;
				return;
			}
		}
		cout << "String didn't find\n";
	}
};

class Chicken : public Farm_Animal {
public:
	Chicken(string _name) :Farm_Animal(_name) {};

	void get_action(string object) {
		cout << name << " create a egg" << object << endl;
		return;
	}

};

class Cow : public Farm_Animal {
public:
	Cow(string _name) :Farm_Animal(_name) {};

	void get_action(string object) {
		cout << name << " make a milk " << object << endl;
		return;
	}

};

class Bull : public Farm_Animal {
public:
	Bull(string _name) :Farm_Animal(_name) {};

	void get_action(string object) {
		cout << name << " secure cows " << object << endl;
		return;
	}

};

class Pig : public Farm_Animal {
public:
	Petooh(string _name) :Farm_Animal(_name) {};

	void get_action(string object) {
		cout << name << " chill in housefarm " << object << endl;
		return;
	}

};

class Wolf : public Animal {
public:
	Wolf(string _name, string _feature, string _sound) : Animal(_name){
		feature = _feature;
		sound = _sound;
	};
	void get_action(string object) {
		cout << name << " hunting for: " << object << endl;
	}
};

class Bear : public Animal {
public:
	Bear(string _name, string _feature, string _sound) : Animal(_name) {
		feature = _feature;
		sound = _sound;
	};
	void get_action(string object) {
		cout << name << " wait: " << object << endl;
	}
};

class Lion : public Animal {
public:
	Lion(string _name, string _feature, string _sound) : Animal(_name) {
		feature = _feature;
		sound = _sound;
	};
	void get_action(string object) {
		cout << name << "sleep, when:" << object << "saw it "<< endl;
	}
};

class Tiger : public Animal {
public:
	Tiger(string _name, string _feature, string _sound) : Animal(_name) {
		feature = _feature;
		sound = _sound;
	};
	void get_action(string object) {
		cout << name << " Jump on: " << object << endl;
	}
};
int main() {
	Wolf wolf("wolfy", "strong", "awh");
	cout  << ' ' << wolf.get_sound() << ' '<< wolf.name;
	return 0;
}