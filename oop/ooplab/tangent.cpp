#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<math.h>
using namespace std;

class Line{
  public:
  int slope;
  int intercept;
  
  public:
  Line(int slope, int inter)
  {
  this->slope = slope;
  this->intercept = inter;
  }
  
};
class Circle{

  public:
  float circumference;
  int centerX;
  int centerY;
  int radius;
  float area;
  
  public:
  Circle(int cx, int cy , int r)
  {
  this->centerX = cx;
  this->centerY = cy;
  this->radius= r;
  }
  
  void CalcArea()
  {
  float Area = M_PI* radius*radius;
  this->area = Area;
  }
  
  float getArea()
  {
    return area;
  }

  void CalcCircumference()
  {
    float Circumference = 2*M_PI*radius;
    this->circumference = Circumference;
  }
  
  float getCircumference()  
  {
    return circumference;
  }
  
  bool isTangent(float slope, int intercept)
  {
  int m = slope;
  int c = intercept;
  int x1 = centerX;
  int y1 = centerY;
  
   float a = abs(y1-m*x1 - c);
   float d = sqrt(1+ m*m);
   float ans = a/d;
     if(ans == radius)
     {
      return true;
     } 
     else{
      return false;
    }
  }
  
  bool isTangent(Line l)
  {
  int m = l.slope;
  int c = l.intercept;
  int x1 = centerX;
  int y1 = centerY;
  
   float a = abs(y1-m*x1 - c);
   float d = sqrt(1+ m*m);
   float ans = a/d;
   if(ans == radius)
   {
    return true;
   } 
   else{
    return false;
    }
  }
    
  bool isTangent(int x1, int x2, int y1, int y2)
  {
  int a= (y2-y1)*centerX;
  int b = (x2-x1)*centerY;
  int c = x2*y1 - y2*x1;
  int d = (y2-y1)*(y2-y1);
  int e = (x2-x1)*(x2-x1);
  int f= sqrt(d+e);
  float ans= (a-b+c)/f;
  if(ans == radius)
  {
    return true;
  }
  else{
    return false;
  }
  }
};


int main()
{
  Circle a(0,0,4);
  bool ans = a.isTangent(0,4);
  if(ans)
  {
  cout<<"It is Tangent"<<endl;
  }
  else{
  cout<<"It is not Tangent"<<endl;
  }
  
  bool ans1 = a.isTangent(0,1,5,5);
  if(ans1)
  {
  cout<<"It is Tangent"<<endl;
  }
  else{
  cout<<"It is not Tangent"<<endl;
  }
  
 
  Line l(0,4);

  bool ans2 = a.isTangent(l);
  if(ans2)
  {
    cout<<"It is tangent"<<endl;
  }
  else{
  cout<<"It is not a tangent" <<endl;
  }
  
  
  return 0;
}