///-----------------------------------------------------------------
///
/// @file      Project1Frm.h
/// @author    A G
/// Created:   11/2/2015 5:51:22 PM
/// @section   DESCRIPTION
///            Project1Frm class declaration
///
///------------------------------------------------------------------

#ifndef __PROJECT1FRM_H__
#define __PROJECT1FRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/menu.h>
#include <wx/filedlg.h>
#include <wx/statbmp.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/spinctrl.h>
#include <wx/combobox.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/statusbr.h>
#include <wx/tglbtn.h>
////Header Include End
//#include "pendulum.h"
//#include "painter.h"
//#include "filecontrol.h"
////Dialog Style Start
#undef Project1Frm_STYLE
#define Project1Frm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX | wxMAXIMIZE
////Dialog Style End

class BasicDrawPane;
 
class RenderTimer : public wxTimer
{
    BasicDrawPane* pane;
public:
    RenderTimer(BasicDrawPane* pane);
    void Notify();
    void start();
};
 
 
class BasicDrawPane : public wxPanel
{
 
public:
    BasicDrawPane(wxFrame* parent);
 
    void paintEvent(wxPaintEvent& evt);
    void paintNow();
    void render( wxDC& dc );
 
    DECLARE_EVENT_TABLE()
};
 
class Project1Frm : public wxFrame
{     RenderTimer* timer;
    BasicDrawPane* drawPane;
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Project1Frm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Harmonograph"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Project1Frm_STYLE);
		virtual ~Project1Frm();
		void WxSlider16Scroll(wxScrollEvent& event);
		void WxSlider3Scroll(wxScrollEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
		void WxButton3Click(wxCommandEvent& event);
		void Mnuabout1086Click(wxCommandEvent& event);
		void WxSpinCtrl1Updated(wxSpinEvent& event );
		void Mnuhelp1085Click(wxCommandEvent& event);
		void Mnuedit1065Click(wxCommandEvent& event);
		void Mnuspeed1116Click(wxCommandEvent& event);
		void Mnucolor1084Click(wxCommandEvent& event);
		void Mnuopen1078Click(wxCommandEvent& event);
		void Mnunew1076Click(wxCommandEvent& event);
		void Mnusave1079Click(wxCommandEvent& event);
		void WxCheckBox3Click(wxCommandEvent& event);
		void WxCheckBox2Click(wxCommandEvent& event);
		void WxCheckBox4Click(wxCommandEvent& event);
		void WxCheckBox5Click(wxCommandEvent& event);
		void WxCheckBox6Click(wxCommandEvent& event);
		void WxCheckBox7Click(wxCommandEvent& event);
		void WxCheckBox8Click(wxCommandEvent& event);
		void WxCheckBox9Click(wxCommandEvent& event);
		void WxToggleButton1Click(wxCommandEvent& event);
		void WxPanel1UpdateUI(wxUpdateUIEvent& event);
		void Project1FrmActivate(wxActivateEvent& event);
		void WxSpinCtrl1SpinDown(wxSpinEvent& event );
		void WxSpinCtrl1SpinUp(wxSpinEvent& event);
		void WxSpinCtrl2SpinDown(wxSpinEvent& event );
		void WxSpinCtrl2SpinUp(wxSpinEvent& event);
		void WxSpinCtrl3SpinDown(wxSpinEvent& event );
		void WxSpinCtrl3SpinUp(wxSpinEvent& event);
		void WxComboBox1Selected(wxCommandEvent& event );
		void WxComboBox2Selected(wxCommandEvent& event );
		void WxComboBox3Selected(wxCommandEvent& event );
		void WxComboBox4Selected(wxCommandEvent& event );
		void WxComboBox6Selected(wxCommandEvent& event );
		void WxComboBox5Selected(wxCommandEvent& event );
		void WxComboBox7Selected(wxCommandEvent& event );
		void WxComboBox8Selected(wxCommandEvent& event );
		void WxSpinCtrl1Updated0(wxSpinEvent& event );
		void WxSpinCtrl4SpinDown(wxSpinEvent& event );
		void WxSpinCtrl4SpinUp(wxSpinEvent& event);
		void WxSpinCtrl5SpinDown(wxSpinEvent& event );
		void WxSpinCtrl5SpinUp(wxSpinEvent& event);
		void WxSpinCtrl6SpinDown(wxSpinEvent& event );
		void WxSpinCtrl6SpinUp(wxSpinEvent& event);
		void WxSpinCtrl11SpinDown(wxSpinEvent& event );
		void WxSpinCtrl11SpinUp(wxSpinEvent& event);
		void WxSpinCtrl12SpinDown(wxSpinEvent& event );
		void WxSpinCtrl12SpinUp(wxSpinEvent& event);
		void WxSpinCtrl7SpinDown(wxSpinEvent& event );
		void WxSpinCtrl7SpinUp(wxSpinEvent& event);
		void WxSpinCtrl25SpinDown(wxSpinEvent& event );
		void WxSpinCtrl1Updated1(wxSpinEvent& event );
		void WxSpinCtrl2Updated(wxSpinEvent& event );
		void WxSpinCtrl3Updated(wxSpinEvent& event );
		void WxSpinCtrl25Updated(wxSpinEvent& event );
		void WxSpinCtrl4Updated(wxSpinEvent& event );
		void WxSpinCtrl5Updated(wxSpinEvent& event );
		void WxSpinCtrl6Updated(wxSpinEvent& event );
		void WxSpinCtrl26Updated(wxSpinEvent& event );
		void WxSpinCtrl11Updated(wxSpinEvent& event );
		void WxSpinCtrl12Updated(wxSpinEvent& event );
		void WxSpinCtrl7Updated(wxSpinEvent& event );
		void WxSpinCtrl27Updated(wxSpinEvent& event );
		void WxSpinCtrl13Updated(wxSpinEvent& event );
		void WxSpinCtrl14Updated(wxSpinEvent& event );
		void WxSpinCtrl8Updated(wxSpinEvent& event );
		void WxSpinCtrl28Updated(wxSpinEvent& event );
		void WxSpinCtrl18Updated(wxSpinEvent& event );
		void WxSpinCtrl17Updated(wxSpinEvent& event );
		void WxSpinCtrl10Updated(wxSpinEvent& event );
		void WxSpinCtrl32Updated(wxSpinEvent& event );
		void WxSpinCtrl15Updated(wxSpinEvent& event );
		void WxSpinCtrl16Updated(wxSpinEvent& event );
		void WxSpinCtrl9Updated(wxSpinEvent& event );
		void WxSpinCtrl31Updated(wxSpinEvent& event );
		void WxSpinCtrl24Updated(wxSpinEvent& event );
		void WxSpinCtrl23Updated(wxSpinEvent& event );
		void WxSpinCtrl22Updated(wxSpinEvent& event );
		void WxSpinCtrl30Updated(wxSpinEvent& event );
		void WxSpinCtrl21Updated(wxSpinEvent& event );
		void WxSpinCtrl20Updated(wxSpinEvent& event );
		void WxSpinCtrl19Updated(wxSpinEvent& event );
		void WxSpinCtrl29Updated(wxSpinEvent& event );
		void WxComboBox6Updated(wxCommandEvent& event );
		void WxComboBox6Selected0(wxCommandEvent& event );
		void WxComboBox5Selected0(wxCommandEvent& event );
		void WxComboBox7Selected0(wxCommandEvent& event );
		void WxComboBox8Selected0(wxCommandEvent& event );
		void Mnuinfo1173Click(wxCommandEvent& event);
		void Mnuabout1174Click(wxCommandEvent& event);
		void Mnuinfo1173Click0(wxCommandEvent& event);
		void Mnuhelp1175Click(wxCommandEvent& event);
		void Mnuabout1174Click0(wxCommandEvent& event);
		void Mnuhelp1175Click0(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxFileDialog *WxSaveFileDialog1;
		wxMenuBar *WxMenuBar1;
		wxFileDialog *WxOpenFileDialog1;
		wxStaticBitmap *WxStaticBitmap1;
		wxStaticText *WxStaticText36;
		wxStaticText *WxStaticText35;
		wxStaticText *WxStaticText34;
		wxStaticText *WxStaticText33;
		wxRichTextCtrl *WxRichTextCtrl1;
		wxStaticText *WxStaticText26;
		wxStaticText *WxStaticText25;
		wxStaticText *WxStaticText6;
		wxStaticText *WxStaticText5;
		wxStaticText *WxStaticText4;
		wxStaticText *WxStaticText3;
		wxStaticText *WxStaticText2;
		wxStaticText *WxStaticText1;
		wxSpinCtrl *WxSpinCtrl32;
		wxSpinCtrl *WxSpinCtrl31;
		wxSpinCtrl *WxSpinCtrl30;
		wxSpinCtrl *WxSpinCtrl29;
		wxSpinCtrl *WxSpinCtrl28;
		wxSpinCtrl *WxSpinCtrl27;
		wxSpinCtrl *WxSpinCtrl26;
		wxSpinCtrl *WxSpinCtrl25;
		wxCheckBox *WxCheckBox9;
		wxCheckBox *WxCheckBox8;
		wxCheckBox *WxCheckBox7;
		wxCheckBox *WxCheckBox6;
		wxCheckBox *WxCheckBox5;
		wxCheckBox *WxCheckBox4;
		wxCheckBox *WxCheckBox3;
		wxCheckBox *WxCheckBox2;
		wxStaticText *WxStaticText32;
		wxStaticText *WxStaticText31;
		wxStaticText *WxStaticText30;
		wxStaticText *WxStaticText29;
		wxStaticText *WxStaticText28;
		wxStaticText *WxStaticText27;
		wxSpinCtrl *WxSpinCtrl24;
		wxSpinCtrl *WxSpinCtrl23;
		wxSpinCtrl *WxSpinCtrl22;
		wxComboBox *WxComboBox8;
		wxSpinCtrl *WxSpinCtrl21;
		wxSpinCtrl *WxSpinCtrl20;
		wxSpinCtrl *WxSpinCtrl19;
		wxComboBox *WxComboBox7;
		wxSpinCtrl *WxSpinCtrl18;
		wxSpinCtrl *WxSpinCtrl17;
		wxSpinCtrl *WxSpinCtrl16;
		wxSpinCtrl *WxSpinCtrl15;
		wxSpinCtrl *WxSpinCtrl14;
		wxSpinCtrl *WxSpinCtrl13;
		wxSpinCtrl *WxSpinCtrl12;
		wxSpinCtrl *WxSpinCtrl11;
		wxSpinCtrl *WxSpinCtrl10;
		wxSpinCtrl *WxSpinCtrl9;
		wxSpinCtrl *WxSpinCtrl8;
		wxSpinCtrl *WxSpinCtrl7;
		wxSpinCtrl *WxSpinCtrl6;
		wxSpinCtrl *WxSpinCtrl5;
		wxSpinCtrl *WxSpinCtrl4;
		wxSpinCtrl *WxSpinCtrl3;
		wxSpinCtrl *WxSpinCtrl2;
		wxSpinCtrl *WxSpinCtrl1;
		wxComboBox *WxComboBox6;
		wxComboBox *WxComboBox5;
		wxComboBox *WxComboBox4;
		wxComboBox *WxComboBox3;
		wxComboBox *WxComboBox2;
		wxComboBox *WxComboBox1;
		wxCheckBox *WxCheckBox1;
		wxStaticText *WxStaticText24;
		wxStaticText *WxStaticText23;
		wxStaticText *WxStaticText22;
		wxStaticText *WxStaticText21;
		wxStaticText *WxStaticText20;
		wxStaticText *WxStaticText19;
		wxStaticText *WxStaticText18;
		wxStaticText *WxStaticText17;
		wxStaticText *WxStaticText16;
		wxStaticText *WxStaticText15;
		wxStaticText *WxStaticText14;
		wxStaticText *WxStaticText13;
		wxStaticText *WxStaticText12;
		wxStaticText *WxStaticText11;
		wxStaticText *WxStaticText10;
		wxStaticText *WxStaticText9;
		wxStaticText *WxStaticText8;
		wxStaticText *WxStaticText7;
		wxButton *WxButton3;
		wxStatusBar *WxStatusBar1;
		wxToggleButton *WxToggleButton1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_MNU_FILE_1064 = 1064,
			ID_MNU_NEW_1076 = 1076,
			ID_MNU_OPEN_1078 = 1078,
			ID_MNU_SAVE_1079 = 1079,
			ID_MNU_INFO_1173 = 1173,
			ID_MNU_ABOUT_1174 = 1174,
			ID_MNU_HELP_1175 = 1175,
			
			ID_WXSTATICBITMAP1 = 1172,
			ID_WXSTATICTEXT36 = 1171,
			ID_WXSTATICTEXT35 = 1170,
			ID_WXSTATICTEXT34 = 1169,
			ID_WXSTATICTEXT33 = 1168,
			ID_WXRICHTEXTCTRL1 = 1167,
			ID_WXSTATICTEXT26 = 1165,
			ID_WXSTATICTEXT25 = 1164,
			ID_WXSTATICTEXT6 = 1163,
			ID_WXSTATICTEXT5 = 1162,
			ID_WXSTATICTEXT4 = 1161,
			ID_WXSTATICTEXT3 = 1160,
			ID_WXSTATICTEXT2 = 1159,
			ID_WXSTATICTEXT1 = 1158,
			ID_WXSPINCTRL32 = 1157,
			ID_WXSPINCTRL31 = 1156,
			ID_WXSPINCTRL30 = 1155,
			ID_WXSPINCTRL29 = 1154,
			ID_WXSPINCTRL28 = 1153,
			ID_WXSPINCTRL27 = 1152,
			ID_WXSPINCTRL26 = 1151,
			ID_WXSPINCTRL25 = 1150,
			ID_WXCHECKBOX9 = 1149,
			ID_WXCHECKBOX8 = 1148,
			ID_WXCHECKBOX7 = 1147,
			ID_WXCHECKBOX6 = 1146,
			ID_WXCHECKBOX5 = 1145,
			ID_WXCHECKBOX4 = 1144,
			ID_WXCHECKBOX3 = 1143,
			ID_WXCHECKBOX2 = 1142,
			ID_WXSTATICTEXT32 = 1133,
			ID_WXSTATICTEXT31 = 1132,
			ID_WXSTATICTEXT30 = 1130,
			ID_WXSTATICTEXT29 = 1129,
			ID_WXSTATICTEXT28 = 1128,
			ID_WXSTATICTEXT27 = 1127,
			ID_WXSPINCTRL24 = 1126,
			ID_WXSPINCTRL23 = 1125,
			ID_WXSPINCTRL22 = 1124,
			ID_WXCOMBOBOX8 = 1123,
			ID_WXSPINCTRL21 = 1122,
			ID_WXSPINCTRL20 = 1121,
			ID_WXSPINCTRL19 = 1120,
			ID_WXCOMBOBOX7 = 1119,
			ID_WXSPINCTRL18 = 1115,
			ID_WXSPINCTRL17 = 1114,
			ID_WXSPINCTRL16 = 1113,
			ID_WXSPINCTRL15 = 1112,
			ID_WXSPINCTRL14 = 1111,
			ID_WXSPINCTRL13 = 1110,
			ID_WXSPINCTRL12 = 1109,
			ID_WXSPINCTRL11 = 1108,
			ID_WXSPINCTRL10 = 1107,
			ID_WXSPINCTRL9 = 1106,
			ID_WXSPINCTRL8 = 1105,
			ID_WXSPINCTRL7 = 1104,
			ID_WXSPINCTRL6 = 1103,
			ID_WXSPINCTRL5 = 1102,
			ID_WXSPINCTRL4 = 1101,
			ID_WXSPINCTRL3 = 1100,
			ID_WXSPINCTRL2 = 1099,
			ID_WXSPINCTRL1 = 1098,
			ID_WXCOMBOBOX6 = 1097,
			ID_WXCOMBOBOX5 = 1096,
			ID_WXCOMBOBOX4 = 1095,
			ID_WXCOMBOBOX3 = 1094,
			ID_WXCOMBOBOX2 = 1093,
			ID_WXCOMBOBOX1 = 1092,
			ID_WXCHECKBOX1 = 1088,
			ID_WXSTATICTEXT24 = 1075,
			ID_WXSTATICTEXT23 = 1074,
			ID_WXSTATICTEXT22 = 1073,
			ID_WXSTATICTEXT21 = 1072,
			ID_WXSTATICTEXT20 = 1071,
			ID_WXSTATICTEXT19 = 1070,
			ID_WXSTATICTEXT18 = 1069,
			ID_WXSTATICTEXT17 = 1068,
			ID_WXSTATICTEXT16 = 1067,
			ID_WXSTATICTEXT15 = 1066,
			ID_WXSTATICTEXT14 = 1065,
			ID_WXSTATICTEXT13 = 1064,
			ID_WXSTATICTEXT12 = 1063,
			ID_WXSTATICTEXT11 = 1062,
			ID_WXSTATICTEXT10 = 1061,
			ID_WXSTATICTEXT9 = 1057,
			ID_WXSTATICTEXT8 = 1055,
			ID_WXSTATICTEXT7 = 1054,
			ID_WXBUTTON3 = 1018,
			ID_WXSTATUSBAR1 = 1015,
			ID_WXTOGGLEBUTTON1 = 1013,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

class pendulum{     
      
      public:
             float amp,freq,damp,phase;
      char axis;
                   
              pendulum(int a,float b,float c,float p,char x){
                      amp=a,freq=b,damp=c,phase=p,axis=x;           
                            }
                pendulum(){
                    amp=0,freq=0,damp=0,phase=0,axis=0;  
                }            
             void change_amp(float a){
                 amp=a;
                 }  
             void change_freq(float a){
                 freq=a;
                 }  
             void change_damp(float a){
                damp=a;
                 }  
             void change_phase(float a){
                 phase=a;
                 }  
             void change_axis(int a){
               if(a==0)  
                 axis='x';
               else if(a==1)
               axis='y';  
                 }  
                 
      };
     



class painter{
      int color;float speed;//int thickness;
      float t;      
      public:
             
             painter(int c,float s){
                       color=c,speed=s;                       
                       }
            void change_speed(float s){speed=s;}           
            void change_color(int c ){color=c;}  
             void paint(pendulum a[]){t=0.0;
                  while(t>-1){t+=0.0001;                  
                //delay(speed);
                //putpixel(1000+x(a,t), 500+y(a,t), color);
     } 
     }    };

#endif
