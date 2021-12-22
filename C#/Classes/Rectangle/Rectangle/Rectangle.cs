using System;
using System.Collections.Generic;
using System.Text;

namespace Rectangle
{
    abstract class Rectangle
    {
        private int length, width;

        public Rectangle()
        {
            length = 1;
            width = 1;
        }
        public int P_length
        {
            get { return length; }
            set { value = length; }
        }
        public int P_width
        {
            get { return width; }
            set { value = width; }
        }
        public void perimeter()
        {
            int perimeter = 2 * (P_length + P_width);
            Console.WriteLine("The perimeter is " + perimeter);
        }
        public void area()
        {
            int area = P_length * P_width;
            Console.WriteLine("The area is " + area);
        }
    }
    
}
