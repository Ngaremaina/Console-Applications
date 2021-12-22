using System;

namespace Display_1_to_10_using_do_while_loop
{
    class Program
    {
        static void Main(string[] args)
        {
            int i=1;
            do
            {
                Console.Write(i+"\t");
                i++;
            }
            while (i <= 10);
            
            
        }
    }
}
