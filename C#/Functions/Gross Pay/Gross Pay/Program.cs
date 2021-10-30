using System;

namespace Gross_Pay
{/*Write a program using the tax information below: -
Gross Pay                  	      Tax Rate
Over 50,000			35%
>= 40,000 but below 50,000	30%
>=20,000 but below 40,000	25%
>=12,000 but below 20,000	15%
Below 12,000			no tax.
Write a program that accepts the gross pay and outputs both the tax amount and the net pay (Assume the net pay is gross pay – tax amount). 
    Define a function calc_tax that accepts the gross from main and then computes and returns the tax amount. 
    Main should then output both the tax amount and the net pay
  */
    class Program
    {
        public void calc_tax(int grosspay)
        {
            double taxamount, netpay;
            if (grosspay < 12000)
                Console.WriteLine("No tax");
            else if (grosspay >= 12000 && grosspay < 20000)
            {
                taxamount = grosspay * 0.15;
                netpay = grosspay - taxamount;
                Console.WriteLine("The tax amount is -> " + taxamount + " and the net pay is -> " + netpay);
            }

            else if (grosspay >= 20000 && grosspay < 40000)
            {
                taxamount = grosspay * 0.25;
                netpay = grosspay - taxamount;
                Console.WriteLine("The tax amount is -> " + taxamount + " and the net pay is -> " + netpay);
            }

            else if (grosspay >= 40000 && grosspay < 50000)
            {
                taxamount = grosspay * 0.3;
                netpay = grosspay - taxamount;
                Console.WriteLine("The tax amount is -> " + taxamount + " and the net pay is -> " + netpay);
            }

            else
            {
                taxamount = grosspay * 0.35;
                netpay = grosspay - taxamount;
                Console.WriteLine("The tax amount is -> " + taxamount + " and the net pay is -> " + netpay);
            }
            

        }
        static void Main(string[] args)
        {
            Program payment = new Program();
            int gross;
            Console.WriteLine("Enter the gross pay");
            gross = int.Parse(Console.ReadLine());
            payment.calc_tax(gross);

            
        }
    }
}
