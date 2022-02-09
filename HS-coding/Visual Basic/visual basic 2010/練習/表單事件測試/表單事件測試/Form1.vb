Public Class Form1
    Dim form_left, form_top, form_width, form_height As Integer

    Private Sub Form1_Activated(sender As Object, e As System.EventArgs) Handles Me.Activated
        Me.Location = New Point(form_left, form_top)
        Me.Size = New Size(form_width, form_height)
    End Sub

    Private Sub Form1_Click(sender As Object, e As System.EventArgs) Handles Me.Click
        Me.Width += 10
        Me.Height -= 10
    End Sub

    Private Sub Form1_DoubleClick(sender As Object, e As System.EventArgs) Handles Me.DoubleClick
        Me.Left += 20
    End Sub

    Private Sub Form1_KeyPress(sender As Object, e As System.Windows.Forms.KeyPressEventArgs) Handles Me.KeyPress
        End
    End Sub
    Private Sub Form1_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load
        Me.Text = "表單事件測試"
        form_left = Me.Left
        form_top = Me.Top
        form_width = Me.Width
        form_height = Me.Height
    End Sub
End Class
