#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <iostream>
#include "graph.h"
#include "edge.h"
#include <limits>
#include <set>



class Dijkstra {



private: 
    /**
     * @brief private member for start vertex
     * 
     */
    char startVertex; 
    /**
     * @brief creating a Graph object
     * 
     */
    Graph graph;
    /**
     * @brief creating an Edge object
     * 
     */
    EDGE grEdg;
    /**
     * @brief mapping the vertex with the distance
     * 
     */
    std::map<char, double> distance;
    /**
     * @brief mapping the current vertex with previous  
     * 
     */
    std::map<char, char> previous;
    /**
     * @brief unvisited vertex
     * 
     */
    std::set<char> unvisited;



public:

    /**
     * @brief Construct a new Dijkstra object
     * 
     * @param strVert 
     * @param gr 
     * @param grEdg 
     */
    Dijkstra(char strVert, const Graph& gr, EDGE grEdg);


    /**
     * @brief dijkstra function that finds the shortest path and distances 
     * 
     */
    void findPath();

    /**
     * @brief Friend function for printing the result
     * 
     * @param out 
     * @param d 
     * @return ostream& 
     */
    friend std::ostream & operator <<(std::ostream &out, const Dijkstra & d);


    /**
     * @brief Print the shortest found distance of the graph
     * 
     */
    void printShortestDistances();


    /**
     * @brief Print the shortest path by using the dijkstra algorithm 
     * 
     */
    void printShortestPath();



    /**
     * @brief Prints the previous path
     * 
     */
    void printPreviousPath();


    /**
     * @brief Prints the edges of the graph
     * 
     */
    void printTheEdges();



    /**
     * @brief Choose and set a new Vector 
     * 
     * @param newVertex set a new Vertex
     */
    void chooseStartVertex(const char & newVertex );



    ~Dijkstra()
    {

    }

};






#endif // DIJKSTRA_H
