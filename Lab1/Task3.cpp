#include<iostream>
using namespace std;

class Box{
private:
    int* value;

public:
    // Default Constructor
    Box() {
        value = new int(0);
    }

    // Parametrized Constructor
    Box(int x) {
        value = new int(x);
    }

    // Deep Copy Constructor
    Box(const Box &b) {
        value = new int(*b.value); 
    }

    // Deep Copy Assignment Operator
    Box& operator=(const Box &other) {
        if(this != &other) {  
            delete value;
            value = new int(*other.value); 
        }
        return *this;
    }

    void showData() {
        cout << *value << "\n";
    }

    void changeData(int x) {
        *value = x;
    }

    ~Box() {
        delete value;
    }
};

int main(){
    Box b1(100);
    Box b2(b1); // deep copy constructor
    b2.changeData(50);
    b1.showData(); // prints 100, not affected
    b2.showData(); // prints 50

    Box b3(500);
    Box b4;       
    b4 = b3; // deep copy assignment
    b4.changeData(50);
    b3.showData(); // prints 500, not affected
    b4.showData(); // prints 50

    return 0;
}
