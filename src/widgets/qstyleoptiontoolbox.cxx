//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionToolBox is pure virtual: false
// QStyleOptionToolBox has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:476
// [-2] void QStyleOptionToolBox(int)
extern "C"
void* callback_ZN19QStyleOptionToolBoxC1Ei = 0;
extern "C" void set_callback_ZN19QStyleOptionToolBoxC1Ei(void*cbfn)
{ callback_ZN19QStyleOptionToolBoxC1Ei = cbfn; }

class MyQStyleOptionToolBox : public QStyleOptionToolBox {
public:
  virtual ~MyQStyleOptionToolBox() {}
// void QStyleOptionToolBox()
MyQStyleOptionToolBox() : QStyleOptionToolBox() {}
// void QStyleOptionToolBox(int)
MyQStyleOptionToolBox(int version) : QStyleOptionToolBox(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:472
// [-2] void QStyleOptionToolBox()
extern "C"
void* C_ZN19QStyleOptionToolBoxC2Ev() {
  return  new QStyleOptionToolBox();
}
//  main block end
