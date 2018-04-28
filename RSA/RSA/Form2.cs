using System;
using System.Security.Cryptography;
using System.Text;
using System.Windows.Forms;

namespace RSA
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        public Form2(RSACryptoServiceProvider rsa2)
        {
            InitializeComponent();
            rsa = rsa2;
        }

        public RSACryptoServiceProvider rsa;

        public void Show_Parameters(RSAParameters p)
        {
            richTextBox1.Clear();
            richTextBox1.Text += ("P:          " + Encoding.UTF7.GetString(p.P) + "\n\n");
            richTextBox1.Text += ("Q:          " + Encoding.UTF7.GetString(p.Q) + "\n\n");
            richTextBox1.Text += ("D:          " + Encoding.UTF7.GetString(p.D) + "\n\n");
            richTextBox1.Text += ("DP:          " + Encoding.UTF7.GetString(p.DP) + "\n\n");
            richTextBox1.Text += ("DQ:          " + Encoding.UTF7.GetString(p.DQ) + "\n\n");
            richTextBox1.Text += ("InverseQ:          " + Encoding.UTF7.GetString(p.InverseQ) + "\n\n");
            richTextBox1.Text += ("Modulus:          " + Encoding.UTF7.GetString(p.Modulus) + "\n\n");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            rsa = new RSACryptoServiceProvider();
            Show_Parameters(rsa.ExportParameters(true));
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            Show_Parameters(rsa.ExportParameters(true));
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Hide();
        }
    }
}
