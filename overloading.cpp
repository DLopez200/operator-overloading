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
    comp operator+(int other){
        comp result = comp(real + other, im);

        return result;
    }
    comp operator-(comp other){
        comp result = comp(real - other.real, im - other.im);

        return result;
    }
     comp operator-(int other){
        comp result = comp(real - other, im);

        return result;
    }

    void pretty_print(){
        cout << real << " + " << im << "i" << endl;
    }
};

comp operator+(int a, comp b){
    return comp(a +b .real, b.im);
}

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

    comp c4 = c1 +7;
    c3.pretty_print();

    c4.pretty_print();

    (c2-c1).pretty_print();


    comp c5 = 7 + c1; //by default we dont have code to do a normal num + a complex

    number a;
    a.x = 4;
    number b;
    b.x= 12;

    a + b;

    number c = a + b;
    cout << c.x << endl;

    return 0;
}