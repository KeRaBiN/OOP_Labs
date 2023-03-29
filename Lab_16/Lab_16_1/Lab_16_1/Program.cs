using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_16_1
{
    class Program
    {
        public delegate double Function(double x);

        static double Function1(double x) => 1.0 / Math.Pow(x, 1.0 / 3);
        static double Function2(double x) => 1.0 / Math.Sqrt(Math.Pow(x, 2));
        static double Function3(double x) => Math.Pow(Math.Sin(x), 2);

        static double Integral(double a, double b, Function function)
        {
            int n = 100 * (int)(b - a);
            double h = (b - a) / n;
            double result = 0;
            for (int i = 0; i < n; i++)
                result += ((function(a + (i * h)) + function(a + ((i + 1) * h))) / 2) * h;
            return result;
        }

        static void Main(string[] args)
        {
            Console.WriteLine("First integral = " + Integral(1, 10, Function1));
            Console.WriteLine("Second integral = " + Integral(1, 10, Function2));
            Console.WriteLine("Third integral = " + Integral(1, 10, Function3));
        }
    }
}
