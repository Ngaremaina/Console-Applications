using System;
using System.Collections.Generic;
using System.Text;

namespace Student_and_Grades
{
    class result:tests
    {
        private float average,percent;

        public result()
        {
            regno = "SCT221-0923/2018";
            mark1 = 89;
            mark2 = 50;
            mark3 = 87;
            average = 90;
            percent = 90;
          
        }

        public void getaverage()
        {
            total= mark1 + mark2 + mark3;
            percent = total/3;
            
        }
        public void display()
        {
            Console.WriteLine("Your registration number -> " + regno);
            Console.WriteLine("Your marks are " + mark1 + "," + mark2 + " and " + mark3);

            Console.WriteLine("Your average mark is " + average + " and the percentage is " + percent + "%");

        }
    }
}
