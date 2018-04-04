#include<iostream>
#include<cmath>
using func=double(double);
double f(double);
double Trapezoide(double a, double b, double n, func f );
int main()
{ double a;
double b;
double n;   
    std::cout<<"escribe unos limites y el numero de intervalos"<<std::endl;
    std::cin>>a>>b>>n;
std::cout<<Trapezoide(a,b,n,std::atan)<<std::endl;
}
double Trapezoide(double a, double b, double n, func f)
{
    double h=(b-a)/n;
    double x;
    double suma=0;
    for(int ii=1;ii<n-1;++ii   )
    {
        x=a+ii*h;
        suma+=f(x);
        
    }
return suma*h;
    
}
