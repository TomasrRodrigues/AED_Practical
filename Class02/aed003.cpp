#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int funcriver(vector<int> river, int k, int minDepth, int required){
    int count=0, bigcount=0;
    for (int i=0; i<k; i++){
        if (river[i] >= minDepth){
            count++;
        }
    }

    if (count>=required){
        bigcount++;
    }

    for (int j=k; j<river.size(); j++){
        if (river[j] >= minDepth){
            count++;
        }
        if (river[j-k] >= minDepth){
            count--;
        }
        if (count>=required){
            bigcount++;
        }
    }

    return bigcount;
}

int main(){
    int n, k, t; cin >> n >> k >> t;

    vector<int> river;

    for (int i =0; i<n; i++){
        int x; cin >> x;
        river.push_back(x);
    }

    int required = (k+1)/2;

    cout << funcriver(river, k, t, required) << endl;
}