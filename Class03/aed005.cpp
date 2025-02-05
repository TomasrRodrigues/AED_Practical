#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int spotNumber(vector<int> numbersSorted, int K){
    int low = 0, high = (int)numbersSorted.size() - 1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (K < numbersSorted[middle])      high = middle - 1;
        else if (K > numbersSorted[middle]) low = middle + 1;
        else return middle; // found key
    }
    return -1; // not found
}

int main(){
    int N, Q;
    vector<int> numbersSorted;
    cin >> N;

    for (int i = 0; i < N; i++){
        int S;
        cin >> S;
        numbersSorted.push_back(S);
    }

    //sort(numbersSorted.begin(), numbersSorted.end());

    cin >> Q;
    for (int i = 0; i < Q; i++){
        int K;
        cin >> K;
        cout << spotNumber(numbersSorted, K) << endl;
    }
}