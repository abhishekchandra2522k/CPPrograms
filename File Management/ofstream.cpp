#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile;
    myFile.open("test.txt");
    //OR // ofstream myFile("test.txt");
    myFile << "Test Text\n";
    myFile.close();
    return 0;
}