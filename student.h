#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <string>
#include "person.h"
using namespace std;

class CStudent : public CPerson
{
private:
    string m_program;
public:
    CStudent(string _name, long _code, string _program);
    ~CStudent(){}

    // Nuevos métodos van aquí
    void print();
    
    // getter & setter for m_name
    void setProgram(long _program){
        m_program = _program;
    }
    string getProgram(){
        return m_program;
    }
};

#endif