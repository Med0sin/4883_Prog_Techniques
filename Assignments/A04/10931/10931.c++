// #include <bitset>
// #include <iostream>
// #define endl '\n'
// #include <algorithm>
// using namespace std;

// int main(){

//     int n;

//     std :: size_t found;
//     while(cin >> n);
//     {
//         std :: string binary = std :: bitset<128>(n).to_string();// to binary
//         binary.erase(0, binary.find_first_not_of('0'));
//         cout<< "The parity of ";
//         cout<< binary<< " is ";
//         cout << std:: count(binary.begin() ,binary.end(), '1')<< "(mod 2).";
//     }
//     return 0;


// }

/* The code above is the first istance of code that was written inclass. the 
following code is the final result*/

#include <algorithm>   // Include the algorithm library for utility functions.
#include <bitset>      // Include the bitset library for handling binary representation.
#include <iostream>    // Include the input and output stream library.

#define endl '\n'      // Define a constant for the newline character for convenient printing.
using namespace std;  // Use the standard namespace to simplify code.

int main() {

  int n, p, k;         // Declare integer variables n (input), p (parity count), and k (temporary value).

  bool flag = false;   // A flag to indicate when to start printing bits.

  while (cin >> n) {   // Read integers from input until a zero is encountered.
    if (!n)
      break;           // Exit the loop if n is zero.

    p = 0;             // Initialize the parity count to zero.
    flag = false;      // Reset the flag to false.

    for (int i = 31; i >= 0; i--) {  // Iterate through the 32 bits of an integer (assuming 32-bit integers).
      k = n >> i;      // Right-shift n by i positions to check each bit from left to right.

      if (k & 1) {      // If the least significant bit of k is 1 (bit is set),
        flag = true;    // Set the flag to true to start printing bits.
        p++;            // Increment the parity count.
        cout << "1";    // Print "1" to represent the set bit.
      } else if (flag) {
        cout << "0";    // If flag is true and the bit is not set, print "0".
      }
    }
    cout << " " << p;   // Print the parity count for the current integer.
    cout << endl;       // Move to the next line for the next integer.
  }

  return 0;
}
