using System;
using System.Collections.Generic;
using System.Text;

namespace Classes
{
    class Student
    {
		String regno, name, gender;
		int age;
		DateTime dob;

		public void getdetails()
		{
			Console.WriteLine("Enter the registration number");
			regno = Console.ReadLine();
			Console.WriteLine("Enter your name");
			name = Console.ReadLine();
			Console.WriteLine("Enter the gender");
			gender = Console.ReadLine();
			Console.WriteLine("Enter the age");
			age = int.Parse(Console.ReadLine());
			Console.WriteLine("Enter the date");
			dob = DateTime.Parse(Console.ReadLine());
		}

		public int getage()
        {
			age = DateTime.Now.Year-dob.Year;
			return age;
        }
		public void print()
        {
			Console.WriteLine(regno);
			Console.WriteLine(name);
			Console.WriteLine(gender);
			Console.WriteLine(age);
		}

	
		

	}
}
