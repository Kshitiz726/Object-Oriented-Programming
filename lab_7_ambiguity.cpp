#include <iostream>

class Animal {
public:
    void move() {
        std::cout << "Animal is moving." << std::endl;
    }
};

class Bird : public virtual Animal {

};

class Fish : public virtual Animal {

};

class FlyingFish : public Bird, public Fish {
};

int main() {
    FlyingFish ff;
    ff.move(); // Resolves the ambiguity using virtual inheritance
    return 0;
}
