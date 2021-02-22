#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) a[i][0] = 1;
    a[0][1] = 0;
    int max = 0;
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= i; j++){
            if (j == i) a[i][j] = 1;
            else a[i][j] = a[i-1][j-1] + a[i-1][j];
            if (a[i][j] > max) max = a[i][j];
        }
    }
    int count = 0;
    while (max){
        max /= 10;
        count++;
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << setw(count+1) << left << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
