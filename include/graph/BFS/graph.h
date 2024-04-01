#ifndef GRAPHBFS_H
#define GRAPHBFS_H
#include <iostream>
#include <unordered_map>
#include <vector>


class GraphBFS{

private:

    std::unordered_map<char, std::vector<char>> adjacent;


public:

    GraphBFS();
    GraphBFS(std::unordered_map<char, std::vector<char>> adj);
    const std::unordered_map<char, std::vector<char>> & getAdjacent() const;
    ~GraphBFS();





};


#endif /* GRAPHBFS_H */