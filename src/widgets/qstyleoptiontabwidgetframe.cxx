//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionTabWidgetFrame is pure virtual: false
// QStyleOptionTabWidgetFrame has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:176
// [-2] void QStyleOptionTabWidgetFrame(int)
extern "C"
void* callback_ZN26QStyleOptionTabWidgetFrameC1Ei = 0;
extern "C" void set_callback_ZN26QStyleOptionTabWidgetFrameC1Ei(void*cbfn)
{ callback_ZN26QStyleOptionTabWidgetFrameC1Ei = cbfn; }

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
//  main block end
