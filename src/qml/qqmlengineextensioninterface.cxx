//  header block begin

// /usr/include/qt/QtQml/qqmlextensioninterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlextensioninterface.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlEngineExtensionInterface is pure virtual: true true
// QQmlEngineExtensionInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlEngineExtensionInterface_t {
  QByteArrayData data[1];
  char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlEngineExtensionInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlEngineExtensionInterface_t qt_meta_stringdata_MyQQmlEngineExtensionInterface = {
   {
  QT_MOC_LITERAL(0, 0, 30), // "MyQQmlEngineExtensionInterface"
  },
  "MyQQmlEngineExtensionInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlEngineExtensionInterface[] = {
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
class Q_DECL_EXPORT MyQQmlEngineExtensionInterface : public QQmlEngineExtensionInterface {
public:
  virtual ~MyQQmlEngineExtensionInterface() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void initializeEngine(QQmlEngine *, const char *)
  virtual void initializeEngine(QQmlEngine * engine, const char * uri)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initializeEngine", &handled, 2, (uint64_t)engine, (uint64_t)uri, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlEngineExtensionInterface::initializeEngine(engine, uri);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlengineextensioninterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:68
// [-2] void ~QQmlEngineExtensionInterface() 
// (11)qm860710753 (37)_ZN28QQmlEngineExtensionInterfaceD2Ev
/*void qm860710753 (void *this_)*/ {
  delete (QQmlEngineExtensionInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlengineextensioninterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
