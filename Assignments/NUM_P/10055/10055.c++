/*This Hashmat is a brave warrior who with his group of young 
soldiers moves from one place to another to fight against his 
opponents. Before Fighting he just calculates one thing, 
the difference between his soldier number and the opponent’s 
soldier number. From this difference he decides whether to fight or not. 
Hashmat’s soldier number is never greater than his opponent 
This is a absolute value problem.*/

#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

int main( ){

    std:: ifstream inputfile; inputfile.open("inputfile.txt");

    int x;
    int y;

    if(inputfile.is_open()){
        inputfile>> x;
    };

    inputfile.close();
    cout << x;



};