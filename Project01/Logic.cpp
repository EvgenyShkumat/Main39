#define N 3

bool is_matrix_null(int matrix[N][N]) {
	bool null = true; // 1

	for (int i = 0; i < N; i++) //  2
	{
		for (int j = 0; j < N; j++)//  2
		{
			if (matrix[i][j] != 0) {// 1
				null = false; // 1
				break; // 1
			}
		}
	}

	return null; // 1
}
//worst: O(57)
//O(6n^2 + 2n + 3)

bool is_matrix_quadratic(int matrix[N][N]) {
	bool quadratic = true;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] != 0 && i != j) {
				quadratic = false;
				break;
			}
		}
		if (!quadratic) {
			break;
		}
	}

	return quadratic;
}