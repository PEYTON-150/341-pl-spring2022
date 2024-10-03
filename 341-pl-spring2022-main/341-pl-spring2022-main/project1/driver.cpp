#include <iostream>
using namespace std;
#include <fstream>
#include "pirate.h"

int main() {
  Pirate polly;
  string pirateName2;
  string battleCry2;
  int power2;
  int tough2;
  Pirate arrayPirate[10];
  ifstream infile;
  infile.open("pirate.txt");
  if(!infile) {
    cout << "pirate.txt not opened" << endl;
    return 0;
  }// end if
int i = 0;
   while(i<10) {

    infile >> pirateName2;
    infile >> power2;
    infile >> tough2;
    getline(infile,battleCry2);
    polly.initialize(pirateName2,power2,tough2,battleCry2);
    arrayPirate[i]=polly;
cout << arrayPirate[i].getName() << endl;
cout << arrayPirate[i].getTough() << endl;
cout << arrayPirate[i].getBattle() << endl;
cout << arrayPirate[i].getPower() << endl;


i++;

 }//end while




  infile.close();

  return 0;
}//end main
