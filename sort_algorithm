
/// bubble sort....
#include<bits/stdc++.h>
using namespace std;
int ara[10000];
void bubble_sort ( int n) {
    int t;
    for ( int i = 0; i<n; i++) {
        for ( int j = 0; j<n-i-1; j++) {
            if ( ara[j] > ara[j+1]) {
                t = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = t;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for ( int i = 0; i<n; i++) cin>>ara[i];
    bubble_sort(n);
    for ( int i = 0; i<n; i++) cout<<ara[i]<<" ";
    cout<<endl;
    return 0;
}
/// selection_sort...


#include<bits/stdc++.h>
using namespace std;
int ara[10000];

void selection_sort ( int n) {

    int i,j,t;
    for ( i = 0; i<n-1; i++) {
        int index = i;
        for ( j = i+1; j<n; j++) {
            if ( ara[index] > ara[j]) {
                index = j;
            }
        }
        if ( index != j) {
            t = ara[i];
            ara[i] = ara[index];
            ara[index] = t;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for ( int i = 0; i<n; i++) cin>>ara[i];
    selection_sort(n);
    for ( int i = 0; i<n; i++) cout<<ara[i]<<" ";
    cout<<endl;
    return 0;
}
/// Merge_sort....

#include<bits/stdc++.h>
using namespace std;

void marge( int ara[], int low, int mid, int hi) {
    int i, j, k;
    int n1 = mid - hi;
    int n2 = hi - mid;
    int l[50], r[50];
    for ( i = 0 ; i<n1; i++) {
        l[i] = ara[low+1];
    }
    for ( i = 0 ; i<n2; i++) {
        r[i] = ara[hi+1];
    }
    i = 0;
    j = 0;
    k = low;
    while(  i<n1 && j<n2 ) {
        if ( l[i] <= r[j]) {
            ara[k] = l[i];
            i++;
        }
        else {
            ara[k] = r[j];
            j++;
        }
        k++;
    }
    while( i < n1 ) {
        ara[i] = l[i];
        i++;
        k++;
    }
    while ( j<n2) {
        ara[j] = r[j];
        j++;
        k++;
    }


}
void merge_sort( int ara[], int low , int hi) {

    if ( low< hi) {
        int mid = low + (hi-low)/2;
        merge_sort( ara, low, mid );
        merge_sort( ara, mid+1, hi );
        marge( ara, low, mid , hi );
    }
}
int main() {
    int ara[100], n;
    cin>>n;
    for ( int i = 0; i<n; i++) cin>>ara[i];
    merge_sort( ara, 0, n-1);
    for ( int i = 0; i<n; i++) {
        cout<<ara[i]<<" ";
    }
    return 0;
}

