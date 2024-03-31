#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <map>
#include <list>

class GraphDFS{

    private:

        
        

    public:

        GraphDFS();
        std::map<char, bool> v;
        std::map<char, std::list<char>> adjacent;
        ~GraphDFS();





};

#endif /* GRAPH_H */