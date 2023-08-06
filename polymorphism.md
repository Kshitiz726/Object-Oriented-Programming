//polymorphism

allows object of different classes to be treated as objects of a common base class

//types of polymorphism

///compile time polymorphism (Static polymorphism)

the type of  polymorphism resolved at compile time. is achieved through function overloading and operator overloading

//runtime polymorphgism (Dynamic polymorphism)

The type of polymorphism is resolved at runtime. It is achieved through use of virtual function and is based on inheritence


//virtual function

jun function base class ma huncha, with virtual keyword, they are intended to be overridden in derived classes. When a derived class object is accessed through a base class pointer or refrence and a virtual function is called, the actual function to be executed is determined at run time. based on type of the object


//need of virtual destructor


whenever we are destructing object of derived, if we dont use virtual destructor, there will be memory leak, and only base destructor will be called, if there is object of derived class

//RTTi


