#define N 3

bool is_matrix_null(int matrix[N][N]) {
	bool null = true; 
	
	for (int i = 0; i < N; i++) 
	{ 
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] != 0) {
				null = false; 
				break; 
			}
		}
	}

	return null; 
}


bool is_matrix_quadratic(int matrix[N][N]) {
	bool quadratic = true;
	
	for (int i = 0; i < N; i++)
	{ 
		for (int j = 0; j < N; j++)
		{
			if ((matrix[i][j] != 0 && i != j) || (i == j && matrix[i][j] == 0)) {
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

bool is_matrix_quadratic_side_diagonal(int matrix[N][N]) {
	bool quadratic = true;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((matrix[i][j] != 0 && i + j != N - 1) || (matrix[i][j] == 0 && i + j == N - 1)) {
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

bool is_matrix_unit_side_diagonal(int matrix[N][N]) {
	bool unit = true;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((matrix[i][j] != 0 && i + j != N - 1) + (matrix[i][j] != 1 && i + j == N - 1)) {
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