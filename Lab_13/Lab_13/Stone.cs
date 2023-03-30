using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_13
{
    class Stone
    {
        public string name { get; set; }
        public float weight { get; set; }
        public float price { get; set; }
        public string color { get; set; }
        public float hardness { get; set; }
        public float size { get; set; }

        public static float getTotalWeight(Stone[] stones)
        {
            float total_weight = 0;
            for (int i = 0; i < stones.Length; i++)
                total_weight += stones[i].weight;
            return total_weight;
        }
        public static float getTotalPrice(Stone[] stones)
        {
            float total_price = 0;
            for (int i = 0; i < stones.Length; i++)
                total_price += stones[i].price;
            return total_price;
        }

        public static bool operator ==(Stone obj1, Stone obj2)
        {
            if (obj1.name != obj2.name)
                return false;
            else if (obj1.weight != obj2.weight)
                return false;
            else if (obj1.price != obj2.price)
                return false;
            else if (obj1.color != obj2.color)
                return false;
            else if (obj1.hardness != obj2.hardness)
                return false;
            else if (obj1.size != obj2.size)
                return false;
            return true;
        }

        public static bool operator !=(Stone obj1, Stone obj2)
        {
            if (obj1.name != obj2.name)
                return true;
            else if (obj1.weight != obj2.weight)
                return true;
            else if (obj1.price != obj2.price)
                return true;
            else if (obj1.color != obj2.color)
                return true;
            else if (obj1.hardness != obj2.hardness)
                return true;
            else if (obj1.size != obj2.size)
                return true;
            return false;
        }

        public override int GetHashCode()
        {
            return 0;
        }

        public override bool Equals(Object obj)
        {
            if (obj is Stone)
                if ((obj as Stone) == this)
                    return true;
            return false;
        }

        public override string ToString()
        {
            string all_data;
            all_data = "\n\nStone: ";
            all_data += "\nName: " + name;
            all_data += "\nWeight: " + weight + " grams";
            all_data += "\nPrice: " + price + " dollars";
            all_data += "\nColor: " + color;
            all_data += "\nHardness: " + hardness;
            all_data += "\nSize: " + size + " millimeters";
            return all_data;
        }

        public Stone(string name = "", float weight = 0, float price = 0, string color = "", float hardness = 0, float size = 0)
        {
            this.name = name;
            this.weight = weight;
            this.price = price;
            this.color = color;
            this.hardness = hardness;
            this.size = size;
        }
    }
}
