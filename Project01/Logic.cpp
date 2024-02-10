#define N 3

bool is_matrix_null(int matrix[N][N]) {
	bool null = true; // 1
	//1
	for (int i = 0; i < N; i++) //  2
	{ //1
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
//O(6n^2 + 2n + 4)

bool is_matrix_quadratic(int matrix[N][N]) {
	bool quadratic = true;//1
	//1
	for (int i = 0; i < N; i++)//2
	{ //1
		for (int j = 0; j < N; j++)//2
		{
			if (matrix[i][j] != 0 && i != j) {//3
				quadratic = false;//1
				break;//1
			}
		}
		if (!quadratic) {//1
			break;//1
		}
	}

	return quadratic;//1
}
//best: O(21)
//worst: O(60)
//O(6n^2 + 3n + 3)

bool is_matrix_unit(int matrix[N][N]) {
	bool unit = true;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((matrix[i][j] != 0 && i != j) || (matrix[i][j] != 1 && i == j)) {
				unit = false;
				break;
			}
		}
		if (!unit) {
			break;
		}
	}

	return unit;
}