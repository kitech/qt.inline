//  header block begin

// /usr/include/qt/QtCore/qcborvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborValue is pure virtual: false false
// QCborValue has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborValue_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborValue_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborValue_t qt_meta_stringdata_MyQCborValue = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQCborValue"
  },
  "MyQCborValue"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborValue[] = {
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
class Q_DECL_EXPORT MyQCborValue : public QCborValue {
public:
  virtual ~MyQCborValue() {}
// void QCborValue()
MyQCborValue() : QCborValue() {}
// void QCborValue(QCborValue::Type)
MyQCborValue(QCborValue::Type t_) : QCborValue(t_) {}
// void QCborValue(std::nullptr_t)
MyQCborValue(std::nullptr_t arg0) : QCborValue(arg0) {}
// void QCborValue(bool)
MyQCborValue(bool b_) : QCborValue(b_) {}
// void QCborValue(int)
MyQCborValue(int i) : QCborValue(i) {}
// void QCborValue(unsigned int)
MyQCborValue(unsigned int u) : QCborValue(u) {}
// void QCborValue(qint64)
MyQCborValue(qint64 i) : QCborValue(i) {}
// void QCborValue(double)
MyQCborValue(double v) : QCborValue(v) {}
// void QCborValue(QCborSimpleType)
MyQCborValue(QCborSimpleType st) : QCborValue(st) {}
// void QCborValue(const QByteArray &)
MyQCborValue(const QByteArray & ba) : QCborValue(ba) {}
// void QCborValue(const QString &)
MyQCborValue(const QString & s) : QCborValue(s) {}
// void QCborValue(QStringView)
MyQCborValue(QStringView s) : QCborValue(s) {}
// void QCborValue(QLatin1String)
MyQCborValue(QLatin1String s) : QCborValue(s) {}
// void QCborValue(const char *)
MyQCborValue(const char * s) : QCborValue(s) {}
// void QCborValue(const QCborArray &)
MyQCborValue(const QCborArray & a) : QCborValue(a) {}
// void QCborValue(QCborArray &&)
MyQCborValue(QCborArray && a) : QCborValue(a) {}
// void QCborValue(const QCborMap &)
MyQCborValue(const QCborMap & m) : QCborValue(m) {}
// void QCborValue(QCborMap &&)
MyQCborValue(QCborMap && m) : QCborValue(m) {}
// void QCborValue(QCborTag, const QCborValue &)
MyQCborValue(QCborTag tag, const QCborValue & taggedValue) : QCborValue(tag, taggedValue) {}
// void QCborValue(QCborKnownTags, const QCborValue &)
MyQCborValue(QCborKnownTags t_, const QCborValue & tv) : QCborValue(t_, tv) {}
// void QCborValue(const QDateTime &)
MyQCborValue(const QDateTime & dt) : QCborValue(dt) {}
// void QCborValue(const QUrl &)
MyQCborValue(const QUrl & url) : QCborValue(url) {}
// void QCborValue(const QRegularExpression &)
MyQCborValue(const QRegularExpression & rx) : QCborValue(rx) {}
// void QCborValue(const QUuid &)
MyQCborValue(const QUuid & uuid) : QCborValue(uuid) {}
// void QCborValue(const QCborValue &)
MyQCborValue(const QCborValue & other) : QCborValue(other) {}
// void QCborValue(QCborValue &&)
MyQCborValue(QCborValue && other) : QCborValue(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborvalue(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:137
// [-2] void QCborValue() 
// (12)qm1081993364 (19)_ZN10QCborValueC2Ev
/*void* qm1081993364()*/{
  ;
  this_ =  new QCborValue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:138
// [-2] void QCborValue(QCborValue::Type) 
// (12)qm2226603518 (27)_ZN10QCborValueC2ENS_4TypeE
/*void* qm2226603518(QCborValue::Type t_)*/{
  QCborValue::Type t_ = *(QCborValue::Type*)this_;
  this_ =  new QCborValue(t_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:139
// [-2] void QCborValue(std::nullptr_t) 
// (12)qm1650122006 (20)_ZN10QCborValueC2EDn
/*void* qm1650122006(nullptr_t arg0)*/{
  nullptr_t arg0 = *(nullptr_t*)this_;
  this_ =  new QCborValue(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:140
// [-2] void QCborValue(bool) 
// (12)qm1520909545 (19)_ZN10QCborValueC2Eb
/*void* qm1520909545(bool b_)*/{
  bool b_ = *(bool*)this_;
  this_ =  new QCborValue(b_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:142
// [-2] void QCborValue(int) 
// (12)qm3447055713 (19)_ZN10QCborValueC2Ei
/*void* qm3447055713(int i)*/{
  int i = *(int*)this_;
  this_ =  new QCborValue(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:143
// [-2] void QCborValue(unsigned int) 
// (12)qm1417458907 (19)_ZN10QCborValueC2Ej
/*void* qm1417458907(unsigned int u)*/{
  unsigned int u = *(unsigned int*)this_;
  this_ =  new QCborValue(u);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:145
// [-2] void QCborValue(qint64) 
// (12)qm2814756243 (19)_ZN10QCborValueC2Ex
/*void* qm2814756243(long long i)*/{
  long long i = *(long long*)this_;
  this_ =  new QCborValue(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:146
// [-2] void QCborValue(double) 
// (12)qm3016006108 (19)_ZN10QCborValueC2Ed
/*void* qm3016006108(double v)*/{
  double v = *(double*)this_;
  this_ =  new QCborValue(v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:147
// [-2] void QCborValue(QCborSimpleType) 
// (12)qm3914963924 (35)_ZN10QCborValueC2E15QCborSimpleType
/*void* qm3914963924(QCborSimpleType st)*/{
  QCborSimpleType st = *(QCborSimpleType*)this_;
  this_ =  new QCborValue(st);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:156
// [-2] void QCborValue(const char *) 
// (10)qm30665640 (21)_ZN10QCborValueC2EPKc
/*void* qm30665640(const char * s)*/{
  const char * s = *(const char **)this_;
  this_ =  new QCborValue(s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:159
// [-2] void QCborValue(QCborArray &&) 
// (12)qm3442029931 (31)_ZN10QCborValueC2EO10QCborArray
/*void* qm3442029931(QCborArray && a)*/{
  QCborArray && a =  static_cast<QCborArray &&>(*(QCborArray *)this_);
  this_ =  new QCborValue(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:161
// [-2] void QCborValue(QCborMap &&) 
// (12)qm2232141528 (28)_ZN10QCborValueC2EO8QCborMap
/*void* qm2232141528(QCborMap && m)*/{
  QCborMap && m =  static_cast<QCborMap &&>(*(QCborMap *)this_);
  this_ =  new QCborValue(m);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:163
// [-2] void QCborValue(QCborKnownTags, const QCborValue &) 
// (12)qm2596948014 (38)_ZN10QCborValueC2E14QCborKnownTagsRKS_
/*void* qm2596948014(QCborKnownTags t_, const QCborValue & tv)*/{
  QCborKnownTags t_ = *(QCborKnownTags*)this_; const QCborValue & tv = *(const QCborValue *)this_;
  this_ =  new QCborValue(t_, tv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:176
// [-2] void ~QCborValue() 
// (12)qm3718959149 (19)_ZN10QCborValueD2Ev
/*void qm3718959149 (void *this_)*/ {
  delete (QCborValue*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:182
// [-2] void QCborValue(QCborValue &&) 
// (12)qm3151883067 (21)_ZN10QCborValueC2EOS_
/*void* qm3151883067(QCborValue && other)*/{
  QCborValue && other =  static_cast<QCborValue &&>(*(QCborValue *)this_);
  this_ =  new QCborValue(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:189
// [24] QCborValue & operator=(QCborValue &&) 
// (12)qm1441468923 (21)_ZN10QCborValueaSEOS_
//static
/*void qm1441468923(QCborValue && other)*/ {
  QCborValue && other =  static_cast<QCborValue &&>(*(QCborValue *)this_);
  (void) ((QCborValue*)this_)->operator=(other);
  // auto xptr = (QCborValue & (QCborValue::*)(QCborValue&&) ) &QCborValue::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:196
// [-2] void swap(QCborValue &) 
// (12)qm1569173959 (24)_ZN10QCborValue4swapERS_
//static
/*void qm1569173959(QCborValue & other)*/ {
  QCborValue & other = *(QCborValue *)this_;
  (void) ((QCborValue*)this_)->swap(other);
   auto xptr = (void (QCborValue::*)(QCborValue&) ) &QCborValue::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:203
// [4] QCborValue::Type type() const
// (12)qm3882301134 (23)_ZNK10QCborValue4typeEv
//static
/*void qm3882301134()*/ {
  ;
  (void) ((QCborValue*)this_)->type();
   auto xptr = (QCborValue::Type (QCborValue::*)() const ) &QCborValue::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:204
// [1] bool isInteger() const
// (12)qm3847646632 (28)_ZNK10QCborValue9isIntegerEv
//static
/*void qm3847646632()*/ {
  ;
  (void) ((QCborValue*)this_)->isInteger();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:205
// [1] bool isByteArray() const
// (12)qm3682590455 (31)_ZNK10QCborValue11isByteArrayEv
//static
/*void qm3682590455()*/ {
  ;
  (void) ((QCborValue*)this_)->isByteArray();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isByteArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:206
// [1] bool isString() const
// (11)qm554741988 (27)_ZNK10QCborValue8isStringEv
//static
/*void qm554741988()*/ {
  ;
  (void) ((QCborValue*)this_)->isString();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:207
// [1] bool isArray() const
// (12)qm3095572031 (26)_ZNK10QCborValue7isArrayEv
//static
/*void qm3095572031()*/ {
  ;
  (void) ((QCborValue*)this_)->isArray();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:208
// [1] bool isMap() const
// (12)qm2088748248 (24)_ZNK10QCborValue5isMapEv
//static
/*void qm2088748248()*/ {
  ;
  (void) ((QCborValue*)this_)->isMap();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isMap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:209
// [1] bool isTag() const
// (11)qm149325022 (24)_ZNK10QCborValue5isTagEv
//static
/*void qm149325022()*/ {
  ;
  (void) ((QCborValue*)this_)->isTag();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isTag;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:210
// [1] bool isFalse() const
// (12)qm3365604455 (26)_ZNK10QCborValue7isFalseEv
//static
/*void qm3365604455()*/ {
  ;
  (void) ((QCborValue*)this_)->isFalse();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isFalse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:211
// [1] bool isTrue() const
// (11)qm586960768 (25)_ZNK10QCborValue6isTrueEv
//static
/*void qm586960768()*/ {
  ;
  (void) ((QCborValue*)this_)->isTrue();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isTrue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:212
// [1] bool isBool() const
// (12)qm1601597761 (25)_ZNK10QCborValue6isBoolEv
//static
/*void qm1601597761()*/ {
  ;
  (void) ((QCborValue*)this_)->isBool();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:213
// [1] bool isNull() const
// (11)qm273781239 (25)_ZNK10QCborValue6isNullEv
//static
/*void qm273781239()*/ {
  ;
  (void) ((QCborValue*)this_)->isNull();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:214
// [1] bool isUndefined() const
// (12)qm1753743330 (31)_ZNK10QCborValue11isUndefinedEv
//static
/*void qm1753743330()*/ {
  ;
  (void) ((QCborValue*)this_)->isUndefined();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isUndefined;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:215
// [1] bool isDouble() const
// (12)qm4058996142 (27)_ZNK10QCborValue8isDoubleEv
//static
/*void qm4058996142()*/ {
  ;
  (void) ((QCborValue*)this_)->isDouble();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:216
// [1] bool isDateTime() const
// (12)qm2341919382 (30)_ZNK10QCborValue10isDateTimeEv
//static
/*void qm2341919382()*/ {
  ;
  (void) ((QCborValue*)this_)->isDateTime();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isDateTime;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:217
// [1] bool isUrl() const
// (12)qm2071968510 (24)_ZNK10QCborValue5isUrlEv
//static
/*void qm2071968510()*/ {
  ;
  (void) ((QCborValue*)this_)->isUrl();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isUrl;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:218
// [1] bool isRegularExpression() const
// (12)qm2071633183 (39)_ZNK10QCborValue19isRegularExpressionEv
//static
/*void qm2071633183()*/ {
  ;
  (void) ((QCborValue*)this_)->isRegularExpression();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isRegularExpression;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:219
// [1] bool isUuid() const
// (12)qm1083032101 (25)_ZNK10QCborValue6isUuidEv
//static
/*void qm1083032101()*/ {
  ;
  (void) ((QCborValue*)this_)->isUuid();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isUuid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:220
// [1] bool isInvalid() const
// (12)qm3438637052 (28)_ZNK10QCborValue9isInvalidEv
//static
/*void qm3438637052()*/ {
  ;
  (void) ((QCborValue*)this_)->isInvalid();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isInvalid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:221
// [1] bool isContainer() const
// (11)qm959823923 (31)_ZNK10QCborValue11isContainerEv
//static
/*void qm959823923()*/ {
  ;
  (void) ((QCborValue*)this_)->isContainer();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isContainer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:223
// [1] bool isSimpleType() const
// (12)qm2919039533 (32)_ZNK10QCborValue12isSimpleTypeEv
//static
/*void qm2919039533()*/ {
  ;
  (void) ((QCborValue*)this_)->isSimpleType();
   auto xptr = (bool (QCborValue::*)() const ) &QCborValue::isSimpleType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:227
// [1] bool isSimpleType(QCborSimpleType) const
// (12)qm2562164102 (48)_ZNK10QCborValue12isSimpleTypeE15QCborSimpleType
//static
/*void qm2562164102(QCborSimpleType st)*/ {
  QCborSimpleType st = *(QCborSimpleType*)this_;
  (void) ((QCborValue*)this_)->isSimpleType(st);
   auto xptr = (bool (QCborValue::*)(QCborSimpleType) const ) &QCborValue::isSimpleType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:231
// [1] QCborSimpleType toSimpleType(QCborSimpleType) const
// (12)qm1656021723 (48)_ZNK10QCborValue12toSimpleTypeE15QCborSimpleType
//static
/*void qm1656021723(QCborSimpleType defaultValue)*/ {
  QCborSimpleType defaultValue = *(QCborSimpleType*)this_;
  (void) ((QCborValue*)this_)->toSimpleType(defaultValue);
   auto xptr = (QCborSimpleType (QCborValue::*)(QCborSimpleType) const ) &QCborValue::toSimpleType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:236
// [8] qint64 toInteger(qint64) const
// (12)qm1511958533 (28)_ZNK10QCborValue9toIntegerEx
//static
/*void qm1511958533(long long defaultValue)*/ {
  long long defaultValue = *(long long*)this_;
  (void) ((QCborValue*)this_)->toInteger(defaultValue);
   auto xptr = (long long (QCborValue::*)(long long) const ) &QCborValue::toInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:238
// [1] bool toBool(bool) const
// (10)qm40662908 (25)_ZNK10QCborValue6toBoolEb
//static
/*void qm40662908(bool defaultValue)*/ {
  bool defaultValue = *(bool*)this_;
  (void) ((QCborValue*)this_)->toBool(defaultValue);
   auto xptr = (bool (QCborValue::*)(bool) const ) &QCborValue::toBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:240
// [8] double toDouble(double) const
// (12)qm2599589851 (27)_ZNK10QCborValue8toDoubleEd
//static
/*void qm2599589851(double defaultValue)*/ {
  double defaultValue = *(double*)this_;
  (void) ((QCborValue*)this_)->toDouble(defaultValue);
   auto xptr = (double (QCborValue::*)(double) const ) &QCborValue::toDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:278
// [1] bool operator==(const QCborValue &) const
// (11)qm807088413 (23)_ZNK10QCborValueeqERKS_
//static
/*void qm807088413(const QCborValue & other)*/ {
  const QCborValue & other = *(const QCborValue *)this_;
  (void) ((QCborValue*)this_)->operator==(other);
  // auto xptr = (bool (QCborValue::*)(QCborValue const&) const ) &QCborValue::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:280
// [1] bool operator!=(const QCborValue &) const
// (12)qm2858100074 (23)_ZNK10QCborValueneERKS_
//static
/*void qm2858100074(const QCborValue & other)*/ {
  const QCborValue & other = *(const QCborValue *)this_;
  (void) ((QCborValue*)this_)->operator!=(other);
  // auto xptr = (bool (QCborValue::*)(QCborValue const&) const ) &QCborValue::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:282
// [1] bool operator<(const QCborValue &) const
// (12)qm4115588477 (23)_ZNK10QCborValueltERKS_
//static
/*void qm4115588477(const QCborValue & other)*/ {
  const QCborValue & other = *(const QCborValue *)this_;
  (void) ((QCborValue*)this_)->operator<(other);
  // auto xptr = (bool (QCborValue::*)(QCborValue const&) const ) &QCborValue::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:294
// [24] QCborValue fromCbor(const char *, qsizetype, QCborParserError *) 
// (12)qm1118391018 (48)_ZN10QCborValue8fromCborEPKcxP16QCborParserError
//static
/*void qm1118391018(const char * data, long long len_, QCborParserError * error)*/ {
  const char * data = *(const char **)this_; long long len_ = *(long long*)this_; QCborParserError * error = *(QCborParserError **)this_;
  (void) QCborValue::fromCbor(data, len_, error);
   auto xptr = (QCborValue (*)(char const*, long long, QCborParserError*) ) &QCborValue::fromCbor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:296
// [24] QCborValue fromCbor(const quint8 *, qsizetype, QCborParserError *) 
// (11)qm474333567 (48)_ZN10QCborValue8fromCborEPKhxP16QCborParserError
//static
/*void qm474333567(const unsigned char * data, long long len_, QCborParserError * error)*/ {
  const unsigned char * data = *(const unsigned char **)this_; long long len_ = *(long long*)this_; QCborParserError * error = *(QCborParserError **)this_;
  (void) QCborValue::fromCbor(data, len_, error);
   auto xptr = (QCborValue (*)(unsigned char const*, long long, QCborParserError*) ) &QCborValue::fromCbor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qcborvalue
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
