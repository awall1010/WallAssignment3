// Problem 1: Create a class called Pet with all the necessary files (.h , .cpp, etc.) This class should have
// member variables name (string), age (int), type ([‘dog’, ‘cat’]) (string) and weight (double). Make sure to
// include the appropriate accessor (getters), mutator (setters). Once the Pet class has been implemented,
// create two instances of Pet and print their details to console output.
#include<iostream>
#include<string>

using namespace std;

class Pet{ //create header file
public: //public methods
  Pet(); //deffault constructor
  Pet(string name, int age, string type, double weight); //overload constructor

  string getName(); //accessors
  int getAge();
  string getType();
  double getWeight();



  void setName(string name); //mutators
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);

private: //private member variables
  string m_name;
  unsigned int m_age;
  string m_type;
  double m_weight;

};
