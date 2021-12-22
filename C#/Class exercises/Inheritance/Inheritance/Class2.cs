using System;
using System.Collections.Generic;
using System.Text;

namespace Inheritance
{
    class shape
    {
        protected double area, perimeter;

        public void print()
        {
            Console.WriteLine("Area = " + area + " perimeter = " +
                perimeter);
        }
    }
}
