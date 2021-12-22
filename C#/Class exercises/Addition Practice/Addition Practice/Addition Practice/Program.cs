using System;

namespace Addition_Practice
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y, input, sum, i;
            
            Random rand = new Random();
            x = rand.Next(0, 9);
            y = rand.Next(0, 9);
            sum = x + y;
            
            for (i = 0; i < 5; i++)
            {
                Console.WriteLine("What is " + x + "+ " + y + " ?");
                input = int.Parse(Console.ReadLine());

                if (sum == input)
                {
                    Console.WriteLine("Correct");
                    break;

                }
                else
                {
                    Console.WriteLine("Incorrect, try again");
                    
                }    

            }


            Console.WriteLine("Correct answer is " + sum);

            Console.ReadKey();

            
        }
    }
}
