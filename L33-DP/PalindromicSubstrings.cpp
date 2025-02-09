class Solution {
public:
	int countSubstrings(string s) {
		int ans = 0; // O(N^2)
		bool dp[1005][1005] = {};

		for (int i = 0; i < s.size(); ++i)
		{
			dp[i][i] = true;
		}

		for (int i = 0; i < s.size() - 1; ++i)
		{
			if (s[i] == s[i + 1]) dp[i][i + 1] = true;
		}

		for (int k = 2; k < s.size(); ++k)
		{
			int i = 0, j = k;

			while (i < s.size() and j < s.size()) {
				if (s[i] == s[j] and dp[i + 1][j - 1]) dp[i][j] = true;
				else dp[i][j] = false;

				i++;
				j++;
			}
		}

		// Calculate answer
		for (int i = 0; i < s.size(); ++i)
		{
			for (int j = 0; j < s.size(); ++j)
			{
				if (dp[i][j]) ans++;
			}
		}


		return ans;
	}
};

/*
class Solution {
public:
	int countPalindromes(string &s, int i, int j) {
		int ans = 0;
		while (i >= 0 and j < s.size()) {
			if (s[i] != s[j])
				break;

			ans++;
			i--;
			j++;
		}

		return ans;
	}

	int countSubstrings(string s) {
		int ans = 0; // O(N^2)

		for (int i = 0; i < s.size(); ++i)
		{
			// Odd length ke palindromes using s[i]
			ans += countPalindromes(s, i, i);
			// Even length ke palindromes using s[i] and s[i+1]
			ans += countPalindromes(s, i, i + 1);
		}

		return ans;
	}
};
*/
/*
class Solution {
public:
	bool isPalindrome(string &s, int i, int j) {
		while (i <= j) {
			if (s[i] != s[j]) return false;

			i++;
			j--;
		}
		return true;
	}

	int countSubstrings(string s) {
		int ans = 0; // O(N^3)
		for (int i = 0; i < s.size(); ++i)
		{
			for (int j = i; j < s.size(); ++j)
			{
				if (isPalindrome(s, i, j)) ans++;
			}
		}

		return ans;
	}
};
*/