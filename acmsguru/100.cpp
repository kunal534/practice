#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // made a object from input file stream nameed inputfile 
    ifstream inputFile("input.txt");

    int a,b;
    inputFile>>a>>b;
    inputFile.close();

    a+=b;
    // made an objectg for output file stream
    ofstream outputfile("output.txt");
    outputfile<<a;
    outputfile.close();
    return 0;
}
