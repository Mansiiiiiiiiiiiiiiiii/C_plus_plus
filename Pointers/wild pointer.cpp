#include<iostream>
using namespace std;
int main(){
int * p; /* wild pointer */
int a = 10;
p = & a; /* p is not a wild pointer now*/
* p = 12; /* This is fine. Value of a is changed */
}
