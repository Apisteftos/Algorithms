#ifndef EDGE_H
#define EDGE_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;


class EDGE
{

    private:

        multimap<char, tuple<char, double>> edges;
        

    public:

        EDGE(multimap<char, tuple<char, double>> edge);


        multimap<char, tuple<char, double>> getEdges() const;



        ~EDGE() {

        }


};

#endif
