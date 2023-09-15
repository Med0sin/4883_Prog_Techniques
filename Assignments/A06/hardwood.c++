#include <iostream>
#include <string>
#include <map>
#include <math.h>
using namespace std;



int main(){
    string Plantname;
    string current ; // variable for current plant be ing read in
    std::map< std:: string, float> plantnum;// intialzed a map for the trees and there numberacal amount 
   float amount = 0;
while (true ){
   if (Plantname == "0" ) break; // Exit the loop if 0 is read over in the input file 

    else{
        getline( cin , Plantname);// retrevies full line of info
        current = Plantname; // take the current line of info and puts into variable
        
    }   
       if (plantnum.find(current) != plantnum.end()) {
        plantnum[current]++;
        amount++;
    } 
    else {
        plantnum[current] = 1;
        amount++;
    }
}
//prints out the map of trees 
for (const auto &[k , v] : plantnum)
    std::cout << k << " " << ((v/ amount) *100  )<< "%" << std::endl;

    //cout << amount -1;

    //cout << "test";
    //cout<< "again";

    return 0; 
}