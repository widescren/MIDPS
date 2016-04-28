object MIDPS: TMIDPS
  Left = 0
  Top = 0
  Caption = 'MIDPS'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 23
  object Label1: TLabel
    Left = 200
    Top = 24
    Width = 239
    Height = 23
    Caption = 'Decrementare Incrementare'
  end
  object Label2: TLabel
    Left = 296
    Top = 64
    Width = 54
    Height = 23
    Caption = 'Label2'
  end
  object Edit1: TEdit
    Left = 200
    Top = 168
    Width = 121
    Height = 31
    TabOrder = 0
    Text = 'Edit1'
  end
  object Up: TBitBtn
    Left = 72
    Top = 96
    Width = 75
    Height = 25
    Caption = 'Up'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = UpClick
  end
  object Down: TBitBtn
    Left = 72
    Top = 248
    Width = 75
    Height = 25
    Caption = 'Down'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = DownClick
  end
  object Exit: TBitBtn
    Left = 472
    Top = 208
    Width = 75
    Height = 25
    Caption = 'Exit'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clYellow
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = ExitClick
  end
end
