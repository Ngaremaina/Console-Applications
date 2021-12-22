using System;

namespace Taking_temperature_of_patients
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] names=new string[5];
            int[,] temp = new int[5,4];
            int i, j,sum=0;
            float average;

            for (i = 0; i < 5; i++)
            {
                Console.WriteLine("Enter the patient name");
                names[i] = Console.ReadLine();
                Console.WriteLine("Enter the temperature");
                for (j = 0; j < 4; j++)
                {
                    
                    temp[i,j]= int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine(DateTime.Now);

            for (i=0; i < 5; i++)
            {
                Console.Write(names[i]+"\t");
                for (j = 0; j < 4; j++)
                {
                    Console.Write(temp[i, j]+"\t");
                    sum += temp[i, j];
                    
                }
                average = sum / 4;
                Console.Write(average);
                Console.WriteLine();
            }
        }
    }
}
