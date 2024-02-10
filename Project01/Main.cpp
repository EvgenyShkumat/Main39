#include <iostream>
#define N 3
using namespace std;

string convert_matrix_to_string(int matrix[N][N]);

bool is_matrix_null(int matrix[N][N]);
bool is_matrix_quadratic(int matrix[N][N]);

int main() {
	int matrix[N][N] = { {1, 0, 0}, {0, 2, 3}, {0, 0, 3} };

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);

	cout << (is_matrix_quadratic(matrix) ? "Yes it is quadratic" : "No it is not quadratic");

	return 0;
}