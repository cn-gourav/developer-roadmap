// Largest of 3 number 

#include <iostream>
using namespace std;
int main() {

    int a,b,c;
    cin>>a>>b>>c;

    if(a > b and a >c){
        cout<<"a is greater then b ,c";
    }else if(b>a and b>c){
        cout<<"b is greater then a ,c";
    }else{
        cout<<"c is greater then a ,b";
    }
    
    return 0;
}