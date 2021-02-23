//MATH 6.11
//Matrix

#include <iostream>

using namespace std;

struct Matrix{
	int matrix[3][3];
	int row, col;
	Matrix(int x, int y): row(x), col(y) {}
	/*{
		row = x;
		col = y;
	}*/
};

Matrix Multiple(Matrix m, Matrix n)
{
	Matrix answer(m.row, n.col);

	for(int i = 0; i < answer.row; i++)
	{
		for(int j = 0; j < answer.col; j++)
		{
			answer.matrix[i][j] = 0;
			for(int k = 0; k < n.row; k++)
				answer.matrix[i][j] += m.matrix[i][k] * n.matrix[k][j];
		}
	}

	return answer;
}

void printMatrix(Matrix m)
{
	for(int i = 0; i < m.row; i++)
	{
		for(int j = 0; j < m.col; j++)
		{
			cout << m.matrix[i][j] << " ";
		}
		cout <<endl;
	}
	
}

int main()
{
	Matrix x(2, 3);
	Matrix y(3, 2);

	for(int i = 0; i < x.row; i++)
	{
		for(int j = 0; j < x.col; j++)
		{
			cin >> x.matrix[i][j];
		}
	}
	for(int i = 0; i < y.row; i++)
	{
		for(int j = 0; j < y.col; j++)
		{
			cin >> y.matrix[i][j];
		}
	}
	printMatrix(x);
	printMatrix(y);
	
	Matrix answer = Multiple(x, y);
	printMatrix(answer);
	return 0;
}

