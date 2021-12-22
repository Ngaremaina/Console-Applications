using System;


namespace ArrayList
{
    using System.Collections;
    class Program
    {
        static void Main(string[] args)
        {
            ArrayList arr1 = new ArrayList();
            ArrayList arr2 = new ArrayList();
            ArrayList arr3 = new ArrayList();
            arr1.Add(54);
            arr1.AddRange(new int[] { 55, 56, 57 });//integer values
            
            arr1.Add("Esther");//string values
            arr1.Add("Phoebe");
            arr1.AddRange(new double[] {32.64,38.98,49.66 });//double values

            arr1.RemoveAt(4);
            arr1.Insert(4, "Scorpion");
            arr1.RemoveAt(5);
            arr1.Insert(5, "Subzero");

            foreach (var value in arr1)
            {
                Type t = value.GetType();
                if (t.Equals(typeof(int)))
                {
                    
                    arr2.Add(value);
                    Console.WriteLine(value);
                }
                else if (t.Equals(typeof(double)))
                {
                   
                    arr3.Add(value);

                    Console.WriteLine(value);
                }
                else if (t.Equals(typeof(string)))
                {
                    ArrayList arr4 = new ArrayList();
                    arr4.Add(value);
                    Console.WriteLine(value);
                }
            }

            
                
            
        }
    }
}
