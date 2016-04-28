object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'MIDPS'
  ClientHeight = 473
  ClientWidth = 576
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -21
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 25
  object Label1: TLabel
    Left = 24
    Top = 8
    Width = 227
    Height = 25
    Caption = 'Cronometru C++Builder'
  end
  object Label2: TLabel
    Left = 456
    Top = 8
    Width = 61
    Height = 25
    Caption = 'Timer:'
  end
  object PaintBox1: TPaintBox
    Left = 368
    Top = 216
    Width = 105
    Height = 121
  end
  object Edit2: TEdit
    Left = 376
    Top = 52
    Width = 177
    Height = 33
    TabOrder = 0
    Text = 'Edit2'
  end
  object a1: TBitBtn
    Left = 288
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Start'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = a1Click
  end
  object a2: TBitBtn
    Left = 288
    Top = 52
    Width = 75
    Height = 25
    Caption = 'Stop'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clYellow
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = a2Click
  end
  object a3: TBitBtn
    Left = 288
    Top = 96
    Width = 75
    Height = 25
    Caption = 'Zero'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = a3Click
  end
  object Edit1: TEdit
    Left = 72
    Top = 39
    Width = 193
    Height = 33
    TabOrder = 4
    Text = 'Edit1'
  end
  object Panel1: TPanel
    Left = 264
    Top = 216
    Width = 57
    Height = 121
    Caption = 'Panel1'
    Color = clAqua
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 5
    object Panel2: TPanel
      Left = -143
      Top = 56
      Width = 200
      Height = 89
      Caption = 'Panel2'
      Color = 16744448
      ParentBackground = False
      TabOrder = 0
    end
  end
  object Continue: TButton
    Left = 280
    Top = 136
    Width = 105
    Height = 25
    Caption = 'Continue'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clSilver
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = ContinueClick
  end
  object Timer2: TTimer
    OnTimer = Timer2Timer
    Left = 384
    Top = 8
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 24
    Top = 40
  end
  object Timer3: TTimer
    OnTimer = Timer3Timer
    Left = 200
    Top = 216
  end
end
