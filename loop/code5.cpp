// fibonacci number 

#include <iostream>
using namespace std;
int main() {

    int num , first = 0 , second = 1;
    cin>>num;

    for(int i=2; i<num; i++){
        int third = first + second;
        cout<<third<<" ";

        first = second;
        second = third;
    }
    
    return 0;
}