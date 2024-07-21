#include <iostream>  // cout
#include "student.h" // CPerson

// Github: https://github.com/ecuadros/test.git
// g++ -pthread -std=c++17 -o main main.cpp 

// Buscar por default en std.
// Esto sirve para simplificar std::cout a solamente cout
using namespace std;

int main(){
      // cout << "Test 2" << endl;
      CStudent obj1("Gourab", 1000, "IT"), obj2("Er", 2000, "CS"); // stud1 es un objeto

      obj1.print();
      obj1.setCode(1500);
      obj1.print();
      // obj1.m_id = 400; // Mejor c on getter y setter

      obj2.print();
      
      return 0;
}
