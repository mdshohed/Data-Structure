#include <bits/stdc++.h>
using namespace std; 

int main() {
	freopen( "inputf.in", "r", stdin); 
	int n; 
	cin >> n;
	std::vector<int> a(n);
	for(int &i:a) cin >> i;  
	cout << (binary_search(a.begin(), a.end(), 4)==1? "Yes": "No") << endl; 

	auto it = lower_bound( a.begin(),a.end(), 5);    
	if (it==a.end()) {
		cout << "not found" << endl; 
	}
	else {
		cout << (*it) << endl;
		cout << "Position: " << it - a.begin() << endl; 
	} 
	it = upper_bound( a.begin(), a.end(), 5); 
	if (it==a.end()) cout << "not found" << endl;  
	else {
		cout << (*it) << endl;
		cout << "Position: " << it - a.begin() << endl; 
	}
	return 0;
}