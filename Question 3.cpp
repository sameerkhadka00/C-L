#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float len) {
        length = len;
    }

    void setWidth(float wid) {
        width = wid;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    float area() {
        return length * width;
    }

    void show() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    int sameArea(Rectangle r) {
        if (this->area() == r.area())
            return 1;
        else
            return 0;
    }
};

int main() {
    Rectangle rect1, rect2;

    rect1.setLength(5);
    rect1.setWidth(2.5);

    rect2.setLength(5);
    rect2.setWidth(18.9);

    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout << "Area: " << rect1.area() << ", Perimeter: " << rect1.perimeter() << endl;

    cout << "\nRectangle 2:" << endl;
    rect2.show();
    cout << "Area: " << rect2.area() << ", Perimeter: " << rect2.perimeter() << endl;

    if (rect1.sameArea(rect2))
        cout << "\nBoth rectangles have the same area." << endl;
    else
        cout << "\nRectangles have different areas." << endl;

    rect1.setLength(15);
    rect1.setWidth(6.3);

    cout << "\nAfter updating dimensions for Rectangle 1:" << endl;
    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout << "Area: " << rect1.area() << ", Perimeter: " << rect1.perimeter() << endl;

    cout << "\nRectangle 2:" << endl;
    rect2.show();
    cout << "Area: " << rect2.area() << ", Perimeter: " << rect2.perimeter() << endl;

    if (rect1.sameArea(rect2))
        cout << "\nBoth rectangles have the same area." << endl;
    else
        cout << "\nRectangles have different areas." << endl;

    return 0;
}
