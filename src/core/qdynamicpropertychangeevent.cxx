//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

// QDynamicPropertyChangeEvent is pure virtual: false
// QDynamicPropertyChangeEvent has virtual projected: false
//  header block end

//  main block begin

class MyQDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent {
public:
  virtual ~MyQDynamicPropertyChangeEvent() {}
// void QDynamicPropertyChangeEvent(const class QByteArray &)
MyQDynamicPropertyChangeEvent(const QByteArray & name) : QDynamicPropertyChangeEvent(name) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:365
// [-2] void QDynamicPropertyChangeEvent(const class QByteArray &)
extern "C"
void* C_ZN27QDynamicPropertyChangeEventC2ERK10QByteArray(QByteArray* name) {
  return  new QDynamicPropertyChangeEvent(*name);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:366
// [-2] void ~QDynamicPropertyChangeEvent()
extern "C"
void C_ZN27QDynamicPropertyChangeEventD2Ev(void *this_) {
  delete (QDynamicPropertyChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:368
// [8] QByteArray propertyName()
extern "C"
void* C_ZNK27QDynamicPropertyChangeEvent12propertyNameEv(void *this_) {
  auto rv = ((QDynamicPropertyChangeEvent*)this_)->propertyName();
return new QByteArray(rv);
}
//  main block end
