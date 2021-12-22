#include <iostream>
#include <math.h>
using namespace std;

class Square {
   public:
      // constructor
      Square(int i = 0) {
         square=sum=i;

      }

      // interface to outside world
      void addInt(int number) {
         sum+=number;
         square=pow(sum,2);

      }

      // interface to outside world
      int getResult() {
         return square;
      };

   private:
      // hidden data from outside world
      int square, sum;
};

int main() {
   Square a;

   a.addInt(2);
   a.addInt(3);
   a.addInt(4);


   cout << "Square is " << a.getResult() <<endl;
   return 0;
}
