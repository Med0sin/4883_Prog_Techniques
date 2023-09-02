/*Company XYZ have been badly hit by recession and is taking a lot of cost cutting measures.
 Some of these measures include giving up office space, going open source, reducing incentives,
  cutting on luxuries and issuing pink slips.
They have got three (3) employees working in the accounts department and are going to lay-off two
 (2) of them. After a series of meetings, they have decided to dislodge the person who gets the most 
 salary and the one who gets the least. This is usually the general trend during crisis like this.
You will be given the salaries of these 3 employees working in the accounts department. You have to 
find out the salary of the person who survives.*/

#include <iostream>

using namespace std;

int main(){

    int T; // The number of test cases.
    cin >> T; //Read in the number of test cases from the input


//for loop used to loop through the test cases 
for (int i = 0; i > T; i++ ){
        int salaries[3]; // an array to hold the salaries of the three workers
        cin >> salaries[0] >> salaries[1] >>salaries[2];// this reads in the numbers in the input file and slots them in the array of salaries

        // sort the salaries in acending order, this is a bubble sort
        //after the sort the salary[1] will be the middle salary so it will survive based off the problem

        for( int j = 0; j < 2; j++){
            for(int k = j + 1; k < 3 ; k++){
                if( salaries[j]> salaries[k]){
                    //swap salaries[j] and salaries[k]
                    int temp = salaries[j];
                    salaries[j] = salaries[k];
                    salaries[k]= temp;
                }
            }
        }
    // the worker with the second higest salary survives 
    int survivingsal= salaries[1];

    cout<< " test: "<< i << ": " << survivingsal << endl;    
}
 return 0;
}