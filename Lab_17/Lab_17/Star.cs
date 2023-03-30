using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_17
{
    [Serializable]
    public class Star
    {
        public float a { get; set; }
        public float b { get; set; }

        public void Draw(Graphics graphics, Pen pen, Point shift)
        {
            graphics.Clear(Color.White);

            Point[] points = new Point[8];

            points[0] = new Point(0 - (int)(b / 2), 0 - (int)(b / 2));
            points[1] = new Point(0, 0 - (int)(a / 2));
            points[2] = new Point((int)(b / 2), 0 - (int)(b / 2));
            points[3] = new Point((int)(a / 2), 0);
            points[4] = new Point((int)(b / 2), (int)(b / 2));
            points[5] = new Point(0, (int)(a / 2));
            points[6] = new Point(0 - (int)(b / 2), (int)(b / 2));
            points[7] = new Point(0 - (int)(a / 2), 0);

            for (int i = 0; i < points.Length; i++)
            {
                points[i].X += shift.X;
                points[i].Y += shift.Y;
            }

            for (int i = 0; i < points.Length - 1; i++)
                graphics.DrawLine(pen, points[i], points[i + 1]);
            graphics.DrawLine(pen, points[7], points[0]);
        }

        public Star()
        {
            a = 0;
            b = 0;
        }

        public Star(float a = 0, float b = 0)
        {
            this.a = a;
            this.b = b;
        }
    }
}

