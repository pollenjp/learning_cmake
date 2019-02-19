#include <iostream>
#include "Student.h"

// ここの記法がいまいちわからない

Student::Student(std::string name):name(name){}

void Student::display(){
  std::cout << "A student with name " << this -> name << std::endl;
}


