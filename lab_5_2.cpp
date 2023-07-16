#include <iostream>
using namespace std;

class Time{
private:
    int hr;
    int min;
    int sec;
public:
    //default constructor to set the time to 12 hr 0 min 0 sec
    Time() : hr(12), min(0), sec(0){};
    //parametrized constructor to set time according to user input
    Time(int seconds)
    {
        hr = seconds / 3600; 
        seconds %= 3600;

        min = seconds / 60;
        sec = seconds % 60;
    }

    //copy constrctor
    Time(Time& other) :  hr(other.hr), min(other.min), sec(other.sec) {}

    void displayTime()
    {
        cout << hr << "hr" << min << "min" << sec <<"sec"<<endl;
    }
};
int main()
{
    Time t1; //default constructor called, which initialises time to 12 hr 0 min 0 sec
    cout << "Time t1: ";
    t1.displayTime();

    int inputSeconds;
    std::cout << "Enter time in seconds: ";
    std::cin >> inputSeconds;

    Time t2(inputSeconds); // initialises time acc to input seconds
    std::cout << "Time t2: ";
    t2.displayTime();

    Time t3(t1); // Copy constructor called, copies the value of t1 to t3
    std::cout << "Time t3 (copied from t1): ";
    t3.displayTime();

    return 0;


}