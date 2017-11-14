#include <iostream>
#include <algorithm>
/*
http://algorithms.tutorialhorizon.com/dynamic-programming-minimum-cost-path-problem/
*/

#if 0 
int find()
{
	int[4][4] solution = {0} ;


	solution[0][0] = A[0][0];

	/* fill the first row */
	for (int i = 1; i < 4; i++)
	{
		solution[0][i] = A[0][i] + solution[0][i - 1];
	}

	/* fill the first column */
	for (int i = 1; i < 4; i++)
	{
		solution[i][0] = A[i][0] + solution[i - 1][0];
	}

	/* path will be either from top or left, choose which ever is minimum */
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			solution[i][j] = A[i][j] + std::min(solution[i - 1][j], solution[i][j - 1]);
		}
	}

	return solution[4 - 1][4 - 1];
}
#endif

int main()
{
	int A[4][4]  = 
	{
		{ 1, 7, 9, 2 },
		{ 8, 6, 3, 2 },
		{ 1, 6, 7, 8 },
		{ 2, 9, 8, 2 }
	};

	int solution[4][4]  = {0} ;

	solution[0][0] = A[0][0];

	/* fill the first row */
	for (int i = 1; i < 4; i++)
	{
		solution[0][i] = A[0][i] + solution[0][i - 1];
	}

	/* fill the first column */
	for (int i = 1; i < 4; i++)
	{
		solution[i][0] = A[i][0] + solution[i - 1][0];
	}

	/* path will be either from top or left, choose which ever is minimum */
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			solution[i][j] = A[i][j] + std::min(solution[i - 1][j], solution[i][j - 1]);
		}
	}


	std::cout<<"Minimum Cost Path " << solution[3][3] <<std::endl;
}


