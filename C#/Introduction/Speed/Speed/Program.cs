using System;

namespace Speed
{
    class Program
    {/*Write a program that accepts distance traveled in metres and the time taken in minutes 
      * and then outputs the speed in kilometers per hour (km/h). 
      * E.g. if someone enters a distance (in metres) of 500 and a time (in minutes) of 15 
      * the output for speed should be 2 km/h.*/
        static void Main(string[] args)
        {
            float km, m, min, hr, speed;
            Console.WriteLine("Enter distance");
            m = float.Parse(Console.ReadLine());
            Console.WriteLine("Enter time");
            min = float.Parse(Console.ReadLine());
            km = m / 1000;
            hr= min / 60;
            speed = km / hr;
            Console.WriteLine(speed+"km/hr");
        }
    }
}
