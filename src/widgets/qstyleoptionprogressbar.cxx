//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionProgressBar is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:346
// [-2] void QStyleOptionProgressBar(int)
extern "C"
void* callback_ZN23QStyleOptionProgressBarC1Ei = 0;
extern "C" void set_callback_ZN23QStyleOptionProgressBarC1Ei(void*cbfn)
{ callback_ZN23QStyleOptionProgressBarC1Ei = cbfn; }

class MyQStyleOptionProgressBar : public QStyleOptionProgressBar {
public:
MyQStyleOptionProgressBar() : QStyleOptionProgressBar() {}
MyQStyleOptionProgressBar(int version) : QStyleOptionProgressBar(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:342
// [-2] void QStyleOptionProgressBar()
extern "C"
void* C_ZN23QStyleOptionProgressBarC1Ev() {
  (MyQStyleOptionProgressBar*)(0);
  return  new MyQStyleOptionProgressBar();
}
//  main block end
