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
    for(double ii=1;ii<n;++ii)
    {
      double y0=f(a+(ii-1)*h);
      double y1=f(a+(ii-0.5)*h);
      double y2=f(a+(ii)*h);
      
      suma+=y0+4*y1+y2;  
        
    }
    return suma*h/6;
    
    
}
