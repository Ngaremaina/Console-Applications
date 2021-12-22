using System;
using System.Collections.Generic;
using System.Text;

namespace Inheritance
{
    class rectangle:shape
    {
        private int length, width;
        public void getdimensions()
        {
            Console.WriteLine("Enter the length");
            length = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the width");
            width = int.Parse(Console.ReadLine());
            

        }
        public double computeperimeter()
        {
            perimeter = 2*(length + width);
            return perimeter;

        }
        public double computearea()
        {
            area = length*width;
            return area;
        }
    }
}
