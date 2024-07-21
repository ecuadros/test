#include <iostream>
#include "student.h"
using namespace std;

CStudent::CStudent(string _name, long _code, string _program)
        : CPerson(_name, _code),
          m_program(_program)
{}

void CStudent::print(){
    CPerson::print(); // Llamar al print del padre
    cout << "Program: " << m_program << endl;
    cout << " ======= " << endl;
}