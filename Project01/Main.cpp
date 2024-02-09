#include <iostream>
#define N 3
using namespace std;

string convert_matrix_to_string(int matrix[N][N]);

bool is_matrix_null(int matrix[N][N]);

int main() {
	int matrix[N][N] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);

	cout << (is_matrix_null(matrix) ? "Yes it is null" : "No it is not null");

	return 0;
}