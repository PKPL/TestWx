///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIDialog.h"

///////////////////////////////////////////////////////////////////////////

GUIDialog::GUIDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	BtnAbout = new wxButton( this, idBtnAbout, wxT("&About"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( BtnAbout, 0, wxALL, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline1, 0, wxALL|wxEXPAND, 5 );
	
	BtnQuit = new wxButton( this, idBtnQuit, wxT("&Quit"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( BtnQuit, 0, wxALL, 5 );
	
	m_button3 = new wxButton( this, wxID_ANY, wxT("<----"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button3, 0, wxALL, 5 );
	
	m_button4 = new wxButton( this, wxID_ANY, wxT("--->"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button4, 0, wxALL, 5 );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("FIRE"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button5, 0, wxALL, 5 );
	
	bSizer6->Add( bSizer2, 1, wxEXPAND, 5 );
	
	m_Canvas = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_Canvas->SetScrollRate( 5, 5 );
	bSizer6->Add( m_Canvas, 4, wxEXPAND | wxALL, 5 );
	
	bSizer3->Add( bSizer6, 5, wxEXPAND, 5 );
	
	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer3->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );
	
	bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	BtnAbout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnAbout ), NULL, this );
	BtnQuit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnQuit ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_button3OnButtonClick ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_button4OnButtonClick ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_button5OnButtonClick ), NULL, this );
	m_Canvas->Connect( wxEVT_PAINT, wxPaintEventHandler( GUIDialog::m_CanvasOnPaint ), NULL, this );
}

GUIDialog::~GUIDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	BtnAbout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnAbout ), NULL, this );
	BtnQuit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnQuit ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_button3OnButtonClick ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_button4OnButtonClick ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_button5OnButtonClick ), NULL, this );
	m_Canvas->Disconnect( wxEVT_PAINT, wxPaintEventHandler( GUIDialog::m_CanvasOnPaint ), NULL, this );
	
}
