#include <iostream>
using namespace std;

void DecToBin(int DecNum){
    int BinNum = 0;
    while(DecNum > 0){
        int temp = DecNum%2;
        BinNum = (BinNum * 10) + temp;
        DecNum /=2;
    }
    cout<<BinNum;
}

int main() {

    DecToBin(5);
    
    return 0;
}