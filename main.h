#ifndef __HELLO_H
#define __HELLO_H
class HelloWorldApp : public wxApp {
public:
    virtual bool OnInit();
};
DECLARE_APP(HelloWorldApp)
#endif
