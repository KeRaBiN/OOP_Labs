using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_12
{
    class Letter
    {
        public void Print()
        {
            Console.ForegroundColor = color;
            Console.WriteLine(Convert.ToString(Convert.ToChar(code)));
            Console.ResetColor();
        }
        public override string ToString()
        {
            return Convert.ToString(Convert.ToChar(code)) + "\t" + color;
        }

        private int code;
        public char Code
        {
            get { return Convert.ToChar(code); }
            set { code = Convert.ToInt32(value); }
        }

        private ConsoleColor color;
        public ConsoleColor Color
        {
            get { return color; }
            set { color = value; }
        }
        public static bool operator ==(Letter obj1, Letter obj2)
        {
            if (obj1.Color == obj2.Color && obj1.Code == obj2.Code)
                return true;
            return false;
        }
        public static bool operator !=(Letter obj1, Letter obj2)
        {
            if (obj1.Color == obj2.Color && obj1.Code == obj2.Code)
                return false;
            return true;
        }

        public override bool Equals(object o)
        {
            return true;
        }
        public override int GetHashCode()
        {
            return 0;
        }

        public Letter()
        {
            code = Convert.ToInt32(' ');
            color = ConsoleColor.White;
        }
        public Letter(int symbol_code, ConsoleColor symbol_color)
        {
            code = symbol_code;
            color = symbol_color;
        }
        public Letter(char symbol, ConsoleColor symbol_color)
        {
            code = Convert.ToInt32(symbol);
            color = symbol_color;
        }
    }
}

