///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIDialog__
#define __GUIDialog__

#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/sizer.h>
#include <wx/scrolwin.h>
#include <wx/panel.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class GUIDialog
///////////////////////////////////////////////////////////////////////////////
class GUIDialog : public wxDialog 
{
	private:
	
	protected:
		enum
		{
			idBtnAbout = 1000,
			idBtnQuit,
		};
		
		wxButton* BtnAbout;
		wxStaticLine* m_staticline1;
		wxButton* BtnQuit;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;
		wxScrolledWindow* m_Canvas;
		wxPanel* m_panel1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button3OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button4OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button5OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_CanvasOnPaint( wxPaintEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxWidgets Application Template"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 870,520 ), long style = wxDEFAULT_DIALOG_STYLE );
		~GUIDialog();
	
};

#endif //__GUIDialog__
