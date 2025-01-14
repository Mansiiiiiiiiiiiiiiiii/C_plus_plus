#include <iostream>
using namespace std;
#include<algorithm>

int py(int n1,int n2, int n3) {
    int arr[3]={n1,n2,n3};
    sort(arr,arr+3);
    return (arr[0]*arr[0] + arr[1]*arr[1]==arr[2]*arr[2]);
}

int main() {
    int n1,n2,n3;
    cout << "Enter numbers: ";
    cin >> n1>>n2>>n3;
    
    if (py(n1,n2,n3)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    return 0;
}
