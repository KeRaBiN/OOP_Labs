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

namespace Lab_15_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void OkButton_Click(object sender, EventArgs e)
        {
            string Name = this.NameBox.Text + ' ';
            int space_index = Name.IndexOf(' ');
            string ReversedName = Name.Substring(space_index + 1, Name.IndexOf(' ', space_index + 1) - (space_index + 1)) + ' ' + Name.Substring(0, space_index);

            this.ReversedNameBox.Text = ReversedName;
            this.SymbolsAmountLabel.Text = Convert.ToString(ReversedName.Length - 1) + " symbols";
        }

        private void NameBox_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                string Name = this.NameBox.Text + ' ';
                int space_index = Name.IndexOf(' ');
                string ReversedName = Name.Substring(space_index + 1, Name.IndexOf(' ', space_index + 1) - (space_index + 1)) + ' ' + Name.Substring(0, space_index);

                this.ReversedNameBox.Text = ReversedName;
                this.SymbolsAmountLabel.Text = Convert.ToString(ReversedName.Length - 1) + " symbols";
            }
        }

        private void SaveButton_Click(object sender, EventArgs e)
        {
            string text = this.NameBox.Text;
            if (this.saveFileDialog.ShowDialog() == DialogResult.OK)
            {
                string path = this.saveFileDialog.FileName;
                if (File.Exists(path))
                    File.Delete(path);
                File.WriteAllText(path, text);
                this.RenameButton.Size = new Size(0, 0);
            }
        }

        private void LoadButton_Click(object sender, EventArgs e)
        {
            if (this.openFileDialog.ShowDialog() == DialogResult.OK)
            {
                string path = this.openFileDialog.FileName;
                this.NoFileLabel.Text = "";
                this.NameBox.Text = File.ReadAllText(path);
                this.FileNameBox.Text = path.Substring(path.LastIndexOf('\\') + 1);
                this.RenameButton.Size = new Size(127, 64);
            }
        }

        private void RenameButton_Click(object sender, EventArgs e)
        {
            string text = this.NameBox.Text;
            string path = this.openFileDialog.FileName;
            File.Delete(path);
            path = path.Substring(0, path.LastIndexOf('\\') + 1) + this.FileNameBox.Text;
            File.WriteAllText(path, text);
            this.openFileDialog.FileName = path;
        }
    }
}
