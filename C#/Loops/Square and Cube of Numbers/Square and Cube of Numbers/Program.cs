using System;

namespace Square_and_Cube_of_Numbers
{
    class Program
    {
        /*A program is required that computes the square and cube of all numbers between 2 and 10 
         * and display them using a loop. The output should take the following format.
      Number      Square          Cube
           2                4                   8
           3                9                 27
          …
         10            100              1000
      Write the program using do…while loop            

         */
        static void Main(string[] args)
        {
            int i = 2;
            double square, cube;
            Console.WriteLine("Number\tSquare\tCube");
            do {
                square = Math.Pow(i, 2);
                cube = Math.Pow(i, 3);
                Console.WriteLine(i+"\t"+square+"\t"+cube);
                i++;
            }
            while (i <= 10);
        }
    }
}
