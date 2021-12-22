
namespace Multiplication_Table_Form
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lstbxMultiplication = new System.Windows.Forms.ListBox();
            this.btnMultiplication = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lstbxMultiplication
            // 
            this.lstbxMultiplication.FormattingEnabled = true;
            this.lstbxMultiplication.Location = new System.Drawing.Point(233, 9);
            this.lstbxMultiplication.Name = "lstbxMultiplication";
            this.lstbxMultiplication.Size = new System.Drawing.Size(328, 121);
            this.lstbxMultiplication.TabIndex = 0;
            // 
            // btnMultiplication
            // 
            this.btnMultiplication.Location = new System.Drawing.Point(362, 166);
            this.btnMultiplication.Name = "btnMultiplication";
            this.btnMultiplication.Size = new System.Drawing.Size(75, 23);
            this.btnMultiplication.TabIndex = 3;
            this.btnMultiplication.Text = "Generate";
            this.btnMultiplication.UseVisualStyleBackColor = true;
            this.btnMultiplication.Click += new System.EventHandler(this.btnMultiplication_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnMultiplication);
            this.Controls.Add(this.lstbxMultiplication);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListBox lstbxMultiplication;
        private System.Windows.Forms.Button btnMultiplication;
    }
}

