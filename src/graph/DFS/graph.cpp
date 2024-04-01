#include <graph/DFS/graph.h>

GraphDFS::GraphDFS(){}

void GraphDFS::addEdge(char v, std::vector<char> u){
    connectEdges(v, u);
}


GraphDFS::~GraphDFS(){}
