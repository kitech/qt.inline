//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValuePtr is pure virtual: false
// QJsonValuePtr has virtual projected: false
//  header block end

//  main block begin

class MyQJsonValuePtr : public QJsonValuePtr {
public:
  virtual ~MyQJsonValuePtr() {}
// void QJsonValuePtr(const class QJsonValue &)
MyQJsonValuePtr(const QJsonValue & val) : QJsonValuePtr(val) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:226
// [-2] void QJsonValuePtr(const class QJsonValue &)
extern "C"
void* C_ZN13QJsonValuePtrC2ERK10QJsonValue(QJsonValue* val) {
  return  new QJsonValuePtr(*val);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:229
// [24] QJsonValue & operator*()
extern "C"
void* C_ZN13QJsonValuePtrdeEv(void *this_) {
  auto& rv = ((QJsonValuePtr*)this_)->operator*();
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:230
// [8] QJsonValue * operator->()
extern "C"
void* C_ZN13QJsonValuePtrptEv(void *this_) {
  return (void*)((QJsonValuePtr*)this_)->operator->();
}

extern "C"
void C_ZN13QJsonValuePtrD2Ev(void *this_) {
  delete (QJsonValuePtr*)(this_);
}
//  main block end
