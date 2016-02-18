//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TMIDPS : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TBitBtn *Up;
	TBitBtn *Down;
	TBitBtn *Exit;
	void __fastcall UpClick(TObject *Sender);
	void __fastcall DownClick(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMIDPS(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMIDPS *MIDPS;
//---------------------------------------------------------------------------
#endif
