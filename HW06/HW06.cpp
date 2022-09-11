#include <bits/stdc++.h>
using namespace std;
class Team{
    public:
    int ID;
    int GD;//Goal Difference = Goal score - Goal conced
    int PTS;//Point (win = 3, draw = 1, lose = 0)

    //Constructor
    Team(int x, int y, int z) : ID(x), GD(y), PTS(z) {}
	
    /*
         WRITE YOUR CODE HERE
    */
};

class Scoreboard{
public:
    vector<Team> T;
    int numberOfTeams = 0;
    
    Scoreboard(int n){
        numberOfTeams = n;
        for(int i=0;i<n;i++){
            Team x(i,0,0);
            T.push_back(x);
        }
    }

    void match(int ID1, int ID2,int G1,int G2){
        /*
         WRITE YOUR CODE HERE
         */
    } 
    void showTeamAtRank(int i){
        /*
         WRITE YOUR CODE HERE
         */
    }
};