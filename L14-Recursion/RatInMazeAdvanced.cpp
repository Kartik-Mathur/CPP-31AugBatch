#include <iostream>
using namespace std;

bool ratInMaze(char maze[][10], int i, int j,
               int n, int m, int sol[][100]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		sol[i][j] = 0;
		return false;
	}
	// recursive case
	// Assume jaha khade hai vo solution ka part hai
	sol[i][j] = 1;

	// Check rightwards
	if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j + 1] != 1) {
		bool kyaRightSeRaastaMilla =
		    ratInMaze(maze, i, j + 1, n, m, sol);
		if (kyaRightSeRaastaMilla) return true;
	}

	// Check downwards
	if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] != 1) {
		bool kyaNeecheSeRaastaMilla = ratInMaze(maze, i + 1, j, n, m, sol);
		if (kyaNeecheSeRaastaMilla) return true;
	}

	// Check upwards
	if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] != 1) {
		bool kyaUparSeRaastaMilla = ratInMaze(maze, i - 1, j, n, m, sol);
		if (kyaUparSeRaastaMilla) return true;
	}

	// Check backwards
	if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] != 1) {
		bool kyaPeecheSeRaastaMilla = ratInMaze(maze, i, j - 1, n, m, sol);
		if (kyaPeecheSeRaastaMilla) return true;
	}

	sol[i][j] = 0; // backtracking

	return false;
}


int main() {

	char maze[][10] = {
		"0X000",
		"0X000",
		"0X0X0",
		"000X0",
	};

	int sol[100][100] = {0};

	ratInMaze(maze, 0, 0, 4, 5, sol);

	return 0;
}
















