using System;

namespace Converting_km_to_m
{
    class Program
    {/*Write a program that accepts measurements in kilometers
      * and the converts and displays them in metres. 
      * E.g. if someone enters 0.4 (kilometers) the output should take the form 
      * 0.4 kilometers = 400 metres.*/
        static void Main(string[] args)
        {
            float km, m;
            Console.WriteLine("Enter the distance in kilometers");
            km = float.Parse(Console.ReadLine());

            m = km * 1000;

            Console.WriteLine(km + " kilometers = " + m + " meters");
        }
    }
}
