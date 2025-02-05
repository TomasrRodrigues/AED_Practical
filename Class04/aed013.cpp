#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortByOnesAndValue(int N, vector<int> numbers){
    vector<int> nums = numbers;
    sort(nums.begin(), nums.end(), [](int a, int b){
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);

        if (countA == countB){
            return a < b;
        }

        return countA > countB;
    });
    return nums;
}

int main(){
    int N;
    cin >> N;

    vector<int> bits;
    for (int i=0; i<N; i++){
        int bit;
        cin >> bit;
        bits.push_back(bit);
    }

    vector<int> nums = sortByOnesAndValue(N, bits);

    for (int i=0; i<N; i++){
        cout << nums[i] << endl;
    }

}