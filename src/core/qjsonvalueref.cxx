//  header block begin

// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValueRef is pure virtual: false false
// QJsonValueRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonValueRef_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonValueRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonValueRef_t qt_meta_stringdata_MyQJsonValueRef = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQJsonValueRef"
  },
  "MyQJsonValueRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonValueRef[] = {
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
class Q_DECL_EXPORT MyQJsonValueRef : public QJsonValueRef {
public:
  virtual ~MyQJsonValueRef() {}
// void QJsonValueRef(const QJsonValueRef &)
MyQJsonValueRef(const QJsonValueRef & arg0) : QJsonValueRef(arg0) {}
// void QJsonValueRef(QJsonArray *, int)
MyQJsonValueRef(QJsonArray * array, int idx) : QJsonValueRef(array, idx) {}
// void QJsonValueRef(QJsonObject *, int)
MyQJsonValueRef(QJsonObject * object, int idx) : QJsonValueRef(object, idx) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonvalueref(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:161
// [-2] void QJsonValueRef(const QJsonValueRef &) 
// (11)qm505555892 (25)_ZN13QJsonValueRefC2ERKS_
/*void* qm505555892(const QJsonValueRef & arg0)*/{
  const QJsonValueRef & arg0 = *(const QJsonValueRef *)this_;
  this_ =  new QJsonValueRef(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:162
// [-2] void QJsonValueRef(QJsonArray *, int) 
// (11)qm330089457 (35)_ZN13QJsonValueRefC2EP10QJsonArrayi
/*void* qm330089457(QJsonArray * array, int idx)*/{
  QJsonArray * array = *(QJsonArray **)this_; int idx = *(int*)this_;
  this_ =  new QJsonValueRef(array, idx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:164
// [-2] void QJsonValueRef(QJsonObject *, int) 
// (12)qm2476079573 (36)_ZN13QJsonValueRefC2EP11QJsonObjecti
/*void* qm2476079573(QJsonObject * object, int idx)*/{
  QJsonObject * object = *(QJsonObject **)this_; int idx = *(int*)this_;
  this_ =  new QJsonValueRef(object, idx);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:172
// [4] QJsonValue::Type type() const
// (12)qm2596991663 (26)_ZNK13QJsonValueRef4typeEv
//static
/*void qm2596991663()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->type();
   auto xptr = (QJsonValue::Type (QJsonValueRef::*)() const ) &QJsonValueRef::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:173
// [1] bool isNull() const
// (12)qm4039028757 (28)_ZNK13QJsonValueRef6isNullEv
//static
/*void qm4039028757()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->isNull();
   auto xptr = (bool (QJsonValueRef::*)() const ) &QJsonValueRef::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:174
// [1] bool isBool() const
// (12)qm3214495907 (28)_ZNK13QJsonValueRef6isBoolEv
//static
/*void qm3214495907()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->isBool();
   auto xptr = (bool (QJsonValueRef::*)() const ) &QJsonValueRef::isBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:175
// [1] bool isDouble() const
// (12)qm3519954033 (30)_ZNK13QJsonValueRef8isDoubleEv
//static
/*void qm3519954033()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->isDouble();
   auto xptr = (bool (QJsonValueRef::*)() const ) &QJsonValueRef::isDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:176
// [1] bool isString() const
// (10)qm20042043 (30)_ZNK13QJsonValueRef8isStringEv
//static
/*void qm20042043()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->isString();
   auto xptr = (bool (QJsonValueRef::*)() const ) &QJsonValueRef::isString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:177
// [1] bool isArray() const
// (12)qm4133929546 (29)_ZNK13QJsonValueRef7isArrayEv
//static
/*void qm4133929546()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->isArray();
   auto xptr = (bool (QJsonValueRef::*)() const ) &QJsonValueRef::isArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:178
// [1] bool isObject() const
// (12)qm3897881768 (30)_ZNK13QJsonValueRef8isObjectEv
//static
/*void qm3897881768()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->isObject();
   auto xptr = (bool (QJsonValueRef::*)() const ) &QJsonValueRef::isObject;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:179
// [1] bool isUndefined() const
// (12)qm3897868817 (34)_ZNK13QJsonValueRef11isUndefinedEv
//static
/*void qm3897868817()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->isUndefined();
   auto xptr = (bool (QJsonValueRef::*)() const ) &QJsonValueRef::isUndefined;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:181
// [1] bool toBool() const
// (12)qm4166615779 (28)_ZNK13QJsonValueRef6toBoolEv
//static
/*void qm4166615779()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->toBool();
   auto xptr = (bool (QJsonValueRef::*)() const ) &QJsonValueRef::toBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:182
// [4] int toInt() const
// (12)qm2655000950 (27)_ZNK13QJsonValueRef5toIntEv
//static
/*void qm2655000950()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->toInt();
   auto xptr = (int (QJsonValueRef::*)() const ) &QJsonValueRef::toInt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:183
// [8] double toDouble() const
// (12)qm1231718220 (30)_ZNK13QJsonValueRef8toDoubleEv
//static
/*void qm1231718220()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->toDouble();
   auto xptr = (double (QJsonValueRef::*)() const ) &QJsonValueRef::toDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:184
// [8] QString toString() const
// (12)qm2576706054 (30)_ZNK13QJsonValueRef8toStringEv
//static
/*void qm2576706054()*/ {
  ;
  (void) ((QJsonValueRef*)this_)->toString();
   auto xptr = (QString (QJsonValueRef::*)() const ) &QJsonValueRef::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:189
// [1] bool toBool(bool) const
// (12)qm3800258206 (28)_ZNK13QJsonValueRef6toBoolEb
//static
/*void qm3800258206(bool defaultValue)*/ {
  bool defaultValue = *(bool*)this_;
  (void) ((QJsonValueRef*)this_)->toBool(defaultValue);
   auto xptr = (bool (QJsonValueRef::*)(bool) const ) &QJsonValueRef::toBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:190
// [4] int toInt(int) const
// (11)qm323490947 (27)_ZNK13QJsonValueRef5toIntEi
//static
/*void qm323490947(int defaultValue)*/ {
  int defaultValue = *(int*)this_;
  (void) ((QJsonValueRef*)this_)->toInt(defaultValue);
   auto xptr = (int (QJsonValueRef::*)(int) const ) &QJsonValueRef::toInt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:191
// [8] double toDouble(double) const
// (12)qm3134453252 (30)_ZNK13QJsonValueRef8toDoubleEd
//static
/*void qm3134453252(double defaultValue)*/ {
  double defaultValue = *(double*)this_;
  (void) ((QJsonValueRef*)this_)->toDouble(defaultValue);
   auto xptr = (double (QJsonValueRef::*)(double) const ) &QJsonValueRef::toDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:192
// [8] QString toString(const QString &) const
// (12)qm1806327660 (39)_ZNK13QJsonValueRef8toStringERK7QString
//static
/*void qm1806327660(const QString & defaultValue)*/ {
  const QString & defaultValue = *(const QString *)this_;
  (void) ((QJsonValueRef*)this_)->toString(defaultValue);
   auto xptr = (QString (QJsonValueRef::*)(QString const&) const ) &QJsonValueRef::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:194
// [1] bool operator==(const QJsonValue &) const
// (12)qm2344612050 (36)_ZNK13QJsonValueRefeqERK10QJsonValue
//static
/*void qm2344612050(const QJsonValue & other)*/ {
  const QJsonValue & other = *(const QJsonValue *)this_;
  (void) ((QJsonValueRef*)this_)->operator==(other);
  // auto xptr = (bool (QJsonValueRef::*)(QJsonValue const&) const ) &QJsonValueRef::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:195
// [1] bool operator!=(const QJsonValue &) const
// (11)qm203658961 (36)_ZNK13QJsonValueRefneERK10QJsonValue
//static
/*void qm203658961(const QJsonValue & other)*/ {
  const QJsonValue & other = *(const QJsonValue *)this_;
  (void) ((QJsonValueRef*)this_)->operator!=(other);
  // auto xptr = (bool (QJsonValueRef::*)(QJsonValue const&) const ) &QJsonValueRef::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QJsonValueRefD2Ev(void *this_)*/ {
  delete (QJsonValueRef*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsonvalueref
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
