//#include <iostream>
#include "graphNO.hpp"
#include "mpi.h"

// Creation rapide d'une instance minimaliste pour tester
GraphNO createSmallExample() {
  GraphNO H = GraphNO(5);

  H.insertEdge(0, 1);
  H.insertEdge(1, 2);
  H.insertEdge(0, 2);
  H.insertEdge(2, 3);
  H.insertEdge(3, 4);
  H.insertEdge(4, 2);

  return H;
}

int main(int argc, char **argv) {
  MPI_Init(&argc, &argv);
  
  GraphNO G = createSmallExample();

  //TODO

  MPI_Finalize();
  return 0;
}
