#include <iostream>
using namespace std;

class Time{
private:
    int hours, minutes, seconds;

public:
    Time();
    Tim(int hrs, int mins, int secs);
    void getHour();
    void getSec();
    void getMinute();
    int addTime(int hours, int minutes);

    Time& operator++();
    Time operator++(int);

    Time& operator--();
    Time operator--(int);

};

Time::Time(){
    hours=0;
    seconds=0;
    minutes=0;
}
Time::Tim(int hrs, int mins, int secs){
    hrs=hours;
    mins=minutes;
    secs=seconds;

    return hrs, mins, secs;


}
int Time::addTime(int hours, int minutes){
    seconds=hours+minutes;
    cout<<seconds;
    return seconds;
}

Time& Time::operator++(){
    hours++;
    minutes++;
    return *this;
}
Time Time::operator++(int){
    Time temp=*this;
    ++*this;
    return temp;
}

Time& Time::operator--(){
    hours--;
    minutes++;
    return *this;
}
Time Time::operator--(int){
    Time temp=*this;
    --*this;
    return temp;
}


int main(){
    Time tyme;
    int hrs, mins, secs;
    hrs=70;
    mins=34;

    cout<<hrs<<":"<<mins<<":"<<secs<<"\n";

    tyme.addTime(hrs, mins);

    ++tyme;
    tyme.operator++();;

    --tyme;
    tyme.operator--();

    return 0;
}




