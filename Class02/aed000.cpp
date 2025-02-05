#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int x, count=0;
    for (int i =0; i<n; i++){
        cin >> x;
        if (x==42){count++;}
    }

    cout << count << endl;
}