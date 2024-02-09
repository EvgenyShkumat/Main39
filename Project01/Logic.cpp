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
//27 + 1 + 1 + 1 + 18 + 3 + 6
//O(57)
//O(n * n * 3 + n * n * 2 + n * n + n * 2 + 3)
//O(6n^2 + 2n + 3)