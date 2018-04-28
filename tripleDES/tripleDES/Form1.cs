using System;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using System.Windows.Forms;

namespace tripleDES
{
    public partial class Form1 : Form
    {


        public Form1()
        {
            InitializeComponent();
            tripDES = new TripleDESCryptoServiceProvider();
            comboBox1.SelectedIndex = 0;
            tripDES.Mode = CipherMode.CBC;
            enc = tripDES.CreateEncryptor();
            dec = tripDES.CreateDecryptor();
            key_is_generated = false;
            iv_is_generated = false;
        }

        private TripleDESCryptoServiceProvider tripDES;
        ICryptoTransform enc;
        ICryptoTransform dec;
        bool key_is_generated;
        bool iv_is_generated;

        private void button1_Click(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                if (folderBrowserDialog1.ShowDialog() == DialogResult.OK)
                {
                    string directory = folderBrowserDialog1.SelectedPath + "\\";
                    textBox1.Text = directory + "tripDES_Message.txt";
                    File.WriteAllText(directory + "tripDES_Message.txt", textBox2.Text, Encoding.ASCII);
                    FileStream fin = new FileStream(directory + "tripDES_Message.txt", FileMode.Open, FileAccess.Read);
                    FileStream fout = new FileStream(directory + "tripDES_Message.enc", FileMode.Create, FileAccess.Write);
                    CryptoStream encStream = new CryptoStream(fout, enc, CryptoStreamMode.Write);
                    
                    byte b1 = Convert.ToByte('\n');
                    fout.Write(tripDES.Key, 0, tripDES.Key.Length);
                    fout.WriteByte(b1);
                    fout.Write(tripDES.IV, 0, tripDES.IV.Length);
                    fout.WriteByte(b1);
                    switch (comboBox1.SelectedIndex)
                    {
                        case 0:
                            tripDES.Mode = CipherMode.CBC;
                            break;
                        case 1:
                            tripDES.Mode = CipherMode.CFB;
                            break;
                        case 2:
                            tripDES.Mode = CipherMode.ECB;
                            break;
                        case 3:
                            tripDES.Mode = CipherMode.OFB;
                            break;
                    }
                    fout.Write(Encoding.ASCII.GetBytes(tripDES.Mode.ToString()), 0, 3);
                    fout.WriteByte(b1);
                    
                    int len;
                    byte[] bin = new byte[124];
                    while ((len = fin.Read(bin, 0, 124)) > 0) encStream.Write(bin, 0, len);

                    encStream.Close();
                    fout.Close();
                    fin.Close();
                }
            }
            else
            {
                openFileDialog1.Filter = "Text Files|*.txt";
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    textBox1.Text = openFileDialog1.FileName;
                    string directory = openFileDialog1.FileName.Substring(0, openFileDialog1.FileName.LastIndexOf(".")+1);
                    FileStream fin = new FileStream(openFileDialog1.FileName, FileMode.Open, FileAccess.Read);
                    FileStream fout = new FileStream(directory + "enc", FileMode.Create, FileAccess.Write);
                    CryptoStream encStream = new CryptoStream(fout, enc, CryptoStreamMode.Write);

                    byte b1 = Convert.ToByte('\n');
                    fout.Write(tripDES.Key, 0, tripDES.Key.Length);
                    fout.WriteByte(b1);
                    fout.Write(tripDES.IV, 0, tripDES.IV.Length);
                    fout.WriteByte(b1);
                    switch (comboBox1.SelectedIndex)
                    {
                        case 0:
                            tripDES.Mode = CipherMode.CBC;
                            break;
                        case 1:
                            tripDES.Mode = CipherMode.CFB;
                            break;
                        case 2:
                            tripDES.Mode = CipherMode.ECB;
                            break;
                        case 3:
                            tripDES.Mode = CipherMode.OFB;
                            break;
                    }
                    fout.Write(Encoding.ASCII.GetBytes(tripDES.Mode.ToString()), 0, 3);
                    fout.WriteByte(b1);

                    int len;
                    byte[] bin = new byte[124];
                    while ((len = fin.Read(bin, 0, 124)) > 0) encStream.Write(bin, 0, len);

                    encStream.Close();
                    fout.Close();
                    fin.Close();
                }
            }  
        }
        
        private void button2_Click(object sender, EventArgs e)
        {
            if (!key_is_generated)
            {
                try
                {
                    tripDES.Key = Encoding.ASCII.GetBytes(maskedTextBox1.Text);
                }
                catch (System.Exception ex)
                {
                    MessageBox.Show("Error!!! " + ex.Message);
                    return;
                }
            }
            if (!iv_is_generated)
            {
                try
                {
                    tripDES.IV = Encoding.ASCII.GetBytes(maskedTextBox2.Text);
                }
                catch (System.Exception ex)
                {
                    MessageBox.Show("Error!!! " + ex.Message);
                    return;
                }
            }
            button1.Enabled = true;
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            textBox2.Enabled = checkBox1.Checked;
            textBox2.Focus();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            openFileDialog1.Filter = "Encrypted files|*.enc";
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                byte[] buf = new byte[3];
                string directory = openFileDialog1.FileName.Substring(0, openFileDialog1.FileName.LastIndexOf(".") + 1);
                FileStream fin = new FileStream(openFileDialog1.FileName, FileMode.Open, FileAccess.Read);
                FileStream fout = new FileStream(directory + "txt", FileMode.Create, FileAccess.Write);
                CryptoStream decStream = new CryptoStream(fin, dec, CryptoStreamMode.Read);
                
                fin.Read(tripDES.Key, 0, 24);
                fin.ReadByte();
                fin.Read(tripDES.IV, 0, 8);
                fin.ReadByte();
                fin.Read(buf, 0, 3);
                fin.ReadByte();
                switch (Encoding.ASCII.GetString(buf))
                {
                    case "CBC":
                        tripDES.Mode = CipherMode.CBC;
                        break;
                    case "CFB":
                        tripDES.Mode = CipherMode.CFB;
                        break;
                    case "ECB":
                        tripDES.Mode = CipherMode.ECB;
                        break;
                    case "OFB":
                        tripDES.Mode = CipherMode.OFB;
                        break;
                }

                int len;
                byte[] bin = new byte[124];
                while ((len = decStream.Read(bin, 0, 124)) > 0) fout.Write(bin, 0, len);
                
                decStream.Close();
                fout.Close();
                fin.Close();
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            tripDES.GenerateKey();
            key_is_generated = true;
            maskedTextBox1.Text = Encoding.UTF8.GetString(tripDES.Key);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            tripDES.GenerateIV();
            iv_is_generated = true;
            maskedTextBox2.Text = Encoding.UTF8.GetString(tripDES.IV);
        }

        private void maskedTextBox2_Click(object sender, EventArgs e)
        {
            iv_is_generated = false;
        }

        private void maskedTextBox1_Click(object sender, EventArgs e)
        {
            key_is_generated = false;
        }

        private void button1_MouseEnter(object sender, EventArgs e)
        {
            label7.Text = "EnCrypt the chosen file";
        }

        private void button5_MouseEnter(object sender, EventArgs e)
        {
            label7.Text = "DeCrypt the chosen file";
        }

        private void button2_MouseEnter(object sender, EventArgs e)
        {
            label7.Text = "Check KEY and IV";
        }

        private void button3_MouseEnter(object sender, EventArgs e)
        {
            label7.Text = "Generate casual KEY";
        }

        private void button4_MouseEnter(object sender, EventArgs e)
        {
            label7.Text = "Generate casual Initial Vector";
        }

        private void checkBox1_MouseEnter(object sender, EventArgs e)
        {
            label7.Text = "Create new text file tripDES_Message.txt in the chosen directory";
        }

        private void creatorToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Creator:   Jafar Yormahmadzoda");
        }

        private void aboutTripleDESToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (File.Exists("tripleDES_Help.docx")) System.Diagnostics.Process.Start("tripleDES_Help.docx");
            else MessageBox.Show("File tripleDES_Help.docx does not exist");
        }
    }
}



/*
        StreamReader sr = File.OpenText(directory + "3des");
        string temp = "";
        int i = 0, k = 0;
        byte[] key = new byte[24];
        string line = sr.ReadLine();
        while(i < line.Length)
        {
            temp = "";
            while (!Char.IsWhiteSpace(line[i])) temp += line[i++];
            key[k++] = Convert.ToByte(temp);
            i++;
        }
        i = 0;
        k = 0;
        temp = "";
        line = sr.ReadLine();
        byte[] iv = new byte[8];
        while (i < line.Length)
        {
            temp = "";
            while (!Char.IsWhiteSpace(line[i])) temp += line[i++];
            iv[k++] = Convert.ToByte(temp);
            i++;
        }
        switch (sr.ReadLine())
        {
            case "CBC":
                tripDES.Mode = CipherMode.CBC;
                break;
            case "CFB":
                tripDES.Mode = CipherMode.CFB;
                break;
            case "CTS":
                tripDES.Mode = CipherMode.CTS;
                break;
            case "ECB":
                tripDES.Mode = CipherMode.ECB;
                break;
            case "OFB":
                tripDES.Mode = CipherMode.OFB;
                break;
        }
        sr.Close();
        tripDES.Key = key;
        tripDES.IV = iv;
        */



/*
    int i;
    string buf = "";
    StreamWriter sw = File.CreateText(directory + "tripDES_Message.3des");
    for (i = 0; i < tripDES.Key.Length; i++) buf += (tripDES.Key[i] + " ");
    sw.WriteLine(buf);
    buf = "";
    for (i = 0; i < tripDES.IV.Length; i++) buf += (tripDES.IV[i] + " ");
    sw.WriteLine(buf);
    switch (comboBox1.SelectedIndex)
    {
        case 0:
            tripDES.Mode = CipherMode.CBC;
            sw.WriteLine("CBC");
            break;
        case 1:
            tripDES.Mode = CipherMode.CFB;
            sw.WriteLine("CFB");
            break;
        case 2:
            tripDES.Mode = CipherMode.CTS;
            sw.WriteLine("CTS");
            break;
        case 3:
            tripDES.Mode = CipherMode.ECB;
            sw.WriteLine("ECB");
            break;
        case 4:
            tripDES.Mode = CipherMode.OFB;
            sw.WriteLine("OFB");
            break;
    }
    sw.Close();
        */