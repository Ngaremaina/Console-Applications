using System;

namespace Structure_Person
{
    class Program
    {
        struct Person
        {
            public int id, age;
            public float height, weight;
        }
        static void Main(string[] args)
        {
            Person person;
            
            double BMI;
            Console.WriteLine("Enter the height");
            person.height = float.Parse(Console.ReadLine());
            Console.WriteLine("Enter the weight");
            person.weight = float.Parse(Console.ReadLine());
            BMI = person.weight / (person.height * person.height);
            Console.WriteLine("Your BMI is " + BMI);
        }
    }
}
