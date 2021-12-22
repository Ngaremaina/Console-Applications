using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Arrays
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] names = { "Adim", "Sifuna", "Dottie"};
            int[,] score = { { 18, 23, 40, 3, 35 }, { 7, 17, 35, 8, 36}, { 21, 13, 41, 2, 37 } };

            Console.WriteLine("Name\tCat1\tCat2\tAssign1\tAssign2\tExam\tAvg\tGrade");

            for (int i=0; i< names.Length; i++)
            {
                int avg = 0, cat_total = 0, assign_total = 0;

                Console.Write("{0}\t", names[i]);
                for (int c=0; c<5; c++ )
                {
                    Console.Write("{0}\t", score[i, c]);

                    if (c < 2)
                        cat_total += score[i, c];
                    if (c > 1 && c < 4)
                        assign_total += score[i, c]; 
                }

                avg = (cat_total / 60 * 30) + (assign_total / 20 * 10) + score[i, 4];
                Console.Write("{0}\t", avg);

                if (avg >= 80)
                    Console.Write("A");
                else if (avg >= 70)
                    Console.Write("B");
                else if (avg >= 50)
                    Console.Write("C");
                else
                    Console.Write("D");

                Console.WriteLine();
            }

            Console.ReadKey();
        }
    }
}
