VERSION 5.00
Begin VB.Form Form1 
   BackColor       =   &H0080C0FF&
   Caption         =   "調色盤"
   ClientHeight    =   3705
   ClientLeft      =   4335
   ClientTop       =   3750
   ClientWidth     =   7545
   LinkTopic       =   "Form1"
   ScaleHeight     =   3705
   ScaleWidth      =   7545
   Begin VB.TextBox Text3 
      Alignment       =   2  '置中對齊
      BeginProperty Font 
         Name            =   "Harlow Solid Italic"
         Size            =   9
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   -1  'True
         Strikethrough   =   0   'False
      EndProperty
      Height          =   270
      Left            =   6120
      TabIndex        =   9
      Top             =   2520
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      Alignment       =   2  '置中對齊
      BeginProperty Font 
         Name            =   "Harlow Solid Italic"
         Size            =   9
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   -1  'True
         Strikethrough   =   0   'False
      EndProperty
      Height          =   270
      Left            =   6120
      TabIndex        =   8
      Top             =   1680
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Alignment       =   2  '置中對齊
      BeginProperty Font 
         Name            =   "Harlow Solid Italic"
         Size            =   9
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   -1  'True
         Strikethrough   =   0   'False
      EndProperty
      Height          =   270
      Left            =   6120
      TabIndex        =   7
      Top             =   840
      Width           =   1215
   End
   Begin VB.HScrollBar HScroll3 
      Height          =   300
      Left            =   3600
      TabIndex        =   3
      Top             =   2520
      Width           =   2400
   End
   Begin VB.HScrollBar HScroll2 
      Height          =   300
      Left            =   3600
      TabIndex        =   2
      Top             =   1680
      Width           =   2400
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   300
      Left            =   3600
      TabIndex        =   1
      Top             =   840
      Width           =   2400
   End
   Begin VB.PictureBox Picture1 
      Height          =   2295
      Left            =   840
      ScaleHeight     =   2235
      ScaleWidth      =   2355
      TabIndex        =   0
      Top             =   720
      Width           =   2415
   End
   Begin VB.Label Label3 
      AutoSize        =   -1  'True
      BackStyle       =   0  '透明
      Caption         =   "blue(0-255)"
      BeginProperty Font 
         Name            =   "新細明體"
         Size            =   11.25
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H00FF0000&
      Height          =   225
      Left            =   3600
      TabIndex        =   6
      Top             =   2280
      Width           =   1005
   End
   Begin VB.Label Label2 
      AutoSize        =   -1  'True
      BackStyle       =   0  '透明
      Caption         =   "green(0-255)"
      BeginProperty Font 
         Name            =   "新細明體"
         Size            =   11.25
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H0000C000&
      Height          =   225
      Left            =   3600
      TabIndex        =   5
      Top             =   1440
      Width           =   1110
   End
   Begin VB.Label Label1 
      AutoSize        =   -1  'True
      BackStyle       =   0  '透明
      Caption         =   "red(0-255)"
      BeginProperty Font 
         Name            =   "新細明體"
         Size            =   11.25
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H000000FF&
      Height          =   225
      Left            =   3600
      TabIndex        =   4
      Top             =   600
      Width           =   915
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub HScroll1_Change()
    Text1 = HScroll1.Value
End Sub


