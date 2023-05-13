#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;


// FUNÇÃO ADAPTADA DE https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/

int lis(vector<int> h, vector<int> w, int n)
{
	vector<int> lis(n);

	lis[0] = w[0];

	// Compute optimized LIS values in
	// bottom up manner
	for (int i = 1; i < n; i++) {
		lis[i] = w[i];
		for (int j = 0; j < i; j++)
			if (h[i] > h[j] && lis[i] < lis[j] + w[i])
				lis[i] = lis[j] + w[i];
	}

	// Return maximum value in lis[]
	return *max_element(lis.begin(), lis.end());
}

int lds(vector<int> h, vector<int> w, int n)
{
	vector<int> lds(n);

	lds[0] = w[0];

	// Compute optimized LDS values in
	// bottom up manner
	for (int i = 1; i < n; i++) {
		lds[i] = w[i];
		for (int j = 0; j < i; j++)
			if (h[i] < h[j] && lds[i] < lds[j] + w[i])
				lds[i] = lds[j] + w[i];
	}

	// Return maximum value in lds[]
	return *max_element(lds.begin(), lds.end());
}

int main()
{
	int t, n;
    cin >> t;

    for (int cs = 1; cs <= t; cs++) {
        cin >> n;
        vector<int> h(n), w(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }

        int inc, dec;
        inc = lis(h, w, n);
        dec = lds(h, w, n);
        cout << "Case " << cs << ". ";
        if (inc >= dec) {
            cout << "Increasing (" << inc << "). Decreasing (" << dec << ")." << endl;
        }
        else {
            cout << "Decreasing (" << dec << "). Increasing (" << inc << ")." << endl;
        }
    }
	return 0;
}
