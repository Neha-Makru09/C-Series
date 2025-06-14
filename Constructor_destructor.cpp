#include <iostream> 
using namespace std; 

class parent{
    public: 
    string f="Kapil", m="Sanjila"; 
    int age=50; 
    
    parent(){ 
        cout<<"Parent class constructor"<<endl; 
    } 
    
    ~parent(){ 
        cout<<"Parent class destructor"<<endl; 
    } 
}; 

class child: public parent{ 
    public: 
    string n= "Neha"; 
    int a=20; 
    
    child(){ 
        cout<<"Child class constructor called"<<endl; 
        cout<<"Father's Name: "<<f<<endl;
        cout<<"Mother's Name: "<<m<<endl;
        cout<<"Child's Name: "<<n<<endl;
        cout<<"Child's age: "<<a<<endl; 
    } 
    
    ~child(){ 
        cout<<"Child class destructor called"<<endl;
    } 
}; 

int main(){ 
    parent p1; 
    child c1; 
    return 0; 
} 
