using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_14
{
    class Cross : ICross
    {
        public float a { get; set; }
        public float b { get; set; }

        private float square;

        public float getSquare()
        {
            return square;
        }

        public void CalculateSquare()
        {
            square = (a * a) + (a * b * 4);
        }

        public void print_sqrt()
        {
            Console.WriteLine("Square of this cross = " + square);
        }

        public void print_all()
        {
            Console.WriteLine("a = " + a);
            Console.WriteLine("b = " + b);
            print_sqrt();
        }

        public Cross()
        {
            a = 0;
            b = 0;
        }
        public Cross(float side_a, float side_b)
        {
            a = side_a;
            b = side_b;
            CalculateSquare();
        }
    }
}
