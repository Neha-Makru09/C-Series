#include <iostream> 
using namespace std; 

int main(){ 
    
    int n; 
    cout<<"Enter the size :"<<endl; 
    cin>>n; 
    cout<<endl; 
    for (int i=1;i<=n;i++){
        for (int j=n;j>=i;j--){ 
           cout<<(char)(j+64)<<" "; 
    }
    cout<<endl; 
}
    return 0;
} 
