#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int contiguoussubsequence(vector<int> numbers){
    int max_so_far=numbers[0];
    int max_ending_here=numbers[0];

    for (int i=1; i<numbers.size(); i++){
        max_ending_here = max(numbers[i], max_so_far + numbers[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}
int main(){
    int n; cin >> n;
    vector<int> numbers;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        numbers.push_back(x);
    }

    cout << contiguoussubsequence(numbers) << endl;
}