//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionFrame is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:147
// [-2] void QStyleOptionFrame(int)
extern "C"
void* callback_ZN17QStyleOptionFrameC1Ei = 0;
extern "C" void set_callback_ZN17QStyleOptionFrameC1Ei(void*cbfn)
{ callback_ZN17QStyleOptionFrameC1Ei = cbfn; }

class MyQStyleOptionFrame : public QStyleOptionFrame {
public:
MyQStyleOptionFrame() : QStyleOptionFrame() {}
MyQStyleOptionFrame(int version) : QStyleOptionFrame(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:143
// [-2] void QStyleOptionFrame()
extern "C"
void* C_ZN17QStyleOptionFrameC1Ev() {
  (MyQStyleOptionFrame*)(0);
  return  new MyQStyleOptionFrame();
}
//  main block end
