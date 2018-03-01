//  header block begin
// /usr/include/qt/QtQml/qqmlextensioninterface.h
#ifndef protected
#define protected public
#endif
#include <qqmlextensioninterface.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlTypesExtensionInterface is pure virtual: true
// QQmlTypesExtensionInterface has virtual projected: false
//  header block end

//  main block begin

class MyQQmlTypesExtensionInterface : public QQmlTypesExtensionInterface {
public:
  virtual ~MyQQmlTypesExtensionInterface() {}
};

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
