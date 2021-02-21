#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool symmetry = true;
    for (int i = 0; i < (s.length()/2); i++){
        if (s[i] != s[s.length()-i-1]){
            symmetry = false;
            break;
        }
    }
    if (symmetry) cout << "YES";
    else cout << "NO";
    return 0;
}
