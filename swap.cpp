#include <iostream>
int get_int();
int swap(int &d, int &e);

int main(void)
{
    int a =  get_int();
    int b = get_int();
    std::cout<<"Before swap : " << a<<" , " << b;
    swap(a,b);
     std::cout<<"After swap : " << a<<" , " << b;
}

int get_int()
{
    int number;
    std::cout<<"Enter the number: ";
    std::cin >> number;
    return number;
}

int swap(int &d, int &e)
{
    int temp = d;
    d = e;
    e = temp;
}