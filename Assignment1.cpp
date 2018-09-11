/*
Bryan Dang
2295344
bdang@chapman.edu
CPSC 350 Data Structures and Algorithms
Assignment 1



*/


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//how to get User input
//http://www.cplusplus.com/doc/tutorial/basic_io/
//how to make a file
//http://www.cplusplus.com/doc/tutorial/files/
//make characters to uppercase
//http://www.cplusplus.com/reference/cctype/toupper/
int main()
{
  ofstream inputfile;
  string gene;
  cout << "Enter a DNA string: ";
  getline (cin, gene);
  cout <<  gene << ".\n";
  return 0;
  /*
  inputfile.open ("gene.txt");
  inputfile << "Writing this to a file. \n"
  inputfile.close();
  return 0;
  */
}
