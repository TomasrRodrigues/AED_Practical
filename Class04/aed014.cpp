#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct{
    int time;
    bool type; //true se entrada false se saida
} Evento;


int maxStudents(vector<Evento> eventos){
    int maxCounter=0;
    int counter=0;
    for (Evento event : eventos){
        if (event.type){
            counter++;
        }
        else{
            counter--;
        }

        if (counter>maxCounter){
            maxCounter=counter;
        }  
    }
    return maxCounter;
}


int main(){
    int N;
    cin >> N;

    vector<Evento> eventos;
    for (int i=0; i<N; i++){
        int arrival, leave;
        cin >> arrival >> leave;
        eventos.push_back({arrival, true});
        eventos.push_back({leave, false});
    }
    sort(eventos.begin(), eventos.end(), [](Evento a, Evento b){
        return a.time <= b.time;
    });


    cout << maxStudents(eventos) << endl;
}