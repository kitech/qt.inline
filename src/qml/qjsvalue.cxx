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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:83
// [-2] void QJSValue(QJSValue::SpecialValue) 
// (11)qm178543846 (33)_ZN8QJSValueC2ENS_12SpecialValueE
/*void* qm178543846(QJSValue::SpecialValue value)*/{
  QJSValue::SpecialValue value = *(QJSValue::SpecialValue*)this_;
  this_ =  new QJSValue(value);
  this_ =  new MyQJSValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:85
// [-2] void QJSValue(const QJSValue &) 
// (12)qm3212897435 (19)_ZN8QJSValueC2ERKS_
/*void* qm3212897435(const QJSValue & other)*/{
  const QJSValue & other = *(const QJSValue *)this_;
  this_ =  new QJSValue(other);
  this_ =  new MyQJSValue(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:88
// [-2] void QJSValue(QJSValue &&) 
// (12)qm3233028379 (18)_ZN8QJSValueC2EOS_
/*void* qm3233028379(QJSValue && other)*/{
  QJSValue && other =  static_cast<QJSValue &&>(*(QJSValue *)this_);
  this_ =  new QJSValue(other);
  this_ =  new MyQJSValue(other);
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:93
// [-2] void QJSValue(bool) 
// (12)qm2382507073 (16)_ZN8QJSValueC2Eb
/*void* qm2382507073(bool value)*/{
  bool value = *(bool*)this_;
  this_ =  new QJSValue(value);
  this_ =  new MyQJSValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:94
// [-2] void QJSValue(int) 
// (11)qm433124809 (16)_ZN8QJSValueC2Ei
/*void* qm433124809(int value)*/{
  int value = *(int*)this_;
  this_ =  new QJSValue(value);
  this_ =  new MyQJSValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:95
// [-2] void QJSValue(uint) 
// (12)qm2161747059 (16)_ZN8QJSValueC2Ej
/*void* qm2161747059(unsigned int value)*/{
  unsigned int value = *(unsigned int*)this_;
  this_ =  new QJSValue(value);
  this_ =  new MyQJSValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:96
// [-2] void QJSValue(double) 
// (12)qm1734445428 (16)_ZN8QJSValueC2Ed
/*void* qm1734445428(double value)*/{
  double value = *(double*)this_;
  this_ =  new QJSValue(value);
  this_ =  new MyQJSValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:97
// [-2] void QJSValue(const QString &) 
// (11)qm609395147 (25)_ZN8QJSValueC2ERK7QString
/*void* qm609395147(const QString & value)*/{
  const QString & value = *(const QString *)this_;
  this_ =  new QJSValue(value);
  this_ =  new MyQJSValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:98
// [-2] void QJSValue(const QLatin1String &) 
// (12)qm1764458219 (32)_ZN8QJSValueC2ERK13QLatin1String
/*void* qm1764458219(const QLatin1String & value)*/{
  const QLatin1String & value = *(const QLatin1String *)this_;
  this_ =  new QJSValue(value);
  this_ =  new MyQJSValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:100
// [-2] void QJSValue(const char *) 
// (12)qm2059016584 (18)_ZN8QJSValueC2EPKc
/*void* qm2059016584(const char * str)*/{
  const char * str = *(const char **)this_;
  this_ =  new QJSValue(str);
  this_ =  new MyQJSValue(str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:156
// [-2] void QJSValue(QV4::ExecutionEngine *, quint64) 
// (12)qm3982393888 (40)_ZN8QJSValueC2EPN3QV415ExecutionEngineEy
/*void* qm3982393888(QV4::ExecutionEngine * e, unsigned long long val)*/{
  QV4::ExecutionEngine * e = *(QV4::ExecutionEngine **)this_; unsigned long long val = *(unsigned long long*)this_;
  this_ =  new QJSValue(e, val);
  this_ =  new MyQJSValue(e, val);
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
