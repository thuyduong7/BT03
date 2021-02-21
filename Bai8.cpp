#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]) swap (a[i],a[j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n-1; i++) sum += (a[i] * (n-i-1));
    cout << sum << endl;
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}
