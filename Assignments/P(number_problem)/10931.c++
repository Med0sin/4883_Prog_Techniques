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

#include <algorithm>
#include <bitset>
#include <iostream>

#define endl '\n'
using namespace std;

int main() {

  int n, p, k;

  bool flag = false;

  while (cin >> n) {
    if (!n)
      break;
    p = 0;
    flag = false;

    for (int i = 31; i >= 0; i--) {
      k = n >> i;
      if (k & 1) {
        flag = true;
        p++;
        cout << "1";
      } else if(flag) {
        cout << "0";
      }
    }
    cout<<" "<<p;
    cout << endl;
  }

  return 0;
}