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
struct Node {
	int data;
	Node* next;
	Node(int _data) : data(_data), next(nullptr) {}
};
class LinkedList {
public:
	Node* head;
	Node* tail;

	LinkedList() : head(nullptr), tail(nullptr) {}

	bool is_empty() {
		return head == nullptr;
	}

	void push_back(int _data) { // add element in the back of list
		Node* x = new Node(_data);
		if (is_empty()) {
			head = x;
			tail = x;
		}
		else {
			tail->next = x;
			tail = x;
		}
	}

	void print_list() { // print our list
		if (is_empty()) return;
		else {
			Node* x = head;
			while (x) {
				cout << x->data << ' ';
				x = x->next;
			}
		}
		cout << endl;
	}

	int find_element(int _value) { // return index of element
		if (is_empty()) return -1;
		Node* x = head;
		int pos = 0;
		while (x->data != _value) {
			pos++;
			x = x->next;
		}
		return pos;
	}

	void pop_back() {
		if (is_empty()) return;
		if (head == tail) {
			Node* x = head;
			head = x->next;
		}
		Node* x = head;
		while (x->next != tail) {
			x = x->next;
		}
		x->next = nullptr;
		tail = x;
	}
	void pop_front() {
		if (is_empty()) return;
		Node* x = head;
		head = x->next;
	}
	void remove_by_value(int _value){
		if (is_empty()) return;
		Node* x = head->next;
		Node* prev_x = head;
		while (x->data != _value) {
			x = x->next;
			prev_x = prev_x->next;
		}
		if (x->next != tail) {
			prev_x->next = (x->next);
			delete x;
		}
		else {
			x->next = nullptr;
			tail = x;
		}
	}
	int length() {
		if (is_empty())return 0;
		Node* x = head;
		int len = 0;
		while (x != tail) {
			len++;
			x = x->next;
		}
		return len;
	}
	int get_by_index(int _index) {
		int len = length();
		if (_index > len || is_empty())return -1;
		Node* x = head;
		int element = 0,i=0;
		while (i!= _index) {
			i++;
			x = x->next;
		}
		return x->data;
	}

};


int main() {

	Node p1(1);
	Node p2(2);
	p1.next = &p2;
	//cout << p1.data << ' ' << *(p1.link)->data;
	//cout << (*(p1.next)).data;
	//cout << p1.next;
	LinkedList list1;
	for (int i = 1; i <= 10; i++) {
		list1.push_back(i);
	}
	list1.print_list();
	list1.push_back(211);
	list1.print_list();
	cout << list1.find_element(211) << endl;
	list1.pop_back();
	list1.print_list();
	cout << endl;

	list1.remove_by_value(10);
	list1.print_list();
	cout << list1.length();
	return 0;
}