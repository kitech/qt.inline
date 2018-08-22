//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSlider is pure virtual: false
// QStyleOptionSlider has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionSlider : public QStyleOptionSlider {
public:
  virtual ~MyQStyleOptionSlider() {}
// void QStyleOptionSlider()
MyQStyleOptionSlider() : QStyleOptionSlider() {}
// void QStyleOptionSlider(const QStyleOptionSlider &)
MyQStyleOptionSlider(const QStyleOptionSlider & other) : QStyleOptionSlider(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:533
// [-2] void QStyleOptionSlider()
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionSliderC2Ev() {
  return  new QStyleOptionSlider();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:534
// [-2] void QStyleOptionSlider(const QStyleOptionSlider &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionSliderC2ERKS_(QStyleOptionSlider* other) {
  return  new QStyleOptionSlider(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN18QStyleOptionSliderD2Ev(void *this_) {
  delete (QStyleOptionSlider*)(this_);
}
//  main block end
