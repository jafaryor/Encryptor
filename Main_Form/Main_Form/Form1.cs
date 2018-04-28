using System;
using System.IO;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Main_Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (File.Exists("RSA.exe")) System.Diagnostics.Process.Start("RSA.exe");
            else MessageBox.Show("File RSA.exe does not exist");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (File.Exists("tripleDES.exe")) System.Diagnostics.Process.Start("tripleDES.exe");
            else MessageBox.Show("File tripleDES.exe does not exist");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (File.Exists("Huffman.exe")) System.Diagnostics.Process.Start("Huffman.exe");
            else MessageBox.Show("File Huffman.exe does not exist");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (File.Exists("Lempel - Ziv.exe")) System.Diagnostics.Process.Start("Lempel - Ziv.exe");
            else MessageBox.Show("File Lempel - Ziv.exe does not exist");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (File.Exists("Scrambler.exe")) System.Diagnostics.Process.Start("Scrambler.exe");
            else MessageBox.Show("File Scrambler.exe does not exist");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (File.Exists("Base64.exe")) System.Diagnostics.Process.Start("Base64.exe");
            else MessageBox.Show("File Base64.exe does not exist");
        }

        private void button1_MouseEnter(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "RSA (Rivest Shamir Adleman)";
        }

        private void button1_MouseLeave(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Jafar applications";
        }

        private void button2_MouseEnter(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "tripleDES (Data Encryption Standard)";
        }

        private void button2_MouseLeave(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Jafar applications";
        }

        private void button3_MouseEnter(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Huffman's algorithm";
        }

        private void button3_MouseLeave(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Jafar applications";
        }

        private void button4_MouseEnter(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Lempel-Ziv-Welch's algorithm";
        }

        private void button4_MouseLeave(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Jafar applications";
        }

        private void button5_MouseEnter(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Scrambler";
        }

        private void button6_MouseLeave(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Jafar applications";
        }

        private void button5_MouseLeave(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Jafar applications";
        }

        private void button6_MouseEnter(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Base64";
        }

        private void aboutCryptoAlgorithmsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (File.Exists("Crypting_Algorithms.pptx")) System.Diagnostics.Process.Start("Crypting_Algorithms.pptx");
            else MessageBox.Show("File Crypting_Algorithms.pptx does not exist");
        }

    }
}
