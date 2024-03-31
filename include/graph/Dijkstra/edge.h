#ifndef EDGE_H
#define EDGE_H
#include <iostream>
#include <vector>
#include <map>



class EDGE
{

    private:

        std::multimap<char, std::tuple<char, double>> edges;
        

    public:

        EDGE(std::multimap<char, std::tuple<char, double>> edge);


        std::multimap<char, std::tuple<char, double>> getEdges() const;



        ~EDGE() {

        }


};

#endif
