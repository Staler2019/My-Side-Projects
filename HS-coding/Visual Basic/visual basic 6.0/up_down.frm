VERSION 5.00
Begin VB.Form Form1 
   BackColor       =   &H00E0E0E0&
   Caption         =   "計時器的使用"
   ClientHeight    =   6720
   ClientLeft      =   3540
   ClientTop       =   2835
   ClientWidth     =   8145
   LinkTopic       =   "Form1"
   ScaleHeight     =   6720
   ScaleWidth      =   8145
   Begin VB.Timer Timer4 
      Enabled         =   0   'False
      Interval        =   20
      Left            =   3000
      Top             =   1920
   End
   Begin VB.Timer Timer2 
      Enabled         =   0   'False
      Interval        =   20
      Left            =   3480
      Top             =   3120
   End
   Begin VB.Timer Timer3 
      Enabled         =   0   'False
      Interval        =   20
      Left            =   5040
      Top             =   3720
   End
   Begin VB.Timer Timer1 
      Interval        =   20
      Left            =   3960
      Top             =   2880
   End
   Begin VB.Shape Shape1 
      BackColor       =   &H000000FF&
      BackStyle       =   1  '不透明
      Height          =   975
      Left            =   0
      Shape           =   3  '圓形
      Top             =   5880
      Width           =   975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  Timer1.Enabled = True
  Timer2.Enabled = False
  Timer3.Enabled = False
  Timer4.Enabled = False
  Shape1.Left = 0
  Shape1.Top = 5760
End Sub

Private Sub Timer1_Timer()
    Shape1.Top = Shape1.Top - 50            '物件向上移動
    If Shape1.Top <= 0 Then
      Timer1.Enabled = False
      Timer3.Enabled = True
    End If
End Sub


Private Sub Timer2_Timer()
  Shape1.Top = Shape1.Top + 50                '物件向下移動
  If Shape1.Top >= 5760 Then
    Timer2.Enabled = False
    Timer4.Enabled = True
  End If
End Sub

Private Sub Timer3_Timer()
    Shape1.Left = Shape1.Left + 50          '物件向右移動
    If Shape1.Left >= 7200 Then
      Timer3.Enabled = False
      Timer2.Enabled = True
    End If
End Sub

Private Sub Timer4_Timer()
  Shape1.Left = Shape1.Left - 50                   '物件向左移動
  If Shape1.Left <= 0 Then
    Timer4.Enabled = False
    Timer1.Enabled = True
  End If
End Sub
