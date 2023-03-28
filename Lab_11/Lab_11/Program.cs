using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_11
{
    class Program
    {
        static string EncriptString(string line)
        {
            string result = "";
            for (int i = 0; i < line.Length; i++)
                result += (Convert.ToInt32(line[i]) + ".");
            result += '/';
            return result;
        }
        static string DecriptString(string line)
        {
            string result = "";
            char symbol = '0';
            string code = "";
            for (int i = 0; symbol != '/'; i++)
            {
                symbol = line[i];
                if (symbol == '.')
                {
                    result += Convert.ToChar(Convert.ToInt32(code));
                    code = "";
                }
                else
                    code += symbol;
            }
            return result;
        }
        static void Main(string[] args)
        {
            string Name, Surname;

            Console.Write("Type name: ");
            Name = Console.ReadLine();
            Console.Write("Type surname: ");
            Surname = Console.ReadLine();

            Console.WriteLine("\nName - " + Name + ". Amount of letters in surname - " + Surname.Length + "\n");

            string Text;

            Console.Write("Type text: ");
            Text = Console.ReadLine();

            string encripted_str = EncriptString(Text);

            Console.WriteLine("Here is encrypted text: " + encripted_str);
            Console.WriteLine("and here is decripted: " + DecriptString(encripted_str));
        }
    }
}
