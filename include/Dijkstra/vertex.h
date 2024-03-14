#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>
#include <vector>

using namespace std;


class VERTEX 
{

    private:

    /**
     * @brief a vector of vertices
     * 
     */
    vector<char> vertx;


    public: 

        /**
         * @brief Construct a new VERTEX object
         * 
         * @param vrt a vector of vertices
         */
        VERTEX(const vector<char> vrt);

        /**
         * @brief Get the Vertex object
         * 
         * @return vector<char> 
         */
        vector<char> getVertex() const;

        

        ~VERTEX() {

        }




};

#endif
