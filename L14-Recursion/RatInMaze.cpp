#include <iostream>
using namespace std;

bool ratInMaze(char maze[][5], int i, int j,
               int n, int m, int sol[][5]) {
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

		return true;
	}
	// recursive case
	// Assume jaha khade hai vo solution ka part hai
	sol[i][j] = 1;

	// Check rightwards
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool kyaRightSeRaastaMilla =
		    ratInMaze(maze, i, j + 1, n, m, sol);
		if (kyaRightSeRaastaMilla) return true;
	}

	// Check downwards
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool kyaNeecheSeRaastaMilla = ratInMaze(maze, i + 1, j, n, m, sol);
		if (kyaNeecheSeRaastaMilla) return true;
	}

	sol[i][j] = 0; // backtracking

	return false;
}


int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00",
	};

	int sol[5][5] = {0};

	ratInMaze(maze, 0, 0, 4, 4, sol);


	return 0;
}
















