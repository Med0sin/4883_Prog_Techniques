/*This Hashmat is a brave warrior who with his group of young 
soldiers moves from one place to another to fight against his 
opponents. Before Fighting he just calculates one thing, 
the difference between his soldier number and the opponent’s 
soldier number. From this difference he decides whether to fight or not. 
Hashmat’s soldier number is never greater than his opponent 
This is a absolute value problem.*/

#include <iostream>


using namespace std;

int main( ){
    long long int hashmatarmy, enemyarmy; // decalring the varibables for hash's army and the enemy 

    
    // while the number in the input file can be read input the values to variables 
    while( cin>> hashmatarmy >> enemyarmy){
            // take the absolute value of the two numbers.
        long long difference = abs(hashmatarmy - enemyarmy);
        // print the absolute value from the two number from the input file.
        cout << difference << endl;
    }

}