#include <iostream>
using namespace std;

bool isSafe(int r, int c, int n, int board[][100]) {
	int o_r = r, o_c = c;

	// Check rows upar wali
	for (int i = 0; i < r; ++i)
	{
		if (board[i][c]) return false;
	}
	// Check left diagonal
	while (r >= 0 and c >= 0) {
		if (board[r--][c--]) return false;
	}
	// Check right diagonal
	r = o_r; c = o_c;
	while (r >= 0 and c < n) {
		if (board[r--][c++]) return false;
	}

	return true;
}

bool nQueen(int row, int n, int board[][100]) {
	// base case
	if (row == n) {
		// print the board
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (board[i][j] == 1) cout << "Q ";
				else cout << "_ ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	// ith row ka kaam hume krna hai, baaki ki rows
	// ka kaam recursion krega
	for (int col = 0 ; col < n ; col++) {
		if (isSafe(row, col, n, board)) {
			board[row][col] = 1; // Queen place kardi
			bool kyaBakiPlaceHui = nQueen(row + 1, n, board);
			if (kyaBakiPlaceHui) {
				return true;
			}
			board[row][col] = 0; // backtracking
		}
	}

	return false;
}

int main() {

	int n;
	cin >> n;

	int board[100][100] = {0};

	nQueen(0, n, board);



	return 0;
}
















