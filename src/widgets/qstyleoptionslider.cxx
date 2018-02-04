//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSlider is pure virtual: false
// QStyleOptionSlider has virtual projected: false
//  header block end

//  main block begin

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
