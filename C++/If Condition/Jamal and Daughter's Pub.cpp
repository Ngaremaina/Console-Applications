/*Write a program that when run, produces a menu showing beer brands
and their prices and then prompts the user enter his/her choice (1,2,3 or 4).
The user is then asked how many bottles he/she wants.
He is then given the total cost (depending on the cost of the beer chosen) as the output.
If he/she enters an invalid choice e.g. 8, he/she should get an error message.
Use the if…else statement
*/
#include <iostream>
using namespace std;
int main()
{
    int result, choice, bottles;
    cout<<"****Jamal and Daughters Pub****";
    cout<<"\n\nBeer brand\t\t\t Price\n";
    cout<<"\n1)Tusker\t\t\t 100/=";
    cout<<"\n2)Pilsner\t\t\t 120/=";
    cout<<"\n3)Smirnoff Ice\t\t\t 140/=";
    cout<<"\n4)White Cap\t\t\t 90/=";
    cout<<"\n\nEnter your choice:";
    cin>>choice;
    if (choice==1){
        cout<<"\nHow many bottles of Tusker do you want?";
        cin>>bottles;
        result=bottles*100;
        cout<<bottles<<" bottles of Tusker will cost you Kshs "<<result;
    }
    else if (choice==2){
        cout<<"\nHow many bottles of Pilsner do you want?";
        cin>>bottles;
        result=bottles*120;
        cout<<bottles<<" bottles of Pilsner will cost you Kshs "<<result;
    }
    else if (choice==3){
        cout<<"\nHow many bottles of Smirnoff Ice do you want?";
        cin>>bottles;
        result=bottles*140;
        cout<<bottles<<" bottles of Smirnoff Ice will cost you Kshs "<<result;
    }
    else if (choice==4){
        cout<<"\nHow many bottles of White Cap do you want?";
        cin>>bottles;
        result=bottles*90;
        cout<<bottles<<" bottles of White Cap will cost you Kshs "<<result;
    }
    else {
        cout<<"Enter the correct choice\n";
    }
    return 0;
}
