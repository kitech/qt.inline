//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionSlider is pure virtual: false
// QStyleOptionSlider has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:537
// [-2] void QStyleOptionSlider(int)
extern "C"
void* callback_ZN18QStyleOptionSliderC1Ei_fnptr = 0;
extern "C" void set_callback_ZN18QStyleOptionSliderC1Ei(void*cbfn)
{ callback_ZN18QStyleOptionSliderC1Ei_fnptr = cbfn; }

class MyQStyleOptionSlider : public QStyleOptionSlider {
public:
  virtual ~MyQStyleOptionSlider() {}
// void QStyleOptionSlider()
MyQStyleOptionSlider() : QStyleOptionSlider() {}
// void QStyleOptionSlider(int)
MyQStyleOptionSlider(int version) : QStyleOptionSlider(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:533
// [-2] void QStyleOptionSlider()
extern "C"
void* C_ZN18QStyleOptionSliderC2Ev() {
  return  new QStyleOptionSlider();
}

extern "C"
void C_ZN18QStyleOptionSliderD2Ev(void *this_) {
  delete (QStyleOptionSlider*)(this_);
}
//  main block end
