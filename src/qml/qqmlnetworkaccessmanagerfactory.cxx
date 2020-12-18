//  header block begin

// /usr/include/qt/QtQml/qqmlnetworkaccessmanagerfactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlnetworkaccessmanagerfactory.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlNetworkAccessManagerFactory is pure virtual: true true
// QQmlNetworkAccessManagerFactory has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlNetworkAccessManagerFactory_t {
  QByteArrayData data[1];
  char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlNetworkAccessManagerFactory_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlNetworkAccessManagerFactory_t qt_meta_stringdata_MyQQmlNetworkAccessManagerFactory = {
   {
  QT_MOC_LITERAL(0, 0, 33), // "MyQQmlNetworkAccessManagerFactory"
  },
  "MyQQmlNetworkAccessManagerFactory"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlNetworkAccessManagerFactory[] = {
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
class Q_DECL_EXPORT MyQQmlNetworkAccessManagerFactory : public QQmlNetworkAccessManagerFactory {
public:
  virtual ~MyQQmlNetworkAccessManagerFactory() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QNetworkAccessManager * create(QObject *)
  virtual QNetworkAccessManager * create(QObject * parent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"create", &handled, 1, (uint64_t)parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QNetworkAccessManager *)(irv);
      // Pointer Pointer QNetworkAccessManager *
    } else {
    return (QNetworkAccessManager *){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlnetworkaccessmanagerfactory(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN31QQmlNetworkAccessManagerFactoryD2Ev(void *this_)*/ {
  delete (QQmlNetworkAccessManagerFactory*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlnetworkaccessmanagerfactory
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
