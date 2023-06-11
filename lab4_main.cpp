#include <iostream>
#include <string>
#include "lab4_person.h"
using namespace std;
int main(void)
{
    person kshitiz;
    kshitiz.get_user();
    kshitiz.show_user();
    // parametrized constructor
    string name2 = "paudyal";
    person paudyal = person(name2,20);
    paudyal.show_user();
}