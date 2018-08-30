//  header block begin
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlabstracturlinterceptor.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlAbstractUrlInterceptor is pure virtual: true
// QQmlAbstractUrlInterceptor has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlAbstractUrlInterceptor_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlAbstractUrlInterceptor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlAbstractUrlInterceptor_t qt_meta_stringdata_MyQQmlAbstractUrlInterceptor = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQQmlAbstractUrlInterceptor"
  },
  "MyQQmlAbstractUrlInterceptor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlAbstractUrlInterceptor[] = {
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
class Q_DECL_EXPORT MyQQmlAbstractUrlInterceptor : public QQmlAbstractUrlInterceptor {
public:
  virtual ~MyQQmlAbstractUrlInterceptor() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QUrl intercept(const QUrl &, QQmlAbstractUrlInterceptor::DataType)
  virtual QUrl intercept(const QUrl & path, QQmlAbstractUrlInterceptor::DataType type_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"intercept", &handled, 2, (uint64_t)&path, (uint64_t)type_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QUrl){};}
    auto prv = (QUrl*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QUrl
    } else {
    return (QUrl){};
  }
  }

// void QQmlAbstractUrlInterceptor()
MyQQmlAbstractUrlInterceptor() : QQmlAbstractUrlInterceptor() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:60
// [8] QUrl intercept(const QUrl &, QQmlAbstractUrlInterceptor::DataType)
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:58
// [-2] void QQmlAbstractUrlInterceptor()
extern "C" Q_DECL_EXPORT
void* C_ZN26QQmlAbstractUrlInterceptorC2Ev() {
  return 0; // new QQmlAbstractUrlInterceptor();
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:59
// [-2] void ~QQmlAbstractUrlInterceptor()
extern "C" Q_DECL_EXPORT
void C_ZN26QQmlAbstractUrlInterceptorD2Ev(void *this_) {
  delete (QQmlAbstractUrlInterceptor*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:60
// [8] QUrl intercept(const QUrl &, QQmlAbstractUrlInterceptor::DataType)
extern "C" Q_DECL_EXPORT
void* C_ZN26QQmlAbstractUrlInterceptor9interceptERK4QUrlNS_8DataTypeE(void *this_, QUrl* path, QQmlAbstractUrlInterceptor::DataType type_) {
  auto rv = ((QQmlAbstractUrlInterceptor*)this_)->intercept(*path, type_);
return new QUrl(rv);
}

//  main block end
