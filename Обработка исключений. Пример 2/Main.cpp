#include <iostream>
using namespace std;

class Point
{
    int x, y;
public:
    Point(){}
    Point(int a, int b)
    {
        if (a < 0 || b < 0)
        {
            throw "A < 0 || B < 0";
        }
        x = a;
        y = b;
    }
    int SetX(int a)
    {
        if (a < 0)
        {
            throw-1;
            
        } 
        x = a;
    }
    int SetY(int b)
    {
        if (b < 0)
        {
            throw -1;
           
        } 
        y = b;
    }
};

int main()
{
    try
    {
        Point obj1(1, 2);
        Point obj2(-10, 4);

        cout << "After throw\n";
    }
    catch (int a) {
        cout << "res: " <<  endl;
    }
    catch (const char * str)
    {
        cout << "Catch exception " << str << endl;
    }
	catch (...)
	{
		cout << "Catch exception int "  << endl;
	}
    
    return 0;
}