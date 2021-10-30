using System;

namespace Volume_of_a_Cube
{/*Write a program that uses a function called calc_vol to compute the volume of a cube as vol = height * length * breadth.
  * The program should output both the dimensions and result.                                                                                                         
  */
    class Program
    {
        public void calc_vol(int height, int length, int breadth)
        {
            int volume;
            volume = height * length * breadth;
            Console.WriteLine("The Volume = " + volume);
        }
        static void Main(string[] args)
        {
            Program vol = new Program();
            int len, bread, hei;
            Console.WriteLine("Enter the length");
            len = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the breadth");
            bread = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the height");
            hei = int.Parse(Console.ReadLine());
            Console.WriteLine("The length " + len +", breadth "+ bread +" and heigtht "+ hei);
            vol.calc_vol(len, bread, hei);
        }
    }
}
