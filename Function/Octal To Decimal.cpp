#include<iostream>
#include<cmath>
using namespace std;

// Function to convert octal to decimal
int octalToDeci(int octal){
    int decimal = 0, power = 0;
    
    // Convert each digit of octal to decimal
    while(octal > 0){
        int last_digit = octal % 10;  // Get the last digit of octal number
        decimal += last_digit * pow(8, power); // Add to decimal value
        octal /= 10;  // Remove the last digit from octal number
        power++;  // Increment the power of 8
    }
    
    return decimal;
}

int main(){
    int octal_num;
    
    // Input the octal number
    cout << "Enter an octal number: ";
    cin >> octal_num;
    
    // Convert octal to decimal
    int octal_value = octalToDeci(octal_num);
    
    // Output the decimal value
    cout << "The decimal value is: " << octal_value << endl;
    
    return 0;
}

