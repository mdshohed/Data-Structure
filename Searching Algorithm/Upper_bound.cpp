int upper_bound(std::vector<int> a, int x) {
	int l = -1, r = a.size(); 
	while( r>l+1) {
		int mid = ( l + r) >> 1; 
		if ( a[mid] <= x ) l = mid; 
		else r = mid; 
	}
	return l+1;  
}

//built in function
int val = upper_bound(all(a),x) - a.begin(); 
