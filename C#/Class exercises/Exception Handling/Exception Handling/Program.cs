using System;

namespace Exception_Handling
{
    class Program
    {
        
        static void Main(string[] args)
        {
            
            int radius;
            double area;
            bool proceed = true;
            do
            {
                try
                {
                    Console.WriteLine("Enter radius");
                    radius = int.Parse(Console.ReadLine());
                    area = Math.PI * Math.Pow(radius, 2);
                   Console.WriteLine("Area = " + area);
                    proceed = false;
                }

                catch (FormatException ex1)
                {
                    Console.WriteLine(ex1.Message);
                }
                catch (ArgumentException ex2)
                {
                    Console.WriteLine(ex2.Message);
                }
                finally
                {
                    Console.WriteLine("Objective is complete");
                }


            }
            while (proceed);


        }
    }
}
