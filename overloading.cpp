#include <iostream>
using namespace std;

class number{
    public:
    int x;

    number operator+(number b){
        number result;
        result.x = x +b.x;
        return result;
    }
};

int main(){
    /*Operator:
    5 + 12;
    arr[123];
    cout <<12;
    f();*/

    number a;
    a.x = 4;
    number b;
    b.x= 12;

    a + b;

    number c = a + b;
    cout << c.x << endl;

    return 0;
}