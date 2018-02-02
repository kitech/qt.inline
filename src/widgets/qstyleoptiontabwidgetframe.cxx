//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTabWidgetFrame is pure virtual: false
// QStyleOptionTabWidgetFrame has virtual projected: false
//  header block end

//  main block begin
// void* callback_ZN26QStyleOptionTabWidgetFrameC1Ei_fnptr = 0;
// extern "C" void set_callback_ZN26QStyleOptionTabWidgetFrameC1Ei(void*cbfn)
// { callback_ZN26QStyleOptionTabWidgetFrameC1Ei_fnptr = cbfn; }

class MyQStyleOptionTabWidgetFrame : public QStyleOptionTabWidgetFrame {
public:
  virtual ~MyQStyleOptionTabWidgetFrame() {}
// void QStyleOptionTabWidgetFrame()
MyQStyleOptionTabWidgetFrame() : QStyleOptionTabWidgetFrame() {}
// void QStyleOptionTabWidgetFrame(int)
MyQStyleOptionTabWidgetFrame(int version) : QStyleOptionTabWidgetFrame(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:171
// [-2] void QStyleOptionTabWidgetFrame()
extern "C"
void* C_ZN26QStyleOptionTabWidgetFrameC2Ev() {
  return  new QStyleOptionTabWidgetFrame();
}

extern "C"
void C_ZN26QStyleOptionTabWidgetFrameD2Ev(void *this_) {
  delete (QStyleOptionTabWidgetFrame*)(this_);
}
//  main block end
