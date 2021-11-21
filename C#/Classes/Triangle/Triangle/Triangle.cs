using System;
using System.Collections.Generic;
using System.Text;

namespace Triangle
{
    class Triangle
    {
        private int length, height;       
        public Triangle() {
            length = 10;
            height = 20;
        }
        
       
        public int hypot()
        {            
            return length;
        }
        public void area()
        {
            double area = 0.5 * length * height;
            Console.WriteLine("The area = " + area);
        }
    
    }
}
