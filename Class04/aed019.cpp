#include <iostream>
#include <vector>


using namespace std;


int main(){

    int N;
    cin >> N;

    vector<int> numbers;

    for (int i = 0; i<N; i++){
        int num;
        cin >> num;
        numbers.push_back(num);    
    }

    int changes=0;
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            if (numbers[i] > numbers[j]){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
                changes++;
            }
        }
    }

    cout << changes << endl;
}