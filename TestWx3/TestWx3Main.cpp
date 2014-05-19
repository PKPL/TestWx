/***************************************************************
 * Name:      TestWx3Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2014-05-12
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "TestWx3Main.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}



TestWx3Dialog::TestWx3Dialog(wxDialog *dlg)
    : GUIDialog(dlg)
{
    m_Canvas->SetBackgroundStyle(wxBG_STYLE_CUSTOM);
    Doc = new CDrawable();
    missile1 = NULL;
}

TestWx3Dialog::~TestWx3Dialog()
{
    delete Doc;
}

void TestWx3Dialog::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void TestWx3Dialog::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void TestWx3Dialog::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void TestWx3Dialog::m_CanvasOnPaint( wxPaintEvent& event ){
	wxBufferedPaintDC DC(m_Canvas);
	int CWidth,CHeight;
	m_Canvas->GetSize(&CWidth,&CHeight);
	Doc->Draw(DC, CWidth, CHeight);
    if(missile1!=NULL)Doc->DrawShot(DC, CWidth, CHeight, missile1);
}

void TestWx3Dialog::m_button3OnButtonClick( wxCommandEvent& event ) {
    Doc->angle1 += 0.1;
    missile1 = NULL;
	m_Canvas->Refresh();
}

void TestWx3Dialog::m_button4OnButtonClick( wxCommandEvent& event ) {
    Doc->angle1 -= 0.1;
    missile1 = NULL;
	m_Canvas->Refresh();
}

void TestWx3Dialog::m_button5OnButtonClick( wxCommandEvent& event ) {
    missile1 = initializeMissile(Doc->x1, Doc->y1);
    xCoordinate(missile1, 0);
    yCoordinate(missile1);
	m_Canvas->Refresh();
}

