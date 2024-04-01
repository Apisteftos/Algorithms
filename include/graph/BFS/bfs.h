#ifndef BFS_H
#define BFS_H
#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <graph/BFS/graph.h>


class BFS: public GraphBFS{

    private:
        std::unordered_map<char, bool> explored;
        std::unordered_map<char, char> parent;
        std::unordered_map<char, std::vector<char>> adjacent;
        char startNode;


    public: 

        BFS();
        void bfs(char root);
        void setGraphBFS(const GraphBFS &graph);
        void setStartNode(char newNode);
        ~BFS();



};


#endif /* BFS_H */