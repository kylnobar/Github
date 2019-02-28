namespace Minimum_Blank_Size
{
    partial class formMain
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
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabMBS = new System.Windows.Forms.TabPage();
            this.label5 = new System.Windows.Forms.Label();
            this.inputAbox = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.inputDBL = new System.Windows.Forms.TextBox();
            this.buttonCalcFramePD = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.inputFrmPD = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.inputPtsPD = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.inputED = new System.Windows.Forms.TextBox();
            this.buttonCalc = new System.Windows.Forms.Button();
            this.lblResult = new System.Windows.Forms.Label();
            this.inputResult = new System.Windows.Forms.TextBox();
            this.tabRecomend = new System.Windows.Forms.TabPage();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.lstLens = new System.Windows.Forms.ListBox();
            this.lstFrm = new System.Windows.Forms.ListBox();
            this.lblRec = new System.Windows.Forms.Label();
            this.tabControl1.SuspendLayout();
            this.tabMBS.SuspendLayout();
            this.tabRecomend.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Alignment = System.Windows.Forms.TabAlignment.Bottom;
            this.tabControl1.Controls.Add(this.tabMBS);
            this.tabControl1.Controls.Add(this.tabRecomend);
            this.tabControl1.Font = new System.Drawing.Font("Trebuchet MS", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.tabControl1.Location = new System.Drawing.Point(0, 0);
            this.tabControl1.Multiline = true;
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.Padding = new System.Drawing.Point(9, 3);
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(541, 380);
            this.tabControl1.SizeMode = System.Windows.Forms.TabSizeMode.FillToRight;
            this.tabControl1.TabIndex = 0;
            // 
            // tabMBS
            // 
            this.tabMBS.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.tabMBS.Controls.Add(this.label5);
            this.tabMBS.Controls.Add(this.inputAbox);
            this.tabMBS.Controls.Add(this.label4);
            this.tabMBS.Controls.Add(this.inputDBL);
            this.tabMBS.Controls.Add(this.buttonCalcFramePD);
            this.tabMBS.Controls.Add(this.label1);
            this.tabMBS.Controls.Add(this.inputFrmPD);
            this.tabMBS.Controls.Add(this.label2);
            this.tabMBS.Controls.Add(this.inputPtsPD);
            this.tabMBS.Controls.Add(this.label3);
            this.tabMBS.Controls.Add(this.inputED);
            this.tabMBS.Controls.Add(this.buttonCalc);
            this.tabMBS.Controls.Add(this.lblResult);
            this.tabMBS.Controls.Add(this.inputResult);
            this.tabMBS.Location = new System.Drawing.Point(4, 4);
            this.tabMBS.Name = "tabMBS";
            this.tabMBS.Padding = new System.Windows.Forms.Padding(3);
            this.tabMBS.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.tabMBS.Size = new System.Drawing.Size(533, 345);
            this.tabMBS.TabIndex = 0;
            this.tabMBS.Text = "MBS";
            this.tabMBS.UseVisualStyleBackColor = true;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(11, 25);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(117, 20);
            this.label5.TabIndex = 39;
            this.label5.Text = "Frame A Box:";
            // 
            // inputAbox
            // 
            this.inputAbox.Font = new System.Drawing.Font("Lucida Console", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputAbox.Location = new System.Drawing.Point(11, 48);
            this.inputAbox.Name = "inputAbox";
            this.inputAbox.Size = new System.Drawing.Size(100, 26);
            this.inputAbox.TabIndex = 30;
            this.inputAbox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(146, 25);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(105, 20);
            this.label4.TabIndex = 38;
            this.label4.Text = "Frame DBL:";
            // 
            // inputDBL
            // 
            this.inputDBL.Font = new System.Drawing.Font("Lucida Console", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputDBL.Location = new System.Drawing.Point(146, 48);
            this.inputDBL.Name = "inputDBL";
            this.inputDBL.Size = new System.Drawing.Size(100, 26);
            this.inputDBL.TabIndex = 31;
            this.inputDBL.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // buttonCalcFramePD
            // 
            this.buttonCalcFramePD.Font = new System.Drawing.Font("Trebuchet MS", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.buttonCalcFramePD.Location = new System.Drawing.Point(11, 80);
            this.buttonCalcFramePD.Name = "buttonCalcFramePD";
            this.buttonCalcFramePD.Size = new System.Drawing.Size(235, 40);
            this.buttonCalcFramePD.TabIndex = 32;
            this.buttonCalcFramePD.Text = "Calculate Frame PD";
            this.buttonCalcFramePD.UseVisualStyleBackColor = true;
            this.buttonCalcFramePD.Click += new System.EventHandler(this.buttonCalcFramePD_Click_2);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(427, 25);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(94, 20);
            this.label1.TabIndex = 33;
            this.label1.Text = "Frame PD:";
            // 
            // inputFrmPD
            // 
            this.inputFrmPD.Font = new System.Drawing.Font("Lucida Console", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputFrmPD.Location = new System.Drawing.Point(408, 48);
            this.inputFrmPD.Name = "inputFrmPD";
            this.inputFrmPD.Size = new System.Drawing.Size(100, 26);
            this.inputFrmPD.TabIndex = 26;
            this.inputFrmPD.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(408, 77);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(113, 20);
            this.label2.TabIndex = 34;
            this.label2.Text = "Patient\'s PD:";
            // 
            // inputPtsPD
            // 
            this.inputPtsPD.Font = new System.Drawing.Font("Lucida Console", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputPtsPD.Location = new System.Drawing.Point(408, 100);
            this.inputPtsPD.Name = "inputPtsPD";
            this.inputPtsPD.Size = new System.Drawing.Size(100, 26);
            this.inputPtsPD.TabIndex = 27;
            this.inputPtsPD.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(281, 129);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(240, 20);
            this.label3.TabIndex = 35;
            this.label3.Text = "Effective Diameter of Frame:";
            // 
            // inputED
            // 
            this.inputED.Font = new System.Drawing.Font("Lucida Console", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputED.Location = new System.Drawing.Point(408, 152);
            this.inputED.Name = "inputED";
            this.inputED.Size = new System.Drawing.Size(100, 26);
            this.inputED.TabIndex = 28;
            this.inputED.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // buttonCalc
            // 
            this.buttonCalc.Font = new System.Drawing.Font("Trebuchet MS", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.buttonCalc.Location = new System.Drawing.Point(182, 193);
            this.buttonCalc.Name = "buttonCalc";
            this.buttonCalc.Size = new System.Drawing.Size(149, 35);
            this.buttonCalc.TabIndex = 29;
            this.buttonCalc.Text = "Calculate MBS";
            this.buttonCalc.UseVisualStyleBackColor = true;
            this.buttonCalc.Click += new System.EventHandler(this.buttonCalc_Click_2);
            // 
            // lblResult
            // 
            this.lblResult.AutoEllipsis = true;
            this.lblResult.Font = new System.Drawing.Font("OCR A Extended", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblResult.Location = new System.Drawing.Point(11, 231);
            this.lblResult.Name = "lblResult";
            this.lblResult.Size = new System.Drawing.Size(507, 46);
            this.lblResult.TabIndex = 37;
            this.lblResult.Text = "Theoretical Minimum Blank Size: (allowing for imperfections)";
            this.lblResult.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // inputResult
            // 
            this.inputResult.Font = new System.Drawing.Font("Trebuchet MS", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputResult.Location = new System.Drawing.Point(167, 280);
            this.inputResult.Name = "inputResult";
            this.inputResult.ReadOnly = true;
            this.inputResult.Size = new System.Drawing.Size(174, 32);
            this.inputResult.TabIndex = 36;
            this.inputResult.Text = "Undetermined...";
            this.inputResult.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // tabRecomend
            // 
            this.tabRecomend.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.tabRecomend.Controls.Add(this.groupBox2);
            this.tabRecomend.Controls.Add(this.groupBox3);
            this.tabRecomend.Controls.Add(this.groupBox1);
            this.tabRecomend.Location = new System.Drawing.Point(4, 4);
            this.tabRecomend.Name = "tabRecomend";
            this.tabRecomend.Padding = new System.Windows.Forms.Padding(3);
            this.tabRecomend.Size = new System.Drawing.Size(533, 345);
            this.tabRecomend.TabIndex = 1;
            this.tabRecomend.Text = "Recommendations";
            this.tabRecomend.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.lstLens);
            this.groupBox1.Location = new System.Drawing.Point(63, 8);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(131, 121);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Lens Material";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.lstFrm);
            this.groupBox2.Location = new System.Drawing.Point(310, 8);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(148, 121);
            this.groupBox2.TabIndex = 0;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Frame Type";
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.lblRec);
            this.groupBox3.Location = new System.Drawing.Point(18, 135);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(505, 202);
            this.groupBox3.TabIndex = 0;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Recommendation";
            // 
            // lstLens
            // 
            this.lstLens.FormattingEnabled = true;
            this.lstLens.ItemHeight = 22;
            this.lstLens.Items.AddRange(new object[] {
            "CR-39",
            "Glass",
            "Polycarbonate",
            "Hi-Index"});
            this.lstLens.Location = new System.Drawing.Point(3, 22);
            this.lstLens.Name = "lstLens";
            this.lstLens.Size = new System.Drawing.Size(120, 92);
            this.lstLens.TabIndex = 0;
            this.lstLens.SelectedIndexChanged += new System.EventHandler(this.lstLens_SelectedIndexChanged);
            // 
            // lstFrm
            // 
            this.lstFrm.FormattingEnabled = true;
            this.lstFrm.ItemHeight = 22;
            this.lstFrm.Items.AddRange(new object[] {
            "Metal Full Rim",
            "Zyloware Full Rim",
            "Semi-Rimless",
            "Drill Mount"});
            this.lstFrm.Location = new System.Drawing.Point(6, 22);
            this.lstFrm.Name = "lstFrm";
            this.lstFrm.Size = new System.Drawing.Size(136, 92);
            this.lstFrm.TabIndex = 0;
            // 
            // lblRec
            // 
            this.lblRec.Location = new System.Drawing.Point(3, 22);
            this.lblRec.Name = "lblRec";
            this.lblRec.Size = new System.Drawing.Size(496, 177);
            this.lblRec.TabIndex = 0;
            this.lblRec.Text = "Please select Lens Material and Frame Type combinations and you will see recommen" +
    "dations here.";
            // 
            // formMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(540, 380);
            this.Controls.Add(this.tabControl1);
            this.Name = "formMain";
            this.Text = "Minimum Blank Size Calculator";
            this.tabControl1.ResumeLayout(false);
            this.tabMBS.ResumeLayout(false);
            this.tabMBS.PerformLayout();
            this.tabRecomend.ResumeLayout(false);
            this.groupBox1.ResumeLayout(false);
            this.groupBox2.ResumeLayout(false);
            this.groupBox3.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabMBS;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox inputAbox;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox inputDBL;
        private System.Windows.Forms.Button buttonCalcFramePD;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox inputFrmPD;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox inputPtsPD;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox inputED;
        private System.Windows.Forms.Button buttonCalc;
        private System.Windows.Forms.Label lblResult;
        private System.Windows.Forms.TextBox inputResult;
        private System.Windows.Forms.TabPage tabRecomend;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.ListBox lstLens;
        private System.Windows.Forms.ListBox lstFrm;
        private System.Windows.Forms.Label lblRec;
    }
}

