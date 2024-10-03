
#define Pirate_h

#include <iostream>
using namespace std;

class Pirate {
  private:
    string pirateName;
    string battleCry;
    int power;
    int tough;

  public:
    Pirate();//constructor
    ~Pirate();//deconstructor


    string getName();
    string getBattle();
    int getPower();
    int getTough();
    void initialize(string pirName, int pow, int tougher,string batCry);
};//end pirate class



Pirate::Pirate(){

}
Pirate::~Pirate(){

}

void Pirate::initialize(string pirateName0,int power0,int tough0,string battleCry0){
  pirateName=pirateName0;
  battleCry=battleCry0;
  power=power0;
  tough=tough0;
}//end initialize
string Pirate::getName() {
    return pirateName;
}//end getname

string Pirate::getBattle() {
    return battleCry;
}//end get battle

int Pirate::getPower() {
    return power;
}//end getpower

int Pirate::getTough() {
    return tough;
}//end gettough
