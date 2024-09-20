#include "Population.h"
using namespace seneca;

int main() {
   if (load("PCpopulations.csv")) {
      display();
   }
   deallocateMemory();
   return 0;
}
