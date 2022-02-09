VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5490
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5880
   LinkTopic       =   "Form1"
   ScaleHeight     =   5490
   ScaleWidth      =   5880
   StartUpPosition =   3  '系統預設值
   Begin VB.CommandButton Command2 
      Caption         =   "停止"
      Height          =   495
      Left            =   3480
      TabIndex        =   1
      Top             =   4320
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "開始"
      Height          =   495
      Left            =   1440
      TabIndex        =   0
      Top             =   4320
      Width           =   1215
   End
   Begin VB.Timer Timer1 
      Left            =   5520
      Top             =   5160
   End
   Begin VB.Shape Shape1 
      BorderColor     =   &H00000000&
      FillColor       =   &H0000FFFF&
      FillStyle       =   0  '實心
      Height          =   975
      Left            =   2400
      Shape           =   3  '圓形
      Top             =   2040
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
  Timer1.Enabled = True
  Timer1.Interval = 100
  Shape1.Left = 0
  Shape1.Top = 2400
End Sub

Private Sub Command2_Click()
  End
End Sub

Private Sub Timer1_Timer()
  Select Case Shape1.Top = Shape1.Top - 10: Shape1.Left = Shape.Left + 10
    Case Shape1.Top = 0
      Shape1.Top = Shape1.Top + 10
    Case Shape1.Left = 6000
      Shape1.Left = Shape1.Left - 10
    Case Shape1.Top = 6000
      Shape1.Top = Shape - 10
    Case Shape1.Left = 0
      Shape1.Left = Shape1.Left + 10
End Sub
