#include <iostream>
using namespace std;
void input(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void output(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int count = 0;
	int a[100];
	int n, i, t;
	cin >> t;
	while (t)
	{
		cin >> n;
		input(a, n);

		for (i = n - 1; i >= 1; i--)
		{	// check kro kaha pivot point aara
			if (a[i] > a[i - 1])
			{	// check kro ki n-1 index se i index tak konsa element i-1 index ke element se bda hai
				for (int j = n - 1; j >= i; j--)
				{
					if (a[j] > a[i - 1])
					{	// jub mil jaye i-1 se bda element in range[i to n-1] to usse i-1 ke saath swap krdo
						swap(a[j], a[i - 1]);
						count++;
						break;
					}
				}
				break;
			}
		}
		if (count == 0)
		{
			// reverse the string
			for (int k = n - 1; k >= 0; k--)
			{
				cout << a[k] << " ";
			}
		}
		else
		{
			output(a, i);

			// reverse the string from n-1 to i

			for (int k = 1; k <= n - i; k++)
			{
				cout << a[n - k] << " ";
			}
		}
		cout << endl;
		t--;
	}
}