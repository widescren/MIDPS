//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMIDPS *MIDPS;
int i=0;
//---------------------------------------------------------------------------
__fastcall TMIDPS::TMIDPS(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMIDPS::UpClick(TObject *Sender)
{
i++;
Edit1->Text=i;
}
//---------------------------------------------------------------------------
void __fastcall TMIDPS::DownClick(TObject *Sender)
{
i--;
Edit1->Text=i;
}
//---------------------------------------------------------------------------
void __fastcall TMIDPS::ExitClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
