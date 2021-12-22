using System;
using System.Collections.Generic;
using System.Text;

namespace Student_and_Grades
{
    class Student
    {
        protected string regno;

        

        public void getreg()
        {
            Console.WriteLine("Enter the registration number");
            regno = Console.ReadLine();
        }
    }
}
