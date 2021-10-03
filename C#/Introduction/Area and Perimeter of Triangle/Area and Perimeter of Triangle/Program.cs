using System;

namespace Area_and_Perimeter_of_Triangle
{
    class Program
    {/*Write a program that computes the area of a right-angled triangle.*/
        static void Main(string[] args)
        {
            int a, b, c, area, perimeter;
            Console.WriteLine("Enter the sides");
            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());
            c = int.Parse(Console.ReadLine());

            area = a + b + c;
            perimeter = a * b * c;

            Console.WriteLine("The area is " + area + " and perimeter is " + perimeter);
        }
    }
}
