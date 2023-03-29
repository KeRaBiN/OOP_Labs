using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_14
{
    interface ICross
    {
        float a { get; set; }
        float b { get; set; }

        float getSquare();
        void CalculateSquare();
        void print_sqrt();
        void print_all();


    }
}
