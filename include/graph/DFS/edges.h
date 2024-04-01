#ifndef EDGES_H
#define EDGES_H
#include <iostream>
#include <unordered_map>
#include <vector>

class EdgesDFS{

    protected:

        std::unordered_map<char, std::vector<char>> adjacent;

    public:
        EdgesDFS();
        void connectEdges(char v, std::vector<char> u);
        const std::unordered_map<char, std::vector<char>> &getAdjacent() const;
        virtual ~EdgesDFS();


};




#endif /* EDGES_H */