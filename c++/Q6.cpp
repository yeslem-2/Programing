// C++ Program to find largest among three
// numbers using if-else-if ladder
#include <iostream>
using namespace std;

int main() {
    int a , b , c ;
    cout<<"sasir a: ";
    cin>>a;
    cout<<"sasir b: ";
    cin>>b;
    cout<<"sasir c: ";
    cin>>c;


    if (a >= b) {
        if (a >= c)
            cout << a;
        else
            cout << c;
    }
    else {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }

    return 0;
}
