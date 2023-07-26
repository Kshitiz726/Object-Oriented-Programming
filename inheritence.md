//Single Inheritance 
->Single parent, single child

A derived class with only one base class

(euta bata arko baneko)

    A

    |
    |
    |
    |
    v

    B

//Multiple Inheritance
->Multiple parents , 1 child

A derived class with more than one Base class

EMPLOYEE  ASSISTANT

    |     |     
    |     |
    v     V
    
    PROGRAMMER

    (programmer can do both task of employee and assistant(in general technical works))

    //Heirarchical inheritance

    Several derived classes from a single base class

          Employee
        |         |         
        |         |
        |         |
        v         v
   Programmer   Manager

   //MultiLevel Inheritence

   Deriving a class from a already derived class


   Animal ----> Mammal ----> Cow

   //Hybrid Inheritence

   --> Hybrid inheritance is a combination of multiple inheritence and multilevel inheritence

   --> A class is derived from two class in multiple inheritence

   --> Hoever one of the parent classes is not a base class

    example :   --->Mammal
              |           |
     Animal --|           |--> Bat
              |--->Bird   |