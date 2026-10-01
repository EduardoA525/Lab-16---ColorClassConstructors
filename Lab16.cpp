/*
Modify your Lab 14, Color class, such that it leverages constructors. 
Create a default constructor, a parameter constructor, 
    and at least one partial constructor.

In main(), instantiate a variety of Color objects using a variety of types of constructors.
*/

//Eduardo Avila
//COMSC - 210 - 5293
//Lab 14 - Color Class

#include <iostream>
using namespace std;

//Color class
class Color {

private:
    int red;
    int green;
    int blue;

public: 
    //Setters and Getters
    int getRed()        { return red; }
    void setRed(int r)  { red = r; }

    int getGreen()        { return green; }
    void setGreen(int g)  { green = g; }

    int getBlue()        { return blue; }
    void setBlue(int b)  { blue = b; }

    //Print function for output
    void print(){
        cout << "Red Value: " << red << endl;
        cout << "Green Value: " << green << endl;
        cout << "Blue Value: " << blue << endl;
        cout << "---------------" << endl;
    }
};

int main(){

    //Create colors and put random data in them
    Color color1;

    color1.setRed(100);
    color1.setGreen(20);
    color1.setBlue(0);

    color1.print();

    Color color2;

    color2.setRed(0);
    color2.setGreen(230);
    color2.setBlue(80);

    color2.print();

    Color color3;

    color3.setRed(130);
    color3.setGreen(90);
    color3.setBlue(245);

    color3.print();

    return 0;
}