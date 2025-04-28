#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
        	//n=total number of rows in a pattern
        	//i= current row number
        	//n-i ye bata dega ki kitne space ki jarurat hai 
            cout << " ";
            //kam hai space add karna taki sahi se align ho jae
        }
        
        // Print the first half of the row (ascending)
        for (int j = 1; j <= i; j++) {
        	//i = currently kitne rows hai
            cout << j;
        }

        // Print the second half of the row (descending)
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        
        cout << endl;
    }
    return 0;
}

