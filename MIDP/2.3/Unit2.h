//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit2;
	TLabel *Label1;
	TLabel *Label2;
	TBitBtn *a1;
	TBitBtn *a2;
	TBitBtn *a3;
	TTimer *Timer2;
	TTimer *Timer1;
	TEdit *Edit1;
	TPaintBox *PaintBox1;
	TPanel *Panel1;
	TPanel *Panel2;
	TButton *Continue;
	TTimer *Timer3;
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall a1Click(TObject *Sender);
	void __fastcall a2Click(TObject *Sender);
	void __fastcall a3Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall ContinueClick(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
