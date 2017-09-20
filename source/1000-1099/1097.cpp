#include <iostream>

using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b) {
        int tmp = a%10, d = 1;
        while(b) {
            if(b & 1) d = (d*tmp) % 10;
            tmp = (tmp*tmp) % 10;
            b >>= 1;
        }
        cout << d << endl;
    }
    return 0;
}