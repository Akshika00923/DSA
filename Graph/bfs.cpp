#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *l; //dynamic array list
public: 
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }
void addEdges(int u , int v){
    l[u].push_back(v);
    l[v].push_back(u);
}
void printAdjList(){
    for(int i = 0;i<V; i++){
        cout<<i<<":";
        for(int neigh: l[i]){
            cout<<neigh<<" ";
        }
        cout<<endl;
    }
}
void BFS(){
    queue<int> q;
    vector<bool> visited(V,false);
    q.push(0);
    visited[0] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
    cout<<u<<" ";
    for(int v: l[u]){
        if(!visited[v]){
            q.push(v);
            visited[v]= true;
            
        }
    }
    }
    cout<<endl;
}

};
int main(){
    Graph g(5);//object.
    g.addEdges(0,1);
    g.addEdges(1,2);
    g.addEdges(2,3);
    g.addEdges(2,4);
    cout<< "list is : "<<endl;
    g.printAdjList();
    cout<<"bfs traversal is: "<<endl;
    g.BFS();
    return 0;
}

 

