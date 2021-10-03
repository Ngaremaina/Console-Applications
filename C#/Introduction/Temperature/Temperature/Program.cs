using System;

namespace Temperature
{
    class Program
    {/*Write a program that accepts temperature in degrees Celsius
      * and converts and outputs it in degrees Fahrenheit.*/
        static void Main(string[] args)
        {
            int celcius, farenheit;
            Console.WriteLine("Enter degrees");
            celcius = int.Parse(Console.ReadLine());
            farenheit = (celcius * 9 / 5) + 32;
            Console.WriteLine(farenheit);
        }
    }
}
