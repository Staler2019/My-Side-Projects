Public Class Form1
    Dim no1, no2, win, loss As Integer      '成員變數
    Private Sub btnStart_Click(sender As System.Object, e As System.EventArgs) Handles btnStart.Click
        lblMsg.Text = "請選擇哪張撲克牌較大"
        btnStart.Enabled = False  '開始鈕無效
        Dim rnd As New Random  '產生一亂數產生器(New Random)
        no1 = rnd.Next(1, 14)   '產生1-13的亂數
        Do
            no2 = rnd.Next(1, 14)
        Loop Until no2 <> no1   '檢查亂數是否重複，若是重複就重新產生
        btnPoker1.Image = New Bitmap("pokerback.jpg")   '帶入點陣圖，用Bitmap
        btnPoker2.Image = New Bitmap("pokerback.jpg")
        btnPoker1.Enabled = True : btnPoker2.Enabled = True
    End Sub

    Private Sub Form1_Load(sender As Object, e As System.EventArgs) Handles Me.Load
        lblMsg.Text = "請按 開始 鈕開始遊戲"
        btnPoker1.Image = New Bitmap("pokerback.jpg")   '放在當前專案的bin/Debug中
        btnPoker2.Image = New Bitmap("pokerback.jpg")
        btnPoker1.Enabled = False    '撲克牌1無效
        btnPoker2.Enabled = False    '撲克牌2無效
    End Sub

    Private Sub btnPoker1_Click(sender As Object, e As System.EventArgs) Handles btnPoker1.Click

    End Sub

    Private Sub btnPoker2_Click(sender As Object, e As System.EventArgs) Handles btnPoker2.Click

    End Sub

    Private Sub btnEnd_Click(sender As Object, e As System.EventArgs) Handles btnEnd.Click
        Application.Exit()
    End Sub
End Class