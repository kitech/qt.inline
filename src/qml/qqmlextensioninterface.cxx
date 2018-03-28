//  header block begin
// /usr/include/qt/QtQml/qqmlextensioninterface.h
#ifndef protected
#define protected public
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
};

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
