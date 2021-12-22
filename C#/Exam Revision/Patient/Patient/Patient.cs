using System;
using System.Collections.Generic;
using System.Text;

namespace Patient
{
    class Patient:Person
    {
        public void compute()
        {
            BMI = weight / (height * height);
        }
        public override void display()
        {
            Console.WriteLine("Your name is " + name);
            Console.WriteLine("Your height is " + height);
            Console.WriteLine("Your weight is " + weight);
            Console.WriteLine("Your BMI is " + BMI);

            if (BMI < 18.5)
            {
                Console.WriteLine("Underweight");
            }
            else if (BMI >= 18.5 && BMI > 25.0)
                Console.WriteLine("Normal");
            else if (BMI >= 25.0 && BMI < 30.0)
                Console.WriteLine("Overweight");
            else if (BMI >= 30.0)
                Console.WriteLine("Obese");
        }
        public int getage()
        {
            age = DateTime.Now.Year - dob.Year;
            Console.WriteLine("Your age is " + age);
            return age;
        }

    }
}
