Public Class Form1
    Dim xcase, ycase As String
    Private Sub Button1_Click(sender As System.Object, e As System.EventArgs) Handles Button1.Click
        Timer1.Enabled = True
        Button1.Enabled = False
    End Sub
    Private Sub Button2_Click(sender As System.Object, e As System.EventArgs) Handles Button2.Click
        End
    End Sub

    Private Sub Timer1_Tick(sender As System.Object, e As System.EventArgs) Handles Timer1.Tick
        PictureBox1.Top -= 1
        PictureBox1.Left -= 1
        If PictureBox1.Top <= 0 Then Timer2.Enabled = True : Timer1.Enabled = False
        If PictureBox1.Left <= 0 Then Timer4.Enabled = True : Timer1.Enabled = False
    End Sub

    Private Sub Timer2_Tick(sender As System.Object, e As System.EventArgs) Handles Timer2.Tick
        PictureBox1.Top += 1
        PictureBox1.Left -= 1
        If PictureBox1.Top >= 216 Then Timer1.Enabled = True : Timer2.Enabled = False
        If PictureBox1.Left <= 0 Then Timer3.Enabled = True : Timer2.Enabled = False
    End Sub

    Private Sub Timer3_Tick(sender As System.Object, e As System.EventArgs) Handles Timer3.Tick
        PictureBox1.Top += 1
        PictureBox1.Left += 1
        If PictureBox1.Top >= 216 Then Timer4.Enabled = True : Timer3.Enabled = False
        If PictureBox1.Left >= 239 Then Timer2.Enabled = True : Timer3.Enabled = False
    End Sub

    Private Sub Timer4_Tick(sender As System.Object, e As System.EventArgs) Handles Timer4.Tick
        PictureBox1.Top -= 1
        PictureBox1.Left += 1
        If PictureBox1.Left >= 239 Then Timer1.Enabled = True : Timer4.Enabled = False
        If PictureBox1.Top <= 0 Then Timer3.Enabled = True : Timer4.Enabled = False
    End Sub

    Private Sub Form1_BindingContextChanged(sender As Object, e As System.EventArgs) Handles Me.BindingContextChanged
        PictureBox1.Top = 100
        PictureBox1.Left = 130
        Timer1.Enabled = False
        Timer1.Interval = 10
        Timer2.Enabled = False
        Timer2.Interval = 10
        Timer3.Enabled = False
        Timer3.Interval = 10
        Timer4.Enabled = False
        Timer4.Interval = 10
    End Sub
End Class
