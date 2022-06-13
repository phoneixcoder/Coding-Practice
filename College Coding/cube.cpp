// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the value at x of
// the given equation
long long int check(int A, int B, int C,
					int D, long long int x)
{

	long long int ans;

	// Find the value equation at x
	ans = (A * x * x * x
		+ B * x * x
		+ C * x
		+ D);

	// Return the value of ans
	return ans;
}

// Function to find the integral
// solution of the given equation
void findSolution(int A, int B, int C,
				int D, int E)
{

	// Initialise start and end
	int start = 0, end = 100000;

	long long int mid, ans;

	// Implement Binary Search
	while (start <= end) {

		// Find mid
		mid = start + (end - start) / 2;

		// Find the value of f(x) using
		// current mid
		ans = check(A, B, C, D, mid);

		// Check if current mid satisfy
		// the equation
		if (ans == E) {

			// Print mid and return
			cout << mid << endl;
			return;
		}

		if (ans < E)
			start = mid + 1;
		else
			end = mid - 1;
	}

	// Print "NA" if not found
	// any integral solution
	cout << "NA";
}

// Driver Code
int main()
{
	int A = 1, B = 0, C = 0;
	int D = 0, E = 27;

	// Function Call
	findSolution(A, B, C, D, E);
}
