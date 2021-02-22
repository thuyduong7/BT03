#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0, count = 0;
    int min = a[0], max = a[0];
    if (a[0] % 2 == 0) sum += a[0];
    else count++;
    for (int i = 1; i < n; i++){
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        if (a[i] % 2 == 0) sum += a[i];
    else count++;
    }
    cout << min << ' ' << max << ' ' << sum << ' ' << count;
    return 0;
}
