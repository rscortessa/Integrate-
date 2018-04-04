#include<iostream>
#include<cmath>
using func=double(double);
double f(double);
double biseccion(double a, double b,double n, double eps,func f);
int main ()
{
  double a;
  double b;
  double n;
  double eps;
  
  std::cout<<"Escribe un limite inferior  uno superior, un numero de pasos, ademas de un epsilon"<<std::endl;
  std::cin>>a>>b>>n>>eps;
  
  std::cout<<biseccion(a,b,eps,f)<<std::endl;
}
double biseccion(double a, double b,double n, double eps,func f)
{
  int x=0
    double xo=a;
  double x1=b;
  double xt=(x1+xo)/2;
  while(x<n)
      {
	if(f(x)*f(xo)<0)
	  {
	    if(std::abs(f(xt))<eps)
	      { x=n;
	      }
	    else
	      {
		x1=xt;
	      }
	  }
	else
	  {
	    x1=2*xt-xo;
	    xo=xt;
	    
		
	
	
 

