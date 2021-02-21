#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    char a[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int count = 0;
            if (a[i][j] == '.'){
                if ((i-1) >= 0 && (j-1) >= 0 && a[i-1][j-1] == '*') count++;
                if ((i-1) >= 0 && a[i-1][j] == '*') count++;
                if ((i-1) >= 0 && (j+1) >= 0 && a[i-1][j+1] == '*') count++;
                if ((j-1) >= 0 && a[i][j-1] == '*') count++;
                if ((j+1) >= 0 && a[i][j+1] == '*') count++;
                if ((i+1) >= 0 && (j-1) >= 0 && a[i+1][j-1] == '*') count++;
                if ((i+1) >= 0 && a[i+1][j] == '*') count++;
                if ((i+1) >= 0 && (j+1) >= 0 && a[i+1][j+1] == '*') count++;
                a[i][j] = (count + '/0');
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}
