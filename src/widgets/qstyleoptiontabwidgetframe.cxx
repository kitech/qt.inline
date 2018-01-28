//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionTabWidgetFrame is pure virtual: false
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
MyQStyleOptionTabWidgetFrame() : QStyleOptionTabWidgetFrame() {}
MyQStyleOptionTabWidgetFrame(int version) : QStyleOptionTabWidgetFrame(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:171
// [-2] void QStyleOptionTabWidgetFrame()
extern "C"
void* C_ZN26QStyleOptionTabWidgetFrameC1Ev() {
  (MyQStyleOptionTabWidgetFrame*)(0);
  return  new MyQStyleOptionTabWidgetFrame();
}
//  main block end
