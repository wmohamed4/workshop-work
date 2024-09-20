#ifndef SENECA_FILE_H_
#define SENECA_FILE_H_

namespace seneca {
   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();
}

#endif // SENECA_FILE_H_
