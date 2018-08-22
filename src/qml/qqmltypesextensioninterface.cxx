//  header block begin
// /usr/include/qt/QtQml/qqmlextensioninterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlextensioninterface.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlTypesExtensionInterface is pure virtual: true
// QQmlTypesExtensionInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlTypesExtensionInterface : public QQmlTypesExtensionInterface {
public:
  virtual ~MyQQmlTypesExtensionInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void registerTypes(const char *)
  virtual void registerTypes(const char * uri)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"registerTypes", &handled, 1, (uint64_t)uri, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlTypesExtensionInterface::registerTypes(uri);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:55
// [-2] void registerTypes(const char *)
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:54
// [-2] void ~QQmlTypesExtensionInterface()
extern "C" Q_DECL_EXPORT
void C_ZN27QQmlTypesExtensionInterfaceD2Ev(void *this_) {
  delete (QQmlTypesExtensionInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:55
// [-2] void registerTypes(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN27QQmlTypesExtensionInterface13registerTypesEPKc(void *this_, const char * uri) {
  ((QQmlTypesExtensionInterface*)this_)->registerTypes(uri);
}

//  main block end
