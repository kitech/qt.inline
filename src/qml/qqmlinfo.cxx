//  header block begin
// /usr/include/qt/QtQml/qqmlinfo.h
#include <qqmlinfo.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlInfo is pure virtual: false
// QQmlInfo has virtual projected: false
//  header block end

//  main block begin

class MyQQmlInfo : public QQmlInfo {
public:
  virtual ~MyQQmlInfo() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:76
// [-2] void ~QQmlInfo()
extern "C"
void C_ZN8QQmlInfoD2Ev(void *this_) {
  delete (QQmlInfo*)(this_);
}
//  main block end
