using System;

namespace Average_Grade_of_a_Student
{/*A program is required that accepts marks in three subjects and calculates the average mark. 
  * The program then assigns the student a grade based on the average mark using the grading system below.	
            Average Mark	Grade
            80 – 100	A
            70 – 80	B
            60 – 70	C
            50 – 60	D
            0 – 50	E
    Write a program with a function called grade which accepts the average mark and prints the grade.                                                                                                        
  */
    class Program
    {
        public void grade(int average)
        {
            if (average>=80 && average < 100)
            {
                Console.WriteLine("A");
            }
            else if (average>=70 && average < 80)
            {
                Console.WriteLine("B");
            }
            else if (average >= 60 && average < 70)
            {
                Console.WriteLine("C");
            }
            else if (average >= 50 && average < 60)
            {
                Console.WriteLine("D");
            }
            else if (average >= 0 && average < 50)
            {
                Console.WriteLine("E");
            }
        }
        static void Main(string[] args)
        {
            Program stud = new Program();
            int sub1, sub2, sub3, aver;
            Console.WriteLine("Enter the subject marks");
            sub1 = int.Parse(Console.ReadLine());
            sub2= int.Parse(Console.ReadLine());
            sub3 = int.Parse(Console.ReadLine());
            
            aver = (sub1 + sub2 + sub3) / 3;
            Console.WriteLine("The average=" + aver);

            stud.grade(aver);
        }
    }
}
