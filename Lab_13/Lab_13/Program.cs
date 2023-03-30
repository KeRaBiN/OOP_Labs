using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_13
{
    class Program
    {
        static void Main(string[] args)
        {
            Stone[] necklace = new Stone[5];
            necklace[0] = new SemipreciousStone("Amethyst", 20, 100, "violet", 7, 25);
            necklace[1] = new PreciousStone("Ruby", (float)1.5, 45000, "red", 7, (float)2.3, 4);
            necklace[2] = new PreciousStone("Diamond", 3, 150000, "white", 10, (float)4.5, 9);
            necklace[3] = new PreciousStone("Emerald", 2, 63000, "green", 7, 3, 5);
            necklace[4] = new SemipreciousStone("Topaz", 25, 750, "orange", 8, 15);

            for (int i = 0; i < necklace.Length; i++)
                Console.WriteLine(necklace[i].ToString());

            Console.WriteLine();
            Console.WriteLine("Total weight of necklace: " + Stone.getTotalWeight(necklace) + " grams");
            Console.WriteLine("Total price of necklace: " + Stone.getTotalPrice(necklace) + " dollars");
            Console.WriteLine();
        }
    }
}
