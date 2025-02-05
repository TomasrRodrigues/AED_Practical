#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string sortPhrase(const string & s){
    string sorted = "";

    for (auto& x : s) { 
        if (x!=' '){
            sorted += tolower(x); 
        }
    }

    sort(sorted.begin(), sorted.end());
    return sorted;
}

int anagramsnum(vector<string> phrases){
    int anagrams = 0;
    bool flag = true; //true se o anterior nao foi igual
    for (int i = 1; i < phrases.size(); i++){
        if (phrases[i]==phrases[i-1] && flag){
            anagrams++;
            flag = false;
        }
        else if(phrases[i]!=phrases[i-1]){
            flag = true;
        }
    }
    return anagrams;
}

int main(){
    int n;
    cin >> n;
    
     vector<string> phrases;

    for (int i = 0; i < n+1; i++){
        string phrase;
        getline(cin, phrase);
        phrases.push_back(sortPhrase(phrase));
    }

    sort(phrases.begin(), phrases.end());

    cout << anagramsnum(phrases) << endl;
    

}