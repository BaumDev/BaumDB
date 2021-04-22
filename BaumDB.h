/*
*	BaumDB v1.0.0 
*	Database creator and editor for c++
*	AUTHOR: BaumDev
*
*/

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

string wdata[10];
string rdata[10];


void newDB(string named)		// creates new database
{
	system(("mkdir " + named).c_str());

}


void writeDB(string named, string dbname, int columns)	// write to database
{
	ofstream fname;
	fname.open(("./" + named + "/" + dbname + ".dat").c_str(), ios::trunc);
	for (int i = 0; i <= columns; i++)
	{
		fname << wdata[i] << endl;
	}
	fname.close();
}

void readDB(string named, string rname, int columns)		// read from database
{
	ifstream input(("./" + named + "/" + rname + ".dat").c_str());
	for (int i = 0; i <= columns; i++)
	{
		getline(input, rdata[i]);
	}
}

void delDB(string named, string rname)		// delete database entry
{
	remove(("./" + named + "/" + rname + ".dat").c_str());
}
