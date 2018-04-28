using System;
using System.IO;
using System.Security.Cryptography;
using System.Windows.Forms;
using System.Text;

namespace RSA
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            rsa = new RSACryptoServiceProvider();
            toolStripComboBox1.SelectedIndex = 0;
            form2 = new Form2(rsa);
        }

        private RSACryptoServiceProvider rsa;
        private Form2 form2;

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (toolStripComboBox1.SelectedIndex == 0)
            {
                try
                {
                    textBox2.Clear();
                    int j;
                    byte[] bout = new byte[0];
                    for (int i = 0; i < textBox1.Text.Length; i = i + (textBox1.Text.Length < i + 116 ? textBox1.Text.Length - i : 116))
                    {
                        bout = rsa.Encrypt(Encoding.ASCII.GetBytes(textBox1.Text.Substring(i, (textBox1.Text.Length < i + 116 ? textBox1.Text.Length - i : 116))), false);
                        for (j = 0; j < bout.Length; j++) textBox2.Text += (bout[j] + " ");
                    }
                }
                catch (System.Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }

            else
            {
                openFileDialog1.Filter = "All Files|*.*";
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    try
                    {
                        string extention = openFileDialog1.FileName.Substring(openFileDialog1.FileName.LastIndexOf(".") + 1, openFileDialog1.FileName.Length - openFileDialog1.FileName.LastIndexOf(".") - 1);
                        string path = openFileDialog1.FileName.Substring(0, openFileDialog1.FileName.LastIndexOf(".") + 1);
                        File.WriteAllText(path + "xml", rsa.ToXmlString(true));
                        FileStream fin = new FileStream(openFileDialog1.FileName, FileMode.Open, FileAccess.Read);
                        if (File.Exists(path + "enc")) File.Delete(path + "enc");
                        FileStream fout = new FileStream(path + "enc", FileMode.CreateNew, FileAccess.Write);

                        fout.WriteByte(Convert.ToByte(extention.Length));
                        fout.Write(Encoding.ASCII.GetBytes(extention), 0, extention.Length);

                        int readsym = 0;
                        byte[] buf = new byte[116];
                        while ((readsym = fin.Read(buf, 0, 116)) > 0) fout.Write(buf, 0, readsym);

                        fout.Close();
                        fin.Close();
                    }
                    catch (System.Exception ex)
                    {
                        MessageBox.Show(ex.Message);
                    }
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (toolStripComboBox1.SelectedIndex == 0)
            {
                try
                {
                    byte[] bout;
                    byte[] bin = new byte[0];
                    string text = textBox1.Text;
                    textBox2.Clear();
                    int i = 0, k = 0;
                    string temp;
                    while (i < text.Length)
                    {
                        temp = "";
                        while (i < text.Length && !Char.IsWhiteSpace(text[i])) temp += text[i++];
                        if (!String.IsNullOrEmpty(temp))
                        {
                            Array.Resize(ref bin, bin.Length + 1);
                            bin[bin.Length - 1] = Convert.ToByte(temp);
                            k++;
                            if (k == 128)
                            {
                                bout = rsa.Decrypt(bin, false);
                                textBox2.Text += Encoding.ASCII.GetString(bout);
                                bin = new byte[0];
                                k = 0;
                            }
                        }
                        i++;
                    }
                }
                catch (System.Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }

            else
            {
                openFileDialog1.Filter = "EnCrypted Files|*.enc";
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    try
                    {
                        string path = openFileDialog1.FileName.Substring(0, openFileDialog1.FileName.LastIndexOf(".") + 1);
                        rsa.FromXmlString(File.ReadAllText(path + "xml"));
                        FileStream fin = new FileStream(openFileDialog1.FileName, FileMode.Open, FileAccess.Read);

                        int len;
                        byte[] buf = new byte[1];
                        fin.Read(buf, 0, 1);
                        len = Convert.ToInt32(buf[0]);
                        buf = new byte[len];
                        fin.Read(buf, 0, buf.Length);
                        string extention = Encoding.ASCII.GetString(buf);

                        if (File.Exists(path + extention)) File.Delete(path + extention);
                        FileStream fout = new FileStream(path + extention, FileMode.CreateNew, FileAccess.Write);

                        buf = new byte[116];
                        while ((len = fin.Read(buf, 0, 116)) > 0) fout.Write(buf, 0, len);

                        fout.Close();
                        fin.Close();
                    }
                    catch (System.Exception ex)
                    {
                        MessageBox.Show(ex.Message);
                    }
                }
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (form2.ShowDialog() == DialogResult.OK)
            {
                if (!rsa.Equals(form2.rsa)) rsa = form2.rsa;
            }
            Activate();
        }

        private void openFileToolStripMenuItem_Click(object sender, EventArgs e)
        {
            openFileDialog1.Filter = "All Files|*.*";
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                System.Diagnostics.Process.Start(openFileDialog1.FileName);
            }
        }

        private void creatorToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Creator:   Jafar Yormakhmadzoda");
        }

        private void aboutRSAToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (File.Exists("RSA_Help.docx")) System.Diagnostics.Process.Start("RSA_Help.docx");
            else MessageBox.Show("File RSA_Help.docx does not exist");
        }
    }
}
