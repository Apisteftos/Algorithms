#ifndef DFS_H
#define DFS_H
#include <graph/DFS/graph.h>

class DFS: public EdgesDFS{

    private:
        std::unordered_map<char, bool> visited;
        char startNode;

    public:
        DFS();
        void dfs(char v);
        void setGraphDFS(const GraphDFS &graph);
        void setStartNode(char newNode);
        ~DFS();

};



#endif /* DFS_H */