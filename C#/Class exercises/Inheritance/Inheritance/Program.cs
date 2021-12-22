using System;

namespace Inheritance
{
    class Program
    {
        static void Main(string[] args)
        {
            circle cir = new circle();
            cir.getdimensions();
            cir.computearea();
            cir.computeperimeter();
            cir.print();

            triangle tr = new triangle();
            tr.getdimensions();
            tr.computearea();
            tr.computeperimeter();
            tr.print();

            rectangle rect = new rectangle();
            rect.getdimensions();
            rect.computearea();
            rect.computeperimeter();
            rect.print();
        }
    }
}
