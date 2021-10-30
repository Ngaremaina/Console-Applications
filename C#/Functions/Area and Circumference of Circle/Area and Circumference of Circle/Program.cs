using System;

namespace Area_and_Circumference_of_Circle
{/*Write a program that computes both the area and circumference of a circle using functions.  */
    class Program
    {
        public void circle(int radius)
        {
            double area, circumference;
            area = Math.PI * radius * radius;
            circumference = 2*Math.PI * radius;
            Console.WriteLine("The area = " + area + " and the circumference = " + circumference);
        }
        static void Main(string[] args)
        {
            Program cir = new Program();
            int radius;
            Console.WriteLine("Enter the radius");
            radius = int.Parse(Console.ReadLine());

            cir.circle(radius);

        }
    }
}
