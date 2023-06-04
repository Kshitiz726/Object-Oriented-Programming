#include <iostream>
#include <string>
namespace BCT
{
    int class_room_number = 420;

    int number_of_students = 69;
    
    std::string name_of_cr = "Lijan Shrestha";

    void print_number_students()
    {
        std::cout << number_of_students;
    }
      void class_room_cr()
    {
        std::cout << name_of_cr;
    }
    
}
namespace BEI
{
    int class_room_number = 34;

    int number_of_students = 35;
    
    std::string name_of_cr = "Utsab Dahal";

    void print_number_students()
    {
        std::cout << number_of_students;
    }
      void class_room_cr()
    {
        std::cout << name_of_cr;
    }
    
}
int main(void)
{
    //retreiving the data without using namespace 
    
    std::cout <<"Class number of BCT: "<< BCT::class_room_number<<"\n";
    std::cout<<"Number of students in BCT: " << BCT::number_of_students<<"\n";
    std::cout<<"BCT CR:"<<"\n";
    BCT::class_room_cr();
    std::cout <<"\n";

     //retreiving the data using namespace 
      
    using namespace BEI;
    std::cout<<"Class number of BEI: "<< class_room_number<<"\n";
    std::cout<<"Number of students in BEI: " << number_of_students<<"\n";
    std::cout<<"BEI CR:";
    class_room_cr();
    std::cout <<"\n";

}