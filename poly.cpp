// C++ program to evaluate area of a polygon using
// shoelace formula
#include <bits/stdc++.h>
using namespace std;

// (X[i], Y[i]) are coordinates of i'th point.
double polygonArea(double X[], double Y[], int n)
{
	// Initialize area
	double area = 0.0;

	// Calculate value of shoelace formula
	int j = n - 1;
	for (int i = 0; i < n; i++)
	{
		area += (X[j] + X[i]) * (Y[j] - Y[i]);
		j = i; // j is previous vertex to i
	}

	// Return absolute value
	return abs(area / 2.0);
}

// Driver program to test above function
int main()
{
    int n;
    cin>>n;
    double X[n],Y[n];
    for(int i=0;i<n;i++)
    {
        cin>>X[i]>>Y[i];
    }

	cout << polygonArea(X, Y, n);
}
