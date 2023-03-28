using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_10_1
{
    class Program
    {
        static void Main(string[] args)
        {

            List<int> Arr = new List<int>();
            Random rnd = new Random();
            int Result = 0;

            for (int i = 0; i < 20; i++)
            {
                Arr.Add(rnd.Next(-10, 11));
                Console.Write(Arr[i] + " ");
            }

            Console.WriteLine();

            for (int i = 0, j = 0; i < 20 && j != 4; i++)
            {
                if (Arr[i] < 0)
                {
                    j++;
                    Result += Arr[i];
                }
            }
            Console.WriteLine("Sum of the first 4 negative numbers: " + Result);
        }
    }
}
