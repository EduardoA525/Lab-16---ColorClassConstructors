//Eduardo Avila
//COMSC - 210 - 5293
//Lab 16 - Color Class w/ Constructors

#include <iostream>
using namespace std;

//Color class
class Color {

private:
    int red;
    int green;
    int blue;

public: 
    //Constructors
    Color(){ // Default Constructor
        red = 0;
        green = 0;
        blue = 0;
    }

    Color(int r){ //Partial Constructor
        red = r;
        green = 0;
        blue = 0;
    }

    Color(int r, int g, int b){ //Full Constructor
        red = r;
        green = g;
        blue = b;
    }

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

    //Create colors with constructors and put random data in them
    Color color1;
    Color color2(100);
    Color color3(45,255,160);

    color1.print();
    color2.print();
    color3.print();

    return 0;
}