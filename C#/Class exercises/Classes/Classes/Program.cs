using System;

namespace Classes
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int a, b, c;
            /*Student stud = new Student();
            stud.getage();
            stud.getdetails();
            stud.print();*/

            Console.WriteLine("Enter a");
            a = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter b");
            b = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter c");
            c = int.Parse(Console.ReadLine());

            Example.altervalues(ref a, ref b, ref c);

            Console.WriteLine(a+","+b+","+c);


        }
    }
}
