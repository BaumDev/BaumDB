# BaumDB
C++ header for creating and editing simple databases. 


useful orders:

#include "BaumDB.h"                                           //include header

newDB("NameOfYourDataBase");                                    //creates new database

wdata[0] = "Data1";                                             //defining data (max 10)
wdata[1] = "Data2";

writeDB("NameOfYourDataBase", "NameOfNewEntry", NumberOfData);  //creates new database entry from wdata[i]  i...0-9

readDB("NameOfYourDataBase", "NameOfEntry", NumberOfData);      //reads database entry to rdata[i]  i...0-9

delDB("NameOfYourDataBase", "NameOfEntry");                     //deletes database entry
