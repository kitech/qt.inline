//  header block begin
// /usr/include/qt/QtQml/qqmlparserstatus.h
#include <qqmlparserstatus.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlParserStatus is pure virtual: true
// QQmlParserStatus has virtual projected: false
//  header block end

//  main block begin

class MyQQmlParserStatus : public QQmlParserStatus {
public:
  virtual ~MyQQmlParserStatus() {}
// void QQmlParserStatus()
MyQQmlParserStatus() : QQmlParserStatus() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:52
// [-2] void QQmlParserStatus()
extern "C"
void* C_ZN16QQmlParserStatusC1Ev() {
  return 0; // new QQmlParserStatus();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:53
// [-2] void ~QQmlParserStatus()
extern "C"
void C_ZN16QQmlParserStatusD2Ev(void *this_) {
  delete (QQmlParserStatus*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:55
// [-2] void classBegin()
extern "C"
void C_ZN16QQmlParserStatus10classBeginEv(void *this_) {
  ((QQmlParserStatus*)this_)->classBegin();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:56
// [-2] void componentComplete()
extern "C"
void C_ZN16QQmlParserStatus17componentCompleteEv(void *this_) {
  ((QQmlParserStatus*)this_)->componentComplete();
}
//  main block end
