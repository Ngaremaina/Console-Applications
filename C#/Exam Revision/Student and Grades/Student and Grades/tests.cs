using System;
using System.Collections.Generic;
using System.Text;

namespace Student_and_Grades
{
    class tests:Student
    {
        protected int mark1, mark2, mark3,total;
        public void getmarks()
        {
            Console.WriteLine("Enter the marks");
            mark1 = int.Parse(Console.ReadLine());
            mark2 = int.Parse(Console.ReadLine());
            mark3 = int.Parse(Console.ReadLine());

        }
    }
}
