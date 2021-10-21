// https://www.hackerrank.com/challenges/rectangle-area/problem?isFullScreen=true
// Not a Good Example for Inheritance Intro

#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    public:
    double w {0.0};
    double h {0.0};
    
    public: 
    void display() 
    {
        cout << w << " " << h << endl;
    } 
};

class RectangleArea : public Rectangle {
    
    public:
    void read_input() {
        cin >> w >> h;
    }
    
    void display () {
        cout << w*h << endl;
        
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}