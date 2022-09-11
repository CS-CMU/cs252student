#include <bits/stdc++.h>
#include "HW06.cpp"
using namespace std;

int main(){
    int n;
    cin>>n;
    Scoreboard S(n);
    S.showTeamAtRank(1) ;
    S.match(0,1,2,3);
    S.showTeamAtRank(1);
    S.showTeamAtRank(4);
    S.match(3,2,1,1);
    S.showTeamAtRank(1);
    S.showTeamAtRank(2);
    
    return 0;
}
