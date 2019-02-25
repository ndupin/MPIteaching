#include "graphNO.hpp"

void GraphNO::insertEdge(int nidFrom, int nidTo) {
  //    std::cout << "ajout de " << nidFrom << " a " << nidTo << std::endl;
  adjacencyList[nidTo].insert(nidFrom);
  adjacencyList[nidFrom].insert(nidTo);
}

void GraphNO::removeEdge(int nidFrom, int nidTo) {
    adjacencyList[nidTo].erase (nidFrom);
    adjacencyList[nidFrom].erase (nidTo);
}
