#include <iostream>
#include <string> 
using namespace std; 

class Student{
    public: 
    int roll=13, age=20; 
    string name="Neha"; 
    double cgpa=9.36; 

    Student(){ 
        cout<<name<<" "<<roll<<" "<<age<<" "<<cgpa; 
    } 
}; 

int main(){ 
    Student s1; 
    return 0; 
}
