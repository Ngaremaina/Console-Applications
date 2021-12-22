using System;

namespace BMI
{
    class Program
    {
        static void Main(string[] args)
        {
            double height, weight, BMI, pounds, inches;

            Console.WriteLine("Enter the height in inches");
            inches = double.Parse(Console.ReadLine());

            Console.WriteLine("Enter the weight in pounds");
            pounds = double.Parse(Console.ReadLine());

            weight= pounds * 0.45359237;
            height = inches * 0.0254;

            BMI = weight / (height * height);

            Console.WriteLine("Your BMI is "+BMI);

            if (BMI < 18.5)
            {
                Console.WriteLine("Underweight");
            }
            else if (BMI>=18.5 && BMI<25.0)
            {
                Console.WriteLine("Normal");
            }
            else if (BMI >= 25.0 && BMI < 30.0)
            {
                Console.WriteLine("Overweight");
            }
            else if (BMI>=30.0) 
            { 
                Console.WriteLine("Obese"); 
            }

            
                

        }
    }
}
