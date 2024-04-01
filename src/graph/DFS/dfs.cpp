#include <graph/DFS/dfs.h>

DFS::DFS(){}


void DFS::dfs(char v){
    visited[v] = true;
    std::cout << v << " ";
    for( auto const &u: getAdjacent().at(v)){
        if(!visited[u]){
            dfs(u);
        }
    }

}

void DFS::setGraphDFS(const GraphDFS &graph){
    adjacent = graph.getAdjacent();
    visited.clear();
    for(const auto & pair : adjacent){
        visited[pair.first] = false;
    }
}


void DFS::setStartNode(char newNode){
    startNode = newNode;
    visited.clear();
    std::cout << std::endl;
    dfs(startNode);
}




DFS::~DFS(){}