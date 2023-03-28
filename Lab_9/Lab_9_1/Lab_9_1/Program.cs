using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_9_1
{
    class Program
    {
        static double CalcFormula(double x, double y, double z)
        {
            return Math.Pow(x, 2) * Math.Pow((Math.Pow(z, 2) + Math.Abs(y)), 0.25);
        }

        static void Main(string[] args)
        {
            double X = 1, Y = 1, Z = 1, A = 1;

            while (X != 0)
            {
                Console.Write("Type x: ");
                X = Convert.ToInt32(Console.ReadLine());
                Console.Write("Type y: ");
                Y = Convert.ToInt32(Console.ReadLine());
                Console.Write("Type z: ");
                Z = Convert.ToInt32(Console.ReadLine());

                A = CalcFormula(X, Y, Z);
                Console.WriteLine("\nResult:\n a = " + A);

                if (X > 1)
                {
                    if (X > 10)
                        Console.WriteLine("X higher then 10");
                    else
                        Console.WriteLine("X higher then 1");
                }
                else if (X < -1)
                {
                    if (X < -10)
                        Console.WriteLine("X lower then -10");
                    else
                        Console.WriteLine("X lower then -1");
                }

                if (A < 0)
                {
                    Console.WriteLine("A is negative");
                }
                else
                {
                    Console.WriteLine("A is positive");
                }

                Console.WriteLine();

            }
        }
    }
}