#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

template <class T>
void printAsBinary(int N, T &stream)
{

    if (N == 0)
        return;

    printAsBinary(N / 2, stream);

    stream << N % 2;
}

int main()
{
    // String stream
    std::stringstream sstream;
    printAsBinary(31, sstream);
    std::string binaryNumber = sstream.str();

    // Console
    printAsBinary(311, std::cout);

    // File
    std::ofstream file;
    file.open("Test.txt");
    printAsBinary(90, file);
}