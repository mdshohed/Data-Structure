int upper_bound(std::vector<int> a, int x) {
	int l = -1, r = a.size(); 
    while( 1+l<r) {
        int m  = ( l+r ) >> 1; 
        if ( a[m]<x ) l = m; 
        else r = m; 
    } 
    return r+1;   
}
