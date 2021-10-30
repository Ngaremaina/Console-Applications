using System;

namespace Temperature
{/*10)	Write a program that displays a temperature conversion chart on the screen as follows:
Fahrenheit       Celsius
       0               -17.78
     20                 -6.67
     40                  4.44
     …                   …
     …                   …
   300               148.89
Required: The displaying of the values should be done by main but the conversion from Fahrenheit to Celsius should be done by a function called Temp.


  */
    class Program
    {
        public void Temp()
        {
            float celcius, farenheit=0;
            for (int i = 0; i < 15; i++)
            {
                farenheit += 20;
                celcius = (farenheit - 32) * 5 / 9;
                Console.WriteLine(farenheit+"\t\t\t"+celcius);
            }
        }
        static void Main(string[] args)
        {
            Program temperature = new Program();
            Console.WriteLine("Farenheit\t\tCelcius");
            temperature.Temp();

        }
    }
}
