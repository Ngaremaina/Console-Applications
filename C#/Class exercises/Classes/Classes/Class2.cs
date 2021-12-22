using System;
using System.Collections.Generic;
using System.Text;

namespace Classes
{
    class Example
    {
        public static void altervalues(ref int x, ref int y, ref int z)
        {
            x = ((int)(x + (x * 0.1)));
            y = y + 100;
            z = z - 50;       
        }
        
    }
}
