#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = 0;
        }
    }
    int number = 1;
    a[0][n/2] = number++;
    int row = 0, column = n/2;
    while (true){
        if (a[row-1][column+1] < 1 && (row-1) >= 0 && (column+1) < n){
                a[row-1][column+1] = number++;
                row = row-1;
                column = column + 1;
        }
        else if ((row-1) < 0 && (column+1) >= n){
                a[row+1][column] = number++;
                row = row+1;
        }
        else if ((row-1) < 0){
                a[n-1][column+1] = number++;
                row = n-1;
                column = column + 1;
        }
        else if ((column+1) >= n){
                a[row-1][0] = number++;
                row = row-1;
                column = 0;
        }
        else{
                a[row+1][column] = number++;
                row = row+1;
        }
        if (number > (n*n)) break;
    }
    cout << number << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
