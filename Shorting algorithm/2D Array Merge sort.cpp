#include <bits/stdc++.h>
using namespace std;
#define READ() freopen("input(1).txt","r",stdin);
#define WRITE() freopen("out.txt","w",stdout);

void Merge(int l, int mid, int h, int ara[][4]){

    int i = l, j = mid+1, temp[102][4], k = 1;

    while( i<=mid && j<=h ) {
        if ( ara[i][3] < ara[j][3]) {
            for(int x = 0; x<4; x++) {
                temp[k][x] = ara[i][x];
            }
            k++,i++;
        }
        else {
            for (int x = 0; x<4; x++) {
                temp[k][x] = ara[j][x];
            }
            k++,j++;
        }
    }

    while (i<=mid) {
        for (int x = 0; x<4; x++) {
            temp[k][x] = ara[i][x];
        }
        k++,i++;
    }
    while (j<=h) {
        for (int x = 0; x<4; x++) {
            temp[k][x] = ara[j][x];
        }
        k++,j++;
    }

    for (k=1, i=l; i<=h; k++, i++) {
        for (int x = 0; x<4; x++) {
            ara[i][x] = temp[k][x];
        }
    }
}

void merge_sort(int l, int h, int ara[][4]) {
    if ( l == h ) return;
    int mid = (l+h)/2;
    merge_sort(l, mid , ara);
    merge_sort(mid+1, h, ara);
    Merge(l, mid, h, ara);
}

int main() {

    //READ();
    //WRITE();

    int n;
    cin >> n;
    int ara[103][4];
    for (int i = 0; i<n; i++) {
        int year, month , day;
        cin >> year >> month >> day;
        int sum = (year*365)+(month*30)+day;
        ara[i][0] = year;
        ara[i][1] = month;
        ara[i][2] = day;
        ara[i][3] = sum;
    }

    merge_sort(0, n-1, ara);

    for(int i = 0; i<n; i++) {
        for (int j=0; j<3; j++) {
            cout << ara[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
