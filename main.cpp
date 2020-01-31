#include "Pet.h"
int main(int argc, char const *argv[]) {
  Pet *p = new Pet("Aidan", 12,"Dog", 70.0); //create two instances of pets
  Pet *p2 = new Pet("Anthony", 13, "Cat", 12.3);

  cout<< "name: " <<p->getName()<< " age: " << p->getAge()<< " type: " <<p->getType()<< " age: "<< p->getAge()<<endl; //print out attributes
  cout<< "name: " <<p2->getName()<< " age: " << p2->getAge()<< " type: " <<p2->getType()<< " age: "<< p2->getAge()<<endl;
  delete p; //delete the pets just created to free memory
  delete p2;
  return 0;
}
