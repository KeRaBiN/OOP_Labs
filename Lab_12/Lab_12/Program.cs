using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_12
{
    class Program
    {

        static void Main(string[] args)
        {
            Letter one = new Letter(), two = new Letter();
            two.Code = 't';
            two.Color = ConsoleColor.DarkMagenta;
            Letter three = new Letter('H', ConsoleColor.Red);

            one.Print();
            two.Print();
            three.Print();
            Console.WriteLine(two.ToString());

            if (one == two)
            {
                Console.WriteLine("NO");
            }
            else
            {
                Console.WriteLine("YES");
            }

        }
    }
}
