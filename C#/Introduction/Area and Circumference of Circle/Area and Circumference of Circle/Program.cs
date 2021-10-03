using System;

namespace Area_and_Circumference_of_Circle
{
    class Program
    {/*Write a program that accepts the radius of a circle
      * and computes both it’s area and circumference.*/
        static void Main(string[] args)
        {
            double area, circumference, radius;
            Console.WriteLine("Enter the radius");
            radius = int.Parse(Console.ReadLine());
            area = Math.PI * Math.Pow(radius, 2);
            circumference = 2 * Math.PI * radius;
            Console.WriteLine("The area is " + area + " and circumference is " + circumference);
            

        }
    }
}
