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
        Me.lblShow = New System.Windows.Forms.Label()
        Me.btnWord = New System.Windows.Forms.Button()
        Me.btnDate = New System.Windows.Forms.Button()
        Me.btnQuit = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'lblShow
        '
        Me.lblShow.AutoSize = True
        Me.lblShow.Font = New System.Drawing.Font("新細明體", 18.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(136, Byte))
        Me.lblShow.Location = New System.Drawing.Point(24, 33)
        Me.lblShow.Name = "lblShow"
        Me.lblShow.Size = New System.Drawing.Size(67, 24)
        Me.lblShow.TabIndex = 0
        Me.lblShow.Text = "Hello!"
        '
        'btnWord
        '
        Me.btnWord.Location = New System.Drawing.Point(12, 89)
        Me.btnWord.Name = "btnWord"
        Me.btnWord.Size = New System.Drawing.Size(75, 23)
        Me.btnWord.TabIndex = 1
        Me.btnWord.Text = "你好"
        Me.btnWord.UseVisualStyleBackColor = True
        '
        'btnDate
        '
        Me.btnDate.Location = New System.Drawing.Point(104, 89)
        Me.btnDate.Name = "btnDate"
        Me.btnDate.Size = New System.Drawing.Size(75, 23)
        Me.btnDate.TabIndex = 2
        Me.btnDate.Text = "日期"
        Me.btnDate.UseVisualStyleBackColor = True
        '
        'btnQuit
        '
        Me.btnQuit.Location = New System.Drawing.Point(197, 89)
        Me.btnQuit.Name = "btnQuit"
        Me.btnQuit.Size = New System.Drawing.Size(75, 23)
        Me.btnQuit.TabIndex = 3
        Me.btnQuit.Text = "結束"
        Me.btnQuit.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 124)
        Me.Controls.Add(Me.btnQuit)
        Me.Controls.Add(Me.btnDate)
        Me.Controls.Add(Me.btnWord)
        Me.Controls.Add(Me.lblShow)
        Me.Name = "Form1"
        Me.Text = "我的第一個程式"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents lblShow As System.Windows.Forms.Label
    Friend WithEvents btnWord As System.Windows.Forms.Button
    Friend WithEvents btnDate As System.Windows.Forms.Button
    Friend WithEvents btnQuit As System.Windows.Forms.Button

End Class
