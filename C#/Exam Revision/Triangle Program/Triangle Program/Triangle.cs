using System;
using System.Collections.Generic;
using System.Text;

namespace Triangle_Program
{
    class Triangle
    {
        private float height, bases;      
        private double area;

        public float P_bases
        {
            get { 
                return bases; 
            }
            set { 
                
                if (value>0.0 && value < 50.0)
                        
                {
                    value = bases;
                    
                }
                else { Console.WriteLine("Invalid"); }

            }
        }
        public float P_height
        {
            get { return height; }
            set
            {
                
                if (value > 0.0 && value < 50.0)
                {
                    value = height;
                    
                }
                else { Console.WriteLine("Invalid"); }

            }
        }
        public void getarea()
        {
            Console.WriteLine("Enter the base");
            P_bases = float.Parse(Console.ReadLine());
            Console.WriteLine("Enter the height");
            P_height = float.Parse(Console.ReadLine());
            area = 0.5* P_bases * P_height;
            Console.WriteLine("The area is " + area);
        }

    }
}
