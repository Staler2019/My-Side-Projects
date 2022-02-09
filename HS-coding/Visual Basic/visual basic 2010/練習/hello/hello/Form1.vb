Public Class Form1

    Private Sub btnWord_Click(sender As System.Object, e As System.EventArgs) Handles btnWord.Click
        lblShow.BackColor = Color.Aqua
        lblShow.Text = "您好!"
    End Sub

    Private Sub btnDate_Click(sender As System.Object, e As System.EventArgs) Handles btnDate.Click
        lblShow.BackColor = Color.Chocolate
        lblShow.Text = DateTime.Now.ToString
    End Sub

    Private Sub btnQuit_Click(sender As System.Object, e As System.EventArgs) Handles btnQuit.Click
        End
    End Sub
End Class
