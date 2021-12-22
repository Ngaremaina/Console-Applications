
namespace Temperature_Form
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
            this.llcelcius = new System.Windows.Forms.Label();
            this.txtbxCelcius = new System.Windows.Forms.TextBox();
            this.lblFarenheit = new System.Windows.Forms.Label();
            this.tbxFarenheit = new System.Windows.Forms.TextBox();
            this.btnConvert = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // llcelcius
            // 
            this.llcelcius.AutoSize = true;
            this.llcelcius.Location = new System.Drawing.Point(106, 41);
            this.llcelcius.Name = "llcelcius";
            this.llcelcius.Size = new System.Drawing.Size(41, 13);
            this.llcelcius.TabIndex = 0;
            this.llcelcius.Text = "Celcius";
            // 
            // txtbxCelcius
            // 
            this.txtbxCelcius.Location = new System.Drawing.Point(166, 33);
            this.txtbxCelcius.Name = "txtbxCelcius";
            this.txtbxCelcius.Size = new System.Drawing.Size(100, 20);
            this.txtbxCelcius.TabIndex = 1;
            // 
            // lblFarenheit
            // 
            this.lblFarenheit.AutoSize = true;
            this.lblFarenheit.Location = new System.Drawing.Point(109, 80);
            this.lblFarenheit.Name = "lblFarenheit";
            this.lblFarenheit.Size = new System.Drawing.Size(51, 13);
            this.lblFarenheit.TabIndex = 2;
            this.lblFarenheit.Text = "Farenheit";
            // 
            // tbxFarenheit
            // 
            this.tbxFarenheit.Location = new System.Drawing.Point(166, 80);
            this.tbxFarenheit.Name = "tbxFarenheit";
            this.tbxFarenheit.Size = new System.Drawing.Size(100, 20);
            this.tbxFarenheit.TabIndex = 3;
            this.tbxFarenheit.TextChanged += new System.EventHandler(this.tbxFarenheit_TextChanged);
            // 
            // btnConvert
            // 
            this.btnConvert.Location = new System.Drawing.Point(166, 149);
            this.btnConvert.Name = "btnConvert";
            this.btnConvert.Size = new System.Drawing.Size(75, 23);
            this.btnConvert.TabIndex = 4;
            this.btnConvert.Text = "Convert";
            this.btnConvert.UseVisualStyleBackColor = true;
            this.btnConvert.Click += new System.EventHandler(this.btnConvert_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnConvert);
            this.Controls.Add(this.tbxFarenheit);
            this.Controls.Add(this.lblFarenheit);
            this.Controls.Add(this.txtbxCelcius);
            this.Controls.Add(this.llcelcius);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label llcelcius;
        private System.Windows.Forms.TextBox txtbxCelcius;
        private System.Windows.Forms.Label lblFarenheit;
        private System.Windows.Forms.TextBox tbxFarenheit;
        private System.Windows.Forms.Button btnConvert;
    }
}

