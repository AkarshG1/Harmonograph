///-----------------------------------------------------------------
///
/// @file      Project1Frm.cpp
/// @author    A G
/// Created:   11/2/2015 5:51:22 PM
/// @section   DESCRIPTION
///            Project1Frm class implementation
///
///------------------------------------------------------------------

#include "Project1Frm.h"
#include "main.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
//#include "Images/Project1Frm_frmNewForm_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// Project1Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Project1Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Project1Frm::OnClose)
	EVT_ACTIVATE(Project1Frm::Project1FrmActivate)
	EVT_MENU(ID_MNU_NEW_1076, Project1Frm::Mnunew1076Click)
	EVT_MENU(ID_MNU_OPEN_1078, Project1Frm::Mnuopen1078Click)
	EVT_MENU(ID_MNU_SAVE_1079, Project1Frm::Mnusave1079Click)
	EVT_MENU(ID_MNU_ABOUT_1174, Project1Frm::Mnuabout1174Click0)
	EVT_MENU(ID_MNU_HELP_1175, Project1Frm::Mnuhelp1175Click0)
	EVT_SPINCTRL(ID_WXSPINCTRL32,Project1Frm::WxSpinCtrl32Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL31,Project1Frm::WxSpinCtrl31Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL30,Project1Frm::WxSpinCtrl30Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL29,Project1Frm::WxSpinCtrl29Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL28,Project1Frm::WxSpinCtrl28Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL27,Project1Frm::WxSpinCtrl27Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL26,Project1Frm::WxSpinCtrl26Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL25,Project1Frm::WxSpinCtrl25Updated)
	EVT_CHECKBOX(ID_WXCHECKBOX9,Project1Frm::WxCheckBox9Click)
	EVT_CHECKBOX(ID_WXCHECKBOX8,Project1Frm::WxCheckBox8Click)
	EVT_CHECKBOX(ID_WXCHECKBOX7,Project1Frm::WxCheckBox7Click)
	EVT_CHECKBOX(ID_WXCHECKBOX6,Project1Frm::WxCheckBox6Click)
	EVT_CHECKBOX(ID_WXCHECKBOX5,Project1Frm::WxCheckBox5Click)
	EVT_CHECKBOX(ID_WXCHECKBOX4,Project1Frm::WxCheckBox4Click)
	EVT_CHECKBOX(ID_WXCHECKBOX3,Project1Frm::WxCheckBox3Click)
	EVT_CHECKBOX(ID_WXCHECKBOX2,Project1Frm::WxCheckBox2Click)
	EVT_SPINCTRL(ID_WXSPINCTRL24,Project1Frm::WxSpinCtrl24Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL23,Project1Frm::WxSpinCtrl23Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL22,Project1Frm::WxSpinCtrl22Updated)
	EVT_COMBOBOX(ID_WXCOMBOBOX8,Project1Frm::WxComboBox8Selected0)
	EVT_SPINCTRL(ID_WXSPINCTRL21,Project1Frm::WxSpinCtrl21Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL20,Project1Frm::WxSpinCtrl20Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL19,Project1Frm::WxSpinCtrl19Updated)
	EVT_COMBOBOX(ID_WXCOMBOBOX7,Project1Frm::WxComboBox7Selected0)
	EVT_SPINCTRL(ID_WXSPINCTRL18,Project1Frm::WxSpinCtrl18Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL17,Project1Frm::WxSpinCtrl17Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL16,Project1Frm::WxSpinCtrl16Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL15,Project1Frm::WxSpinCtrl15Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL14,Project1Frm::WxSpinCtrl14Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL13,Project1Frm::WxSpinCtrl13Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL12,Project1Frm::WxSpinCtrl12Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL11,Project1Frm::WxSpinCtrl11Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL10,Project1Frm::WxSpinCtrl10Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL9,Project1Frm::WxSpinCtrl9Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL8,Project1Frm::WxSpinCtrl8Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL7,Project1Frm::WxSpinCtrl7Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL6,Project1Frm::WxSpinCtrl6Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL5,Project1Frm::WxSpinCtrl5Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL4,Project1Frm::WxSpinCtrl4Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL3,Project1Frm::WxSpinCtrl3Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL2,Project1Frm::WxSpinCtrl2Updated)
	EVT_SPINCTRL(ID_WXSPINCTRL1,Project1Frm::WxSpinCtrl1Updated1)
	EVT_COMBOBOX(ID_WXCOMBOBOX6,Project1Frm::WxComboBox6Selected0)
	EVT_COMBOBOX(ID_WXCOMBOBOX5,Project1Frm::WxComboBox5Selected0)
	EVT_COMBOBOX(ID_WXCOMBOBOX4,Project1Frm::WxComboBox4Selected)
	EVT_COMBOBOX(ID_WXCOMBOBOX3,Project1Frm::WxComboBox3Selected)
	EVT_COMBOBOX(ID_WXCOMBOBOX2,Project1Frm::WxComboBox2Selected)
	EVT_COMBOBOX(ID_WXCOMBOBOX1,Project1Frm::WxComboBox1Selected)
	EVT_BUTTON(ID_WXBUTTON3,Project1Frm::WxButton3Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON1,Project1Frm::WxToggleButton1Click)
END_EVENT_TABLE()
////Event Table End
pendulum p[8],p1,p2,p3,p4,p5,p6,p7,p8,p0; 
int nw=0;

Project1Frm::Project1Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();

     
       
}

Project1Frm::~Project1Frm()
{
     delete timer;
}

void Project1Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start



	WxStaticText33 = new wxStaticText(this, ID_WXSTATICTEXT33, wxT("Welcome to Harmonograph 1.0  "), wxPoint(480+30, 310), wxDefaultSize, 0, wxT("WxStaticText33"));

	WxStaticText34 = new wxStaticText(this, ID_WXSTATICTEXT34, wxT("Please select new in menu to start using the program "), wxPoint(423+30, 337), wxDefaultSize, 0, wxT("WxStaticText34"));

	WxStaticText35 = new wxStaticText(this, ID_WXSTATICTEXT35, wxT("For instructions on using the program select Help"), wxPoint(388+80, 378), wxDefaultSize, 0, wxT("WxStaticText35"));

	WxStaticText36 = new wxStaticText(this, ID_WXSTATICTEXT36, wxT("For information about the software and release select About"), wxPoint(361+80, 420), wxDefaultSize, 0, wxT("WxStaticText36"));

	WxStaticBitmap1 = new wxStaticBitmap(this, ID_WXSTATICBITMAP1, wxBitmap(wxT("C:/Documents and Settings/admin/My Documents/Harmo.png"), wxBITMAP_TYPE_PNG), wxPoint(380, 38), wxSize(294, 245) );

	WxOpenFileDialog1 =  new wxFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("*.*"), wxOPEN);

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_FILE_1064_Mnu_Obj = new wxMenu(0);
	ID_MNU_FILE_1064_Mnu_Obj->Append(ID_MNU_NEW_1076, wxT("New"), wxT(""), wxITEM_NORMAL);
	ID_MNU_FILE_1064_Mnu_Obj->Append(ID_MNU_OPEN_1078, wxT("Open"), wxT(""), wxITEM_NORMAL);
	ID_MNU_FILE_1064_Mnu_Obj->Append(ID_MNU_SAVE_1079, wxT("Save"), wxT(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_FILE_1064_Mnu_Obj, wxT("File"));
	
	wxMenu *ID_MNU_INFO_1173_Mnu_Obj = new wxMenu(0);
	ID_MNU_INFO_1173_Mnu_Obj->Append(ID_MNU_ABOUT_1174, wxT("about"), wxT(""), wxITEM_NORMAL);
	ID_MNU_INFO_1173_Mnu_Obj->Append(ID_MNU_HELP_1175, wxT("help"), wxT(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_INFO_1173_Mnu_Obj, wxT("info"));
	SetMenuBar(WxMenuBar1);

	WxSaveFileDialog1 =  new wxFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("*.*"), wxSAVE);

	SetStatusBar(WxStatusBar1);
	SetTitle(wxT("Harmonograph"));
//	SetIcon(Self_Project1Frm_XPM);
	SetSize(8,8,1202,720);
	Center();
	
	////GUI Items Creation End
/*	WxStaticText33 = new wxStaticText(this, ID_WXSTATICTEXT33, wxT("Welcome to Harmonograph 1.0  "), wxPoint(733, 298), wxDefaultSize, 0, wxT("WxStaticText33"));

	WxStaticText34 = new wxStaticText(this, ID_WXSTATICTEXT34, wxT("Please select new in menu to start using the program "), wxPoint(682, 348), wxDefaultSize, 0, wxT("WxStaticText34"));

	WxStaticText35 = new wxStaticText(this, ID_WXSTATICTEXT35, wxT("For instructions on using the program select Help"), wxPoint(678, 398), wxDefaultSize, 0, wxT("WxStaticText35"));

	WxStaticText36 = new wxStaticText(this, ID_WXSTATICTEXT36, wxT("For information about the software and release select About"), wxPoint(675, 419), wxDefaultSize, 0, wxT("WxStaticText36"));

	WxStaticBitmap1 = new wxStaticBitmap(this, ID_WXSTATICBITMAP1, wxBitmap(wxT("C:/Documents and Settings/admin/My Documents/Harmo.png"), wxBITMAP_TYPE_PNG), wxPoint(669, 52), wxSize(294, 245) );

	WxSaveFileDialog1 =  new wxFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("*.*"), wxSAVE);
	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_FILE_1064_Mnu_Obj = new wxMenu(0);
	ID_MNU_FILE_1064_Mnu_Obj->Append(ID_MNU_NEW_1076, wxT("New"), wxT(""), wxITEM_NORMAL);
	ID_MNU_FILE_1064_Mnu_Obj->Append(ID_MNU_OPEN_1078, wxT("Open"), wxT(""), wxITEM_NORMAL);
	ID_MNU_FILE_1064_Mnu_Obj->Append(ID_MNU_SAVE_1079, wxT("Save"), wxT(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_FILE_1064_Mnu_Obj, wxT("File"));

	wxMenu *ID_MNU_INFO_1173_Mnu_Obj = new wxMenu(0);
	ID_MNU_INFO_1173_Mnu_Obj->Append(ID_MNU_ABOUT_1174, wxT("about"), wxT(""), wxITEM_NORMAL);
	ID_MNU_INFO_1173_Mnu_Obj->Append(ID_MNU_HELP_1175, wxT("help"), wxT(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_INFO_1173_Mnu_Obj, wxT("info"));
	SetMenuBar(WxMenuBar1);

	SetStatusBar(WxStatusBar1);
	SetTitle(wxT("Harmonograph"));
	//SetIcon(Self_Project1Frm_XPM);
	SetSize(-5,4,1202,720);
	Center();*/

}
float x(pendulum a[],float t){ 
      float c=0.0;
     c=0.0;
      if(a[0].axis=='x'){
                c+=a[0].amp*sin(a[0].freq*t+a[0].phase)*pow(2.73,-a[0].damp*t);                   
                         }
                    if(a[7].axis=='x'){
                c+=a[7].amp*sin(a[7].freq*t+a[7].phase)*pow(2.73,-a[7].damp*t);                   
                         }
                             if(a[1].axis=='x'){
                c+=a[1].amp*sin(a[1].freq*t+a[1].phase)*pow(2.73,-a[1].damp*t);                   
                         }
                             if(a[2].axis=='x'){
                c+=a[2].amp*sin(a[2].freq*t+a[2].phase)*pow(2.73,-a[2].damp*t);                   
                         }
                             if(a[3].axis=='x'){
                c+=a[3].amp*sin(a[3].freq*t+a[3].phase)*pow(2.73,-a[3].damp*t);                   
                         }
                             if(a[4].axis=='x'){
                c+=a[4].amp*sin(a[4].freq*t+a[4].phase)*pow(2.73,-a[4].damp*t);                   
                         }
                             if(a[5].axis=='x'){
                c+=a[5].amp*sin(a[5].freq*t+a[5].phase)*pow(2.73,-a[5].damp*t);                   
                         }
                             if(a[6].axis=='x'){
                c+=a[6].amp*sin(a[6].freq*t+a[6].phase)*pow(2.73,-a[6].damp*t);                   
                         }         
                return c; }
                
float y(pendulum a[],float t){
       float c=0.0;
       c=0.0;
      if(a[0].axis=='y'){
                c+=a[0].amp*sin(a[0].freq*t+a[0].phase)*pow(2.73,-a[0].damp*t);                   
                         }
                    if(a[7].axis=='y'){
                c+=a[7].amp*sin(a[7].freq*t+a[7].phase)*pow(2.73,-a[7].damp*t);                   
                         }
                             if(a[1].axis=='y'){
                c+=a[1].amp*sin(a[1].freq*t+a[1].phase)*pow(2.73,-a[1].damp*t);                   
                         }
                             if(a[2].axis=='y'){
                c+=a[2].amp*sin(a[2].freq*t+a[2].phase)*pow(2.73,-a[2].damp*t);                   
                         }
                             if(a[3].axis=='y'){
                c+=a[3].amp*sin(a[3].freq*t+a[3].phase)*pow(2.73,-a[3].damp*t);                   
                         }
                             if(a[4].axis=='y'){
                c+=a[4].amp*sin(a[4].freq*t+a[4].phase)*pow(2.73,-a[4].damp*t);                   
                         }
                             if(a[5].axis=='y'){
                c+=a[5].amp*sin(a[5].freq*t+a[5].phase)*pow(2.73,-a[5].damp*t);                   
                         }
                             if(a[6].axis=='y'){
                c+=a[6].amp*sin(a[6].freq*t+a[6].phase)*pow(2.73,-a[6].damp*t);                   
                         }         
      return c;}
void Project1Frm::OnClose(wxCloseEvent& event)
{
    timer->Stop();
	Destroy();
}

/*
 * WxSlider16Scroll
 */
void Project1Frm::WxSlider16Scroll(wxScrollEvent& event)
{
	// insert your code here
}

/*
 * WxSlider3Scroll
 */
void Project1Frm::WxSlider3Scroll(wxScrollEvent& event)
{
	// insert your code here
}

/*
 * WxButton1Click
 */
void Project1Frm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton2Click
 */
void Project1Frm::WxButton2Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton3Click
 */
 
  float ti=0.0;
void Project1Frm::WxButton3Click(wxCommandEvent& event)
{
if(nw==1){
 timer->Stop();
 drawPane->Refresh();

WxToggleButton1->SetValue(false);
 WxToggleButton1->SetLabel(wxT("Play"))  ; 
  ti=0.0;
}
	// insert your code here
}

/*
 * WxSpinCtrl1Updated
 */
void Project1Frm::WxSpinCtrl1Updated(wxSpinEvent& event )
{
	// insert your code here
}

/*
 * Mnuabout1086Click
 */
void Project1Frm::Mnuabout1086Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnuhelp1085Click
 */
void Project1Frm::Mnuhelp1085Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnuedit1065Click
 */
void Project1Frm::Mnuedit1065Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnuspeed1116Click
 */
void Project1Frm::Mnuspeed1116Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnucolor1084Click
 */
void Project1Frm::Mnucolor1084Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnuopen1078Click
 */
void Project1Frm::Mnuopen1078Click(wxCommandEvent& event)
{
wxFileDialog * openFileDialog = new wxFileDialog(this);

  if (openFileDialog->ShowModal() == wxID_OK){
      wxString fileName = openFileDialog->GetPath();                                                      //path from open
      wxMessageBox(wxT("This function is unavailable in this version Harmonograph "),
        wxT("We are very sorry"), wxOK | wxICON_INFORMATION, this);
      	// insert your code here
}
}
/*
 * Mnunew1076Click
 */
void Project1Frm::Mnunew1076Click(wxCommandEvent& event)
{
    if(nw==0){
 drawPane = new BasicDrawPane(this);
        drawPane->SetBackgroundColour(wxColour(255,255,255));
      
drawPane->Refresh();
        timer = new RenderTimer(drawPane);
          Show();
          nw++;
         	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxToggleButton1 = new wxToggleButton(this, ID_WXTOGGLEBUTTON1, wxT("Play"), wxPoint(638, 7), wxSize(84, 31), 0, wxDefaultValidator, wxT("WxToggleButton1"));

	WxStatusBar1 = new wxStatusBar(this, ID_WXSTATUSBAR1);

	WxButton3 = new wxButton(this, ID_WXBUTTON3, wxT("Stop"), wxPoint(887, 6), wxSize(82, 32), 0, wxDefaultValidator, wxT("WxButton3"));

	WxStaticText7 = new wxStaticText(this, ID_WXSTATICTEXT7, wxT("Frequency"), wxPoint(36, 66), wxDefaultSize, 0, wxT("WxStaticText7"));

	WxStaticText8 = new wxStaticText(this, ID_WXSTATICTEXT8, wxT("Amplitude"), wxPoint(35, 42), wxDefaultSize, 0, wxT("WxStaticText8"));

	WxStaticText9 = new wxStaticText(this, ID_WXSTATICTEXT9, wxT("Damping"), wxPoint(38, 98), wxDefaultSize, 0, wxT("WxStaticText9"));

	WxStaticText10 = new wxStaticText(this, ID_WXSTATICTEXT10, wxT("Amplitude"), wxPoint(247, 42), wxDefaultSize, 0, wxT("WxStaticText10"));

	WxStaticText11 = new wxStaticText(this, ID_WXSTATICTEXT11, wxT("Frequency"), wxPoint(245, 72), wxDefaultSize, 0, wxT("WxStaticText11"));

	WxStaticText12 = new wxStaticText(this, ID_WXSTATICTEXT12, wxT("Damping"), wxPoint(247, 100), wxDefaultSize, 0, wxT("WxStaticText12"));

	WxStaticText13 = new wxStaticText(this, ID_WXSTATICTEXT13, wxT("Amplitude"), wxPoint(31, 207), wxDefaultSize, 0, wxT("WxStaticText13"));

	WxStaticText14 = new wxStaticText(this, ID_WXSTATICTEXT14, wxT("Frequency"), wxPoint(33, 238), wxDefaultSize, 0, wxT("WxStaticText14"));

	WxStaticText15 = new wxStaticText(this, ID_WXSTATICTEXT15, wxT("Damping"), wxPoint(40, 265), wxDefaultSize, 0, wxT("WxStaticText15"));

	WxStaticText16 = new wxStaticText(this, ID_WXSTATICTEXT16, wxT("Amplitude"), wxPoint(33, 385), wxDefaultSize, 0, wxT("WxStaticText16"));

	WxStaticText17 = new wxStaticText(this, ID_WXSTATICTEXT17, wxT("Frequency"), wxPoint(246, 237), wxDefaultSize, 0, wxT("WxStaticText17"));

	WxStaticText18 = new wxStaticText(this, ID_WXSTATICTEXT18, wxT("Amplitude"), wxPoint(246, 205), wxDefaultSize, 0, wxT("WxStaticText18"));

	WxStaticText19 = new wxStaticText(this, ID_WXSTATICTEXT19, wxT("Damping"), wxPoint(252, 267), wxDefaultSize, 0, wxT("WxStaticText19"));

	WxStaticText20 = new wxStaticText(this, ID_WXSTATICTEXT20, wxT("Amplitude"), wxPoint(247, 381), wxDefaultSize, 0, wxT("WxStaticText20"));

	WxStaticText21 = new wxStaticText(this, ID_WXSTATICTEXT21, wxT("Frequency"), wxPoint(38, 407), wxDefaultSize, 0, wxT("WxStaticText21"));

	WxStaticText22 = new wxStaticText(this, ID_WXSTATICTEXT22, wxT("Frequency"), wxPoint(249, 407), wxDefaultSize, 0, wxT("WxStaticText22"));

	WxStaticText23 = new wxStaticText(this, ID_WXSTATICTEXT23, wxT("Damping"), wxPoint(42, 432), wxDefaultSize, 0, wxT("WxStaticText23"));

	WxStaticText24 = new wxStaticText(this, ID_WXSTATICTEXT24, wxT("Damping"), wxPoint(254, 435), wxDefaultSize, 0, wxT("WxStaticText24"));

	WxCheckBox1 = new wxCheckBox(this, ID_WXCHECKBOX1, wxT("WxCheckBox1"), wxPoint(37, 37), wxSize(2, 1), 0, wxDefaultValidator, wxT("WxCheckBox1"));

	wxArrayString arrayStringFor_WxComboBox1;
	arrayStringFor_WxComboBox1.Add(wxT("x axis"));
	arrayStringFor_WxComboBox1.Add(wxT("y axis"));
	WxComboBox1 = new wxComboBox(this, ID_WXCOMBOBOX1, wxT("axis:"), wxPoint(134, 5), wxSize(64, 23), arrayStringFor_WxComboBox1, 0, wxDefaultValidator, wxT("WxComboBox1"));

	wxArrayString arrayStringFor_WxComboBox2;
	arrayStringFor_WxComboBox2.Add(wxT("x axis"));
	arrayStringFor_WxComboBox2.Add(wxT("y axis"));
	WxComboBox2 = new wxComboBox(this, ID_WXCOMBOBOX2, wxT("axis:"), wxPoint(345, 9), wxSize(63, 23), arrayStringFor_WxComboBox2, 0, wxDefaultValidator, wxT("WxComboBox2"));

	wxArrayString arrayStringFor_WxComboBox3;
	arrayStringFor_WxComboBox3.Add(wxT("x axis"));
	arrayStringFor_WxComboBox3.Add(wxT("y axis"));
	WxComboBox3 = new wxComboBox(this, ID_WXCOMBOBOX3, wxT("axis:"), wxPoint(122, 174), wxSize(72, 23), arrayStringFor_WxComboBox3, 0, wxDefaultValidator, wxT("WxComboBox3"));

	wxArrayString arrayStringFor_WxComboBox4;
	arrayStringFor_WxComboBox4.Add(wxT("x axis"));
	arrayStringFor_WxComboBox4.Add(wxT("y axis"));
	WxComboBox4 = new wxComboBox(this, ID_WXCOMBOBOX4, wxT("axis:"), wxPoint(335, 175), wxSize(70, 23), arrayStringFor_WxComboBox4, 0, wxDefaultValidator, wxT("WxComboBox4"));

	wxArrayString arrayStringFor_WxComboBox5;
	arrayStringFor_WxComboBox5.Add(wxT("x axis"));
	arrayStringFor_WxComboBox5.Add(wxT("y axis"));
	WxComboBox5 = new wxComboBox(this, ID_WXCOMBOBOX5, wxT("axis:"), wxPoint(342, 345), wxSize(66, 23), arrayStringFor_WxComboBox5, 0, wxDefaultValidator, wxT("WxComboBox5"));

	wxArrayString arrayStringFor_WxComboBox6;
	arrayStringFor_WxComboBox6.Add(wxT("x axis"));
	arrayStringFor_WxComboBox6.Add(wxT("y axis"));
	WxComboBox6 = new wxComboBox(this, ID_WXCOMBOBOX6, wxT("axis:"), wxPoint(117, 348), wxSize(78, 23), arrayStringFor_WxComboBox6, 0, wxDefaultValidator, wxT("WxComboBox6"));

	WxSpinCtrl1 = new wxSpinCtrl(this, ID_WXSPINCTRL1, wxT("0"), wxPoint(100, 36), wxSize(96, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl2 = new wxSpinCtrl(this, ID_WXSPINCTRL2, wxT("0"), wxPoint(99, 65), wxSize(97, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl3 = new wxSpinCtrl(this, ID_WXSPINCTRL3, wxT("0"), wxPoint(99, 93), wxSize(97, 24), wxSP_ARROW_KEYS, 0, 5, 0);

	WxSpinCtrl4 = new wxSpinCtrl(this, ID_WXSPINCTRL4, wxT("0"), wxPoint(310, 39), wxSize(96, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl5 = new wxSpinCtrl(this, ID_WXSPINCTRL5, wxT("0"), wxPoint(310, 66), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl6 = new wxSpinCtrl(this, ID_WXSPINCTRL6, wxT("0"), wxPoint(310, 93), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 5, 0);

	WxSpinCtrl7 = new wxSpinCtrl(this, ID_WXSPINCTRL7, wxT("0"), wxPoint(97, 263), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 5, 0);

	WxSpinCtrl8 = new wxSpinCtrl(this, ID_WXSPINCTRL8, wxT("0"), wxPoint(308, 264), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 5, 0);

	WxSpinCtrl9 = new wxSpinCtrl(this, ID_WXSPINCTRL9, wxT("0"), wxPoint(314, 430), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 5, 0);

	WxSpinCtrl10 = new wxSpinCtrl(this, ID_WXSPINCTRL10, wxT("0"), wxPoint(100, 432), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 5, 0);

	WxSpinCtrl11 = new wxSpinCtrl(this, ID_WXSPINCTRL11, wxT("0"), wxPoint(96, 203), wxSize(99, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl12 = new wxSpinCtrl(this, ID_WXSPINCTRL12, wxT("0"), wxPoint(96, 233), wxSize(99, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl13 = new wxSpinCtrl(this, ID_WXSPINCTRL13, wxT("0"), wxPoint(309, 205), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl14 = new wxSpinCtrl(this, ID_WXSPINCTRL14, wxT("0"), wxPoint(308, 234), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl15 = new wxSpinCtrl(this, ID_WXSPINCTRL15, wxT("0"), wxPoint(313, 375), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl16 = new wxSpinCtrl(this, ID_WXSPINCTRL16, wxT("0"), wxPoint(314, 402), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl17 = new wxSpinCtrl(this, ID_WXSPINCTRL17, wxT("0"), wxPoint(100, 405), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl18 = new wxSpinCtrl(this, ID_WXSPINCTRL18, wxT("0"), wxPoint(100, 378), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	wxArrayString arrayStringFor_WxComboBox7;
	arrayStringFor_WxComboBox7.Add(wxT("x axis"));
	arrayStringFor_WxComboBox7.Add(wxT("y axis"));
	WxComboBox7 = new wxComboBox(this, ID_WXCOMBOBOX7, wxT("axis:"), wxPoint(120, 513), wxSize(78, 23), arrayStringFor_WxComboBox7, 0, wxDefaultValidator, wxT("WxComboBox7"));

	WxSpinCtrl19 = new wxSpinCtrl(this, ID_WXSPINCTRL19, wxT("0"), wxPoint(316, 598), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 5, 0);

	WxSpinCtrl20 = new wxSpinCtrl(this, ID_WXSPINCTRL20, wxT("0"), wxPoint(315, 570), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl21 = new wxSpinCtrl(this, ID_WXSPINCTRL21, wxT("0"), wxPoint(314, 542), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	wxArrayString arrayStringFor_WxComboBox8;
	arrayStringFor_WxComboBox8.Add(wxT("x axis"));
	arrayStringFor_WxComboBox8.Add(wxT("y axis"));
	WxComboBox8 = new wxComboBox(this, ID_WXCOMBOBOX8, wxT("axis:"), wxPoint(339, 512), wxSize(69, 23), arrayStringFor_WxComboBox8, 0, wxDefaultValidator, wxT("WxComboBox8"));

	WxSpinCtrl22 = new wxSpinCtrl(this, ID_WXSPINCTRL22, wxT("0"), wxPoint(102, 600), wxSize(96, 24), wxSP_ARROW_KEYS, 0, 5, 0);

	WxSpinCtrl23 = new wxSpinCtrl(this, ID_WXSPINCTRL23, wxT("0"), wxPoint(102, 573), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxSpinCtrl24 = new wxSpinCtrl(this, ID_WXSPINCTRL24, wxT("0"), wxPoint(102, 545), wxSize(96, 24), wxSP_ARROW_KEYS, 0, 360, 0);

	WxStaticText27 = new wxStaticText(this, ID_WXSTATICTEXT27, wxT("Amplitude"), wxPoint(36, 549), wxDefaultSize, 0, wxT("WxStaticText27"));

	WxStaticText28 = new wxStaticText(this, ID_WXSTATICTEXT28, wxT("Amplitude"), wxPoint(254, 546), wxDefaultSize, 0, wxT("WxStaticText28"));

	WxStaticText29 = new wxStaticText(this, ID_WXSTATICTEXT29, wxT("Frequency"), wxPoint(38, 576), wxDefaultSize, 0, wxT("WxStaticText29"));

	WxStaticText30 = new wxStaticText(this, ID_WXSTATICTEXT30, wxT("Frequency"), wxPoint(253, 575), wxDefaultSize, 0, wxT("WxStaticText30"));

	WxStaticText31 = new wxStaticText(this, ID_WXSTATICTEXT31, wxT("Damping"), wxPoint(43, 603), wxDefaultSize, 0, wxT("WxStaticText31"));

	WxStaticText32 = new wxStaticText(this, ID_WXSTATICTEXT32, wxT("Damping"), wxPoint(256, 600), wxDefaultSize, 0, wxT("WxStaticText32"));

	WxCheckBox2 = new wxCheckBox(this, ID_WXCHECKBOX2, wxT("Pendulum 1"), wxPoint(36, 7), wxSize(97, 17), 0, wxDefaultValidator, wxT("WxCheckBox2"));

	WxCheckBox3 = new wxCheckBox(this, ID_WXCHECKBOX3, wxT("Pendulum 2"), wxPoint(240, 12), wxSize(99, 18), 0, wxDefaultValidator, wxT("WxCheckBox3"));

	WxCheckBox4 = new wxCheckBox(this, ID_WXCHECKBOX4, wxT("Pendulum 3"), wxPoint(30, 180), wxSize(88, 17), 0, wxDefaultValidator, wxT("WxCheckBox4"));

	WxCheckBox5 = new wxCheckBox(this, ID_WXCHECKBOX5, wxT("Pendulum 4"), wxPoint(235, 179), wxSize(96, 17), 0, wxDefaultValidator, wxT("WxCheckBox5"));

	WxCheckBox6 = new wxCheckBox(this, ID_WXCHECKBOX6, wxT("Pendulum 5"), wxPoint(25, 353), wxSize(88, 17), 0, wxDefaultValidator, wxT("WxCheckBox6"));

	WxCheckBox7 = new wxCheckBox(this, ID_WXCHECKBOX7, wxT("Pendulum 6"), wxPoint(245, 348), wxSize(97, 17), 0, wxDefaultValidator, wxT("WxCheckBox7"));

	WxCheckBox8 = new wxCheckBox(this, ID_WXCHECKBOX8, wxT("Pendulum 7"), wxPoint(33, 517), wxSize(85, 18), 0, wxDefaultValidator, wxT("WxCheckBox8"));

	WxCheckBox9 = new wxCheckBox(this, ID_WXCHECKBOX9, wxT("Pendulum 8"), wxPoint(247, 515), wxSize(90, 17), 0, wxDefaultValidator, wxT("WxCheckBox9"));

	WxSpinCtrl25 = new wxSpinCtrl(this, ID_WXSPINCTRL25, wxT("0"), wxPoint(99, 123), wxSize(97, 24), wxSP_ARROW_KEYS, 0, 10, 0);

	WxSpinCtrl26 = new wxSpinCtrl(this, ID_WXSPINCTRL26, wxT("0"), wxPoint(309, 123), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 10, 0);

	WxSpinCtrl27 = new wxSpinCtrl(this, ID_WXSPINCTRL27, wxT("0"), wxPoint(98, 294), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 10, 0);

	WxSpinCtrl28 = new wxSpinCtrl(this, ID_WXSPINCTRL28, wxT("0"), wxPoint(309, 292), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 10, 0);

	WxSpinCtrl29 = new wxSpinCtrl(this, ID_WXSPINCTRL29, wxT("0"), wxPoint(316, 627), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 10, 0);

	WxSpinCtrl30 = new wxSpinCtrl(this, ID_WXSPINCTRL30, wxT("0"), wxPoint(102, 627), wxSize(96, 24), wxSP_ARROW_KEYS, 0, 10, 0);

	WxSpinCtrl31 = new wxSpinCtrl(this, ID_WXSPINCTRL31, wxT("0"), wxPoint(315, 458), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 10, 0);

	WxSpinCtrl32 = new wxSpinCtrl(this, ID_WXSPINCTRL32, wxT("0"), wxPoint(99, 462), wxSize(98, 24), wxSP_ARROW_KEYS, 0, 10, 0);

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, wxT("Phase"), wxPoint(42, 126), wxDefaultSize, 0, wxT("WxStaticText1"));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, wxT("Phase"), wxPoint(248, 123), wxDefaultSize, 0, wxT("WxStaticText2"));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, wxT("Phase"), wxPoint(50, 297), wxDefaultSize, 0, wxT("WxStaticText3"));

	WxStaticText4 = new wxStaticText(this, ID_WXSTATICTEXT4, wxT("Phase"), wxPoint(257, 297), wxDefaultSize, 0, wxT("WxStaticText4"));

	WxStaticText5 = new wxStaticText(this, ID_WXSTATICTEXT5, wxT("Phase"), wxPoint(48, 465), wxDefaultSize, 0, wxT("WxStaticText5"));

	WxStaticText6 = new wxStaticText(this, ID_WXSTATICTEXT6, wxT("Phase"), wxPoint(262, 462), wxDefaultSize, 0, wxT("WxStaticText6"));

	WxStaticText25 = new wxStaticText(this, ID_WXSTATICTEXT25, wxT("Phase"), wxPoint(53, 629), wxDefaultSize, 0, wxT("WxStaticText25"));

	WxStaticText26 = new wxStaticText(this, ID_WXSTATICTEXT26, wxT("Phase"), wxPoint(265, 628), wxDefaultSize, 0, wxT("WxStaticText26"));

	WxRichTextCtrl1 = new wxRichTextCtrl(this, ID_WXRICHTEXTCTRL1, wxT(""), wxPoint(772, 255), wxSize(1, 2), 0, wxDefaultValidator, wxT("WxRichTextCtrl1"));
	WxRichTextCtrl1->SetMaxLength(0);
	WxRichTextCtrl1->AppendText(wxT("W"));
	WxRichTextCtrl1->AppendText(wxT("x"));
	WxRichTextCtrl1->AppendText(wxT("R"));
	WxRichTextCtrl1->AppendText(wxT("i"));
	WxRichTextCtrl1->AppendText(wxT("c"));
	WxRichTextCtrl1->AppendText(wxT("h"));
	WxRichTextCtrl1->AppendText(wxT("T"));
	WxRichTextCtrl1->AppendText(wxT("e"));
	WxRichTextCtrl1->AppendText(wxT("x"));
	WxRichTextCtrl1->AppendText(wxT("t"));
	WxRichTextCtrl1->AppendText(wxT("C"));
	WxRichTextCtrl1->AppendText(wxT("t"));
	WxRichTextCtrl1->AppendText(wxT("r"));
	WxRichTextCtrl1->AppendText(wxT("l"));
	WxRichTextCtrl1->AppendText(wxT("1"));
	WxRichTextCtrl1->SetFocus();
	WxRichTextCtrl1->SetInsertionPointEnd();
    
	delete WxStaticText33; 
	delete WxStaticText34;
	delete WxStaticText35;

  delete	WxStaticText36 ;

	delete WxStaticBitmap1 ;
        }
        if(nw==1){
           timer->Stop();	// insert your code here
           WxSpinCtrl1->SetValue(0);
           WxSpinCtrl2->SetValue(0);
           WxSpinCtrl3->SetValue(0);
           WxSpinCtrl4->SetValue(0);
           WxSpinCtrl5->SetValue(0);
           WxSpinCtrl6->SetValue(0);
           WxSpinCtrl7->SetValue(0);
           WxSpinCtrl8->SetValue(0);
           WxSpinCtrl9->SetValue(0);
           WxSpinCtrl10->SetValue(0);
           WxSpinCtrl11->SetValue(0);
           WxSpinCtrl12->SetValue(0);
           WxSpinCtrl13->SetValue(0);
           WxSpinCtrl14->SetValue(0);
           WxSpinCtrl15->SetValue(0);
           WxSpinCtrl16->SetValue(0);
           WxSpinCtrl17->SetValue(0);
           WxSpinCtrl19->SetValue(0);
           WxSpinCtrl20->SetValue(0);
           WxSpinCtrl21->SetValue(0);
           WxSpinCtrl22->SetValue(0);
           WxSpinCtrl23->SetValue(0);
           WxSpinCtrl24->SetValue(0);
           WxSpinCtrl25->SetValue(0);
           WxSpinCtrl26->SetValue(0);
           WxSpinCtrl27->SetValue(0);
           WxSpinCtrl28->SetValue(0);
           WxSpinCtrl29->SetValue(0);
           WxSpinCtrl30->SetValue(0);
           WxSpinCtrl31->SetValue(0);
           WxSpinCtrl32->SetValue(0);
           WxComboBox1->SetSelection ( 3);
           WxComboBox2->SetSelection ( 3);
           WxComboBox3->SetSelection ( 3);
           WxComboBox4->SetSelection ( 3);
           WxComboBox5->SetSelection ( 3);
           WxComboBox6->SetSelection ( 3);
           WxComboBox7->SetSelection ( 3);
           WxComboBox8->SetSelection ( 3);
           WxCheckBox2->SetValue(false);
           WxCheckBox3->SetValue(false);       
           WxCheckBox4->SetValue(false);
           WxCheckBox5->SetValue(false);
           WxCheckBox6->SetValue(false);
           WxCheckBox7->SetValue(false);
           WxCheckBox8->SetValue(false);
           WxCheckBox9->SetValue(false);
           p[0]=p[1]=p[2]=p[3]=p[4]=p[5]=p[6]=p[7]=p0;
           
       drawPane->Refresh();
            WxToggleButton1->SetValue(false);
 WxToggleButton1->SetLabel(wxT("Play"))  ; 
  ti=0.0;  
}
}

/*
 * Mnusave1079Click
 */
void Project1Frm::Mnusave1079Click(wxCommandEvent& event)
{
wxFileDialog * openFileDialog = new wxFileDialog(this);

  if (openFileDialog->ShowModal() == wxID_OK){
      wxString fileName = openFileDialog->GetPath();                                                                //path for save
      
      //Create a DC for the whole screen area
   wxScreenDC dcScreen;

   //Get the size of the screen/DC
   wxCoord screenWidth, screenHeight;
   dcScreen.GetSize(&screenWidth, &screenHeight);

   //Create a Bitmap that will later on hold the screenshot image
   //Note that the Bitmap must have a size big enough to hold the screenshot
   //-1 means using the current default colour depth
   wxBitmap screenshot(screenWidth, screenHeight,-1);

   //Create a memory DC that will be used for actually taking the screenshot
   wxMemoryDC memDC;
   //Tell the memory DC to use our Bitmap
   //all drawing action on the memory DC will go to the Bitmap now
   memDC.SelectObject(screenshot);
   //Blit (in this case copy) the actual screen on the memory DC
   //and thus the Bitmap
   memDC.Blit( 0, //Copy to this X coordinate
            0, //Copy to this Y coordinate
            screenWidth, //Copy this width
            screenHeight, //Copy this height
            &dcScreen, //From where do we copy?
            0, //What's the X offset in the original DC?
            0  //What's the Y offset in the original DC?
         );
   //Select the Bitmap out of the memory DC by selecting a new
   //uninitialized Bitmap
   memDC.SelectObject(wxNullBitmap);

   //Our Bitmap now has the screenshot, so let's save it :-)
   screenshot.SaveFile(fileName,wxBITMAP_TYPE_JPEG);
      //wxMessageBox(wxT("This function is available latest version Harmonograph v1.0001 \ncan be bought from www.gurustore.com\nfor 50% discount \n So Hurry!!!!"),
        //wxT("We are very sorry"), wxOK | wxICON_INFORMATION, this);
      }	// insert your code here
}
/*                                                                                             CHECKBOX
  */
/*
 * WxCheckBox3Click
 */
void Project1Frm::WxCheckBox3Click(wxCommandEvent& event)
{
if(WxCheckBox3->IsChecked()){
      p[1]=p2;       
       
    }
    if(!WxCheckBox3->IsChecked()){
       p[1]=p0;
    }	// insert your code here
}

/*
 * WxCheckBox2Click
 */
void Project1Frm::WxCheckBox2Click(wxCommandEvent& event)
{
if(WxCheckBox2->GetValue()){
       p[0]=p1;
    }
    if(!WxCheckBox2->IsChecked()){
      p[0]=p0;
    }	// insert your code here
}

/*
 * WxCheckBox4Click
 */
void Project1Frm::WxCheckBox4Click(wxCommandEvent& event)
{
if(WxCheckBox4->IsChecked()){
       p[2]=p3;
    }
    if(!WxCheckBox4->IsChecked()){
      p[2]=p0;
    }	// insert your code here
}

/*
 * WxCheckBox5Click
 */
void Project1Frm::WxCheckBox5Click(wxCommandEvent& event)
{
if(WxCheckBox5->IsChecked()){
       p[3]=p4;
    }
    if(!WxCheckBox5->IsChecked()){
      p[3]=p0;
    }	// insert your code here
}

/*
 * WxCheckBox6Click
 */
void Project1Frm::WxCheckBox6Click(wxCommandEvent& event)
{
if(WxCheckBox6->IsChecked()){
    
       p[4]=p5;
       
    }
    if(!WxCheckBox6->IsChecked()){
       p[4]=p0;
    }	// insert your code here
}

/*
 * WxCheckBox7Click
 */
void Project1Frm::WxCheckBox7Click(wxCommandEvent& event)
{
if(WxCheckBox7->IsChecked()){
       p[5]=p6;
       
    }
    if(!WxCheckBox7->IsChecked()){
       p[5]=p0;
    }	// insert your code here
}

/*
 * WxCheckBox8Click
 */
void Project1Frm::WxCheckBox8Click(wxCommandEvent& event)
{
if(WxCheckBox8->IsChecked()){
       p[6]=p7;
       
    }
    if(!WxCheckBox8->IsChecked()){
      p[6]=p0;
    }	// insert your code here
}

/*
 * WxCheckBox9Click
 */
void Project1Frm::WxCheckBox9Click(wxCommandEvent& event)
{
if(WxCheckBox9->IsChecked()){
       p[7]=p8;
      
    }
    if(!WxCheckBox9->IsChecked()){
     p[7]=p0;
    }	// insert your code here
}

/*
 * WxToggleButton1Click
 */
void Project1Frm::WxToggleButton1Click(wxCommandEvent& event)
{
    if(nw==0)
    {
        wxMessageBox(wxT("Please add the canvas by clicking on File->New\n and Add values to the required number of pendulums \nbefore clicking on Play\n"),
        wxT("Please note....."), wxOK | wxICON_INFORMATION, this);
    }
 if(WxToggleButton1->GetValue() && nw==1){
     WxToggleButton1->SetLabel(wxT("Pause"))  ; 
      timer->start();

        }
      if(!WxToggleButton1->GetValue() && nw==1){
        WxToggleButton1->SetLabel(wxT("Play"))  ; 
           timer->Stop();
    } 	// insert your code here
}

/*
 * WxPanel1UpdateUI
 */
void Project1Frm::WxPanel1UpdateUI(wxUpdateUIEvent& event)
{
	// insert your code here
}

/*
 * Project1FrmActivate
 */
void Project1Frm::Project1FrmActivate(wxActivateEvent& event)
{
	// insert your code here
}
/*                                                                                             COMBOBOX
  */

/*
 * WxComboBox1Selected
 */
void Project1Frm::WxComboBox1Selected(wxCommandEvent& event )
{WxCheckBox2->SetValue(false);
  p1.change_axis(WxComboBox1->GetSelection()); 	// insert your code here
}

/*
 * WxComboBox2Selected
 */
void Project1Frm::WxComboBox2Selected(wxCommandEvent& event )
{WxCheckBox3->SetValue(false);

	p2.change_axis(WxComboBox2->GetSelection());// insert your code here
}

/*
 * WxComboBox3Selected
 */
void Project1Frm::WxComboBox3Selected(wxCommandEvent& event )
{WxCheckBox4->SetValue(false);
	p3.change_axis(WxComboBox3->GetSelection());// insert your code here
}

/*
 * WxComboBox4Selected
 */
void Project1Frm::WxComboBox4Selected(wxCommandEvent& event )
{WxCheckBox5->SetValue(false);
		p4.change_axis(WxComboBox4->GetSelection());// insert your code here
}

/**/


void Project1Frm::WxSpinCtrl7SpinUp(wxSpinEvent& event)
{
p3.change_damp(WxSpinCtrl4->GetValue());	// insert your code here
}
BEGIN_EVENT_TABLE(BasicDrawPane, wxPanel)
EVT_PAINT(BasicDrawPane::paintEvent)
END_EVENT_TABLE()
RenderTimer::RenderTimer(BasicDrawPane* pane) : wxTimer()
{
    RenderTimer::pane = pane;
}

void RenderTimer::Notify()
{ pane->Refresh(false);
}

void RenderTimer::start()
{
    wxTimer::Start(0);
}

BasicDrawPane::BasicDrawPane(wxFrame* parent) :wxPanel(parent, 1016,wxPoint(460, 50), wxSize(700, 600))
{
}


void BasicDrawPane::paintEvent(wxPaintEvent& evt){
     wxPaintDC dc(this);
  dc.SetDeviceOrigin(350,300);
  if(ti==0.0){
        wxPen pen(*wxTRANSPARENT_PEN); // red pen of width 1
 dc.SetPen(pen);
    }
  else
  { wxPen pen(*wxRED,1); // red pen of width 1
 dc.SetPen(pen);
}
    render(dc);
}

void BasicDrawPane::paintNow()
{
    wxClientDC dc(this);
    dc.SetDeviceOrigin(350,300);
  if(ti==0.0){
        wxPen pen(*wxTRANSPARENT_PEN); // red pen of width 1
 dc.SetPen(pen);
    }
  else
  { wxPen pen(*wxRED,1); // red pen of width 1
 dc.SetPen(pen);
}

    render(dc);
}
float prevx=0, prevy=0;
/*void BasicDrawPane::render( wxDC& dc )
{
                                                                                              PAINT FUNCTION

}
*/
void BasicDrawPane::render( wxDC& dc )
{
    //dc.DrawPoint(x(p,ti),y(p,ti));
     dc.DrawLine(prevx,prevy,x(p,ti),y(p,ti));
     prevx=x(p,ti);
     prevy=y(p,ti);
    ti+=0.0005;
}






/*
                                                                                           SPINCTRL FUNCTIONS:

*/

/*
                                                                                                       P1
*/
/*
 * WxSpinCtrl1Updated1
 */
void Project1Frm::WxSpinCtrl1Updated1(wxSpinEvent& event )
{WxCheckBox2->SetValue(false);
		p1.change_amp(WxSpinCtrl1->GetValue());// insert your code here
}

/*
 * WxSpinCtrl2Updated
 */
void Project1Frm::WxSpinCtrl2Updated(wxSpinEvent& event )
{WxCheckBox2->SetValue(false);
	p1.change_freq(WxSpinCtrl2->GetValue());// insert your code here
}

/*
 * WxSpinCtrl3Updated
 */
void Project1Frm::WxSpinCtrl3Updated(wxSpinEvent& event )
{WxCheckBox2->SetValue(false);
    p1.change_damp(WxSpinCtrl3->GetValue());	// insert your code here
}

/*
 * WxSpinCtrl25Updated
 */
void Project1Frm::WxSpinCtrl25Updated(wxSpinEvent& event )
{WxCheckBox2->SetValue(false);
	p1.change_phase(WxSpinCtrl25->GetValue());// insert your code here
}
/*
                                                                                                         P2
*/
/*
 * WxSpinCtrl4Updated
 */
void Project1Frm::WxSpinCtrl4Updated(wxSpinEvent& event )
{WxCheckBox3->SetValue(false);
	p2.change_amp(WxSpinCtrl4->GetValue());// insert your code here
}

/*
 * WxSpinCtrl5Updated
 */
void Project1Frm::WxSpinCtrl5Updated(wxSpinEvent& event )
{WxCheckBox3->SetValue(false);
	p2.change_freq(WxSpinCtrl5->GetValue());// insert your code here
}

/*
 * WxSpinCtrl6Updated
 */
void Project1Frm::WxSpinCtrl6Updated(wxSpinEvent& event )
{WxCheckBox3->SetValue(false);
	p2.change_damp(WxSpinCtrl6->GetValue());// insert your code here
}

/*
 * WxSpinCtrl26Updated
 */
void Project1Frm::WxSpinCtrl26Updated(wxSpinEvent& event )
{WxCheckBox3->SetValue(false);
	p2.change_phase(WxSpinCtrl26->GetValue());// insert your code here
}

/*
                                                                                                          P3
*/
/*
 * WxSpinCtrl11Updated
 */
void Project1Frm::WxSpinCtrl11Updated(wxSpinEvent& event )
{WxCheckBox4->SetValue(false);
		p3.change_amp(WxSpinCtrl11->GetValue());// insert your code here
}

/*
 * WxSpinCtrl12Updated
 */
void Project1Frm::WxSpinCtrl12Updated(wxSpinEvent& event )
{WxCheckBox4->SetValue(false);
	p3.change_freq(WxSpinCtrl12->GetValue());// insert your code here
}

/*
 * WxSpinCtrl7Updated
 */
void Project1Frm::WxSpinCtrl7Updated(wxSpinEvent& event )
{WxCheckBox4->SetValue(false);
	p3.change_damp(WxSpinCtrl7->GetValue());// insert your code here
}

/*
 * WxSpinCtrl27Updated
 */
void Project1Frm::WxSpinCtrl27Updated(wxSpinEvent& event )
{WxCheckBox4->SetValue(false);
	p3.change_phase(WxSpinCtrl27->GetValue());// insert your code here
}
/*
                                                                                                       P4
*/
/*
 * WxSpinCtrl13Updated
 */
void Project1Frm::WxSpinCtrl13Updated(wxSpinEvent& event )
{WxCheckBox5->SetValue(false);
	p4.change_amp(WxSpinCtrl13->GetValue());// insert your code here
}

/*
 * WxSpinCtrl14Updated
 */
void Project1Frm::WxSpinCtrl14Updated(wxSpinEvent& event )
{WxCheckBox5->SetValue(false);
	p4.change_freq(WxSpinCtrl14->GetValue());// insert your code here
}

/*
 * WxSpinCtrl8Updated
 */
void Project1Frm::WxSpinCtrl8Updated(wxSpinEvent& event )
{WxCheckBox5->SetValue(false);
	p4.change_damp(WxSpinCtrl8->GetValue());// insert your code here
}

/*
 * WxSpinCtrl28Updated
 */
void Project1Frm::WxSpinCtrl28Updated(wxSpinEvent& event )
{WxCheckBox5->SetValue(false);
	p4.change_phase(WxSpinCtrl28->GetValue());// insert your code here
}
/*
                                                                                                           P5
*/
/*
 * WxSpinCtrl18Updated
 */
void Project1Frm::WxSpinCtrl18Updated(wxSpinEvent& event )
{WxCheckBox6->SetValue(false);
	p5.change_amp(WxSpinCtrl18->GetValue());// insert your code here
}

/*
 * WxSpinCtrl17Updated
 */
void Project1Frm::WxSpinCtrl17Updated(wxSpinEvent& event )
{WxCheckBox6->SetValue(false);
		p5.change_freq(WxSpinCtrl17->GetValue());// insert your code here
}

/*
 * WxSpinCtrl10Updated
 */
void Project1Frm::WxSpinCtrl10Updated(wxSpinEvent& event )
{WxCheckBox6->SetValue(false);
	p5.change_damp(WxSpinCtrl10->GetValue());// insert your code here
}

/*
 * WxSpinCtrl32Updated
 */
void Project1Frm::WxSpinCtrl32Updated(wxSpinEvent& event )
{WxCheckBox6->SetValue(false);
	p5.change_phase(WxSpinCtrl32->GetValue());// insert your code here
}
/*
                                                                                                            P6
*/

/*
 * WxSpinCtrl15Updated
 */
void Project1Frm::WxSpinCtrl15Updated(wxSpinEvent& event )
{WxCheckBox7->SetValue(false);
   	p6.change_amp(WxSpinCtrl15->GetValue());	// insert your code here
}

/*
 * WxSpinCtrl16Updated
 */
void Project1Frm::WxSpinCtrl16Updated(wxSpinEvent& event )
{WxCheckBox7->SetValue(false);
	 	p6.change_freq(WxSpinCtrl16->GetValue());// insert your code here
}

/*
 * WxSpinCtrl9Updated
 */
void Project1Frm::WxSpinCtrl9Updated(wxSpinEvent& event )
{WxCheckBox7->SetValue(false);
	p6.change_damp(WxSpinCtrl9->GetValue());// insert your code here
}

/*
 * WxSpinCtrl31Updated
 */
void Project1Frm::WxSpinCtrl31Updated(wxSpinEvent& event )
{WxCheckBox7->SetValue(false);
	p6.change_phase(WxSpinCtrl31->GetValue());// insert your code here
}
/*
                                                                                                           P7
*/
/*
 * WxSpinCtrl24Updated
 */
void Project1Frm::WxSpinCtrl24Updated(wxSpinEvent& event )
{WxCheckBox8->SetValue(false);
	p7.change_amp(WxSpinCtrl24->GetValue());// insert your code here
}

/*
 * WxSpinCtrl23Updated
 */
void Project1Frm::WxSpinCtrl23Updated(wxSpinEvent& event )
{WxCheckBox8->SetValue(false);
	p7.change_freq(WxSpinCtrl23->GetValue());// insert your code here
}

/*
 * WxSpinCtrl22Updated
 */
void Project1Frm::WxSpinCtrl22Updated(wxSpinEvent& event )
{WxCheckBox8->SetValue(false);
	p7.change_damp(WxSpinCtrl22->GetValue());// insert your code here
}

/*
 * WxSpinCtrl30Updated
 */
void Project1Frm::WxSpinCtrl30Updated(wxSpinEvent& event )
{WxCheckBox8->SetValue(false);
	p7.change_phase(WxSpinCtrl30->GetValue());// insert your code here
}
/*
                                                                                                           P8
*/
/*
 * WxSpinCtrl21Updated
 */
void Project1Frm::WxSpinCtrl21Updated(wxSpinEvent& event )
{WxCheckBox9->SetValue(false);
	p8.change_amp(WxSpinCtrl21->GetValue());// insert your code here
}

/*
 * WxSpinCtrl20Updated
 */
void Project1Frm::WxSpinCtrl20Updated(wxSpinEvent& event )
{WxCheckBox9->SetValue(false);
	p8.change_freq(WxSpinCtrl20->GetValue());// insert your code here
}

/*
 * WxSpinCtrl19Updated
 */
void Project1Frm::WxSpinCtrl19Updated(wxSpinEvent& event )
{WxCheckBox9->SetValue(false);
	p8.change_damp(WxSpinCtrl19->GetValue());// insert your code here
}

/*
 * WxSpinCtrl29Updated
 */
void Project1Frm::WxSpinCtrl29Updated(wxSpinEvent& event )
{WxCheckBox9->SetValue(false);
	p8.change_phase(WxSpinCtrl29->GetValue());// insert your code here
}

/*                                                                                           COMBOBOX CONT
*/

/*
 * WxComboBox6Selected0
 */
void Project1Frm::WxComboBox6Selected0(wxCommandEvent& event )
{WxCheckBox6->SetValue(false);
   p5.change_axis(WxComboBox6->GetSelection()); 	// insert your code here
}

/*
 * WxComboBox5Selected0
 */
void Project1Frm::WxComboBox5Selected0(wxCommandEvent& event )
{WxCheckBox7->SetValue(false);
	 p6.change_axis(WxComboBox5->GetSelection()); // insert your code here
}

/*
 * WxComboBox7Selected0
 */
void Project1Frm::WxComboBox7Selected0(wxCommandEvent& event )
{WxCheckBox8->SetValue(false);
	p7.change_axis(WxComboBox7->GetSelection());// insert your code here
}

/*
 * WxComboBox8Selected0
 */
void Project1Frm::WxComboBox8Selected0(wxCommandEvent& event )
{WxCheckBox9->SetValue(false);
	p8.change_axis(WxComboBox8->GetSelection());// insert your code here
}

/*
 * Mnuinfo1173Click
 */
void Project1Frm::Mnuinfo1173Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnuabout1174Click
 */
void Project1Frm::Mnuabout1174Click0(wxCommandEvent& event)
{
 wxMessageBox(wxT("Harmonograph 1.0\nVersion:1.0\n\nLast Update:2/11/15\n\nDevelopers:\nUthkarsh Adya\nAkarsh Gopal\nAshwin Sidharth"),
        wxT("About Harmonograph"), wxOK | wxICON_INFORMATION, this);	// insert your code here
}

/*
 * Mnuhelp1175Click
 */
void Project1Frm::Mnuhelp1175Click0(wxCommandEvent& event)
{
    
 wxMessageBox(wxT(" The program models a multi-pendulum harmonograph, with each pendulum constrained to move one-dimensionally.\n\nSome are aligned vertically,and some horizontally.This is decided based on Axis.\n\n The  pendulums are configured with the Amplitude parameter for the maximum length of oscillaton .\n\n The  pendulums are configured with the Frequency parameter for the number of cycles per unit time.\n\n Another configurable number represents the Damping. A unit of damping provides a certain amount of\n  deceleration so that the pendulums comes to rest,use a small damping.\n\nYou can also control the start of each pendulum's swinging. The parameter is Phase. In fact, the phase can be\n any number at all.\n\nIn our opinion the results are worth it -- considerably closer to what  the physical harmonograph produces,\n as beautiful as results with the Lissajous figures and more interesting.  "),
        wxT("Help Harmonograph"), wxOK | wxICON_INFORMATION, this);	//MainEditBox->LoadFile("C:\Documents and Settings\admin\Desktop\serious project\help.txt");// insert your code here
}

/*
 * Mnuinfo1173Click0
 */
