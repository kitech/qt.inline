//  header block begin
// /usr/include/qt/QtQml/qqmlextensioninterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlextensioninterface.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlExtensionInterface is pure virtual: true
// QQmlExtensionInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlExtensionInterface : public QQmlExtensionInterface {
public:
  virtual ~MyQQmlExtensionInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void initializeEngine(QQmlEngine *, const char *)
  virtual void initializeEngine(QQmlEngine * engine, const char * uri)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initializeEngine", &handled, 2, (uint64_t)engine, (uint64_t)uri, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlExtensionInterface::initializeEngine(engine, uri);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void registerTypes(const char *)
  virtual void registerTypes(const char * uri)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"registerTypes", &handled, 1, (uint64_t)uri, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlExtensionInterface::registerTypes(uri);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:62
// [-2] void initializeEngine(QQmlEngine *, const char *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:55
// [-2] void registerTypes(const char *)
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:61
// [-2] void ~QQmlExtensionInterface()
extern "C" Q_DECL_EXPORT
void C_ZN22QQmlExtensionInterfaceD2Ev(void *this_) {
  delete (QQmlExtensionInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:62
// [-2] void initializeEngine(QQmlEngine *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN22QQmlExtensionInterface16initializeEngineEP10QQmlEnginePKc(void *this_, QQmlEngine * engine, const char * uri) {
  ((QQmlExtensionInterface*)this_)->initializeEngine(engine, uri);
}

//  main block end
