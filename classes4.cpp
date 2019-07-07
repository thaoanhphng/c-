#include <iostream>
using namespace std;

class Rectangle {

private:
    float height;
    float width;

public:
    void set_dimensions(float _height, float _width) {
        height = _height;
        width = _width;
    }
    float get_area() {
        return height*width;
    }
};

int main() {
    Rectangle thinkpad; // thinkpad is an instance
    thinkpad.set_dimensions(23.0, 33.8);
    cout << thinkpad.get_area() << endl;

    Rectangle ipad_pro;
    ipad_pro.set_dimensions(17.6, 25.2);
    float dif_area = thinkpad.get_area() - ipad_pro.get_area();
    cout << dif_area << endl;
}

