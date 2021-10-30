using System;

namespace Smallest_Number
{/*A program is required that accepts three integers and finds the smallest.
   
    Write a program with a function called smallest which accepts three integers entered via the main function 
    and prints them together with the smallest.                                    
  */
    class Program
    {
        public void small(int num1, int num2, int num3)
        {
            int smallest;
            if (num1 < num2 && num1 < num3)
                Console.WriteLine("The smallest is " + num1);
            else if (num2 < num1 && num2 < num3)
                Console.WriteLine("The smallest is " + num2);
            else
                Console.WriteLine("The smallest is " + num3);
        }
        static void Main(string[] args)
        {
            Program little = new Program();
            int dig1, dig2, dig3, smallest;
            Console.WriteLine("Enter the numbers");
            dig1 = int.Parse(Console.ReadLine());
            dig2 = int.Parse(Console.ReadLine());
            dig3 = int.Parse(Console.ReadLine());
            Console.WriteLine("The values " + dig1 + "," + dig2 + "," + dig3);

            little.small(dig1, dig2, dig3);

            
        }
    }
}
