#include <iostream>
#include <vector>
using namespace std;

#ifndef MATRIX_H
#define MATRIX_H

class matrix {
public:
	matrix(int);
	friend istream& operator>> (istream&, matrix&);
	friend ostream& operator<< (ostream&, const matrix&);
	matrix&         operator+= (matrix const&);
	matrix&         operator-= (matrix const&);
	matrix&         operator*= (matrix const&);
	matrix const    operator+  (matrix const&);
	matrix const    operator-  (matrix const&);
	matrix const    operator*  (matrix const&);

private:
	int mat_size;
	vector<vector<int>> m;
};

#endif	//MATRIX_H