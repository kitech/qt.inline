//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qstyleoption.h:90
// void QStyleOption(int, int)
extern "C"
void* C_ZN12QStyleOptionC1Eii(int version, int type) {
  return new QStyleOption(version, type);
}
// /usr/include/qt/QtWidgets/qstyleoption.h:92
// void ~QStyleOption()
extern "C"
void C_ZN12QStyleOptionD1Ev(void *this_) {
  delete (QStyleOption*)(this_);
}
// /usr/include/qt/QtWidgets/qstyleoption.h:94
// void init(const class QWidget *)
extern "C"
void C_ZN12QStyleOption4initEPK7QWidget(void *this_, const QWidget * w) {
  ((QStyleOption*)this_)->init(w);
}
// inline
// /usr/include/qt/QtWidgets/qstyleoption.h:95
// void initFrom(const class QWidget *)
extern "C"
void C_ZN12QStyleOption8initFromEPK7QWidget(void *this_, const QWidget * w) {
  ((QStyleOption*)this_)->initFrom(w);
}
//  main block end
