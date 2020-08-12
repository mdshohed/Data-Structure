#include <bits/stdc++.h>
using namespace std;

int partitions(int ara[], int p, int r){
    int pivot = ara[r];
    int i = p - 1;
    for (int j = p; j<=r-1; j++){
        if ( ara[j]<pivot){
            i++;
            swap( ara[i], ara[j]);
        }
    }
    swap( ara[i+1], ara[r]);
    return i+1;
}

int quick_sort(int ara[], int p, int r){
    if ( p<r ) {
        int q = partitions(ara, p, r);
        quick_sort(ara, p , q-1);
        quick_sort(ara, q+1, r);
    }
}

int main(){
    int n;
    cin >> n;
    int ara[100];
    for (int i = 0; i<n; i++) {
        cin >> ara[i];
    }

    quick_sort( ara, 0, n-1);

    for (int i = 0; i<n; i++) {
        cout << ara[i] << " ";
    }
    cout << endl;
    return 0;
}
