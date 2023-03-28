using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_9_1
{
    class Program
    {
        static long CalcSeconds(int days, int weeks, int years)
        {
            return ((long)86400) * (days + (weeks * 7) + (years * 365));
        }

        static void Main(string[] args)
        {
            int Days = 0, Weeks = 0, Years = 0;
            long Seconds = 0;

            Console.Write("Enter amount of days: ");
            Days = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter amount of weeks: ");
            Weeks = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter amount of years: ");
            Years = Convert.ToInt32(Console.ReadLine());

            Seconds = CalcSeconds(Days, Weeks, Years);

            Console.WriteLine("\nIn " + Days + " days, " + Weeks + " weeks, " + Years + " years, there are " + Seconds + " seconds");

            Console.WriteLine();

        }
    }
}