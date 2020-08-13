#include <bits/stdc++.h>
using namespace std;

const int mx = 1e4+5;
int ara[mx];
int tree[mx*3];

void init(int node, int l, int r){
    if ( l == r) {
        tree[node] = ara[l];
        return ;
    }
    int mid = (l+r)/2;
    init(node*2, l, mid);
    init( node*2+1, mid+1,r);
    tree[node] = tree[node*2] + tree[node*2+1];
}

void update(int node, int l, int r, int i, int x){
    if ( i > r || i<l) return ;
    if (i<=l && r<=i) {
        tree[node] = x;
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (l+r)/2;
    update(left, l, mid, i, x);
    update(right,mid+1,r , i, x);
    tree[node] = tree[left] + tree[right];
}

int query(int node, int l, int r, int i, int j){
    if ( i > r || j<l) return 0;
    if (i<=l && r<=j) {
        return tree[node];
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (l+r)/2;
    int p = query(left, l, mid, i , j);
    int q = query(right,mid+1,r , i , j);
    return p+q;
}

int main(){
    int n;
    cin >> n;
    for (int i = 1; i<=n; i++){
        cin >> ara[i];
    }
    init(1, 1,n);
    cout << query(1,1,n, 1,5) << endl;

    update(1,1,n,2,10);
    cout << query(1, 2, n, 1, 5) << endl;
    return 0;
}
