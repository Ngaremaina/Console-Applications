using System;
using System.Collections.Generic;
using System.Text;

namespace Employee
{
    class Employee
    {
        private int empNo, basic_salary, allowances, deduction, netpay;
        private string empName;

        public void addData()
        {            
            Console.WriteLine("Enter the employee number");
            empNo = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the employee name");
            empName = Console.ReadLine();
            Console.WriteLine("Enter the basic salary");
            basic_salary = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the allowances");            
            allowances= int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the deduction");
            deduction = int.Parse(Console.ReadLine());
        }
        public void calculate_netpay()
        {
            netpay = basic_salary + allowances - deduction;
        }
        public void display_Netpay()
        {
            Console.WriteLine("Net pay = " + netpay);
        }
    }
}
