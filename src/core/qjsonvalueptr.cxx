//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>

// QJsonValuePtr is pure virtual: false
//  header block end

//  main block begin

class MyQJsonValuePtr : public QJsonValuePtr {
public:
MyQJsonValuePtr(const QJsonValue & val) : QJsonValuePtr(val) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:226
// [-2] void QJsonValuePtr(const class QJsonValue &)
extern "C"
void* C_ZN13QJsonValuePtrC1ERK10QJsonValue(const QJsonValue & val) {
  (MyQJsonValuePtr*)(0);
  return  new MyQJsonValuePtr(val);
}
//  main block end
