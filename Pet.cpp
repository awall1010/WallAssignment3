#include "Pet.h"

Pet::Pet(){ //deffault constructor
  m_name = "";
  m_age=0;
  m_type="";
  m_weight=0.0;
}
Pet::Pet(string name, int age, string type, double weight){ //overload constructor
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight=weight;

}

string Pet::getName(){ //acessors
  return m_name;
}
int Pet::getAge(){
  return m_age;
}
string Pet::getType(){
  return m_type;
}
double Pet::getWeight(){
  return m_weight;
}

void Pet::setName(string name){ //mutators
  m_name=name;
}
void Pet::setAge(int age){
  m_age = age;
}
void Pet::setType(string type){
  m_type = type;
}
void Pet::setWeight(double weight){
  m_weight=weight;
}
