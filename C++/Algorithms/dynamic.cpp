#include<iostream>

using namespace std;

int dynamic[10][10],completed[10],n,dist=0;

void Input()
{
int i,j;

cout<<"Enter the number of cities: ";
cin>>n;

for(i=0;i < n;i++)
{
cout<<"\nEnter Elements of Row: "<<i+1<<"\n";

for( j=0;j < n;j++)
cin>>dynamic[i][j];

completed[i]=0;
}

cout<<"\n\nThe list is:";

for( i=0;i < n;i++)
{
cout<<"\n";

for(j=0;j < n;j++)
cout<<"\t"<<dynamic[i][j];
}
}

int least(int c)
{
int i,nc=999;
int min=999,kmin;

for(i=0;i < n;i++)
{
if((dynamic[c][i]!=0)&&(completed[i]==0))
if(dynamic[c][i]+dynamic[i][c] < min)
{
min=dynamic[i][0]+dynamic[c][i];
kmin=dynamic[c][i];
nc=i;
}
}

if(min!=999)
dist+=kmin;

return nc;
}

void mindist(int city)
{
int i,ncity;

completed[city]=1;

cout<<city+1<<" ";
ncity=least(city);

if(ncity==999)
{
ncity=0;
cout<<ncity+1;
dist+=dynamic[city][ncity];

return;
}

mindist(ncity);
}

int main()
{
Input();

cout<<"\n\nThe Path to use is:\n";
mindist(0);

cout<<"\n\nMinimum distance is "<<dist;

return 0;
}
