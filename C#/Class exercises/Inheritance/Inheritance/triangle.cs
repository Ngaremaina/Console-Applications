using System;
using System.Collections.Generic;
using System.Text;

namespace Inheritance
{
    class triangle:shape
    {
        private int a, b, c;

        public void getdimensions()
        {
            Console.WriteLine("Enter the length");
            a= int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the width");
            b = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the height");
            c = int.Parse(Console.ReadLine());

        }
        public double computeperimeter()
        {
            perimeter = a + b + c;
            return perimeter;

        }
        public double computearea()
        {
            area = a * b * c;
            return area;
        }
    }
}
