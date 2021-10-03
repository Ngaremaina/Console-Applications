using System;

namespace Converting_m_to_cm
{/*Write a program that accepts measurements in cm and converts them into metres.
  * If someone enters 200 for example, the output should take the form;
200 cm = 2 metres.
*/
    class Program
    {
        static void Main(string[] args)
        {
            int m, cm;

            Console.WriteLine("Enter the length");
            cm = int.Parse(Console.ReadLine());
            m = cm / 100;
            Console.WriteLine(cm + "cm = " + m + "meters");
        }
    }
}
