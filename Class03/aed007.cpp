#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;


int numboninterval(vector<int> numbers, int low, int up){
    int counter=0;
    for (int i=0; i<numbers.size(); i++){
        if (numbers[i]>=low && numbers[i]<=up){
            counter++;
        }
        else if (numbers[i]>up){
            return counter;
        }
    }
    return counter;
}


int main(){
    int N;
    cin >> N;
    vector<int> numbers;

    for (int i = 0; i<N; i++){
        int num;
        cin >> num;
        numbers.push_back(num);    
    }


    int Q;
    cin >> Q;

    for(int j=0; j<Q; j++){
        int low, up;
        cin >> low >> up;

        cout << numboninterval(numbers, low, up) << endl;
    }
}