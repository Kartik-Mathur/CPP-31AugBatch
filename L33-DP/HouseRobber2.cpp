class Solution {
public:

	int solve(vector<int>& nums, int s, int e) {
		int ans = max(nums[s], nums[s + 1]);
		int pmax = nums[s];

		for (int i = s + 2; i <= e; ++i)
		{
			int profit = nums[i] + pmax;

			pmax = ans;
			ans = max(ans, profit);
		}

		return ans;
	}

	int rob(vector<int>& nums) {
		int n = nums.size();
		if (n == 1) return nums[0];
		else if (n == 2) return max(nums[0], nums[1]);

		int op1 = solve(nums, 0, n - 2);
		int op2 = solve(nums, 1, n - 1);

		return max(op1, op2);

	}
};









