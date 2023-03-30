using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Serialization;

namespace Lab_17
{
    public partial class Form1 : Form
    {
        Graphics graphics;
        Pen pen;
        Star star;
        Point shift;

        public void SerializeXML()
        {
            FileStream fileStream = new FileStream("Star.xml", FileMode.OpenOrCreate);
            XmlSerializer xmlSerializer = new XmlSerializer(typeof(Star));

            xmlSerializer.Serialize(fileStream, star);
            fileStream.Close();
        }

        public void DeserializeXML()
        {
            if (File.Exists("Star.xml"))
            {
                FileStream fileStream = new FileStream("Star.xml", FileMode.Open);
                XmlSerializer xmlSerializer = new XmlSerializer(typeof(Star));

                star = (Star)xmlSerializer.Deserialize(fileStream);

                ABox.Text = Convert.ToString(star.a);
                BBox.Text = Convert.ToString(star.b);
                star.Draw(graphics, pen, shift);

                fileStream.Close();
            }
        }

        public Form1()
        {
            InitializeComponent();
            graphics = pictureBox.CreateGraphics();
            pen = new Pen(Color.Black, 2);
            star = new Star();
            shift = new Point(pictureBox.Size.Width / 2, pictureBox.Size.Height / 2);

            DeserializeXML();
        }

        private void DrawButton_Click(object sender, EventArgs e)
        {
            star.a = Convert.ToInt32(ABox.Text);
            star.b = Convert.ToInt32(BBox.Text);
            star.Draw(graphics, pen, shift);
        }

        private void SerializeButton_Click(object sender, EventArgs e)
        {
            SerializeXML();
        }

        private void DeserializeButton_Click(object sender, EventArgs e)
        {
            DeserializeXML();
        }
    }
}
