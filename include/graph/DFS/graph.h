#ifndef GRAPHDFS_H
#define GRAPHDFS_H
#include <graph/DFS/edges.h>
class GraphDFS: public EdgesDFS{


    public:

        GraphDFS();
        void addEdge(char v, std::vector<char> u);
        ~GraphDFS();

};

#endif /* GRAPHDFS_H */