//  header block begin

// /usr/include/qt/QtQml/qjsvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsvalue.h>
#include <QtQml>
#include "callback_inherit.h"

// QJSValue is pure virtual: false false
// QJSValue has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJSValue_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJSValue_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJSValue_t qt_meta_stringdata_MyQJSValue = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQJSValue"
  },
  "MyQJSValue"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJSValue[] = {
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
class Q_DECL_EXPORT MyQJSValue : public QJSValue {
public:
  virtual ~MyQJSValue() {}
// void QJSValue(QJSValue::SpecialValue)
MyQJSValue(QJSValue::SpecialValue value) : QJSValue(value) {}
// void QJSValue(const QJSValue &)
MyQJSValue(const QJSValue & other) : QJSValue(other) {}
// void QJSValue(QJSValue &&)
MyQJSValue(QJSValue && other) : QJSValue(other) {}
// void QJSValue(bool)
MyQJSValue(bool value) : QJSValue(value) {}
// void QJSValue(int)
MyQJSValue(int value) : QJSValue(value) {}
// void QJSValue(uint)
MyQJSValue(uint value) : QJSValue(value) {}
// void QJSValue(double)
MyQJSValue(double value) : QJSValue(value) {}
// void QJSValue(const QString &)
MyQJSValue(const QString & value) : QJSValue(value) {}
// void QJSValue(const QLatin1String &)
MyQJSValue(const QLatin1String & value) : QJSValue(value) {}
// void QJSValue(const char *)
MyQJSValue(const char * str) : QJSValue(str) {}
// void QJSValue(QV4::ExecutionEngine *, quint64)
MyQJSValue(QV4::ExecutionEngine * e, quint64 val) : QJSValue(e, val) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsvalue(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:88
// [-2] void QJSValue(QJSValue &&) 
// (12)qm3233028379 (18)_ZN8QJSValueC2EOS_
/*void* qm3233028379(QJSValue && other)*/{
  QJSValue && other =  static_cast<QJSValue &&>(*(QJSValue *)this_);
  this_ =  new QJSValue(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:89
// [8] QJSValue & operator=(QJSValue &&) 
// (11)qm780329947 (18)_ZN8QJSValueaSEOS_
//static
/*void qm780329947(QJSValue && other)*/ {
  QJSValue && other =  static_cast<QJSValue &&>(*(QJSValue *)this_);
  (void) ((QJSValue*)this_)->operator=(other);
  // auto xptr = (QJSValue & (QJSValue::*)(QJSValue&&) ) &QJSValue::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QJSValueD2Ev(void *this_)*/ {
  delete (QJSValue*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsvalue
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
