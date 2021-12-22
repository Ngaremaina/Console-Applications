using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Multiplication_Table_Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnMultiplication_Click(object sender, EventArgs e)
        {
            
            int i, j,result;
            string output;
            
            for (i = 1; i <= 7; i++)
            {
                for (j = 1; j <= 70; j++)
                {
                    //ListBox lstbxMultiplication = new ListBox();
                    result = i * j;
                    output = result.ToString();
                    lstbxMultiplication.Items.Add(output);
                    //lstbxMultiplication.ItemHeight = input;
                    lstbxMultiplication.MultiColumn = true;
                    lstbxMultiplication.Size=new Size(328, 121);
                    //lstbxMultiplication.HorizontalScrollBar = true;
                    //this.Controls.Add(lstbxMultiplication);
                }
                
            }
            
            
        }
    }
}
