//  header block begin
// /usr/include/qt/QtQml/qqmlscriptstring.h
#include <qqmlscriptstring.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlScriptString is pure virtual: false
// QQmlScriptString has virtual projected: false
//  header block end

//  main block begin

class MyQQmlScriptString : public QQmlScriptString {
public:
  virtual ~MyQQmlScriptString() {}
// void QQmlScriptString()
MyQQmlScriptString() : QQmlScriptString() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:61
// [-2] void QQmlScriptString()
extern "C"
void* C_ZN16QQmlScriptStringC2Ev() {
  return  new QQmlScriptString();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:63
// [-2] void ~QQmlScriptString()
extern "C"
void C_ZN16QQmlScriptStringD2Ev(void *this_) {
  delete (QQmlScriptString*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:70
// [1] bool isEmpty()
extern "C"
bool C_ZNK16QQmlScriptString7isEmptyEv(void *this_) {
  return (bool)((QQmlScriptString*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:72
// [1] bool isUndefinedLiteral()
extern "C"
bool C_ZNK16QQmlScriptString18isUndefinedLiteralEv(void *this_) {
  return (bool)((QQmlScriptString*)this_)->isUndefinedLiteral();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:73
// [1] bool isNullLiteral()
extern "C"
bool C_ZNK16QQmlScriptString13isNullLiteralEv(void *this_) {
  return (bool)((QQmlScriptString*)this_)->isNullLiteral();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:74
// [8] QString stringLiteral()
extern "C"
void* C_ZNK16QQmlScriptString13stringLiteralEv(void *this_) {
  auto rv = ((QQmlScriptString*)this_)->stringLiteral();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:75
// [8] qreal numberLiteral(_Bool *)
extern "C"
qreal C_ZNK16QQmlScriptString13numberLiteralEPb(void *this_, bool * ok) {
  return (qreal)((QQmlScriptString*)this_)->numberLiteral(ok);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:76
// [1] bool booleanLiteral(_Bool *)
extern "C"
bool C_ZNK16QQmlScriptString14booleanLiteralEPb(void *this_, bool * ok) {
  return (bool)((QQmlScriptString*)this_)->booleanLiteral(ok);
}
//  main block end