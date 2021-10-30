using System;

namespace Shapes
{/*Write a program that computes the area of either a rectangle, a circle or a right-angled triangle. 
  * The program should display a menu that enables the user to select the type of figure whose area he/she wants to compute.
  *Depending on the users choice, the program should prompt for the dimensions and perform the computations. 
  *The output should be: - The type of figure, the dimensions and the area. 
  *Define three functions: - one to compute the area of a rectangle, one the area of a circle and one the area of a triangle. 
  *(NB: 1. The calculation should be for only one figure at any one time. 
  *2. Computations should be done in the user-defined functions.)   
  */
    class Program
    {
        public void circle(int radius)
        {
            double area;
            area = Math.PI * radius * radius;
            Console.WriteLine("The area = " + area);
        }
        public void triangle(int length, int width, int height)
        {
            int area;
            area = length * width * height;
            Console.WriteLine("The area = " + area);
        }
        public void rectangle(int length, int width)
        {
            int area;
            area = length * width;
            Console.WriteLine("The area = " + area);
        }
        static void Main(string[] args)
        {
            Program shapes = new Program();
            int choice, len, wid, hei, rad;
            Console.WriteLine("Choose the shape you want to compute\n1.Rectangle\n2.Triangle\n3.Circle\n");
            Console.WriteLine("Enter your choice");
            choice = int.Parse(Console.ReadLine());
            if (choice == 1)
            {
                Console.WriteLine("Rectangle");
                Console.WriteLine("Enter the length");
                len = int.Parse(Console.ReadLine());
                Console.WriteLine("Enter the width");
                wid = int.Parse(Console.ReadLine());
                shapes.rectangle(len, wid);
            }
            else if (choice == 2)
            {
                Console.WriteLine("Triangle");
                Console.WriteLine("Enter the length");
                len = int.Parse(Console.ReadLine());
                Console.WriteLine("Enter the width");
                wid = int.Parse(Console.ReadLine());
                Console.WriteLine("Enter the height");
                hei = int.Parse(Console.ReadLine());
                shapes.triangle(len, wid,hei);
            }
            else if (choice == 3)
            {
                Console.WriteLine("Circle");
                Console.WriteLine("Enter the radius");
                rad = int.Parse(Console.ReadLine());       
                shapes.circle(rad);
            }
            else
            {
                Console.WriteLine("Invalid Choice");
            }

        }
    }
}
