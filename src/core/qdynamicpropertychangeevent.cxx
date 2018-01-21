//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qcoreevent.h:363
// void QDynamicPropertyChangeEvent(const class QByteArray &)
extern "C"
void* C_ZN27QDynamicPropertyChangeEventC1ERK10QByteArray(const QByteArray & name) {
  return new QDynamicPropertyChangeEvent(name);
}
// virtual
// /usr/include/qt/QtCore/qcoreevent.h:364
// void ~QDynamicPropertyChangeEvent()
extern "C"
void C_ZN27QDynamicPropertyChangeEventD1Ev(void *this_) {
  delete (QDynamicPropertyChangeEvent*)(this_);
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:366
// QByteArray propertyName()
extern "C"
void C_ZNK27QDynamicPropertyChangeEvent12propertyNameEv(void *this_) {
  /*return*/ ((QDynamicPropertyChangeEvent*)this_)->propertyName();
}
//  main block end
