#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile;
    myFile.open("test.txt");
    myFile << "Test Text\n";
    return 0;
}