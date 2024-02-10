#include <iostream>
#define N 3
using namespace std;

string convert_matrix_to_string(int matrix[N][N]);

bool is_matrix_null(int matrix[N][N]);
bool is_matrix_quadratic(int matrix[N][N]);
bool is_matrix_unit(int matrix[N][N]);

int main() {
	int matrix[N][N] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);

	cout << (is_matrix_unit(matrix) ? "Yes it is unit" : "No it is not unit");

	return 0;
}