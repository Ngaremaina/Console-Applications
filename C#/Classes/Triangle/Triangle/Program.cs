using System;

namespace Triangle
{
    class Program
    {/*Create a class called Triangle that stores the length of the base and height of a right-angled triangle 
      * in two instance variables. Include a constructor that sets these values. 
      * 
      * Define two functions. The first is hypot( ), which returns the length of the hypotenuse. 
      * The second is area( ), which returns the area of the triangle.                                                                                            (8 mks)
         Write an appropriate driver program for the class created above.                  

      */
        static void Main(string[] args)
        {
            Triangle tr = new Triangle();
            tr.hypot();
            tr.area();
        }
    }
}
