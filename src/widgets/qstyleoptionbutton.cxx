//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionButton is pure virtual: false
// QStyleOptionButton has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionButton : public QStyleOptionButton {
public:
  virtual ~MyQStyleOptionButton() {}
// void QStyleOptionButton()
MyQStyleOptionButton() : QStyleOptionButton() {}
// void QStyleOptionButton(const QStyleOptionButton &)
MyQStyleOptionButton(const QStyleOptionButton & other) : QStyleOptionButton(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:248
// [-2] void QStyleOptionButton()
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionButtonC2Ev() {
  return  new QStyleOptionButton();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:249
// [-2] void QStyleOptionButton(const QStyleOptionButton &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionButtonC2ERKS_(QStyleOptionButton* other) {
  return  new QStyleOptionButton(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN18QStyleOptionButtonD2Ev(void *this_) {
  delete (QStyleOptionButton*)(this_);
}
//  main block end
