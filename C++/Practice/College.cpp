#include <iostream>
using namespace std;
class College
{
    public:
        College(float Programming, float Networking, float Web_design);
        void data_in(), compute(), data_out(), the_total();
    private:
        float sum, average, mark1, mark2, mark3;
};

int main()
{
    College clg(10, 11, 12);

    clg.data_in();
    clg.compute();
    clg.data_out();

    return 0;
}
College::College(float Programming, float Networking, float Web_design)
{
    Programming=mark1;
    Networking=mark2;
    Web_design=mark3;
}
void College::data_in()
{
    cout<<"Enter the marks for Programming -> ";
    cin>>mark1;
    cout<<"Enter the marks for Networking -> ";
    cin>>mark2;
    cout<<"Enter the marks for Web design -> ";
    cin>>mark3;
}
void College::compute()
{
    sum=mark1+mark2+mark3;
    average=sum/3;
}
void College::data_out()
{
    cout<<"The results for Programming, Networking and Web design are "<<mark1<<", "<<mark2<<" and "<<mark3;
    cout<<" and the sum of the units is "<<sum<<" and the average is "<<average;
}
