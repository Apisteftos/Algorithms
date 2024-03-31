#include <graph/Dijkstra/graph.h>


Graph::Graph() {

    std::cout << "This is the default constructor of the program" << std::endl;
}


Graph::Graph(std::vector<char> vt, char prev, double dist){


            this -> vr = vt;
            this -> pr = prev;
            this -> dst = dist;

}


void Graph::printRowGraph() {

    for(iter = vr.begin(); iter != vr.end(); iter++){
                
        std::cout << "Vertex: " << *iter << " Previous: " << pr << " Distance: " << dst << std::endl;

    }
}



std::multimap<char, std::tuple<double, char>> Graph::graphConstructor(){

    for(iter = vr.begin(); iter != vr.end(); iter++){
            
        conGrpaph.insert(std::make_pair(*iter, std::make_tuple(dst, pr)));

    }


    return conGrpaph;


}



std::vector<char> Graph::getVertices() {

    return vr;
}

