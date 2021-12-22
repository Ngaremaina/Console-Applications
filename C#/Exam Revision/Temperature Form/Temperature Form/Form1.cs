using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Temperature_Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }

        private void tbxFarenheit_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnConvert_Click(object sender, EventArgs e)
        {
            double celcius, farenheit;
            celcius = double.Parse(txtbxCelcius.Text);
            farenheit = celcius * (9 / 5) - 32;
            tbxFarenheit.Text = farenheit.ToString();
            
        }
    }
}
