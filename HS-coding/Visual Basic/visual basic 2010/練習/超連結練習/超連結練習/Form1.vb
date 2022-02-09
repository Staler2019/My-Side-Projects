Public Class Form1

    Private Sub linReadme_LinkClicked(sender As System.Object, e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles linReadme.LinkClicked

    End Sub

    Private Sub lnkYahoo_LinkClicked(sender As Object, e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles lnkYahoo.LinkClicked
        Process.Start("http://tw.yahoo.com")
    End Sub

    Private Sub Form1_Load(sender As Object, e As System.EventArgs) Handles Me.Load
        lblTitle.Text = "雅虎網站是常用的入口網站"
        lblTitle.Font = New Font("標楷體", 12, FontStyle.Bold)
    End Sub
End Class
