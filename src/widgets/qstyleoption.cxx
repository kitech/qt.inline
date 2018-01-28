//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOption is pure virtual: false
//  header block end

//  main block begin

class MyQStyleOption : public QStyleOption {
public:
MyQStyleOption(int version, int type) : QStyleOption(version, type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:102
// [-2] void QStyleOption(int, int)
extern "C"
void* C_ZN12QStyleOptionC1Eii(int version, int type) {
  (MyQStyleOption*)(0);
  return  new MyQStyleOption(version, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:104
// [-2] void ~QStyleOption()
extern "C"
void C_ZN12QStyleOptionD1Ev(void *this_) {
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
//  main block end
