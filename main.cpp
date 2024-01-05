#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    int o,p,q;
    double n,g;
    cout<<"Enter number 1 for +,-,/,*,%. or 2 for sin,cos,tan,tanf:\n";
    cin>>p;
    switch(p)
    {
        case 1:
        cout<<"Enter 2 numbers:\n";
        cin>>a>>b;
        cout<<"1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n:";
        cin>>o;
        switch(o)
        {
        case 1:
        c=a+b;
        cout<<"Addition is:"<<c;
        break;
        case 2:
        c=a-b;
        cout<<"Subtraction is:"<<c;
        break;
        case 3:
        c=a*b;
        cout<<"Multiplication is:"<<c;
        break;
        case 4:
        c=a/b;
        cout<<"Division is:"<<c;
        break;
        case 5:
        c=a%b;
        cout<<"Modulus is:"<<c;
        break;
        default:
        	cout<<"Invalid";
        	break;
    }
        break;
        case 2:
        cout<<"\nEnter a number:";
        cin>>n;
        cout<<"Enter 1.Sin\n2.Cos\n3.Tan:\n4.Tanf:\n";
        cin>>q;
        switch(q)
        {
            cout<<"Enter a number:";
            case 1:
            g=sin(n);
            cout<<"Sin:"<<g;
            break;
            case 2:
            g=cos(n);
            cout<<"Cos:"<<g;
            break;
            case 3:
            g=tan(n);
            cout<<"Sin:"<<g;
            break;
            case 4:
            g=tanf(n);
            cout<<"Tanf:"<<g;
            break;
        }
        break;
    }
    return 0;
}
