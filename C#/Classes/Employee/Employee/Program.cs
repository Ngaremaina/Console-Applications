using System;

namespace Employee
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee emp = new Employee();
            emp.addData();
            emp.calculate_netpay();
            emp.display_Netpay();
        }
    }
}
