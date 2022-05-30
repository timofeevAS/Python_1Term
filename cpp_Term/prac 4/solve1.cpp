#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <climits>

using namespace std;

const int arr_size = 5;

void selection_sort(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		int arr_min = INT_MAX;
		int index_min = 0;
		for (int j = i; j < size; j++) {
			if (arr[j] < arr_min) {
				arr_min = arr[j];
				index_min = j;
			}
		}
		swap(arr[i], arr[index_min]);
	}
	return;
}

void bubble_sort(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	return;
}

void insertion_sort(int arr[], const int size) {

	for (int i = 1; i < size; i++) {
		int x = arr[i];
		int j = i;
		while (j > 0 && arr[j - 1] > x) {
			arr[j] = arr[j - 1];
			j = j - 1;
		}
		arr[j] = x;
	}


	return;
}

int main() {

	int arr[arr_size] = { 4,2,5,3,1 };
	insertion_sort(arr, arr_size);
	for (int i = 0; i < arr_size; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}