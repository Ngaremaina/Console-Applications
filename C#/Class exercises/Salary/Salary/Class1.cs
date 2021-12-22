using System;
using System.Collections.Generic;
using System.Text;

namespace Salary
{
    class Salary
    {
        float basic_salary, allowance, tax_rate, tax_amount, net_salary;

        public void input()
        {
            Console.WriteLine("Enter the salary");
            basic_salary = float.Parse(Console.ReadLine());
            Console.WriteLine("Enter the allowance");
            allowance = float.Parse(Console.ReadLine());
            Console.WriteLine("Enter the tax rate");
            tax_rate = float.Parse(Console.ReadLine());
        }
        public void compute()
        {
            tax_amount = tax_rate / 100 * (basic_salary + allowance);
            net_salary = basic_salary - tax_amount;
        }
        public void output()
        {
            Console.WriteLine("The net salary" + net_salary);
        }
    }
}
