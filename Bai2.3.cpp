#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[10];
    for (int i = 0; i < 10; i++){
        a[i] = 0;
    }
    int value;
    for (int i = 0; i < n; i++){
        cin >> value;
        for (int i = 0; i < 10; i++){
            if (value == i) a[i]++;
        }
    }
    for (int i = 0; i < 10; i++){
            cout <<  a[i] << ' ';
        }
    return 0;
}
