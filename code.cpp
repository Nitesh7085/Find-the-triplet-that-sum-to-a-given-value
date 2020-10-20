#include <bits/stdc++.h> 
using namespace std; 

bool find3Numbers(int A[], int n, int sum) 
{ 
	int l, r; 
	for (int i = 0; i < n - 2; i++) 
	{ 

		for (int j = i + 1; j < n- 1; j++) 
		{ 
			for (int k = j + 1; k <n; k++) 
			{ 
				if (A[i] + A[j] + A[k] == sum) 
				{ 
					cout << "Triplet is " << A[i] << 
						", " << A[j] << ", " << A[k]; 
					return true; 
				} 
			} 
		} 
	} 
} 
int main() 
{ 
	int A[] = { 1, 4, 45, 6, 10, 8 }; 
	int s = 22; 
	int arr_size = sizeof(A) / sizeof(A[0]); 
	find3Numbers(A, arr_size, s); 
	return 0; 
} 



