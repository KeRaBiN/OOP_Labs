using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_14
{
    class Program
    {
        static void Main(string[] args)
        {

            float[] keys = new float[3];
            Cross[] crosses = new Cross[3] { new Cross(9, 11), new Cross(), new Cross(3, 1) };
            crosses[1].a = 2;
            crosses[1].b = 4;
            crosses[1].CalculateSquare();

            for (int i = 0; i < crosses.Length; i++)
                keys[i] = crosses[i].a;

            for (int i = 0; i < crosses.Length; i++)
                crosses[i].print_sqrt();

            Console.WriteLine();

            for (int i = 0; i < crosses.Length; i++)
            {
                Console.WriteLine("\nCross #" + (i + 1));
                crosses[i].print_all();
            }

            Array.Sort(keys, crosses);
            Console.WriteLine("\n\nAfter sort");

            for (int i = 0; i < crosses.Length; i++)
            {
                Console.WriteLine("\nCross #" + (i + 1));
                crosses[i].print_all();
            }

        }
    }
}