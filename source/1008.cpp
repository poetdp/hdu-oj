#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n) {
        int f1, f2, time;
        f1 = time = 0;
        while(n>0) {
            cin >> f2;
            if(f2-f1 > 0)
                time += 6*(f2-f1);
            else
                time -= 4*(f2-f1);
            f1=f2;
            time+=5;
            n--;
        }
        cout << time << endl;
        
        cin >> n;
    }
    return 0;
}