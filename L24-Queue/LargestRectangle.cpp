class Solution {
public:

	void previousSmaller(vector<int> &ps, vector<int>& h) {
		stack<int> s;
		int n = h.size();
		for (int i = 0; i < n; ++i)
		{
			while (!s.empty() and h[i] <= h[s.top()]) s.pop();

			if (s.empty()) ps[i] = -1;
			else ps[i] = s.top();

			s.push(i);
		}
	}

	void nextSmaller(vector<int> &ns, vector<int>& h) {
		stack<int> s;
		int n = h.size();
		ns[n - 1] = n;
		s.push(n - 1);
		for (int i = n - 2; i >= 0; --i)
		{
			while (!s.empty() and h[i] <= h[s.top()]) s.pop();

			if (s.empty()) ns[i] = n;
			else ns[i] = s.top();

			s.push(i);
		}
	}

	int largestRectangleArea(vector<int>& h) {
		int n = h.size();
		vector<int> ps(n), ns(n);
		previousSmaller(ps, h);
		nextSmaller(ns, h);
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int len = ns[i] - ps[i] - 1;
			int area = len * h[i];

			ans = max(ans, area);
		}

		return ans;
	}
};












