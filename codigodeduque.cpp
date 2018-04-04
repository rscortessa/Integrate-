#include <iostream>
#include <cmath>

double simpson ( double a, double b, int n);

double f( double t);


int main()
{
  double t=0;
  double a=0, b=8;
  while(t<=b) {
    std::cout << t << "\t"<<simpson( a, t, 100)<< std::endl;
    t += 0.5;
  }
  return 0;
}

double  simpson (  double a, double b, int n)
{
  double h=(b-a)/n;
  int i=1, e=1;
  double x=a;
  double y=a+h;
  double sum1, sum2;
  while(i<=(n-2)/2) {
    x += 2*h;
    sum1 += f(x);
    i += 1;
  }
  while(e<=n/2) {
    sum2 += f(y);
    e += 1;
    y += 2*h;
  }
  double sum=h*(f(a)+2*sum1+4*sum2+f(b))/3;
  return sum;
}

double f(double t)
{  
  return 9.81*8*(1-exp(-10*t/80));
		 }
