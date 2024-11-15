#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    
    private:
        int j;

    protected:
        int k;

    public:
        Base()
        {
            i=10;
            j=20;
            k=30;
        }

        void gun()
        {
            cout<<"i"<<"\n";  // Allowed  
            cout<<"j"<<"\n";  // Allowed
            cout<<"k"<<"\n";  // Allowed 
        }
};

class Derived : public Base
{
    public:
        void fun()
        {
            cout<<"i"<<"\n";   // Allowed
            cout<<"j"<<"\n";   // Not allowed = because it is private access specifier
            cout<<"k"<<"\n";   // Allowed
        }
};

int main()
{
    Base bobj;

    cout<<bobj.i<<"\n";      // Allowed
    cout<<bobj.j<<"\n";      // Not Allowed
    cout<<bobj.k<<"\n";      // Not Allowed

    return 0;
}