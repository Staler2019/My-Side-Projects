Public Class Form1

    Private Sub Form1_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load
        Me.Text = "美金兌換新台幣"
        txtRate.Text = "32.5"
        txtUS.Text = "0"
        AddHandler txtRate.TextChanged, AddressOf txtUS_TextChanged
    End Sub

    Private Sub txtUS_TextChanged(sender As Object, e As System.EventArgs) Handles txtUS.TextChanged
        Dim n As Double = Val(txtRate.Text) * Val(txtUS.Text)
        txtNT.Text = n
    End Sub
End Class
