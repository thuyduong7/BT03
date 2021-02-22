#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n];
    double average = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        average += a[i];
    }
    average /= n;
    double variance = 0;
    for (int i = 0; i < n; i++){
        variance += ((a[i] - average)*(a[i] - average));
    }
    variance = sqrt(variance/n);
    cout << average << ' ' << variance;
    return 0;
}
