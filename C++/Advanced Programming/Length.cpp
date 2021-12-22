#include <iostream>
using namespace std;
class Length{
private:
    int feet, inches;
public:
    Length();
    void displayLen();

};
Length::Length(){
    feet=0;
    inches=0;
}
void Length::displayLen(){
    cout<<feet<<inches;

}
int main(){
    Length len;
    len.displayLen();
    return 0;

}
