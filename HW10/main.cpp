#include "HW10.cpp"
#include <iostream>
using namespace std;
int main()
{
    int n,m,u,v,startHouse;
    cin>>n>>m;    
    Village sansook(n);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        sansook.addRoad(u,v);
    }
    cin>>startHouse;
    sansook.BFS(startHouse);
    cout<<"\n";
    sansook.DFS(startHouse);
    return 0;
}