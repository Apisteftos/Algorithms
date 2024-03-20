#include "dijkstra.h"



Dijkstra::Dijkstra(char strVert, const Graph& gr, EDGE grEdg): startVertex(strVert), graph(gr), grEdg(grEdg)
{


}


void Dijkstra::findPath(){


    multimap<char, tuple<double, char>> graphConstruct = graph.graphConstructor();
    multimap<char, tuple<char, double>> edges = grEdg.getEdges();
    
    



    cout << "Printing the Initialization: " << endl << endl;

    for (const auto & pair: graphConstruct) {

        char key = pair.first;
        auto& twoElements = pair.second;
        double firstElement = get<0>(twoElements);
        char secondElement = get<1>(twoElements);


        if (startVertex == key)
            firstElement = 0;

        cout << "Vertex: " << key << " Distance: " << firstElement << " Previous: " << secondElement << endl;


    }




    cout << " " << endl;



    for (char v: graph.getVertices()){

        // if start vertex is equal to v then the distance is 0 otherwise is infinity
        // distance and previous working as a dictionaries
        distance[v] = (v == startVertex) ? 0 : numeric_limits<double>::infinity();
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
            char target = get<0>(edge.second);
            double weight = get<1>(edge.second);

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
    cout << " " << endl;
    cout << "Shortest distances from vertex " << startVertex << ":" << endl;
    for (const auto& pair : distance) {
        cout << "Distance to vertex " << pair.first << ": " << pair.second << endl;
    }


}

void Dijkstra::printShortestPath(){

    // print shortest paths
    cout << " " << endl;
    cout << "Shortest paths from vertex " << startVertex << ":" << endl;
    for (const auto& pair : previous) {
        char vertex = pair.first;
        string path = "";
        while (vertex != '\0') {
            path = vertex + path;
            vertex = previous[vertex];
        }

        cout << "Path to vertex " << pair.first << ": " << path << endl;
    }
}




void Dijkstra::printPreviousPath(){

    // print previous path
    cout << " " << endl;
    cout << "Previous path from vertex " << endl; 
    for(const auto& pair: previous){
        char vertex = pair.first;

        cout << "Vertex: " << vertex << " Previous: " << previous[vertex] << endl;


    }
}


void Dijkstra::printTheEdges(){

    multimap<char, tuple<char, double>> edges = grEdg.getEdges();

        cout << "Printing the Edges: " << endl << endl;

        for (const auto & pair: edges){

            char key = pair.first;
            const auto& Elements = pair.second;
            char firstElement = get<0>(Elements);
            double secondElement = get<1>(Elements);


            cout << "Key: " << key << " AdjacentVertex: " << firstElement << " Weight: " << secondElement << endl;

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
ostream & operator << (ostream &out, const Dijkstra &d){



// Print shortest distances
cout << " " << endl;
cout << "Shortest distances from vertex " << d.startVertex << ":" << endl;
for (const auto& pair : d.distance) {
    out << "Distance to vertex " << pair.first << ": " << pair.second << endl;
}



// print shortest paths
cout << " " << endl;
cout << "Shortest paths from vertex " << d.startVertex << ":" << endl;
auto previous = d.previous;

for (const auto& pair : previous) {
    char vertex = pair.first;
    string path = "";
    while (vertex != '\0') {
        path = vertex + path;
        vertex = previous[vertex];
    }

    out << "Path to vertex " << pair.first << ": " << path << endl;
}



// print previous path
cout << " " << endl;
cout << "Previous path from vertex " << endl; 
for(const auto& pair: previous){
    char vertex = pair.first;

    out << "Vertex: " << vertex << " Previous: " << previous[vertex] << endl;


}


return out;

}
