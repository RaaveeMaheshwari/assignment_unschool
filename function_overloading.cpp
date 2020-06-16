#include <iostream>

using namespace std;
float area(float);
float area(float,float);
double area(double,double);
int main()
{
    int ch;
    float r,ht,bas;
    double lt,bt;
    cout << "Choose shape : 1 for circle or 2 for triangle or 3 for rectangle \n";
    cin >> ch;
    if(ch == 1)
    {
        cout<<"\nEnter radius of circle: ";
        cin>>r;
        cout << "\nArea of circle is " << area(r)<<" sq. units" ;
    }
    else if(ch== 2)
    {
        cout<<"\nEnter height and  base of triangle: ";
        cin>>ht>>bas;
        cout<< "\nArea of triangle is "<< area(ht,bas)<<" sq. units";
    }
    else if(ch== 3)
    {
        cout<<"\nEnter lenght and  breadth of rectangle: ";
        cin>>lt>>bt;
        cout<< "\nArea of rectangle is " << area(lt,bt) << " sq. units";
    }
    else
        cout<<"\nNot a correct choice";
    return 0;
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bas,float ht)
{
   return((bas*ht)/2);
}
double area(double lt,double bt)
{
    return(lt * bt);
}
