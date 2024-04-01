#include <graph/BFS/graph.h>

GraphBFS::GraphBFS(){}
GraphBFS::GraphBFS(std::unordered_map<char, std::vector<char>> adj): adjacent(adj){}
const std::unordered_map<char, std::vector<char>> &GraphBFS::getAdjacent() const{
    return adjacent;
}

GraphBFS::~GraphBFS(){}

