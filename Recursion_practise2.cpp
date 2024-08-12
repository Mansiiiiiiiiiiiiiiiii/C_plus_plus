# include<iostream>
using namespace std;

void fun(int n){
    if (n == 0)
        return;
    fun(n / 2);
    cout << n % 2 << " ";
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Exit with error code
    }
    
    cout << "Binary representation of " << num << " is: ";
    fun(num);
    cout << endl;
    
    return 0;
}

