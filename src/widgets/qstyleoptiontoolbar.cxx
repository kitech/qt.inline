//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionToolBar is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:319
// [-2] void QStyleOptionToolBar(int)
extern "C"
void* callback_ZN19QStyleOptionToolBarC1Ei = 0;
extern "C" void set_callback_ZN19QStyleOptionToolBarC1Ei(void*cbfn)
{ callback_ZN19QStyleOptionToolBarC1Ei = cbfn; }

class MyQStyleOptionToolBar : public QStyleOptionToolBar {
public:
MyQStyleOptionToolBar() : QStyleOptionToolBar() {}
MyQStyleOptionToolBar(int version) : QStyleOptionToolBar(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:315
// [-2] void QStyleOptionToolBar()
extern "C"
void* C_ZN19QStyleOptionToolBarC1Ev() {
  (MyQStyleOptionToolBar*)(0);
  return  new MyQStyleOptionToolBar();
}
//  main block end
