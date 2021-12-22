#include <iostream>
#include <iomanip>
using namespace std;

long factorial(long num);
int main(){
    for (int ctr=0; ctr<=10;ctr++){
        cout<<setw(2)<<ctr<<"!="<<factorial(ctr)<<endl;

    }
    return 0;

}
long factorial(long num){
    if (num<=1)
        return 1;
    else
        return num*factorial(num-1);

}


