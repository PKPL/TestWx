/***************************************************************
 * Name:      TestWx3App.cpp
 * Purpose:   Code for Application Class
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

#include "TestWx3App.h"
#include "TestWx3Main.h"

IMPLEMENT_APP(TestWx3App);

bool TestWx3App::OnInit()
{

    TestWx3Dialog* dlg = new TestWx3Dialog(0L);
//    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
