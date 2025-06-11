#include <iostream> 
using namespace std; 

int main(){ 
    
    int n; 
    cout<<"Enter the size :"<<endl; 
    cin>>n; 
    int a=1; 
    cout<<endl; 
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){ 
           cout<<a<<" "; 
           a++; 
    }
    cout<<endl; 
}
    return 0;
} 
