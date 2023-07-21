using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.Remoting.Channels;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RisXpert_Project
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            lblDate.Text = DateTime.Today.ToString();
        }

        private void btnNewRisk_Click(object sender, EventArgs e)
        {
            int _ = dtgvRisks.Rows.Add();
            UpdateData(sender, e);
        }

        private void UpdateData(object sender, EventArgs e)
        {
            for (int i = 0; i < dtgvRisks.Rows.Count; i++)
            {
                dtgvRisks.Rows[i].Cells[0].Value = txtID.Text;
                dtgvRisks.Rows[i].Cells[1].Value = txtAnalystName.Text;
                dtgvRisks.Rows[i].Cells[2].Value = txtActive.Text;
            }
        }

        private void ReloadTab2(object sender, TabControlEventArgs e)
        {
            lblID.Text = txtID.Text;
            for (int i = 0; i < dtgvRisks.Rows.Count; i++)
            {
                if (dtgvValues.Rows.Count < dtgvRisks.Rows.Count)
                {
                    dtgvValues.Rows.Add();
                }
                dtgvValues.Rows[i].Cells[0].Value = dtgvRisks.Rows[i].Cells[2].Value;
                dtgvValues.Rows[i].Cells[1].Value = dtgvRisks.Rows[i].Cells[3].Value;
                dtgvValues.Rows[i].Cells[2].Value = dtgvRisks.Rows[i].Cells[4].Value;
            }
        }

        private void dgtvValues_CellValidating(object sender, DataGridViewCellValidatingEventArgs e)
        {
            if (e.ColumnIndex >= 3 && e.ColumnIndex <= 8 && !string.IsNullOrEmpty(e.FormattedValue.ToString()))
            {
                try
                {
                    int numericValue = int.Parse(e.FormattedValue.ToString());
                    if (numericValue < 1 || numericValue > 5)
                    {
                        e.Cancel = true;
                        MessageBox.Show("Inserte valor entre 1 y 5.", "Valor no Válido", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                }
                catch (Exception)
                {
                    e.Cancel = true;
                    MessageBox.Show("Inserte valor numérico.", "Valor no Válido", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

        private void dtgvValues_CellEndEdit(object sender, DataGridViewCellEventArgs e)
        {
            DataGridViewCell cell = dtgvValues.Rows[e.RowIndex].Cells[e.ColumnIndex];
            if (e.ColumnIndex >= 3)
            {
                if (int.TryParse(cell.Value?.ToString(), out int numericValue) && numericValue >= 1 && numericValue <= 5)
                {
                    switch (numericValue)
                    {
                        case 1:
                            cell.Style.BackColor = Color.Lime;
                            break;
                        case 2:
                            cell.Style.BackColor = Color.LimeGreen;
                            break;
                        case 3:
                            cell.Style.BackColor = Color.Yellow;
                            break;
                        case 4:
                            cell.Style.BackColor = Color.Orange;
                            break;
                        case 5:
                            cell.Style.BackColor = Color.Red;
                            break;
                        default:
                            break;
                    }
private void lblAnalyst_Click(object sender, EventArgs e)
        {

        }










    