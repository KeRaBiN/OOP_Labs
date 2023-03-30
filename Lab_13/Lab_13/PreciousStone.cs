using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_13
{
    class PreciousStone : Stone
    {
        public float transparency { get; set; }

        public static bool operator ==(PreciousStone obj1, PreciousStone obj2)
        {
            if (obj1 as Stone != obj2 as Stone)
                return false;
            if (obj1.transparency != obj2.transparency)
                return false;
            return true;
        }

        public static bool operator !=(PreciousStone obj1, PreciousStone obj2)
        {
            if (obj1 as Stone != obj2 as Stone)
                return true;
            if (obj1.transparency != obj2.transparency)
                return true;
            return false;
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(Object obj)
        {
            if (obj is PreciousStone)
                if ((obj as PreciousStone) == this)
                    return true;
            return false;
        }

        public override string ToString()
        {
            string all_data;
            all_data = base.ToString();
            all_data += "\nTransparency: " + transparency;
            return all_data;
        }

        public PreciousStone(string name = "", float weight = 0, float price = 0, string color = "", float hardness = 0, float size = 0, float transparency = 0) 
            : base(name, weight, price, color, hardness, size)
        {
            this.transparency = transparency;
        }
    }
}
