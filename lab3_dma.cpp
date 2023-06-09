#include <iostream>
#include "all_lab_functions.h"
using namespace std;
int main(void)
{
    
    memory_allocation();
    scan_user();
    cout << "before deallocation: ";
    cout << "\n";
    print_shits();
    memory_deallocation();
    cout << "after deallocation: ";
    cout << "\n";
    print_shits();
}