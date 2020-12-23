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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonvalue(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:72
// [-2] void QJsonValue(QJsonValue::Type) 
// (12)qm2305063527 (27)_ZN10QJsonValueC2ENS_4TypeE
/*void* qm2305063527(QJsonValue::Type arg0)*/{
  QJsonValue::Type arg0 = *(QJsonValue::Type*)this_;
  this_ =  new QJsonValue(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:73
// [-2] void QJsonValue(bool) 
// (12)qm1998452468 (19)_ZN10QJsonValueC2Eb
/*void* qm1998452468(bool b)*/{
  bool b = *(bool*)this_;
  this_ =  new QJsonValue(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:74
// [-2] void QJsonValue(double) 
// (12)qm2659079105 (19)_ZN10QJsonValueC2Ed
/*void* qm2659079105(double n)*/{
  double n = *(double*)this_;
  this_ =  new QJsonValue(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:75
// [-2] void QJsonValue(int) 
// (12)qm3771674492 (19)_ZN10QJsonValueC2Ei
/*void* qm3771674492(int n)*/{
  int n = *(int*)this_;
  this_ =  new QJsonValue(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:76
// [-2] void QJsonValue(qint64) 
// (12)qm2323582862 (19)_ZN10QJsonValueC2Ex
/*void* qm2323582862(long long v)*/{
  long long v = *(long long*)this_;
  this_ =  new QJsonValue(v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:77
// [-2] void QJsonValue(const QString &) 
// (11)qm309848635 (28)_ZN10QJsonValueC2ERK7QString
/*void* qm309848635(const QString & s)*/{
  const QString & s = *(const QString *)this_;
  this_ =  new QJsonValue(s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:78
// [-2] void QJsonValue(QLatin1String) 
// (12)qm2321886528 (33)_ZN10QJsonValueC2E13QLatin1String
/*void* qm2321886528(QLatin1String s)*/{
  QLatin1String s = *(QLatin1String*)this_;
  this_ =  new QJsonValue(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:80
// [-2] void QJsonValue(const char *) 
// (12)qm2232320416 (21)_ZN10QJsonValueC2EPKc
/*void* qm2232320416(const char * s)*/{
  const char * s = *(const char **)this_;
  this_ =  new QJsonValue(s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:83
// [-2] void QJsonValue(const QJsonArray &) 
// (12)qm2403001473 (32)_ZN10QJsonValueC2ERK10QJsonArray
/*void* qm2403001473(const QJsonArray & a)*/{
  const QJsonArray & a = *(const QJsonArray *)this_;
  this_ =  new QJsonValue(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:84
// [-2] void QJsonValue(const QJsonObject &) 
// (12)qm4238099472 (33)_ZN10QJsonValueC2ERK11QJsonObject
/*void* qm4238099472(const QJsonObject & o)*/{
  const QJsonObject & o = *(const QJsonObject *)this_;
  this_ =  new QJsonValue(o);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:88
// [-2] void QJsonValue(const QJsonValue &) 
// (12)qm2328555769 (22)_ZN10QJsonValueC2ERKS_
/*void* qm2328555769(const QJsonValue & other)*/{
  const QJsonValue & other = *(const QJsonValue *)this_;
  this_ =  new QJsonValue(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:91
// [-2] void QJsonValue(QJsonValue &&) 
// (12)qm1056997683 (21)_ZN10QJsonValueC2EOS_
/*void* qm1056997683(QJsonValue && other)*/{
  QJsonValue && other =  static_cast<QJsonValue &&>(*(QJsonValue *)this_);
  this_ =  new QJsonValue(other);
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
