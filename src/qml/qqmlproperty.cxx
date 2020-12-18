//  header block begin

// /usr/include/qt/QtQml/qqmlproperty.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlproperty.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlProperty is pure virtual: false false
// QQmlProperty has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlProperty_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlProperty_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlProperty_t qt_meta_stringdata_MyQQmlProperty = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQQmlProperty"
  },
  "MyQQmlProperty"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlProperty[] = {
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
class Q_DECL_EXPORT MyQQmlProperty : public QQmlProperty {
public:
  virtual ~MyQQmlProperty() {}
// void QQmlProperty()
MyQQmlProperty() : QQmlProperty() {}
// void QQmlProperty(QObject *)
MyQQmlProperty(QObject * arg0) : QQmlProperty(arg0) {}
// void QQmlProperty(QObject *, QQmlContext *)
MyQQmlProperty(QObject * arg0, QQmlContext * arg1) : QQmlProperty(arg0, arg1) {}
// void QQmlProperty(QObject *, QQmlEngine *)
MyQQmlProperty(QObject * arg0, QQmlEngine * arg1) : QQmlProperty(arg0, arg1) {}
// void QQmlProperty(QObject *, const QString &)
MyQQmlProperty(QObject * arg0, const QString & arg1) : QQmlProperty(arg0, arg1) {}
// void QQmlProperty(QObject *, const QString &, QQmlContext *)
MyQQmlProperty(QObject * arg0, const QString & arg1, QQmlContext * arg2) : QQmlProperty(arg0, arg1, arg2) {}
// void QQmlProperty(QObject *, const QString &, QQmlEngine *)
MyQQmlProperty(QObject * arg0, const QString & arg1, QQmlEngine * arg2) : QQmlProperty(arg0, arg1, arg2) {}
// void QQmlProperty(const QQmlProperty &)
MyQQmlProperty(const QQmlProperty & arg0) : QQmlProperty(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlproperty(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN12QQmlPropertyD2Ev(void *this_)*/ {
  delete (QQmlProperty*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlproperty
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
