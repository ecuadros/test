#include <iostream>  // cout
#include "student.h" // CStudent

// Github: https://github.com/ecuadros/test.git
// g++ -pthread -std=c++17 -o main main.cpp 

// Buscar por default en std.
// Esto sirve para simplificar std::cout a solamente cout
using namespace std;

int main(){
      // cout << "Test 2" << endl;
      CStudent obj1("Gourab", 1000), obj2("Er", 2000); // stud1 es un objeto

      obj1.print();
      obj2.print();
      return 0;
}
