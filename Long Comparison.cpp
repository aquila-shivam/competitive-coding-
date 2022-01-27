
// Long Comparison


// Input
// The first line contains a single integer t (1≤t≤104) — the number of testcases.

// The first line of each testcase contains two integers x1 and p1 (1≤x1≤106;0≤p1≤106) — the description of the first number.

// The second line of each testcase contains two integers x2 and p2 (1≤x2≤106;0≤p2≤106) — the description of the second number.

// Output
// For each testcase print the result of the comparison of the given two numbers. If the first number is smaller than the second one, print '<'. If the first number is greater than the second one, print '>'. If they are equal, print '='.


#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while (t--){
		long long x1, x2;
		int p1, p2;
		cin >> x1 >> p1 >> x2 >> p2;
		int mn = min(p1, p2);
		p1 -= mn;
		p2 -= mn;
		if (p1 >= 7)
			cout << ">" << endl;
		else if (p2 >= 7)
			cout << "<" << endl;
		else{
			for (int i = 0; i < p1; ++i) x1 *= 10;
			for (int i = 0; i < p2; ++i) x2 *= 10;
			if (x1 < x2)
				cout << "<" << endl;
			else if (x1 > x2)
				cout << ">" << endl;
			else
				cout << "=" << endl;
		}
	}
}
