#include "matrix.h"
using namespace std;

matrix::matrix(int matrix_size)
	:mat_size(matrix_size)
{}
istream& operator>> (istream& inp, matrix& mat) {
	int tempI;
	for (int i = 0; i < mat.mat_size; i++) {
		vector<int> temp;
		for (int j = 0; j < mat.mat_size; j++) {
			inp >> tempI;
			temp.push_back(tempI);
		}
		mat.m.push_back(temp);
	}
	return inp;
}
ostream& operator<< (ostream& out, const matrix& mat) {
	out << "[";
	for (int i = 0; i < mat.mat_size; i++) {
		out << "[";
		for (int j = 0; j < mat.mat_size; j++) {
			if (j < mat.mat_size - 1)
				out << mat.m.at(i).at(j) << " ";
			else
				out << mat.m.at(i).at(j);
		}
		if (i < mat.mat_size - 1)
			out << "]" << endl << " ";
		else
			out << "]";
	}
	out << "]";
	return out;
}
matrix& matrix::operator+= (matrix const& mat) {
	for (int i = 0; i < mat_size; i++) {
		for (int j = 0; j < mat_size; j++) {
			m.at(i).at(j) += mat.m.at(i).at(j);
		}
	}
	return *this;
}
matrix& matrix::operator-= (matrix const& mat) {
	for (int i = 0; i < mat_size; i++) {
		for (int j = 0; j < mat_size; j++) {
			m.at(i).at(j) -= mat.m.at(i).at(j);
		}
	}
	return *this;
}
matrix& matrix::operator*= (matrix const& mat) {
	matrix temp = *this;
	for (int i = 0; i < mat_size; i++) {
		for (int j = 0; j < mat_size; j++) {
			int tmp = 0;
			for (int k = 0; k < mat_size; k++) {
				tmp += temp.m.at(i).at(k) * mat.m.at(k).at(j);
			}
			m.at(i).at(j) = tmp;
		}
	}
	return *this;
}
matrix const matrix::operator+ (matrix const& mat) {
	matrix temp = *this;	
	return temp += mat;
}
matrix const matrix::operator- (matrix const& mat) {
	matrix temp = *this;
	return temp -= mat;
}
matrix const matrix::operator* (matrix const& mat) {
	matrix temp = *this;
	return temp *= mat;
}