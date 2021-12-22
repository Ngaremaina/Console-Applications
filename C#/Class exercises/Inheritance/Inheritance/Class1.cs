using System;
using System.Collections.Generic;
using System.Text;

namespace Inheritance
{
    class circle:shape
    {
        private int radius;
        public void getdimensions()
        {
            Console.WriteLine("Enter the radius");
            radius = int.Parse(Console.ReadLine());

        }
        public double computearea()
        {
           area = Math.Pow(radius, 2) * Math.PI;
            return area;
        }
        public double computeperimeter()
        {
            perimeter = 2 * Math.PI * radius;
            return perimeter;
        }
    }
}
