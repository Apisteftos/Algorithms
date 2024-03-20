#include "edge.h"

EDGE::EDGE(multimap<char, tuple<char, double>> edge): edges(edge) {}


multimap<char, tuple<char, double>> EDGE::getEdges() const {

    return edges;
}


