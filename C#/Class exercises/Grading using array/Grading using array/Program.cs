using System;

namespace Grading_using_array
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] names = { "Adim", "Sifuna", "Dottie" };
            int[,] marks = { { 18, 23, 40, 3, 35 }, { 7, 17, 35, 8, 36 }, { 21,13,41,2,37} };

            Console.WriteLine("Name\tCat 1\tCat 2\tAssign1\tAssign2\tExam\tAverage\tGrade");

            for (int i = 0; i < 3; i++)
            {
                Console.Write(names[i]+"\t");
                int sumofcats=0, sumofassignments = 0;
                for(int j = 0; j < 5; j++)
                {                 

                    Console.Write(marks[i,j]+"\t");
                    if (j < 1)
                    {
                        sumofcats +=marks[i,j];

                    }
                    else if (j < 3)
                    {
                        sumofassignments += marks[i, j];
                    }

                }
                float average = (sumofcats / 60 * 20) + (sumofassignments / 60 * 10) + marks[i];
                Console.Write(average+"\t");

                if (average >= 70 && average<100)
                {
                    Console.Write("A");
                }
                else if (average >= 60 && average < 70)
                {
                    Console.Write("B");
                }
                else if (average >= 50 && average < 60)
                {
                    Console.Write("C");
                }
                else if (average >=40 && average < 50)
                {
                    Console.Write("D");
                }
                if (average < 40 )
                {
                    Console.Write("E");
                }
                Console.WriteLine();
                
            }



            
        }
    }
}
