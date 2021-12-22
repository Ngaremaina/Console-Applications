using System;
using System.Collections.Generic;
using System.Text;

namespace Patient
{
    abstract class Person
    {
        protected string name;
        protected float height, weight;
        protected DateTime dob;
        protected double BMI;
        protected int age;

        public abstract void display();

        public void input()
        {
            Console.WriteLine("Enter your name");
            name = Console.ReadLine();
            Console.WriteLine("Enter your height ");
            height = float.Parse(Console.ReadLine());
            Console.WriteLine("Enter your weight ");
            weight = float.Parse(Console.ReadLine());
            Console.WriteLine("Enter the year you were born ");
            dob = DateTime.Parse(Console.ReadLine());
        }
        
        
       

    }
}
