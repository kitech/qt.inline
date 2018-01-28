//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionSlider is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:537
// [-2] void QStyleOptionSlider(int)
extern "C"
void* callback_ZN18QStyleOptionSliderC1Ei = 0;
extern "C" void set_callback_ZN18QStyleOptionSliderC1Ei(void*cbfn)
{ callback_ZN18QStyleOptionSliderC1Ei = cbfn; }

class MyQStyleOptionSlider : public QStyleOptionSlider {
public:
MyQStyleOptionSlider() : QStyleOptionSlider() {}
MyQStyleOptionSlider(int version) : QStyleOptionSlider(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:533
// [-2] void QStyleOptionSlider()
extern "C"
void* C_ZN18QStyleOptionSliderC1Ev() {
  (MyQStyleOptionSlider*)(0);
  return  new MyQStyleOptionSlider();
}
//  main block end
