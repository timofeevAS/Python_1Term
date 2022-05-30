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


class Matrix {
public:
	vector <vector <int>> matrix;
	int n, m;
	Matrix(vector<vector<int>> vec, int n, int m) {
		this->matrix.resize(n, std::vector<int>(m, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				this->matrix[i][j] = vec[i][j];
			}
		}
		this->n = n;
		this->m = m;
	}
	Matrix operator+(Matrix& A) {
		vector<vector<int>>vec(A.n, vector<int>(A.m, 0));
		for (int i = 0; i < A.n; i++) {
			for (int j = 0; j < A.m; j++) {
				vec[i][j] = A.matrix[i][j] + this->matrix[i][j];
			}
		}
		Matrix X(vec, A.n, A.m);
		return X;
	}
	void transpose_Matrix() {
		vector<vector<int>>temp;
		temp = matrix;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrix[j][i] = temp[i][j];
			}
		}
	}
	void set_Matrix_values(vector<vector<int>> vec) {

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrix[i][j] = vec[i][j];
			}
		}
	}
	void print_Matrix_values() {
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[i].size(); j++) {
				cout << matrix[i][j];
			}
			cout << '\n';
		}
	}

	void plus_Matrix(Matrix Y) {
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[i].size(); j++) {
				matrix[i][j] += Y.matrix[i][j];
			}
		}
	}


};
Matrix sum_of_two(Matrix A, Matrix B) {
	vector<vector<int>>vec(A.n, vector<int>(A.m, 0));
	for (int i = 0; i < A.n; i++) {
		for (int j = 0; j < A.m; j++) {
			vec[i][j] = A.matrix[i][j] + B.matrix[i][j];
		}
		Matrix C(vec, A.n, A.m);
		return C;
	}
}




int main() {
	/*
	1 1 1
	2 2 2
	3 3 3
	*/
	vector<vector<int>> vec1(3, vector <int>(3));
	vector<vector<int>> vec2(3, vector <int>(3));
	vector<vector<int>> vec3(3, vector <int>(3, 0));
	for (int i = 0; i < vec1.size(); i++) {
		for (int j = 0; j < vec1[i].size(); j++) {
			cin >> vec1[i][j];
		}
	}
	for (int i = 0; i < vec1.size(); i++) {
		for (int j = 0; j < vec1[i].size(); j++) {
			cin >> vec2[i][j];
		}
	}
	Matrix P1(vec1, 3, 3);
	Matrix P2(vec2, 3, 3);

	//P1.transpose_Matrix();
	//P1.print_Matrix_values();
	//P2.print_Matrix_values();
	//P1.plus_Matrix(P2);
	Matrix P3(vec3, 3, 3);
	P3 = P2 + P1;
	P1.print_Matrix_values();
	P2.print_Matrix_values();
	P3.print_Matrix_values();

	return 0;
}