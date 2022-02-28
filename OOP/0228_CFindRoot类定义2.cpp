// CFindRoot类声明部分
class CFindRoot
{
public:
    void SetData(float x, float y, float z); // 成员函数声明
    void Find();
    void Display();

private:
    float a, b, c, delta;
    double x1, x2;
};
// CFindRoot类成员函数的实现
void CFindRoot::SetData(float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
    delta = b * b - 4 * a * c;
}
void CFindRoot::Find()
{
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        return;
    }
    else if (delta == 0)
    {
        x1 = x2 = (-b) / (2 * a);
        return;
    }
    else
    {
        x1 = (-b) / (2 * a);
        x2 = sqrt(-delta) / (2 * a);
    }
}
void CFindRoot::Display()
{
    if (delta > 0)
    {
        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
        return;
    }
    else if (delta == 0)
    {
        cout << "x1 = x2 = " << x1 << endl;
        return;
    }
    else
    {
        cout << "x1 = " << x1 << "+" << x2 << "i" << endl;
        cout << "x1 = " << x1 << "-" << x2 << "i" << endl;
    }
}