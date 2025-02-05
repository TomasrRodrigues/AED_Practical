#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;


int main(){
    int N, K;
    cin >> N;
    cin >> K;

    vector<int> numbers;

    for (int i=0; i<N; i++){
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());

    int minDiff = INT_MAX;
    for (int i=K-1; i<N; i++){
        if (numbers[i]-numbers[i-K+1] < minDiff){
            minDiff = numbers[i]-numbers[i-K+1];
        }
    }

    cout << minDiff << endl;
}