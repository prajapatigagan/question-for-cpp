#include <iostream>
using namespace std;

class num {
private:
    int awa;
    int ama;

public:
    // Default constructor
    num() {
        awa = 0;
        ama = 0;
    }

    // Parameterized constructor
    num(int a, int b) {
        awa = a;
        ama = b;
    }

    // Function to display values
    void show() {
        cout << awa << " first " << ama << " second " << endl;
    }

    // Operator overloading (+)
    num operator+(num A1) {
        num temp;
        temp.awa = awa + A1.awa;
        temp.ama = ama + A1.ama;
        return temp;
    }
};

int main() {
    num a1(7, 8);
    num b1(7, 4);
    num c1;

    c1 = a1 + b1;  // Operator overloading
    c1.show();

    return 0;
}
