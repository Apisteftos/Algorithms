#include  <graph/Dijkstra/vertex.h>

VERTEX::VERTEX(const std::vector<char> vrt) : vertx(vrt) {}


std::vector<char> VERTEX::getVertex() const {

    return vertx;
}


