using System;

namespace Sum_of_all_Numbers
{/*Write a program that computes the sum of all whole numbers between 20 and 70 using a loop. 
  * The program should use a function called calculate_total to compute the sum and return it to the main function, 
  * which then outputs it.                   
  */
    class Program
    {
        public void calculate_total()
        {
            int sum = 0;
            for (int i = 20; i <= 70; i++)            
                sum += i;                
            
            Console.WriteLine("The sum is -> " + sum);
        }
        static void Main(string[] args)
        {
            Program total = new Program();
            total.calculate_total();
        }
    }
}
