//constant data member
// cannot be-changed , once it is initialized with certain value
// constant member function
// which doesnt modify the state of object , as it was before

//class to class conversion

--->>block 1
operator Design2() const;


-->>block 2
Design2& operator= (Design& d1)
{
    code = d1.code;
    value = qty * price;
    return *this; //generalises
}

-->>block 3

Design1::operator Design2() const{
    return Design2 (code, qty*price);
}

//We defined it outside the class, just beacause to define after our Design2 is completely degfined to use in operator definition
