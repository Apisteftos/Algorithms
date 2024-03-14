#include "graph.h"


Graph::Graph() {

    cout << "This is the default constructor of the program" << endl;
}


Graph::Graph(vector<char> vt, char prev, double dist){


            this -> vr = vt;
            this -> pr = prev;
            this -> dst = dist;

}


void Graph::printRowGraph() {

    for(iter = vr.begin(); iter != vr.end(); iter++){
                
        cout << "Vertex: " << *iter << " Previous: " << pr << " Distance: " << dst << endl;

    }
}



multimap<char, tuple<double, char>> Graph::graphConstructor(){

    for(iter = vr.begin(); iter != vr.end(); iter++){
            
        conGrpaph.insert(make_pair(*iter, make_tuple(dst, pr)));

    }


    return conGrpaph;


}



vector<char> Graph::getVertices() {

    return vr;
}

