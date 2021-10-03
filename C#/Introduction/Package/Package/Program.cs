using System;

namespace Package
{
    /*Write a program that accepts the weight of a package in grams 
     * and then converts it to kilograms 
     * and also specifies how many such packages form one kilogram. 
     * For example, if the user enters the weight (in grams) of the package as 100, 
     * the output should be:
        The weight of the package is 0.1 kilograms.
        It takes 10 such packages to form one kilogram.
*/
    class Program
    {
        static void Main(string[] args)
        {
            float grams, kgs, packages;
            Console.WriteLine("Enter the weight");
            grams = float.Parse(Console.ReadLine());
            kgs = grams / 1000;
            packages = kgs * 100;

            Console.WriteLine("The weight of the package is " + kgs + "kilograms.");
            Console.WriteLine("It takes " + packages + " such packages to form one kilogram.");
        }
    }
}
