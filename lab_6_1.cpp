#include <iostream>

using namespace std;
class Design2;
class Design1{
    public:
    int code;
    int qty;
    float price;

    //constructor for design1
    Design1(int code, int qty, float price): code(code), qty(qty), price(price){}

    //type conversion from design1 to design2

    operator Design2() const;
};

class Design2{
    public:
    int code;
    float value;

    //constructor

    Design2(int code, float value): code(code), value(value){}

    //conversion 
    Design2& operator=(Design1 &d)
    {
        code = d.code;
        value = d.qty * d.price;
        return *this;
    }
};

//Defining our operator function outside the class, after proper definition of Design2 function
Design1::operator Design2() const{
    return Design2(code, qty*price);
}
int main(){
    Design1 D1(5,6,7);
    Design2 D2 = D1;

    std::cout << "Design1: Code=" << D1.code << ", Qty=" << D1.qty << ", Price=" << D1.price << std::endl;
    std::cout << "Design2: Code=" << D2.code << ", Value=" << D2.value << std::endl;



}