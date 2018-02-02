//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>

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

extern "C"
void C_ZN13QJsonValuePtrD2Ev(void *this_) {
  delete (QJsonValuePtr*)(this_);
}
//  main block end
