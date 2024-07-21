#include <iostream>
#include "person.h"
using namespace std;

CPerson::CPerson(string _name, long _code)
        : m_name(_name),
          m_code(_code)
{}

CPerson::~CPerson(){}

void CPerson::print(){
    cout << "Name: " << m_name << ", Code: " << m_code << endl;
}
