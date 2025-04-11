# include<iostream>
using namespace std;

int main(){
	int a=10;
	int *p = &a;
	int **q = &p;
	
	cout << & a << endl;
    cout << p << endl;
    cout << * q << endl;
    /* Next two statements will print same value i.e. address of p */
    cout << & p << endl;
    cout << q << endl;
    /* Next three statements will print same value i.e. value of a */
    cout << a << endl;
    cout << * p << endl;
    cout << ** q << endl;
    return 0;
}
