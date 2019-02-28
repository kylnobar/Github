using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Minimum_Blank_Size
{
    public partial class formMain : Form
    {
        public formMain()
        {
            InitializeComponent();
        }

        private void buttonCalcFramePD_Click_2(object sender, EventArgs e)
        {
            int aBox = Convert.ToInt16(inputAbox.Text);
            int DBL = Convert.ToInt16(inputDBL.Text);

            inputFrmPD.Text = Convert.ToString(aBox + DBL);
            inputPtsPD.Focus();
        }

        private void buttonCalc_Click_2(object sender, EventArgs e)
        {
            int frmPD = Convert.ToInt16(inputFrmPD.Text);
            int ptPD = Convert.ToInt16(inputPtsPD.Text);
            int ED = Convert.ToInt16(inputED.Text);

            inputResult.Text = Convert.ToString(((frmPD - ptPD) + ED) + 3);
        }

        private void lstLens_SelectedIndexChanged(object sender, EventArgs e)
        {
            

        }
    }
}
