#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>
#include <vector>



class VERTEX 
{

    private:

    /**
     * @brief a vector of vertices
     * 
     */
    std::vector<char> vertx;


    public: 

        /**
         * @brief Construct a new VERTEX object
         * 
         * @param vrt a vector of vertices
         */
        VERTEX(const std::vector<char> vrt);

        /**
         * @brief Get the Vertex object
         * 
         * @return vector<char> 
         */
        std::vector<char> getVertex() const;

        

        ~VERTEX() {

        }




};

#endif
