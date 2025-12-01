#include <iostream>
using namespace std;
int main() {

    int user , cubeSum=0;
    cin>>user;

    int num = user;
    

    for ( ; num != 0; ){
        int temp = num%10;
        cubeSum += (temp *temp *temp);
        num = num /10;
    }

    if(user == cubeSum){
        cout<<cubeSum<<" is an Armstrong Number\n";
    }else{
        cout<<cubeSum<<" is not an Armstrong Number";
    }

    return 0;
}