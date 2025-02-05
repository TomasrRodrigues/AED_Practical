#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int N, K;
    cin >> N;
    cin >> K;

    vector<int> childWeight;

    for (int i=0; i<N; i++){
        int weight;
        cin >> weight;
        childWeight.push_back(weight);
    }

    sort(childWeight.begin(), childWeight.end());

    int left, right;

    left=0; right=N-1;
    int counter=0;
    int i = 0;
    while (i<N){
        if (childWeight[right]+childWeight[left] <= K){
            left++;
            right--;
            i +=2;
        }
        else{
            right--;
            i++;
        }
        counter++;
    }
    cout << counter << endl;

}