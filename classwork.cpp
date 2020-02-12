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




#include<bits/stdc++.h>
using namespace std;
int ara[100];
int length = 0;

int insert( int value)
{
    ara[length] = value;
    length++;
}

int print()
{
    for ( int i = 0; i<length; i++) {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}

int search(int item)
{
    for ( int i =0; i<length; i++) {
        if ( item == ara[i]) {
            return i;
        }
    }
    return -1;

}
int delete_index ( int index)
{
    if ( index < 0 || index >=length ) return -1;
    
    ara[index] = ara[length-1];
    length--;
        
    return 9999;
}


int main()
{
    int n,x;
    cin>>n;
    for( int i = 0; i<n; i++) {
        cin>>x;
        insert(x);
    }
    print();
    int index =  search(5);
    if (index == -1) {
        cout<<"not found"<<endl;
    }
    else {
        cout<<"found in index "<< index<<endl;
    }
    
    int temp  = delete_index(1);
    
    if ( temp == -1 ) {
        cout<<"invalid index"<<endl;
    }
    else {
        cout<<"successfully deleted"<<endl;
    }
    print();
}

