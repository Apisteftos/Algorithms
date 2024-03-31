#include <graph/Dijkstra/dijkstra.h>



Dijkstra::Dijkstra(char strVert, const Graph& gr, EDGE grEdg): startVertex(strVert), graph(gr), grEdg(grEdg)
{


}


void Dijkstra::findPath(){


    std::multimap<char, std::tuple<double, char>> graphConstruct = graph.graphConstructor();
    std::multimap<char, std::tuple<char, double>> edges = grEdg.getEdges();
    
    



    std::cout << "Printing the Initialization: " << std::endl << std::endl;

    for (const auto & pair: graphConstruct) {

        char key = pair.first;
        auto& twoElements = pair.second;
        double firstElement = std::get<0>(twoElements);
        char secondElement = std::get<1>(twoElements);


        if (startVertex == key)
            firstElement = 0;

        std::cout << "Vertex: " << key << " Distance: " << firstElement << " Previous: " << secondElement << std::endl;


    }




    std::cout << " " << std::endl;



    for (char v: graph.getVertices()){

        // if start vertex is equal to v then the distance is 0 otherwise is infinity
        // distance and previous working as a dictionaries
        distance[v] = (v == startVertex) ? 0 : std::numeric_limits<double>::infinity();
        previous[v] = '\0';
        unvisited.insert(v);

    }




    while (!unvisited.empty()) {
        
        char currentVertex = *unvisited.begin();
        for (char v: unvisited){
            if (distance[v] < distance[currentVertex]){
                currentVertex = v;
            }

        }

        unvisited.erase(currentVertex);

        for (const auto& edge : edges){
            char source = edge.first;
            char target = std::get<0>(edge.second);
            double weight = std::get<1>(edge.second);

            if (source == currentVertex){
                double alt = distance[currentVertex] + weight;
                if (alt < distance[target]){
                    distance[target] = alt;
                    previous[target] = source;

                    
                }
            }


        }
        

    }



}


void Dijkstra::printShortestDistances(){

    // Print shortest distances
    std::cout << " " << std::endl;
    std::cout << "Shortest distances from vertex " << startVertex << ":" << std::endl;
    for (const auto& pair : distance) {
        std::cout << "Distance to vertex " << pair.first << ": " << pair.second << std::endl;
    }


}

void Dijkstra::printShortestPath(){

    // print shortest paths
    std::cout << " " << std::endl;
    std::cout << "Shortest paths from vertex " << startVertex << ":" << std::endl;
    for (const auto& pair : previous) {
        char vertex = pair.first;
        std::string path = "";
        while (vertex != '\0') {
            path = vertex + path;
            vertex = previous[vertex];
        }

        std::cout << "Path to vertex " << pair.first << ": " << path << std::endl;
    }
}




void Dijkstra::printPreviousPath(){

    // print previous path
    std::cout << " " << std::endl;
    std::cout << "Previous path from vertex " << std::endl; 
    for(const auto& pair: previous){
        char vertex = pair.first;

        std::cout << "Vertex: " << vertex << " Previous: " << previous[vertex] << std::endl;


    }
}


void Dijkstra::printTheEdges(){

    std::multimap<char, std::tuple<char, double>> edges = grEdg.getEdges();

        std::cout << "Printing the Edges: " << std::endl << std::endl;

        for (const auto & pair: edges){

            char key = pair.first;
            const auto& Elements = pair.second;
            char firstElement = std::get<0>(Elements);
            double secondElement = std::get<1>(Elements);


            std::cout << "Key: " << key << " AdjacentVertex: " << firstElement << " Weight: " << secondElement << std::endl;

        }

}


void Dijkstra::chooseStartVertex(const char & newVertex ) {

        startVertex = newVertex;
        findPath();

}





/**
 * @brief Output stream to print the result
 * 
 * @param out 
 * @param d 
 * @return ostream& 
 */
std::ostream & operator << (std::ostream &out, const Dijkstra &d){



// Print shortest distances
std::cout << " " << std::endl;
std::cout << "Shortest distances from vertex " << d.startVertex << ":" << std::endl;
for (const auto& pair : d.distance) {
    out << "Distance to vertex " << pair.first << ": " << pair.second << std::endl;
}



// print shortest paths
std::cout << " " << std::endl;
std::cout << "Shortest paths from vertex " << d.startVertex << ":" << std::endl;
auto previous = d.previous;

for (const auto& pair : previous) {
    char vertex = pair.first;
    std::string path = "";
    while (vertex != '\0') {
        path = vertex + path;
        vertex = previous[vertex];
    }

    out << "Path to vertex " << pair.first << ": " << path << std::endl;
}



// print previous path
std::cout << " " << std::endl;
std::cout << "Previous path from vertex " << std::endl; 
for(const auto& pair: previous){
    char vertex = pair.first;

    out << "Vertex: " << vertex << " Previous: " << previous[vertex] << std::endl;


}


return out;

}
