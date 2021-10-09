using System;

namespace Sum_of_list_of_integers
{
    class Program
    {/*Write a program that accepts a list of integers and computes their sum. 
      * The program should allow the user to enter any number of integers 
      * but an input of zero should terminate the list. 
      * For example if the user enters 2 5 6 12 8 2 0 the sum should be 35. 
      * If he/she enters 2 4 5 0 the sum should be 11 and if he enters 5 4 6 0 12 43 2 
      * the sum should 15 i.e. only numbers before zero are summed. 
      * The rest are ignored and the program terminated.
      */
        static void Main(string[] args)
        {
            int[] numbers=new int[10];
            int i, sum;
        
            
            Console.WriteLine("Enter the integers");
            for (i = 0; i <= numbers.Length; i++)
            {
                numbers[i] =Convert.ToInt32(Console.ReadLine());
                if (numbers[i]==0){
                    break;
                    

                }
                sum += numbers[i];
                Console.WriteLine("The sum = " + sum);

            }
            
            

        }
    }
}
