//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOption is pure virtual: false
// QStyleOption has virtual projected: false
//  header block end

//  main block begin

class MyQStyleOption : public QStyleOption {
public:
  virtual ~MyQStyleOption() {}
// void QStyleOption(int, int)
MyQStyleOption(int version, int type_) : QStyleOption(version, type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:102
// [-2] void QStyleOption(int, int)
extern "C"
void* C_ZN12QStyleOptionC2Eii(int version, int type_) {
  return  new QStyleOption(version, type_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:104
// [-2] void ~QStyleOption()
extern "C"
void C_ZN12QStyleOptionD2Ev(void *this_) {
  delete (QStyleOption*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:106
// [-2] void init(const class QWidget *)
extern "C"
void C_ZN12QStyleOption4initEPK7QWidget(void *this_, const QWidget * w) {
  ((QStyleOption*)this_)->init(w);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:107
// [-2] void initFrom(const class QWidget *)
extern "C"
void C_ZN12QStyleOption8initFromEPK7QWidget(void *this_, const QWidget * w) {
  ((QStyleOption*)this_)->initFrom(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:108
// [64] QStyleOption & operator=(const class QStyleOption &)
extern "C"
void* C_ZN12QStyleOptionaSERKS_(void *this_, QStyleOption* other) {
  auto& rv = ((QStyleOption*)this_)->operator=(*other);
return &rv;
}
//  main block end
