//  header block begin
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlpropertyvaluesource.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlPropertyValueSource is pure virtual: true
// QQmlPropertyValueSource has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlPropertyValueSource : public QQmlPropertyValueSource {
public:
  virtual ~MyQQmlPropertyValueSource() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setTarget(const QQmlProperty &)
  virtual void setTarget(const QQmlProperty & arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setTarget", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlPropertyValueSource::setTarget(arg0);
  }
  }

// void QQmlPropertyValueSource()
MyQQmlPropertyValueSource() : QQmlPropertyValueSource() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h:55
// [-2] void setTarget(const QQmlProperty &)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h:53
// [-2] void QQmlPropertyValueSource()
extern "C" Q_DECL_EXPORT
void* C_ZN23QQmlPropertyValueSourceC2Ev() {
  return 0; // new QQmlPropertyValueSource();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h:54
// [-2] void ~QQmlPropertyValueSource()
extern "C" Q_DECL_EXPORT
void C_ZN23QQmlPropertyValueSourceD2Ev(void *this_) {
  delete (QQmlPropertyValueSource*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h:55
// [-2] void setTarget(const QQmlProperty &)
extern "C" Q_DECL_EXPORT
void C_ZN23QQmlPropertyValueSource9setTargetERK12QQmlProperty(void *this_, QQmlProperty* arg0) {
  ((QQmlPropertyValueSource*)this_)->setTarget(*arg0);
}

//  main block end
