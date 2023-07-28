using System;
using System.ComponentModel;
using System.Drawing;
using System.Windows.Forms;
using LiteDB;



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
        private void dgtvValues_CellValidating(object sender, DataGridViewCellValidatingEventArgs e)
        {
            
            if (e.ColumnIndex >= 3 && e.ColumnIndex <= 8 && !string.IsNullOrEmpty(e.FormattedValue.ToString()))
            {
                
                if (!int.TryParse(e.FormattedValue.ToString(), out int numericValue))
                {
                    e.Cancel = true; 
                    MessageBox.Show("Inserte valor numérico.", "Valor no Válido", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }

                
                if (numericValue < 1 || numericValue > 5)
                {
                    e.Cancel = true; 
                    MessageBox.Show("Inserte valor entre 1 y 5.", "Valor no Válido", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

        private void dtgvValues_CellEndEdit(object sender, DataGridViewCellEventArgs e)
        {
            DataGridViewCell cellValues = dtgvValues.Rows[e.RowIndex].Cells[e.ColumnIndex];

            if (e.ColumnIndex >= 3)
            {
                if (int.TryParse(cellValues.Value?.ToString(), out int numericValue))
                {
                    switch (numericValue)
                    {
                        case 1:
                            cellValues.Style.BackColor = Color.Lime;
                            break;
                        case 2:
                            cellValues.Style.BackColor = Color.LimeGreen;
                            break;
                        case 3:
                            cellValues.Style.BackColor = Color.Yellow;
                            break;
                        case 4:
                            cellValues.Style.BackColor = Color.Orange;
                            break;
                        case 5:
                            cellValues.Style.BackColor = Color.Red;
                            break;
                        default:
                            break;
                    }
                }
            }
        }
        private void tabControl_Selected(object sender, TabControlEventArgs e)
        {
            for (int i = 0; i < dtgvRisks.Rows.Count; i++)
            {
                UpdateTab2(i);
                UpdateTab3(i);
                UpdateTab4(i);
            }
        }
        private void UpdateTab2(int i)
        {
            lblID.Text = txtID.Text;
            if (dtgvValues.Rows.Count < dtgvRisks.Rows.Count)
            {
                dtgvValues.Rows.Add();
            }
            dtgvValues.Rows[i].Cells[0].Value = dtgvRisks.Rows[i].Cells[2].Value;
            dtgvValues.Rows[i].Cells[1].Value = dtgvRisks.Rows[i].Cells[3].Value;
            dtgvValues.Rows[i].Cells[2].Value = dtgvRisks.Rows[i].Cells[4].Value;
        }
        private void UpdateTab3(int i)
        {
            int I = Convert.ToInt32(dtgvValues.Rows[i].Cells[3].Value) * Convert.ToInt32(dtgvValues.Rows[i].Cells[4].Value); //F*S
            int D = Convert.ToInt32(dtgvValues.Rows[i].Cells[5].Value) * Convert.ToInt32(dtgvValues.Rows[i].Cells[8].Value); //P*E
            int Pb = Convert.ToInt32(dtgvValues.Rows[i].Cells[6].Value) * Convert.ToInt32(dtgvValues.Rows[i].Cells[7].Value); //A*V
            int C = I + D;
            int ER = Pb * C;
            if (dtgvEvaluation.Rows.Count < dtgvValues.Rows.Count)
            {
                dtgvEvaluation.Rows.Add();
            }
            dtgvEvaluation.Rows[i].Cells[0].Value = dtgvValues.Rows[i].Cells[0].Value;
            dtgvEvaluation.Rows[i].Cells[1].Value = dtgvValues.Rows[i].Cells[1].Value;
            dtgvEvaluation.Rows[i].Cells[2].Value = dtgvValues.Rows[i].Cells[2].Value;
            dtgvEvaluation.Rows[i].Cells[3].Value = C;
            dtgvEvaluation.Rows[i].Cells[4].Value = Pb;
            dtgvEvaluation.Rows[i].Cells[5].Value = ER;
        }
        private void UpdateTab4(int i)
        {
            if (dtgvClassification.Rows.Count < dtgvEvaluation.Rows.Count)
            {
                dtgvClassification.Rows.Add();
            }
            dtgvClassification.Rows[i].Cells[0].Value = dtgvEvaluation.Rows[i].Cells[0].Value;
            dtgvClassification.Rows[i].Cells[1].Value = dtgvEvaluation.Rows[i].Cells[1].Value;
            dtgvClassification.Rows[i].Cells[2].Value = dtgvEvaluation.Rows[i].Cells[5].Value;

            DataGridViewCell ERValue = dtgvClassification.Rows[i].Cells[2];
            DataGridViewRow ClassRow = dtgvClassification.Rows[i];

            if (Convert.ToInt32(ERValue.Value) >= 2 && Convert.ToInt32(ERValue.Value) <= 250)
            {
                ClassRow.Cells[3].Value = "Muy Pequeño";
                ClassRow.Cells[3].Style.BackColor = Color.Lime;
            }
            else if (Convert.ToInt32(ERValue.Value) >= 251 && Convert.ToInt32(ERValue.Value) <= 500)
            {
                ClassRow.Cells[3].Value = "Pequeño";
                ClassRow.Cells[3].Style.BackColor = Color.LimeGreen;
            }
            else if (Convert.ToInt32(ERValue.Value) >= 501 && Convert.ToInt32(ERValue.Value) <= 750)
            {
                ClassRow.Cells[3].Value = "Normal";
                ClassRow.Cells[3].Style.BackColor = Color.Yellow;
            }
            else if (Convert.ToInt32(ERValue.Value) >= 751 && Convert.ToInt32(ERValue.Value) <= 1000)
            {
                ClassRow.Cells[3].Value = "Grande";
                ClassRow.Cells[3].Style.BackColor = Color.Orange;
            }
            else if (Convert.ToInt32(ERValue.Value) >= 1001 && Convert.ToInt32(ERValue.Value) <= 1250)
            {
                ClassRow.Cells[3].Value = "Elevado";
                ClassRow.Cells[3].Style.BackColor = Color.Red;
            }

            dtgvClassification.Sort(dtgvClassification.Columns[2], ListSortDirection.Descending);
        }
        public class RiskAnalysis
        {

            public string Analista { get; set; }
            public string Activo { get; set; }
            public string Riesgo { get; set; }
            public string Dano { get; set; }
            public string Clasificacion { get; set; }
            //public int ID { get; set; }
            public int S { get; set; }
            public int F { get; set; }
            public int P { get; set; }
            public int A { get; set; }
            public int V { get; set; }
            public int E { get; set; }
            public int CR { get; set; }
            public int Pb { get; set; }
            public int ER { get; set; }
        }

        private void SaveData(int i)
        {
            using (var db = new LiteDatabase(@"C:\Users\kenne\Documents\Test.db"))
            {
                
                var col = db.GetCollection<RiskAnalysis>(txtActive.Text + "_" + txtID.Text);
                DataGridViewRow Evaluation = dtgvEvaluation.Rows[i];
                DataGridViewRow Values = dtgvValues.Rows[i];
                
                var DataSave = new RiskAnalysis
                {
                    //ID = 1,
                    Analista = txtAnalystName.Text,
                    Activo = txtActive.Text,
                    Riesgo = Evaluation.Cells[1].Value.ToString(),
                    Dano = Evaluation.Cells[2].Value.ToString(),
                    S = Convert.ToInt16(Values.Cells[3].Value),
                    F = Convert.ToInt16(Values.Cells[4].Value),
                    P = Convert.ToInt16(Values.Cells[5].Value),
                    A = Convert.ToInt16(Values.Cells[6].Value),
                    V = Convert.ToInt16(Values.Cells[7].Value),
                    E = Convert.ToInt16(Values.Cells[8].Value),
                    CR = Convert.ToInt32(Evaluation.Cells[3].Value),
                    Pb = Convert.ToInt32(Evaluation.Cells[4].Value),
                    ER = Convert.ToInt32(Evaluation.Cells[5].Value),
                    Clasificacion = Classify(i)
                };
                col.Insert(DataSave);

            }
        }
        private string Classify(int i)
        {
            DataGridViewCell ERValue = dtgvClassification.Rows[i].Cells[2];

            if (Convert.ToInt32(ERValue.Value) >= 2 && Convert.ToInt32(ERValue.Value) <= 250)
            {
                return "Muy Pequeño";
            }
            else if (Convert.ToInt32(ERValue.Value) >= 251 && Convert.ToInt32(ERValue.Value) <= 500)
            {
                return "Pequeño";
            }
            else if (Convert.ToInt32(ERValue.Value) >= 501 && Convert.ToInt32(ERValue.Value) <= 750)
            {
                return "Normal";
            }
            else if (Convert.ToInt32(ERValue.Value) >= 751 && Convert.ToInt32(ERValue.Value) <= 1000)
            {
                return "Grande";
            }
            else if (Convert.ToInt32(ERValue.Value) >= 1001 && Convert.ToInt32(ERValue.Value) <= 1250)
            {
                return "Elevado";
            }
            else return "";
        }

        private void btnSave2_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < dtgvRisks.Rows.Count; i++)
            {
                UpdateTab3(i);
                UpdateTab4(i);
                SaveData(i);
            }
        }
    }
}
      



    