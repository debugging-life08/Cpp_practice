
#include <iostream>
using namespace std;

class Complex {
    int real, img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Overload + operator
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    // Overload - operator
    Complex operator-(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }

    // Overload == operator
    bool operator==(Complex c) {
        return (real == c.real && img == c.img);
    }

    // Display complex number
    void display() {
        cout << real;
        if (img >= 0)
            cout << " + " << img << "i";
        else
            cout << " - " << -img << "i";
        cout << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 4);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    if (c1 == c2)
        cout << "Both complex numbers are equal." << endl;
    else
        cout << "Both complex numbers are not equal." << endl;

    return 0;
}
