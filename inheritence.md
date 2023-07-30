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




              -->public view mode

              public members of the base class becomes the public member of the derived class

              --> private visibility mode

              public member of the base class beomes the private member of the derived class

              -->PRIVATE MEMBERS ARE NEVER INHERITED


              //default visibility mode is private

              -->PROTECTED

              private data member that can be inherited


-->Member function overriding
  Base class ma define vako methods haru derived class ma (same method name) bata aauda, teslai call  garda, 
  derived vitra ko method call huncha, it is called member function overriding!