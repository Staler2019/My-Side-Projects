<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form 覆寫 Dispose 以清除元件清單。
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    '為 Windows Form 設計工具的必要項
    Private components As System.ComponentModel.IContainer

    '注意: 以下為 Windows Form 設計工具所需的程序
    '可以使用 Windows Form 設計工具進行修改。
    '請不要使用程式碼編輯器進行修改。
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.lblTitle = New System.Windows.Forms.Label()
        Me.linReadme = New System.Windows.Forms.LinkLabel()
        Me.lnkYahoo = New System.Windows.Forms.LinkLabel()
        Me.SuspendLayout()
        '
        'lblTitle
        '
        Me.lblTitle.AutoSize = True
        Me.lblTitle.Location = New System.Drawing.Point(38, 90)
        Me.lblTitle.Name = "lblTitle"
        Me.lblTitle.Size = New System.Drawing.Size(37, 12)
        Me.lblTitle.TabIndex = 0
        Me.lblTitle.Text = "Label1"
        '
        'linReadme
        '
        Me.linReadme.AutoSize = True
        Me.linReadme.Location = New System.Drawing.Point(38, 185)
        Me.linReadme.Name = "linReadme"
        Me.linReadme.Size = New System.Drawing.Size(77, 12)
        Me.linReadme.TabIndex = 1
        Me.linReadme.TabStop = True
        Me.linReadme.Text = "雅虎網站介紹"
        '
        'lnkYahoo
        '
        Me.lnkYahoo.AutoSize = True
        Me.lnkYahoo.LinkArea = New System.Windows.Forms.LinkArea(2, 2)
        Me.lnkYahoo.Location = New System.Drawing.Point(173, 185)
        Me.lnkYahoo.Name = "lnkYahoo"
        Me.lnkYahoo.Size = New System.Drawing.Size(79, 19)
        Me.lnkYahoo.TabIndex = 2
        Me.lnkYahoo.TabStop = True
        Me.lnkYahoo.Text = "進入雅虎網站"
        Me.lnkYahoo.UseCompatibleTextRendering = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 264)
        Me.Controls.Add(Me.lnkYahoo)
        Me.Controls.Add(Me.linReadme)
        Me.Controls.Add(Me.lblTitle)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents lblTitle As System.Windows.Forms.Label
    Friend WithEvents linReadme As System.Windows.Forms.LinkLabel
    Friend WithEvents lnkYahoo As System.Windows.Forms.LinkLabel

End Class
