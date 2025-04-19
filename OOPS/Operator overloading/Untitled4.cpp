#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    int a;
    int b;

    // Parameterized constructor
    Test(int x, int y) {
        a = x;
        b = y;
    }

    // Default constructor (needed for 'ans' object inside sum)
    Test() {}

    Test operator +(Test &ob) {
        Test ans;
        ans.a = a + ob.a;
        ans.b = b + ob.b;
        return ans;
    }
};

int main() {
    Test ob1(10, 20);
    Test ob2(20, 30);
    Test ans=ob1+ob2;

    return 0;
}

