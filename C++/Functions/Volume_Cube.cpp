#include <iostream>
using namespace std;
double calc_vol(double length, double height, double breadth);
int main()
{
  float len, wid, hei, volume;
  cout<<"Enter the length\n";
  cin>> len;
  cout<<"Enter the height\n";
  cin>>wid;
  cout<<"Enter the breadth\n";
  cin>>hei;
  volume=calc_vol(len, wid, hei);
  cout<<"The volume of the cube is "<<volume;
  return 0;
}
double calc_vol(double length, double height, double breadth)
{
    float vol;
    vol=height*length*breadth;
    return vol;
}
