#include <string>

class Student {
  private:
    std::string name;
  public:
    Student(std::string);
    virtual void display();
    // [C++の基礎 : 仮想関数](https://www.s-cradle.com/developer/sophiaframework/tutorial/Cpp/virtual.html)
}; 

