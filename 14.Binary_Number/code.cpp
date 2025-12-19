#include <iostream>
using namespace std;

void DecToBin(int binNum){
    int n = binNum;
    int DecNum = 0;
    int pow = 1;
    while(n > 0){
        int rem = n%10;
        DecNum += rem *  pow;
        pow =  pow * 2;
        n /= 10;
    }

    cout<<DecNum<<endl;
}

int main() {

    DecToBin(111111);
    DecToBin(10110);
    DecToBin(10011);
    DecToBin(110010);
    
    return 0;
}