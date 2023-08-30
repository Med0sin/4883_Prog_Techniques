#include <bitset>
#include <iostream>
#define endl '\n'
#include <algorithm>
using namespace std;

int main(){

    int n;

    std :: size_t found;
    while(cin >> n);
    {
        std :: string binary = std :: bitset<128>(n).to_string();// to binary
        binary.erase(0, binary.find_first_not_of('0'));
        cout<< "The parity of ";
        cout<< binary<< " is ";
        cout << std:: count(binary.begin() ,binary.end(), '1')<< "(mod 2).";
    }
    return 0;


}