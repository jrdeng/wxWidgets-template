#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "mainwindow.h"

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        MainWindow *window = new MainWindow(nullptr);
        window->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
