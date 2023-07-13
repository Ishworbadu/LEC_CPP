#include<iostream>
using namespace std;

class complex{
    protected:
    float real,imag;
    public:
    complex(){}
    complex(float re){real=re;}
    complex(float re,float im)
    {
        real=re;
        imag=im;      
    }
    complex operator+(complex cc);
    void showdata()
    {
        cout<<"("<<real<<","<<imag<<")";

    }
};
complex complex::operator +(complex cc)
{
    float rr=real+cc.real;
    float ri=imag+cc.imag;
    return complex (rr,ri);

}
class dcomplex:public complex 
{
    public:
    dcomplex(){}
    dcomplex (float re):complex(re){}
    dcomplex(float re,float im):complex (re,im){}
    dcomplex(complex cc):complex(cc){}
    dcomplex operator +(dcomplex dd);
    dcomplex operator-(dcomplex dd);  
};
dcomplex dcomplex ::operator +(dcomplex dd)
{
    dcomplex r;
    r=complex::operator + (dd);
    return r;
  
};
dcomplex dcomplex ::operator -(dcomplex dd)
{
    float rr=real-dd.real;
    float ri=imag-dd.imag;
    return dcomplex(rr,ri);
}
int main()
{
    dcomplex c1(5.6,7.9),c2(3.2,4.5),c3,c4;
    c3=c1+c2;
    c4=c1-c2;
    cout<<"\nc1=";c1.showdata();
    cout<<"\nc1=";c2.showdata();
    cout<<"\nc1=";c3.showdata();
    cout<<"\nc1=";c4.showdata();
     system("pause");
     
}