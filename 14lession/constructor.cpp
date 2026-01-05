#include <iostream>
using namespace std;

class Product
{
private:
    int x, y;
    static int s; // private
public:
    Product()
    {
        cout << "I am constructor"<<endl;
    }
    void setvalues(int a, int b)
    {
        x = a;
        y = b;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void print()
    {
        cout << "x= " << x << " " << "y= " << y << endl;
    }
    static int getstatic()
    {
        return s;
    }

    static void setstatic(int a)
    {
        s = a;
    }
};
int Product::s = 10;

int main()
{
    Product p1, p2, p3; // creted the three object then it'sa print the there time 

    return 0;
}