#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    float a; cout<<"A: "; cin>> a;
    float b; cout<<"B: "; cin>> b;
    float c; cout<<"C: "; cin>> c;

    float D= b*b - 4*a*c;

    if(D>0)
    {
        float x1= (-b+ sqrt(D))/2*a;
        float x2= (-b- sqrt(D))/2*a;

        cout<< "x1: "<< x1 << endl;
        cout<< "x2: "<< x2 << endl;
    }
    else if(D==0)
    {
        float x= -b/(2*a);
        cout<< "x: "<< x<< endl;
    }
    else
    {
        cout<<"There are no real roots\n";
    }
}
