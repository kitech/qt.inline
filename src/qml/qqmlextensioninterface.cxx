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


struct qt_meta_stringdata_MyQQmlExtensionInterface_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlExtensionInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlExtensionInterface_t qt_meta_stringdata_MyQQmlExtensionInterface = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQQmlExtensionInterface"
  },
  "MyQQmlExtensionInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlExtensionInterface[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
