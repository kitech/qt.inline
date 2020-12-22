//  header block begin

// /usr/include/qt/QtCore/qcborvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborValueRef is pure virtual: false false
// QCborValueRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborValueRef_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborValueRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborValueRef_t qt_meta_stringdata_MyQCborValueRef = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQCborValueRef"
  },
  "MyQCborValueRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborValueRef[] = {
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
class Q_DECL_EXPORT MyQCborValueRef : public QCborValueRef {
public:
  virtual ~MyQCborValueRef() {}
// void QCborValueRef(const QCborValueRef &)
MyQCborValueRef(const QCborValueRef & arg0) : QCborValueRef(arg0) {}
// void QCborValueRef(QCborValueRef &&)
MyQCborValueRef(QCborValueRef && arg0) : QCborValueRef(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborvalueref(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:346
// [-2] void QCborValueRef(const QCborValueRef &) 
// (12)qm1083552198 (25)_ZN13QCborValueRefC2ERKS_
/*void* qm1083552198(const QCborValueRef & arg0)*/{
  const QCborValueRef & arg0 = *(const QCborValueRef *)this_;
  this_ =  new QCborValueRef(arg0);
  this_ =  new MyQCborValueRef(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:347
// [-2] void QCborValueRef(QCborValueRef &&) 
// (12)qm3666031810 (24)_ZN13QCborValueRefC2EOS_
/*void* qm3666031810(QCborValueRef && arg0)*/{
  QCborValueRef && arg0 =  static_cast<QCborValueRef &&>(*(QCborValueRef *)this_);
  this_ =  new QCborValueRef(arg0);
  this_ =  new MyQCborValueRef(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:348
// [16] QCborValueRef & operator=(const QCborValue &) 
// (12)qm2183874169 (35)_ZN13QCborValueRefaSERK10QCborValue
//static
/*void qm2183874169(const QCborValue & other)*/ {
  const QCborValue & other = *(const QCborValue *)this_;
  (void) ((QCborValueRef*)this_)->operator=(other);
  // auto xptr = (QCborValueRef & (QCborValueRef::*)(QCborValue const&) ) &QCborValueRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:350
// [16] QCborValueRef & operator=(QCborValue &&) 
// (12)qm1350749411 (34)_ZN13QCborValueRefaSEO10QCborValue
//static
/*void qm1350749411(QCborValue && other)*/ {
  QCborValue && other =  static_cast<QCborValue &&>(*(QCborValue *)this_);
  (void) ((QCborValueRef*)this_)->operator=(other);
  // auto xptr = (QCborValueRef & (QCborValueRef::*)(QCborValue&&) ) &QCborValueRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:352
// [16] QCborValueRef & operator=(const QCborValueRef &) 
// (12)qm3676259724 (25)_ZN13QCborValueRefaSERKS_
//static
/*void qm3676259724(const QCborValueRef & other)*/ {
  const QCborValueRef & other = *(const QCborValueRef *)this_;
  (void) ((QCborValueRef*)this_)->operator=(other);
  // auto xptr = (QCborValueRef & (QCborValueRef::*)(QCborValueRef const&) ) &QCborValueRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:355
// [4] QCborValue::Type type() const
// (12)qm3296553181 (26)_ZNK13QCborValueRef4typeEv
//static
/*void qm3296553181()*/ {
  ;
  (void) ((QCborValueRef*)this_)->type();
   auto xptr = (QCborValue::Type (QCborValueRef::*)() const ) &QCborValueRef::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:356
// [1] bool isInteger() const
// (12)qm1188866476 (31)_ZNK13QCborValueRef9isIntegerEv
//static
/*void qm1188866476()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isInteger();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:357
// [1] bool isByteArray() const
// (12)qm2123173628 (34)_ZNK13QCborValueRef11isByteArrayEv
//static
/*void qm2123173628()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isByteArray();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isByteArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:358
// [1] bool isString() const
// (11)qm399818886 (30)_ZNK13QCborValueRef8isStringEv
//static
/*void qm399818886()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isString();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:359
// [1] bool isArray() const
// (12)qm2142780053 (29)_ZNK13QCborValueRef7isArrayEv
//static
/*void qm2142780053()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isArray();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:360
// [1] bool isMap() const
// (12)qm4175601496 (27)_ZNK13QCborValueRef5isMapEv
//static
/*void qm4175601496()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isMap();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isMap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:361
// [1] bool isTag() const
// (12)qm2356928350 (27)_ZNK13QCborValueRef5isTagEv
//static
/*void qm2356928350()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isTag();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isTag;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:362
// [1] bool isFalse() const
// (11)qm262248653 (29)_ZNK13QCborValueRef7isFalseEv
//static
/*void qm262248653()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isFalse();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isFalse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:363
// [1] bool isTrue() const
// (12)qm3485487611 (28)_ZNK13QCborValueRef6isTrueEv
//static
/*void qm3485487611()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isTrue();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isTrue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:364
// [1] bool isBool() const
// (12)qm2991222586 (28)_ZNK13QCborValueRef6isBoolEv
//static
/*void qm2991222586()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isBool();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:365
// [1] bool isNull() const
// (12)qm4251815820 (28)_ZNK13QCborValueRef6isNullEv
//static
/*void qm4251815820()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isNull();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:366
// [1] bool isUndefined() const
// (12)qm3447009257 (34)_ZNK13QCborValueRef11isUndefinedEv
//static
/*void qm3447009257()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isUndefined();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isUndefined;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:367
// [1] bool isDouble() const
// (12)qm3341495756 (30)_ZNK13QCborValueRef8isDoubleEv
//static
/*void qm3341495756()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isDouble();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:368
// [1] bool isDateTime() const
// (12)qm1945352881 (33)_ZNK13QCborValueRef10isDateTimeEv
//static
/*void qm1945352881()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isDateTime();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isDateTime;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:369
// [1] bool isUrl() const
// (12)qm4293058942 (27)_ZNK13QCborValueRef5isUrlEv
//static
/*void qm4293058942()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isUrl();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isUrl;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:370
// [1] bool isRegularExpression() const
// (12)qm1833839352 (42)_ZNK13QCborValueRef19isRegularExpressionEv
//static
/*void qm1833839352()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isRegularExpression();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isRegularExpression;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:371
// [1] bool isUuid() const
// (12)qm2914114654 (28)_ZNK13QCborValueRef6isUuidEv
//static
/*void qm2914114654()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isUuid();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isUuid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:372
// [1] bool isInvalid() const
// (12)qm1870638072 (31)_ZNK13QCborValueRef9isInvalidEv
//static
/*void qm1870638072()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isInvalid();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isInvalid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:373
// [1] bool isContainer() const
// (12)qm2630291512 (34)_ZNK13QCborValueRef11isContainerEv
//static
/*void qm2630291512()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isContainer();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isContainer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:374
// [1] bool isSimpleType() const
// (11)qm982133109 (35)_ZNK13QCborValueRef12isSimpleTypeEv
//static
/*void qm982133109()*/ {
  ;
  (void) ((QCborValueRef*)this_)->isSimpleType();
   auto xptr = (bool (QCborValueRef::*)() const ) &QCborValueRef::isSimpleType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:378
// [1] bool isSimpleType(QCborSimpleType) const
// (12)qm2473645789 (51)_ZNK13QCborValueRef12isSimpleTypeE15QCborSimpleType
//static
/*void qm2473645789(QCborSimpleType st)*/ {
  QCborSimpleType st = *(QCborSimpleType*)this_;
  (void) ((QCborValueRef*)this_)->isSimpleType(st);
   auto xptr = (bool (QCborValueRef::*)(QCborSimpleType) const ) &QCborValueRef::isSimpleType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:383
// [8] QCborTag tag(QCborTag) const
// (11)qm816488507 (33)_ZNK13QCborValueRef3tagE8QCborTag
//static
/*void qm816488507(QCborTag defaultValue)*/ {
  QCborTag defaultValue = *(QCborTag*)this_;
  (void) ((QCborValueRef*)this_)->tag(defaultValue);
   auto xptr = (QCborTag (QCborValueRef::*)(QCborTag) const ) &QCborValueRef::tag;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:385
// [24] QCborValue taggedValue(const QCborValue &) const
// (12)qm2605695153 (47)_ZNK13QCborValueRef11taggedValueERK10QCborValue
//static
/*void qm2605695153(const QCborValue & defaultValue)*/ {
  const QCborValue & defaultValue = *(const QCborValue *)this_;
  (void) ((QCborValueRef*)this_)->taggedValue(defaultValue);
   auto xptr = (QCborValue (QCborValueRef::*)(QCborValue const&) const ) &QCborValueRef::taggedValue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:388
// [8] qint64 toInteger(qint64) const
// (12)qm4187253761 (31)_ZNK13QCborValueRef9toIntegerEx
//static
/*void qm4187253761(long long defaultValue)*/ {
  long long defaultValue = *(long long*)this_;
  (void) ((QCborValueRef*)this_)->toInteger(defaultValue);
   auto xptr = (long long (QCborValueRef::*)(long long) const ) &QCborValueRef::toInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:390
// [1] bool toBool(bool) const
// (12)qm4015024391 (28)_ZNK13QCborValueRef6toBoolEb
//static
/*void qm4015024391(bool defaultValue)*/ {
  bool defaultValue = *(bool*)this_;
  (void) ((QCborValueRef*)this_)->toBool(defaultValue);
   auto xptr = (bool (QCborValueRef::*)(bool) const ) &QCborValueRef::toBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:392
// [8] double toDouble(double) const
// (12)qm2889279417 (30)_ZNK13QCborValueRef8toDoubleEd
//static
/*void qm2889279417(double defaultValue)*/ {
  double defaultValue = *(double*)this_;
  (void) ((QCborValueRef*)this_)->toDouble(defaultValue);
   auto xptr = (double (QCborValueRef::*)(double) const ) &QCborValueRef::toDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:395
// [8] QByteArray toByteArray(const QByteArray &) const
// (12)qm1441921127 (47)_ZNK13QCborValueRef11toByteArrayERK10QByteArray
//static
/*void qm1441921127(const QByteArray & defaultValue)*/ {
  const QByteArray & defaultValue = *(const QByteArray *)this_;
  (void) ((QCborValueRef*)this_)->toByteArray(defaultValue);
   auto xptr = (QByteArray (QCborValueRef::*)(QByteArray const&) const ) &QCborValueRef::toByteArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:397
// [8] QString toString(const QString &) const
// (12)qm3867615525 (39)_ZNK13QCborValueRef8toStringERK7QString
//static
/*void qm3867615525(const QString & defaultValue)*/ {
  const QString & defaultValue = *(const QString *)this_;
  (void) ((QCborValueRef*)this_)->toString(defaultValue);
   auto xptr = (QString (QCborValueRef::*)(QString const&) const ) &QCborValueRef::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:399
// [8] QDateTime toDateTime(const QDateTime &) const
// (12)qm2265400639 (44)_ZNK13QCborValueRef10toDateTimeERK9QDateTime
//static
/*void qm2265400639(const QDateTime & defaultValue)*/ {
  const QDateTime & defaultValue = *(const QDateTime *)this_;
  (void) ((QCborValueRef*)this_)->toDateTime(defaultValue);
   auto xptr = (QDateTime (QCborValueRef::*)(QDateTime const&) const ) &QCborValueRef::toDateTime;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:402
// [8] QUrl toUrl(const QUrl &) const
// (12)qm3884888839 (33)_ZNK13QCborValueRef5toUrlERK4QUrl
//static
/*void qm3884888839(const QUrl & defaultValue)*/ {
  const QUrl & defaultValue = *(const QUrl *)this_;
  (void) ((QCborValueRef*)this_)->toUrl(defaultValue);
   auto xptr = (QUrl (QCborValueRef::*)(QUrl const&) const ) &QCborValueRef::toUrl;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:406
// [8] QRegularExpression toRegularExpression(const QRegularExpression &) const
// (12)qm4093837153 (63)_ZNK13QCborValueRef19toRegularExpressionERK18QRegularExpression
//static
/*void qm4093837153(const QRegularExpression & defaultValue)*/ {
  const QRegularExpression & defaultValue = *(const QRegularExpression *)this_;
  (void) ((QCborValueRef*)this_)->toRegularExpression(defaultValue);
   auto xptr = (QRegularExpression (QCborValueRef::*)(QRegularExpression const&) const ) &QCborValueRef::toRegularExpression;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:409
// [16] QUuid toUuid(const QUuid &) const
// (12)qm3607768176 (35)_ZNK13QCborValueRef6toUuidERK5QUuid
//static
/*void qm3607768176(const QUuid & defaultValue)*/ {
  const QUuid & defaultValue = *(const QUuid *)this_;
  (void) ((QCborValueRef*)this_)->toUuid(defaultValue);
   auto xptr = (QUuid (QCborValueRef::*)(QUuid const&) const ) &QCborValueRef::toUuid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:413
// [8] QCborArray toArray() const
// (11)qm153336791 (29)_ZNK13QCborValueRef7toArrayEv
//static
/*void qm153336791()*/ {
  ;
  (void) ((QCborValueRef*)this_)->toArray();
   auto xptr = (QCborArray (QCborValueRef::*)() const ) &QCborValueRef::toArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:414
// [8] QCborArray toArray(const QCborArray &) const
// (12)qm2858833644 (42)_ZNK13QCborValueRef7toArrayERK10QCborArray
//static
/*void qm2858833644(const QCborArray & a)*/ {
  const QCborArray & a = *(const QCborArray *)this_;
  (void) ((QCborValueRef*)this_)->toArray(a);
   auto xptr = (QCborArray (QCborValueRef::*)(QCborArray const&) const ) &QCborValueRef::toArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:415
// [8] QCborMap toMap() const
// (12)qm2332008630 (27)_ZNK13QCborValueRef5toMapEv
//static
/*void qm2332008630()*/ {
  ;
  (void) ((QCborValueRef*)this_)->toMap();
   auto xptr = (QCborMap (QCborValueRef::*)() const ) &QCborValueRef::toMap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:416
// [8] QCborMap toMap(const QCborMap &) const
// (12)qm1824214873 (37)_ZNK13QCborValueRef5toMapERK8QCborMap
//static
/*void qm1824214873(const QCborMap & m)*/ {
  const QCborMap & m = *(const QCborMap *)this_;
  (void) ((QCborValueRef*)this_)->toMap(m);
   auto xptr = (QCborMap (QCborValueRef::*)(QCborMap const&) const ) &QCborValueRef::toMap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:425
// [4] int compare(const QCborValue &) const
// (12)qm2795917738 (42)_ZNK13QCborValueRef7compareERK10QCborValue
//static
/*void qm2795917738(const QCborValue & other)*/ {
  const QCborValue & other = *(const QCborValue *)this_;
  (void) ((QCborValueRef*)this_)->compare(other);
   auto xptr = (int (QCborValueRef::*)(QCborValue const&) const ) &QCborValueRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:436
// [1] bool operator==(const QCborValue &) const
// (12)qm3787941261 (36)_ZNK13QCborValueRefeqERK10QCborValue
//static
/*void qm3787941261(const QCborValue & other)*/ {
  const QCborValue & other = *(const QCborValue *)this_;
  (void) ((QCborValueRef*)this_)->operator==(other);
  // auto xptr = (bool (QCborValueRef::*)(QCborValue const&) const ) &QCborValueRef::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:438
// [1] bool operator!=(const QCborValue &) const
// (12)qm1717240718 (36)_ZNK13QCborValueRefneERK10QCborValue
//static
/*void qm1717240718(const QCborValue & other)*/ {
  const QCborValue & other = *(const QCborValue *)this_;
  (void) ((QCborValueRef*)this_)->operator!=(other);
  // auto xptr = (bool (QCborValueRef::*)(QCborValue const&) const ) &QCborValueRef::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:440
// [1] bool operator<(const QCborValue &) const
// (12)qm4196940870 (36)_ZNK13QCborValueRefltERK10QCborValue
//static
/*void qm4196940870(const QCborValue & other)*/ {
  const QCborValue & other = *(const QCborValue *)this_;
  (void) ((QCborValueRef*)this_)->operator<(other);
  // auto xptr = (bool (QCborValueRef::*)(QCborValue const&) const ) &QCborValueRef::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:444
// [16] QVariant toVariant() const
// (12)qm4239074648 (31)_ZNK13QCborValueRef9toVariantEv
//static
/*void qm4239074648()*/ {
  ;
  (void) ((QCborValueRef*)this_)->toVariant();
   auto xptr = (QVariant (QCborValueRef::*)() const ) &QCborValueRef::toVariant;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:448
// [8] QByteArray toCbor(QCborValue::EncodingOptions) 
// (12)qm4090054703 (65)_ZN13QCborValueRef6toCborE6QFlagsIN10QCborValue14EncodingOptionEE
//static
/*void qm4090054703(QFlags<QCborValue::EncodingOption> opt)*/ {
  QFlags<QCborValue::EncodingOption> opt = *(QFlags<QCborValue::EncodingOption>*)this_;
  (void) ((QCborValueRef*)this_)->toCbor(opt);
   auto xptr = (QByteArray (QCborValueRef::*)(QFlags<QCborValue::EncodingOption>) ) &QCborValueRef::toCbor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:453
// [8] QString toDiagnosticNotation(QCborValue::DiagnosticNotationOptions) 
// (11)qm813108629 (90)_ZN13QCborValueRef20toDiagnosticNotationE6QFlagsIN10QCborValue24DiagnosticNotationOptionEE
//static
/*void qm813108629(QFlags<QCborValue::DiagnosticNotationOption> opt)*/ {
  QFlags<QCborValue::DiagnosticNotationOption> opt = *(QFlags<QCborValue::DiagnosticNotationOption>*)this_;
  (void) ((QCborValueRef*)this_)->toDiagnosticNotation(opt);
   auto xptr = (QString (QCborValueRef::*)(QFlags<QCborValue::DiagnosticNotationOption>) ) &QCborValueRef::toDiagnosticNotation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QCborValueRefD2Ev(void *this_)*/ {
  delete (QCborValueRef*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcborvalueref
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
