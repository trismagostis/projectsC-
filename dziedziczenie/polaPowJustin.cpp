#include <iostream>
using namespace std;

class Shapes
{
public:
    float width;
    string name;
    virtual float displayArea() = 0;
};

class Square : public Shapes
{
public:
    Square(float newHeight)
    {
        width = newHeight;
        name = "square";
    }
    
    float displayArea()
    {
        return width * width;
    };
};

class Triangle : public Shapes
{
public:
    float height;
    Triangle(float newHeight, float newWidth)
    {
        height = newHeight;
        width = newWidth;
        name = "triangle";
    }
    
    float displayArea()
    {
        return height * width * 0.5;
    };
};

class Rectangle : public Shapes
{
public:
    float height;
    Rectangle(float newHeight, float newWidth)
    {
        height = newHeight;
        width = newWidth;
        name = "rectangle";
    }
   
    float displayArea()
    {
        return height * width;
    };
};

class Circle : public Shapes
{
public:
    Circle(float newWidth)
    {
        width = newWidth;
        name = "circle";
    }
    
    float displayArea()
    {
        return 3.14 * (0.5 * width) * (0.5 * width);
    };
};
void display(Shapes &bob)
{
    cout <<"pole "<<bob.name<<" "<< bob.displayArea()  <<endl;
}

int main()
{

    Square ShapeSquare(5);
    display(ShapeSquare);

    Triangle ShapeTriangle(5, 5);
    display(ShapeTriangle);

    Rectangle ShapeRectangle(5, 5);
    display(ShapeRectangle);

    Circle ShapeCircle(5.5);
    display(ShapeCircle);

    return 0;
}