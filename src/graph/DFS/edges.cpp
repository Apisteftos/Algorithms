#include <graph/DFS/edges.h>



EdgesDFS::EdgesDFS(){}

void EdgesDFS::connectEdges(char v, std::vector<char> u){

    adjacent[v] = u;

}

const std::unordered_map<char, std::vector<char>>& EdgesDFS::getAdjacent() const{
    return adjacent;
}



EdgesDFS::~EdgesDFS(){}