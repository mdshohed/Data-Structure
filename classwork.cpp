#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int ara[MAX];
int length=0;

/// insert function in array...

void insert( int v)
{
    ara[length] = v;
    length++;
}

/// print function in array...

void print()
{
    for ( int i = 0; i<length; i++) {
        cout<<ara[i]<<" ";
    }
}

/// search function in array...

void search( int x)
{
    int a = 0;
    for ( int i=0; i<length; i++) {
        if ( x == ara[i]) {
            cout<<"the number found this array"<<endl;
            a++;
        }
    }
    if ( a==0) {
               cout<<"the number not found this array";
    }

}
int main()
{

    int i,n,j;
    cin>>n;
    for( i = 0; i<n; i++) {
        cin>>j;
        insert(j);
    }

    int x;
    cin>>x;
    search(x);
    return 0;
}
