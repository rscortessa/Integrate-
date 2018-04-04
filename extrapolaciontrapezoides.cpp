#include<iostream>
#include<cmath>
#include<cstdio>
using func=double(double);
double f(double x );
double Trapezoide(double a, double b, double n);
double extrapolacionrichardson(double a, double b, double n);
int main()
{ double a;
double b;
double n;
 std::cout.precision(16);
 std::cout.setf(std::ios::scientific);
 
    std::cout<<"escribe unos limites y el numero de intervalos"<<std::endl;
    std::cin>>a>>b>>n;
    std::printf("%25.16le\n",extrapolacionrichardson(a,b,n));
}
double Trapezoide(double a, double b, double n)
{
    double h=(b-a)/n;
    double x;
    double suma=0.5*(f(a)+f(b));
    for(int ii=1;ii<n-1;++ii   )
    {
        x=a+ii*h;
        suma+=f(x);

    }
return suma*h;
}
 double extrapolacionrichardson(double a, double b, double n)
 {
   double resultado;
   resultado=Trapezoide(a,b,2*n)+(1/3*(Trapezoide(a,b,2*n)-Trapezoide(a,b,n)));
   

}
double f(double x)
{
  return 4/(1+std::pow(x,2));
}
