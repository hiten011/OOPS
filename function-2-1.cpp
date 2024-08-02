#include <iostream>
#include <cmath>
using namespace std;

void print_binary_str(std::string decimal_number)
{
    int i = 0;
    int base_represent[100] = {0};
    int remainder = 0;
    int number = stoi(decimal_number);

    while (number != 0)
    {
        remainder = number % 2;
        base_represent[i] = remainder;
        // cout<< base_represent[i];


        // Update the decimal number by dividing it by the base
        number = number / 2;
        i++;
    }
   
    for(int j = i-1; j >= 0; j--){
        
        cout<<base_represent[j];

    }

    std ::cout<< std:: endl;
    
}