using System;

namespace Average_Mark_of_a_Student
{
    class Program
    {/*A program is required that accepts marks in three subjects and calculates the average mark. 
      * The program then assigns the student a grade based on the average mark using the grading system below.	
                Average Mark	Grade
                80 – 100	A
                70 – 80	    B
                60 – 70	    C
                50 – 60	    D
                0 – 50	    E
	 Write a program with a function called get_grade which accepts the average mark 
        and returns the grade to the main function which then outputs it.                               
                                                                                                        
      */
        public void get_grade(int sub1, int sub2, int sub3)
        {
            int average;
            average = (sub1 + sub2 + sub3) / 3;
            Console.WriteLine("The average = "+ average);

        }
        
        static void Main(string[] args)
        {
            Program stud = new Program();
            int mark1, mark2, mark3;

            Console.WriteLine("Enter the subject marks");
            mark1 = int.Parse(Console.ReadLine());
            mark2 = int.Parse(Console.ReadLine());
            mark3 = int.Parse(Console.ReadLine());

            stud.get_grade(mark1, mark2, mark3);

           

        }
    }
}
