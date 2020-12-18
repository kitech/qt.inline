//  header block begin

// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValue is pure virtual: false false
// QJsonValue has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonValue_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonValue_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonValue_t qt_meta_stringdata_MyQJsonValue = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQJsonValue"
  },
  "MyQJsonValue"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonValue[] = {
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
class Q_DECL_EXPORT MyQJsonValue : public QJsonValue {
public:
  virtual ~MyQJsonValue() {}
// void QJsonValue(QJsonValue::Type)
MyQJsonValue(QJsonValue::Type arg0) : QJsonValue(arg0) {}
// void QJsonValue(bool)
MyQJsonValue(bool b) : QJsonValue(b) {}
// void QJsonValue(double)
MyQJsonValue(double n) : QJsonValue(n) {}
// void QJsonValue(int)
MyQJsonValue(int n) : QJsonValue(n) {}
// void QJsonValue(qint64)
MyQJsonValue(qint64 v) : QJsonValue(v) {}
// void QJsonValue(const QString &)
MyQJsonValue(const QString & s) : QJsonValue(s) {}
// void QJsonValue(QLatin1String)
MyQJsonValue(QLatin1String s) : QJsonValue(s) {}
// void QJsonValue(const char *)
MyQJsonValue(const char * s) : QJsonValue(s) {}
// void QJsonValue(const QJsonArray &)
MyQJsonValue(const QJsonArray & a) : QJsonValue(a) {}
// void QJsonValue(const QJsonObject &)
MyQJsonValue(const QJsonObject & o) : QJsonValue(o) {}
// void QJsonValue(const QJsonValue &)
MyQJsonValue(const QJsonValue & other) : QJsonValue(other) {}
// void QJsonValue(QJsonValue &&)
MyQJsonValue(QJsonValue && other) : QJsonValue(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonvalue(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:80
// [-2] void QJsonValue(const char *) 
// (12)qm2232320416 (21)_ZN10QJsonValueC2EPKc
/*void* qm2232320416(const char * s)*/{
  const char * s = *(const char **)this_;
  this_ =  new QJsonValue(s);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:93
// [24] QJsonValue & operator=(QJsonValue &&) 
// (12)qm3510008819 (21)_ZN10QJsonValueaSEOS_
//static
/*void qm3510008819(QJsonValue && other)*/ {
  QJsonValue && other =  static_cast<QJsonValue &&>(*(QJsonValue *)this_);
  (void) ((QJsonValue*)this_)->operator=(other);
  // auto xptr = (QJsonValue & (QJsonValue::*)(QJsonValue&&) ) &QJsonValue::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:105
// [1] bool isNull() const
// (12)qm2033380751 (25)_ZNK10QJsonValue6isNullEv
//static
/*void qm2033380751()*/ {
  ;
  (void) ((QJsonValue*)this_)->isNull();
   auto xptr = (bool (QJsonValue::*)() const ) &QJsonValue::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:106
// [1] bool isBool() const
// (11)qm907349305 (25)_ZNK10QJsonValue6isBoolEv
//static
/*void qm907349305()*/ {
  ;
  (void) ((QJsonValue*)this_)->isBool();
   auto xptr = (bool (QJsonValue::*)() const ) &QJsonValue::isBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:107
// [1] bool isDouble() const
// (12)qm1337653796 (27)_ZNK10QJsonValue8isDoubleEv
//static
/*void qm1337653796()*/ {
  ;
  (void) ((QJsonValue*)this_)->isDouble();
   auto xptr = (bool (QJsonValue::*)() const ) &QJsonValue::isDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:108
// [1] bool isString() const
// (12)qm2672105326 (27)_ZNK10QJsonValue8isStringEv
//static
/*void qm2672105326()*/ {
  ;
  (void) ((QJsonValue*)this_)->isString();
   auto xptr = (bool (QJsonValue::*)() const ) &QJsonValue::isString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:109
// [1] bool isArray() const
// (12)qm3862246477 (26)_ZNK10QJsonValue7isArrayEv
//static
/*void qm3862246477()*/ {
  ;
  (void) ((QJsonValue*)this_)->isArray();
   auto xptr = (bool (QJsonValue::*)() const ) &QJsonValue::isArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:110
// [1] bool isObject() const
// (12)qm1981821693 (27)_ZNK10QJsonValue8isObjectEv
//static
/*void qm1981821693()*/ {
  ;
  (void) ((QJsonValue*)this_)->isObject();
   auto xptr = (bool (QJsonValue::*)() const ) &QJsonValue::isObject;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:111
// [1] bool isUndefined() const
// (12)qm3712079298 (31)_ZNK10QJsonValue11isUndefinedEv
//static
/*void qm3712079298()*/ {
  ;
  (void) ((QJsonValue*)this_)->isUndefined();
   auto xptr = (bool (QJsonValue::*)() const ) &QJsonValue::isUndefined;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QJsonValueD2Ev(void *this_)*/ {
  delete (QJsonValue*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsonvalue
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
