//  header block begin
// since 0x040200
// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QDynamicPropertyChangeEvent is pure virtual: false
// QDynamicPropertyChangeEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent {
public:
  virtual ~MyQDynamicPropertyChangeEvent() {}
// void QDynamicPropertyChangeEvent(const QByteArray &)
MyQDynamicPropertyChangeEvent(const QByteArray & name) : QDynamicPropertyChangeEvent(name) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:365
// [-2] void QDynamicPropertyChangeEvent(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QDynamicPropertyChangeEventC2ERK10QByteArray(QByteArray* name) {
  return  new QDynamicPropertyChangeEvent(*name);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:366
// [-2] void ~QDynamicPropertyChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN27QDynamicPropertyChangeEventD2Ev(void *this_) {
  delete (QDynamicPropertyChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:368
// [8] QByteArray propertyName()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QDynamicPropertyChangeEvent12propertyNameEv(void *this_) {
  auto rv = ((QDynamicPropertyChangeEvent*)this_)->propertyName();
return new QByteArray(rv);
}

//  main block end
