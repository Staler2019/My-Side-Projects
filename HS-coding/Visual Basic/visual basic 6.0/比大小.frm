VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3825
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6090
   LinkTopic       =   "Form1"
   ScaleHeight     =   3825
   ScaleWidth      =   6090
   StartUpPosition =   3  '�t�ιw�]��
   Begin VB.CommandButton Command3 
      Caption         =   "�M��"
      Height          =   495
      Left            =   2280
      TabIndex        =   6
      Top             =   2640
      Width           =   1215
   End
   Begin VB.Frame Frame1 
      Caption         =   "��j�p"
      BeginProperty Font 
         Name            =   "�s�ө���"
         Size            =   48
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   975
      Left            =   1560
      TabIndex        =   5
      Top             =   240
      Visible         =   0   'False
      Width           =   3135
   End
   Begin VB.CommandButton Command2 
      Caption         =   "����"
      Height          =   495
      Left            =   3840
      TabIndex        =   4
      Top             =   2640
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "�}�l"
      Height          =   495
      Left            =   720
      TabIndex        =   3
      Top             =   2640
      Width           =   1215
   End
   Begin VB.TextBox Text3 
      Alignment       =   2  '�m�����
      BeginProperty Font 
         Name            =   "�s�ө���"
         Size            =   18
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3840
      TabIndex        =   2
      Top             =   1680
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      Alignment       =   2  '�m�����
      BeginProperty Font 
         Name            =   "�s�ө���"
         Size            =   18
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   2280
      TabIndex        =   1
      Text            =   "?"
      Top             =   1680
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Alignment       =   2  '�m�����
      BeginProperty Font 
         Name            =   "�s�ө���"
         Size            =   18
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   720
      TabIndex        =   0
      Top             =   1680
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  If Text1.Text = 22 And Text3.Text = 44 Then Text2.Text = "Love"
  If Int(Text1.Text) > Int(Text3.Text) Then Text2.Text = ">"
  If Int(Text1.Text) = Int(Text3.Text) Then Text2.Text = "="
  If Int(Text1.Text) < Int(Text3.Text) Then Text2.Text = "<"
End Sub

Private Sub Command2_Click()
  End
End Sub

Private Sub Command3_Click()
  Text1.Text = ""
  Text3.Text = ""
  Text2.Text = "?"
End Sub
