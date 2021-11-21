using System;
using System.Collections.Generic;
using System.Text;

namespace Student
{
    class Student
    {
        private string name;
        private int marks;
        private char grade;
        private char[] reg_no=new char[16];

        int i;

        public Student()
        {
            name = "Owen Ngare";
            marks = 50;
            grade = 'A';
            reg_no = new []{ 'S','C','T','2','2','1','-','0','7','5','0','/','2','0','1','8' };
        }
        public void input()
        {
            Console.WriteLine("Enter the name");
            name = Console.ReadLine();
            Console.WriteLine("Enter the marks");
            marks = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the grade");
            grade = char.Parse(Console.ReadLine());
            Console.WriteLine("Enter the registration number");
            for (i = 0; i < 16; i++)
            {
                reg_no[i] = char.Parse(Console.ReadLine());
            }


        }
        public void display()
        {
            Console.WriteLine("Your name is "+name);
            Console.WriteLine("Your marks is "+marks);
            Console.WriteLine("Your grade is "+grade);
            Console.WriteLine("Your reg number is "+reg_no[i]);
        }
    }
}
