Name: Warsan Mohamed
Student Number: 31055155
Email:wmohamed4@myseneca.ca
Date:Sept,19 2024

#include <iostream>
#include "Population.h"
#include "File.h"

namespace seneca {
   PopulationRecord* records = nullptr;
   int noOfRecordsLoaded = 0;

   bool load(const char* filename) {
      if (openFile(filename)) {
         noOfRecordsLoaded = noOfRecords();
         records = new PopulationRecord[noOfRecordsLoaded];

         for (int i = 0; i < noOfRecordsLoaded; i++) {
            fscanf(fptr, "%3s,%d", records[i].postalCode, &records[i].population);
         }
         closeFile();
         return true;
      }
      std::cerr << "Could not open data file: " << filename << std::endl;
      return false;
   }

   void display() {
      std::cout << "Postal Code: Population\n";
      std::cout << "-------------------------\n";
      for (int i = 0; i < noOfRecordsLoaded; i++) {
         std::cout << i + 1 << "- " << records[i].postalCode << ": " << records[i].population << "\n";
      }
   }

   void deallocateMemory() {
      delete[] records;
      records = nullptr;
   }
}
