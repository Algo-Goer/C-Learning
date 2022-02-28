#include <iostream>
using namespace std;
class CRect
{
public:
    void set(double t, double lef, double len, double wid);
    double area();

private:
    double left;
    double top;
    double length;
    double width;
};
void CRect::set(double t, double lef, double len, double wid)
{
    top = t;  // 相当于this->top = t
    left = lef;
    length = len;
    width = wid;
}
double CRect::area()
{
    return length * width;
}
int main()
{
    CRect r1, r2;
    r1.set(10, 10, 10, 10);
    r2.set(200, 200, 15, 25);
    cout << "The area of the first rectangle is: " << r1.area() << endl;
    cout << "The area of the second rectangle is: " << r2.area() << endl;
    return 0;
}