//---------------------------------------------------------------------------

#include <vcl.h>
#include <dos.h>
#pragma hdrstop
#include <stdio.h>
#pragma hdrstop
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
   int h = 0, m = 0, s = 0;
   int day = 0, mon = 0, year = 0, hour = 0, min = 0, sec = 0;
int i=0;


TForm2 *Form2;
int x = 0;
int j = 0;
struct date d;
struct time t;
int k = 0;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
Timer2->Enabled=false;
Timer3->Enabled=false;
	a1->Enabled=true;
	a2->Enabled=false;
	a3->Enabled=false;
	Edit2->Text="0 h 0 min 0 sec ";
         Continue->Enabled=false;
	TRect dreptunghi;
	 TRect sursa,destinatie;
	 PaintBox1->Canvas->Pen->Color=clRed;
	 dreptunghi=Rect(464,128,464+129,128+129);
	 PaintBox1->Repaint();

	 sursa=Rect(0,0,100,150);
	 destinatie=Rect(100,0,200,150);


	 sursa=Rect(464,128,464+129,128+129);
	 PaintBox1->Canvas->CopyRect(destinatie,PaintBox1->Canvas,sursa);
	 PaintBox1->Canvas->MoveTo(0,60);



}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer2Timer(TObject *Sender)
{
		 Form2->Color -RGB(rand()%255,rand()%255,rand()%255 );
	   char buf[40];

	Timer2->Tag=i;
	if( i<100){
	s = i; }
	if(i == 10){
	  s = 0;
	  m++;
	  i = 0;
	}
	if(s == 60){
	h++;
	s = 0;
	}
	snprintf ( buf, 40, "%d h %d min %d sec", h,m,s);
	Edit2->Text=(AnsiString)buf;
	i++;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::a1Click(TObject *Sender)
{
	a1->Enabled=false;
	a2->Enabled=true;
	a3->Enabled=false;
	Continue->Enabled=false;

   Timer2->Enabled=true;
   Timer3->Enabled=true;
    PaintBox1->Canvas->Pen->Color=clRed;
	j = 0;
	x = 0;

	PaintBox1->Canvas->MoveTo(0,60);
	Panel2->Height=60;


	PaintBox1->Canvas->FloodFill(50,50,clBtnFace,fsBorder);
	PaintBox1->Repaint();

}
//---------------------------------------------------------------------------
void __fastcall TForm2::a2Click(TObject *Sender)
{
	a1->Enabled=false;
	a2->Enabled=false;
	a3->Enabled=true;
	Timer2->Enabled=false;
	Timer3->Enabled=false;
	Continue->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::a3Click(TObject *Sender)
{
a1->Enabled=true;
	a2->Enabled=false;
	a3->Enabled=false;
	Timer2->Enabled=false;
	i = s = m = h = 0;
	Edit2->Text="0 h 0 min 0 sec ";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer1Timer(TObject *Sender)
{          Form2->Color -RGB(rand()%255,rand()%255,rand()%255 );

	getdate(&d);
	gettime(&t);
	char buff[40];

	snprintf ( buff, 40, "%d-%d-%d %d:%d:%d", d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
	Edit1->Text=(AnsiString)buff;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::ContinueClick(TObject *Sender)
{
Timer3->Enabled=true;

   a1->Enabled=false;
   a2->Enabled=true;
   Continue->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer3Timer(TObject *Sender)
{
x = rand()%100;
   j = j++;
   //Label1->Caption=x;
   PaintBox1->Canvas->LineTo(i,x);

   Panel2->Height=x;


   if(j==129){  //129
	a1->Enabled=true;
	a2->Enabled=false;
	Continue->Enabled=false;
	Timer3->Enabled=false;
	Timer3->Tag = 0;

	j = 0;
	x = 0;

}
   }
//---------------------------------------------------------------------------

