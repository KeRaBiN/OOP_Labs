using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_10_2
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> Arr = new List<int>();
            Random rnd = new Random();
            int Result = 1;

            for (int i = 0; i < 10; i++)
            {
                Arr.Add(rnd.Next(-20, 21));
                Console.Write(Arr[i] + " ");
            }

            Console.WriteLine();

            for (int i = 0; i < 10; i++)
                if (Math.Abs(Arr[i]) > 10)
                    Result *= Arr[i];

            Console.WriteLine("Multiplication of all numbers that higher then 10 or lower then -10 is: " + Result);
        }
    }
}
