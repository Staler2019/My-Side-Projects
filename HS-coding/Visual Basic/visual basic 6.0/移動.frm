VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   7515
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   9915
   LinkTopic       =   "Form1"
   ScaleHeight     =   7515
   ScaleWidth      =   9915
   StartUpPosition =   3  '系統預設值
   Begin VB.PictureBox Picture1 
      Height          =   3135
      Left            =   3240
      Picture         =   "移動.frx":0000
      ScaleHeight     =   3075
      ScaleWidth      =   4275
      TabIndex        =   0
      Top             =   2520
      Width           =   4335
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Picture1_KeyDown(KeyCode As Integer, Shift As Integer)
  If KeyCode = 39 Then Picture1.Left = Picture1.Left + 100
  If KeyCode = 37 Then Picture1.Left = Picture1.Left - 100
  If KeyCode = 38 Then Picture1.Top = Picture1.Top - 100
  If KeyCode = 40 Then Picture1.Top = Picture1.Top + 100
End Sub
