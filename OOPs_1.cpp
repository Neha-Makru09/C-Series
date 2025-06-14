#include <iostream>
#include <string> 
using namespace std; 

class Student{
    public: 
    int roll, age; 
    string name; 
    double cgpa; 

    void display(int r,int a, string n, double c){ 
        roll=r; 
        age=a; 
        name=n; 
        cgpa=c; 
        
        cout<<"The roll number of the student is: "<<roll<<endl; 
        cout<<"The age is: "<<age<<endl; 
        cout<<"The name is: "<<name<<endl; 
        cout<<"The cgpa is: "<<cgpa<<endl; 
    }
}; 

int main(){ 
    Student s1; 
    s1.display(101, 9.36,"Neha",20); 
    return 0; 
}
