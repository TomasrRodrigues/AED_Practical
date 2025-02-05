#include <iostream>

using namespace std;

bool isPrime(int n){
    for (int i=2; i*i<=n; i++){
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;

    int x;
    for (int i =0; i<n; i++){
        cin >> x;
        if (isPrime(x)){
            cout << x << " is prime" << endl;
        }
        else{
            cout << x << " is composite" << endl;
        }
    }
}