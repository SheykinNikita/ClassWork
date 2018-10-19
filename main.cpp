#include <iostream>

class point {
public:
    int x;
    int y;

    void setx(int _x) {
        if (_x >= -100 && _x <= 100)
            std::cout << _x << '\n';
        else
            std::cout << "Incorrect x\n";
    }

    void sety(int _y) {
        if (_y >= -100 && _y <= 100)
            std::cout << _y << '\n';
        else
        std::cout << "Incorrect y\n";
    }
};
    int main() {
        point a;
        a.setx(50);
        a.sety(111);
        return 0;
    }
