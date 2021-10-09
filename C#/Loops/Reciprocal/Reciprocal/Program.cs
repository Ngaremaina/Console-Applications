using System;

namespace Reciprocal
{
    class Program
    {/*Write a program that accepts a number and prints out it’s reciprocal (1/n). 
      *The program should prevent the user from entering zero by asking the user 
      *to enter the value again. 
      *After being given the answer, the user should be asked if wants to continue 
      *by entering ‘c’ to continue and ‘x’ to exit.
      */
        static void Main(string[] args)
        {
            char answer;
            int number;
            double reciprocal;
            do
            {
                Console.WriteLine("Enter a number");
                number = int.Parse(Console.ReadLine());
                reciprocal = 1 / number;
                Console.WriteLine("The reciprocal = " + reciprocal);
                Console.WriteLine("Do you wish to continue?");
                answer = char.Parse(Console.ReadLine());
                if (answer == 'x')
                {
                    Console.WriteLine("Thank you");
                    break;
                }

            }
            while (answer == 'c');
            
            
        }
    }
}
