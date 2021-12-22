using System;

namespace Patient
{
    class Program
    {
        static void Main(string[] args)
        {        

            Patient patient = new Patient();
            patient.input();
            patient.compute();
            patient.display();
            patient.getage();

        }
    }
}
