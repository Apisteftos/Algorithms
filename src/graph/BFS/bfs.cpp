#include <graph/BFS/bfs.h>


BFS::BFS(){}
void BFS::bfs(char root){

    std::queue<char> q;
    explored[root] = true;
    q.push(root);

    while (!q.empty()){
        char v = q.front();
        q.pop();
        std::cout << v << " ";
        for(const auto &u: adjacent[v]){
            if(!explored[u]){
                explored[u] = true;
                parent[u] = v;
                q.push(u);
            }
        }
    }

}


void BFS::setGraphBFS(const GraphBFS &graph){
    adjacent = graph.getAdjacent();
    explored.clear();
    for(const auto &pair: adjacent){
        explored[pair.first] = false;
    }

}


void BFS::setStartNode(char newNode){
    startNode = newNode;
    explored.clear();
    std::cout << std::endl;
    bfs(startNode);
}

BFS::~BFS(){}