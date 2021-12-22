using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalenderExercise
{
    class Program
    {
        static void Main(string[] args)
        {
            int month, year;

            Console.WriteLine("Enter the month you want in numbers: ");
            month = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter the Year: ");
            year = Convert.ToInt32(Console.ReadLine());
            
            switch (month)
            {
                case 1:
                    Console.WriteLine("January, month {0} in {1} has 31 days.", month, year);
                    break;
                case 2:
                    if (year % 4 == 0)
                    {
                        Console.WriteLine("February, month {0} in {1} has 29 days.", month, year);
                    }
                    else
                    {
                        Console.WriteLine("February, month {0} in {1} has 28 days.", month, year);
                    }
                    break;


                case 3:
                    Console.WriteLine("March, month {0} in {1} has 31 days.", month, year);
                    break;

                case 5:
                    Console.WriteLine("May, month {0} in {1} has 31 days.", month, year);
                    break;

                case 7:
                    Console.WriteLine("July, month {0} in {1} has 31 days.", month, year);
                    break;
                case 8:
                    Console.WriteLine("August, month {0} in {1} has 31 days.", month, year);
                    break;
                case 10:
                    Console.WriteLine("October, month {0} in {1} has 31 days.", month, year);
                    break;
                case 12:
                    Console.WriteLine("December, month {0} in {1} has 31 days.", month, year);
                    break;
                case 4:
                    Console.WriteLine("April, month {0} in {1} has 30 days.", month, year);
                    break;
                case 9:
                    Console.WriteLine("September, month {0} in {1} has 30 days.", month, year);
                    break;
                case 6:
                    Console.WriteLine("June, month {0} in {1} has 30 days.", month, year);
                    break;
                case 11:
                    Console.WriteLine("November, month {0} in {1} has 30 days.", month, year);
                    break;
                default:
                    Console.WriteLine("Incorrect. Please try again");
                    break;

            }
            Console.ReadKey();

        }
    }
}
