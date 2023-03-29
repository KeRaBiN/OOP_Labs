using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_15_1
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
            this.FormBorderStyle = FormBorderStyle.FixedDialog;
            this.StartPosition = FormStartPosition.CenterScreen;
        }

        private void CalculateButton_Click(object sender, EventArgs e)
        {
            float diameter = Convert.ToInt32(this.DiameterField.Text);
            this.CircumferenceField.Text = Convert.ToString(diameter * Math.PI);
            this.SquareField.Text = Convert.ToString(Math.Pow(diameter / 2, 2) * Math.PI);
        }
    }
}
