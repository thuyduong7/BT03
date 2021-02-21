#include <iostream>
using namespace std;
bool checkSymmetry(int n){
    int tmp = n;
    int n1 = 0;
    while (n){
        n1 += (n % 10);
        n1 *= 10;
        n /= 10;
    }
    n1 /= 10;
    if (tmp == n1) return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    int a[t], b[t];
    for (int i = 0; i < t; i++){
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < t; i++){
        int count = 0;
        for (int j = a[i]; j <= b[i]; j++){
            if (checkSymmetry(j)) count++;
        }
        cout << count << endl;
    }
    return 0;
}
