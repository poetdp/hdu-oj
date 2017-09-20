#include <iostream>

using namespace std;

int main() {
    int n, u, d, t;
    while(cin >> n >> u >> d, n != 0) {
        t = (n-u)/(u-d);
        if((u-d)*t+u < n) ++t;
        cout << t*2+1 << endl;
    }
    return 0;
}

// int main() {
//     int n, u, d;
//     while(cin >> n >> u >> d, n != 0) {
//         int s=0, t=0, up=1;
//         while(s < n) {
//             if(up) s += u, t++, up=0;
//             else s -= d, t++, up=1;
//         }
//         cout << t << endl;
//     }
//     return 0;
// }