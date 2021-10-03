using System;

namespace Area_and_Perimeter_of_Rectangle
{
    class Program
    {/*Write a program that accepts the width and length of a rectangle
      * and computes both it’s area and perimeter.*/
        static void Main(string[] args)
        {
            int length, width, area, perimeter;
            Console.WriteLine("Enter the length and width");
            length = int.Parse(Console.ReadLine());
            width = int.Parse(Console.ReadLine());
            area = length * width;
            perimeter = 2 * (length + width);

            Console.WriteLine("The area is " + area + " and the perimeter is " + perimeter);

           
        }
    }
}
