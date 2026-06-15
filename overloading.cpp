#include <iostream>
using namespace std;
class comp {
    public: 
    int real;
    int im; //a +bi

    comp(int r, int i){
        real = r;
        im = i;
    }

    comp operator+(comp other){
        comp result = comp(real + other.real, im + other.im);

        return result;
    }

    void pretty_print(){
        cout << real << " + " << im << "i" << endl;
    }
};
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

    comp c1 = comp (1, 2);
    comp c2 = comp (0, 8);
    comp c3 =  c1 + c2;

    c3.pretty_print();

    number a;
    a.x = 4;
    number b;
    b.x= 12;

    a + b;

    number c = a + b;
    cout << c.x << endl;

    return 0;
}