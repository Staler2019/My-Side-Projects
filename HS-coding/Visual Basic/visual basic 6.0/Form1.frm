VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "倒數計時器"
   ClientHeight    =   5490
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5880
   LinkTopic       =   "Form1"
   ScaleHeight     =   5490
   ScaleWidth      =   5880
   StartUpPosition =   3  '系統預設值
   Begin VB.CommandButton Command9 
      Caption         =   "碼表"
      Height          =   5535
      Left            =   5520
      TabIndex        =   9
      Top             =   0
      Width           =   375
   End
   Begin VB.Frame Frame3 
      Caption         =   "秒"
      Height          =   495
      Left            =   4560
      TabIndex        =   8
      Top             =   2640
      Width           =   495
   End
   Begin VB.Frame Frame2 
      Caption         =   "分"
      Height          =   495
      Left            =   2880
      TabIndex        =   7
      Top             =   2640
      Width           =   495
   End
   Begin VB.Frame Frame1 
      Caption         =   "時"
      Height          =   495
      Left            =   1200
      TabIndex        =   6
      Top             =   2640
      Width           =   495
   End
   Begin VB.TextBox Text3 
      Height          =   495
      Left            =   4080
      TabIndex        =   5
      Text            =   "00"
      Top             =   2640
      Width           =   495
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   2400
      TabIndex        =   4
      Text            =   "00"
      Top             =   2640
      Width           =   495
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   720
      TabIndex        =   3
      Text            =   "00"
      Top             =   2640
      Width           =   495
   End
   Begin VB.CommandButton Command3 
      Caption         =   "歸零並停止"
      Height          =   495
      Left            =   3960
      TabIndex        =   2
      Top             =   4440
      Width           =   1215
   End
   Begin VB.CommandButton Command2 
      Caption         =   "停止"
      Height          =   495
      Left            =   2280
      TabIndex        =   1
      Top             =   4440
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "開始計時"
      Height          =   495
      Left            =   600
      TabIndex        =   0
      Top             =   4440
      Width           =   1215
   End
   Begin VB.Timer Timer1 
      Left            =   2640
      Top             =   1440
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Label1_Click()

End Sub

Private Sub Frame3_DragDrop(Source As Control, X As Single, Y As Single)

End Sub
