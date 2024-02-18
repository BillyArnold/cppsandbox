#include "wx/wx.h"
#include "wx/wxprec.h"
#include "main.h"
IMPLEMENT_APP(HelloWorldApp)
bool HelloWorldApp::OnInit() {
    wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Hello wxWidgets World"));
    frame->CreateStatusBar();
    frame->SetStatusText(_T("Hello World"));
    frame->Show(true);
    SetTopWindow(frame);
    return true;
}
