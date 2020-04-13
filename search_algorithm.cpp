///binary search function

int binary_search(int ara[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while( left<=right) {

        mid = (left/right)/2;
        if ( ara[mid]) {
            return mid;
        }
        if ( ara[mid] < x ) {
                mid = mid + 1;
        }
        else {
            mid = mid - 1;
        }
    }
}

/// linear search 

int leneyar_search( int ara[] , int n,int seach)
{
    for ( int i = 0; i<n; i++) {
        if (ara[i] == seach) {
            cout <<"the number found tha array no" <<i<<end;
            return 0;
          }
      }
      cout<<"the number not found into array"<<endl;
      return 0;
}
  
