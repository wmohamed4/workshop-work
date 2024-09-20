Name: Warsan Mohamed
Student Number: 31055155
Email:wmohamed4@myseneca.ca
Date:Sept,19 2024

#ifndef SENECA_POPULATION_H_
#define SENECA_POPULATION_H_

namespace seneca {
   struct PopulationRecord {
      char postalCode[4];  // Three characters for postal code and one for null terminator
      int population;
   };

   // Function declarations
   bool load(const char* filename);
   void display();
   void deallocateMemory();

}
#endif // SENECA_POPULATION_H_
