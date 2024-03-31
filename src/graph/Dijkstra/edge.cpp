#include <graph/Dijkstra/edge.h>

EDGE::EDGE(std::multimap<char, std::tuple<char, double>> edge): edges(edge) {}


std::multimap<char, std::tuple<char, double>> EDGE::getEdges() const {

    return edges;
}


