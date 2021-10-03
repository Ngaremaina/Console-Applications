using System;

namespace Number__square__cube_and_roots
{
    class Program
    {/*Write a program that accepts a number and then 
      * outputs it’s square, cube, square root and cube root.*/
        static void Main(string[] args)
        {
            double number, square, cube, cube_root, square_root;
            Console.WriteLine("Enter number");
            number = double.Parse(Console.ReadLine());
            square = Math.Pow(number, 2);
            cube = Math.Pow(number, 3);
            square_root = Math.Sqrt(number);
            cube_root = Math.Cbrt(number);
            Console.WriteLine("The square is "+square+" and cube is "+cube+" and square root "+ square_root+" and cube root "+ cube_root);

        }
    }
}
