#include <iostream>
#include <string>
#include <fstream>
#include <locale>
using namespace std;
void first() {

	string mess = "Some text results";
	ofstream file_out("message.txt", ofstream::app);
	if (!file_out.is_open()) {
		cout << "Some error has occurred";
	}
	else {
		file_out << mess << endl;
	}

	file_out.close();
}
void second() {
	ifstream file_in("message.txt");
	cout << "text from \"message.txt\": " << endl;
	if (!file_in.is_open()) {
		cout << "Some error has occurred";
	}
	else
	{
		/*   string str;
		while (!file_in.eof())
		{
			str = "";
			getline(file_in, str);
			cout << str << endl;
		}*/
		char c;
		while (file_in.get(c))
		{
			cout << c;
		}
		file_in.close();
	}
	file_in.close();



}
void third() {
	ifstream in("message.txt");
	cout << "text from \"message.txt\": " << endl;
	if (!in.is_open()) {
		cout << "an error has occurred";
	}
	else
	{
		int length = in.tellg();
		char* buffer = new char[length];
		string str;
		while (!in.eof())
		{
			str = "";
			getline(in, str);
			cout << str << endl;
		}


		in.read(buffer, length);
		cout << buffer;

	}
	in.close();
}
void four()
{
	ifstream in("message.txt");
	cout << "text from \"message.txt\": " << endl;
	if (!in.is_open()) {
		cout << "an error has occurred";
	}
	else
	{
		int i = 0;
		int length = in.tellg();
		char* buffer = new char[length];
		while (!in.eof())
		{

			char ch;
			in.get(ch);
			//cout << ch;
			buffer[i] = ch;
			i += 1;
		}
		in.close();
		cout << buffer;
	}
}
void five()
{
	cout << "enter a message " << endl;
	string mess = "";

	getline(cin, mess);
	ofstream file_out("message.txt", ofstream::app);
	if (!file_out.is_open()) { cout << "an error has occurred"; }
	else { file_out << mess << endl; }
	file_out.close();




}
void six() {
	ifstream in("message.txt");

	if (!in.is_open()) { cout << "an error has occurred"; }
	else
	{

		in.seekg(-1, std::ios::end);
		int a = in.tellg();
		cout << "file length - " << a + 1 << " characters";

	}
	in.close();
}
int main() {
	first();
	return 0;
}