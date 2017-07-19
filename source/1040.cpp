#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n > 0) {
        int n1;
        cin >> n1;
        int *a = new int [n1];
        for(int i=0; i<n1; i++) {
            cin >> a[i];
        }

        for(int i=0; i<n1; i++) {
            for(int j=i+1; j<n1; j++) {
                if(a[j]<a[i]) {
                    int t=a[i]; a[i]=a[j]; a[j]=t;
                }
            }
        }
        for(int i=0; i<n1-1; i++) cout << a[i] << " ";
        cout << a[n1-1] << endl;

        n--;
    }
    return 0;
}