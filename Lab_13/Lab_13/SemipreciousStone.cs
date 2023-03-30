using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_13
{
    class SemipreciousStone : Stone
    {
        public static bool operator ==(SemipreciousStone obj1, SemipreciousStone obj2)
        {
            if (obj1 as Stone != obj2 as Stone)
                return false;
            return true;
        }

        public static bool operator !=(SemipreciousStone obj1, SemipreciousStone obj2)
        {
            if (obj1 as Stone != obj2 as Stone)
                return true;
            return false;
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(Object obj)
        {
            if (obj is SemipreciousStone)
                if ((obj as SemipreciousStone) == this)
                    return true;
            return false;
        }

        public override string ToString()
        {
            string all_data;
            all_data = base.ToString();
            return all_data;
        }

        public SemipreciousStone(string name = "", float weight = 0, float price = 0, string color = "", float hardness = 0, float size = 0)
            : base(name, weight, price, color, hardness, size)
        {
        }
    }
}
