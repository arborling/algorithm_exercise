//MATH 6.12
//Fast Power Of Matrix

#include <iostream>

using namespace std;

struct Matrix{

	int row;
	int col;
	int matrix[10][10];
	Matrix(int x, int y): row(x), col(y) {}
};

void printMatrix(Matrix x);

Matrix Multiple(Matrix m, Matrix n)
{
	Matrix answer(m.row, n.col);

	for(int i = 0; i< answer.row; i++)
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

void printMatrix(Matrix x)
{
	for(int i = 0; i< x.row; i++)
	{
		for(int j = 0; j < x.col; j++)
		{
			cout << x.matrix[i][j] << " ";
		}
		cout << endl;
	}

}

Matrix FastExponentiation(Matrix x, int n)
{
//	if(x.row != x.col)
//		return Matrix(1, 1);

	Matrix answer(x.row, x.col);
	for(int i = 0; i< x.row; i++)
	{
		for(int j = 0; j < x.col; j++)
		{
			if(i == j)
				answer.matrix[i][j] = 1;
			else
				answer.matrix[i][j] = 0;
		}
	}

	while(n != 0)
	{
		if(n & 1)
		{
			answer = Multiple(answer, x);
		}
		n = n >> 1;
		x = Multiple(x, x);
	}

	return answer;

}

int main()
{
	int row_col, k;
	cin >> row_col >> k;
	Matrix x(row_col,row_col);
	
	for(int i = 0; i < x.row; i++)
	{
		for(int j = 0; j < x.col; j++)
			{
				cin >> x.matrix[i][j];
			}
	}

	Matrix answer = FastExponentiation(x, k);
	printMatrix(answer);

	return 0;
}
