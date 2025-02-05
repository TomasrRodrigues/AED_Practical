#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef struct{
    string name;
    int points;
    int goalsdiff;
} Team;






int main(){
    int N;
    cin >> N;

    vector<Team> teams;
    for (int i=0; i<N; i++){
        string name;
        int wins, draws, losses;
        int goalsscored, goalsagainst;
        cin >> name >> wins >> draws >> losses >> goalsscored >> goalsagainst;
        int points = wins*3 + draws;
        int goalsdiff = goalsscored - goalsagainst;
        teams.push_back({name, points, goalsdiff});
    }

    sort(teams.begin(), teams.end(), [](Team a, Team b){
        if (a.points == b.points){
            if (a.goalsdiff == b.goalsdiff){
                return a.name < b.name;
            }
            return a.goalsdiff > b.goalsdiff;
        }
        return a.points > b.points;
    });

    for (Team team : teams){
        cout << team.name << " " << team.points << " " << team.goalsdiff << endl;
    }

    return 0;
}