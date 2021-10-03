using System;

namespace Age
{
    class Program
    {
        /*Write a program that accepts the age of a person,
         * if the person is 18 and above, it should print You can vote. 
         * otherwise it should print You are too young to vote.*/
        static void Main(string[] args)
        {
            int age;
            Console.WriteLine("Enter your age");
            age = int.Parse(Console.ReadLine());
            if (age >= 18)
            {
                Console.WriteLine("You can vote");

            }
            else { Console.WriteLine("You are too young to vote"); }
        }
    }
}
