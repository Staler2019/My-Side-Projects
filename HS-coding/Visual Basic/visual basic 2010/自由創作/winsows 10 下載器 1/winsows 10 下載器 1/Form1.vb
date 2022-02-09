Public Class Form1

    Private Sub Form1_Load(sender As Object, e As System.EventArgs) Handles MyBase.Load
        PictureBox1.Image = New Bitmap("Wn10.jpg")
    End Sub

    Private Sub Button1_Click(sender As System.Object, e As System.EventArgs) Handles Button1.Click
        Process.Start("https://www.microsoft.com/zh-tw/software-download/windows10ISO")
    End Sub

    Private Sub Button2_Click(sender As System.Object, e As System.EventArgs) Handles Button2.Click
        End
    End Sub

End Class

