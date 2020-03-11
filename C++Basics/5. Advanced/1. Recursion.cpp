#include <iostream>

void printAsBinary(int N){

    if (N==0)
        return;
    
    printAsBinary(N/2);

    std::cout << N%2;
}

int main()
{
    printAsBinary(8);
}