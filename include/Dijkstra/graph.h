#ifndef GRAPH_H
#define GRAPH_H


#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Graph{


    protected:

    

    private:

        vector<char>::iterator iter;
        multimap<char, tuple<double, char>> conGrpaph; 
        vector<char> vr;
        char pr;
        double dst;

    public: 

        /**
         * @brief Default Constructor a new Graph object
         * 
         */
        Graph();


        /**
         * @brief Parametrized Constructor of a new Graph object
         * 
         * @param vt Vector of vertices
         * @param prev Previous vertex
         * @param dist distance
         */
        Graph(vector<char> vt, char prev, double dist);



        /**
         * @brief Prints the row graph
         * 
         */
        void printRowGraph();


        /**
         * @brief graph Constructor function
         * 
         * @return multimap<char, tuple<double, char>> 
         */
        multimap<char, tuple<double, char>> graphConstructor();


        /**
         * @brief Get the Vertices object
         * 
         * @return vector<char> 
         */
        vector<char> getVertices();


        

        ~Graph(){

        }


        //friend ostream & operator<< (ostream &out, const Graph &graph);




};




#endif // GRAPH_H




