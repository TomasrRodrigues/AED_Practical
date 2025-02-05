#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int funcforthisprob(vector<int> numbers, int N){
    for (int i=0; i<numbers.size(); i++){
        if (numbers[i]>=N){
            return i;
        }
    }
    return -1;
}


int main(){
    int N;
    cin >> N;
    vector<int> numbers;

    for (int i=0; i<N; i++){
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int K;
    cin >> K;

    for (int j=0; j<K; j++){
        int num; cin >> num;

        cout << funcforthisprob(numbers, num) << endl;
    }
}