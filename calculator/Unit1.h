#ifndef Unit1H
#define Unit1H
//------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
//------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:    // IDE-managed Components
	TButton *btn0;
	TButton *btn1;
	TButton *btnminus;
	TButton *btn2;
	TButton *btn3;
	TButton *btnequal;
	TButton *btnreset;
	TButton *btncomma;
	TButton *btn4;
	TButton *btn7;
	TButton *btndivide;
	TButton *btn8;
	TButton *btn9;
	TButton *btnplus;
	TButton *btn6;
	TButton *btn5;
	TButton *parenthesis0;
	TButton *btnmultiply;
	TButton *parenthesis1;
	TButton *btnpercents;
	TEdit *editDisplay;
private:    // User declarations
public:     // User declarations
    __fastcall TForm1(TComponent* Owner);
};

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
