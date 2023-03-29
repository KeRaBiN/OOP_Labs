using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_16_2
{
    class Program
    {
        public delegate void KeyPresed();

        static void PrintName() => Console.WriteLine("Kuzmenko Yaroslaw");

        static void CheckPresedKeys(KeyPresed keyPresed)
        {
            if (Console.ReadKey().Key == ConsoleKey.K)
                keyPresed();
        }

        static void Main(string[] args)
        {
            CheckPresedKeys(PrintName);
        }
    }
}
