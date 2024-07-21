#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>
using namespace std;

// Definición de una clase
class CStudent{
private: // Se puedemn usar desde adentro de la clase solamente
    long   m_code;
    string m_name;
public:
    int    m_id; // Se puede usar desde afuera

public:  // Se pueden usar desde afuera también
    // Constructor para inicializar el objeto
    // Pueden haber varios (con diferentes parámetros)
    CStudent(string _name, long _code);

    // Destructor para terminar el objeto
    // Solo puede haber 1
    ~CStudent();

    // Nuevos métodos van aquí
    void print();

    // getter & setter for m_code
    void setCode(long _code){
        m_code = _code;
    }
    long getCode(){
        return m_code;
    }

    // getter & setter for m_name
    void setName(long _name){
        m_name = _name;
    }
    string getName(){
        return m_name;
    }
};

#endif