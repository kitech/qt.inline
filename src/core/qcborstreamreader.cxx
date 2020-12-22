//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(cborstreamreader)
// /usr/include/qt/QtCore/qcborstreamreader.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborstreamreader.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborStreamReader is pure virtual: false false
// QCborStreamReader has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborstreamreader(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:98
// [-2] void QCborStreamReader() 
// (12)qm1536272578 (26)_ZN17QCborStreamReaderC2Ev
/*void* qm1536272578()*/{
  ;
  this_ = 0; // new QCborStreamReader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:99
// [-2] void QCborStreamReader(const char *, qsizetype) 
// (12)qm1696882173 (29)_ZN17QCborStreamReaderC2EPKcx
/*void* qm1696882173(const char * data, long long len_)*/{
  const char * data = *(const char **)this_; long long len_ = *(long long*)this_;
  this_ = 0; // new QCborStreamReader(data, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:100
// [-2] void QCborStreamReader(const quint8 *, qsizetype) 
// (12)qm2261812278 (29)_ZN17QCborStreamReaderC2EPKhx
/*void* qm2261812278(const unsigned char * data, long long len_)*/{
  const unsigned char * data = *(const unsigned char **)this_; long long len_ = *(long long*)this_;
  this_ = 0; // new QCborStreamReader(data, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:101
// [-2] void QCborStreamReader(const QByteArray &) 
// (12)qm2406362679 (39)_ZN17QCborStreamReaderC2ERK10QByteArray
/*void* qm2406362679(const QByteArray & data)*/{
  const QByteArray & data = *(const QByteArray *)this_;
  this_ = 0; // new QCborStreamReader(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:102
// [-2] void QCborStreamReader(QIODevice *) 
// (12)qm2792548386 (36)_ZN17QCborStreamReaderC2EP9QIODevice
/*void* qm2792548386(QIODevice * device)*/{
  QIODevice * device = *(QIODevice **)this_;
  this_ = 0; // new QCborStreamReader(device);
}

// Public inline Visibility=Default Availability=NotAvailable
// /usr/include/qt/QtCore/qcborstreamreader.h:104
// [-2] void QCborStreamReader(const QCborStreamReader &) 
// (12)qm3043038958 (29)_ZN17QCborStreamReaderC2ERKS_
/*void* qm3043038958(const QCborStreamReader & arg0)*/{
  const QCborStreamReader & arg0 = *(const QCborStreamReader *)this_;
  this_ = 0; // new QCborStreamReader(arg0);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:110
// [-2] void addData(const quint8 *, qsizetype) 
// (12)qm3810304315 (35)_ZN17QCborStreamReader7addDataEPKhx
//static
/*void qm3810304315(const unsigned char * data, long long len_)*/ {
  const unsigned char * data = *(const unsigned char **)this_; long long len_ = *(long long*)this_;
  (void) ((QCborStreamReader*)this_)->addData(data, len_);
   auto xptr = (void (QCborStreamReader::*)(unsigned char const*, long long) ) &QCborStreamReader::addData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:120
// [1] bool isValid() const
// (12)qm4143031647 (33)_ZNK17QCborStreamReader7isValidEv
//static
/*void qm4143031647()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isValid();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:127
// [1] QCborStreamReader::Type type() const
// (12)qm2411269613 (30)_ZNK17QCborStreamReader4typeEv
//static
/*void qm2411269613()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->type();
   auto xptr = (QCborStreamReader::Type (QCborStreamReader::*)() const ) &QCborStreamReader::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:128
// [1] bool isUnsignedInteger() const
// (12)qm1357184334 (44)_ZNK17QCborStreamReader17isUnsignedIntegerEv
//static
/*void qm1357184334()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isUnsignedInteger();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isUnsignedInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:129
// [1] bool isNegativeInteger() const
// (12)qm4028650977 (44)_ZNK17QCborStreamReader17isNegativeIntegerEv
//static
/*void qm4028650977()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isNegativeInteger();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isNegativeInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:130
// [1] bool isInteger() const
// (12)qm1848557129 (35)_ZNK17QCborStreamReader9isIntegerEv
//static
/*void qm1848557129()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isInteger();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:131
// [1] bool isByteArray() const
// (12)qm2274626361 (38)_ZNK17QCborStreamReader11isByteArrayEv
//static
/*void qm2274626361()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isByteArray();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isByteArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:132
// [1] bool isString() const
// (12)qm3883645886 (34)_ZNK17QCborStreamReader8isStringEv
//static
/*void qm3883645886()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isString();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:133
// [1] bool isArray() const
// (12)qm3746579973 (33)_ZNK17QCborStreamReader7isArrayEv
//static
/*void qm3746579973()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isArray();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:134
// [1] bool isMap() const
// (12)qm3731909521 (31)_ZNK17QCborStreamReader5isMapEv
//static
/*void qm3731909521()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isMap();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isMap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:135
// [1] bool isTag() const
// (12)qm2867407767 (31)_ZNK17QCborStreamReader5isTagEv
//static
/*void qm2867407767()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isTag();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isTag;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:136
// [1] bool isSimpleType() const
// (12)qm3514631759 (39)_ZNK17QCborStreamReader12isSimpleTypeEv
//static
/*void qm3514631759()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isSimpleType();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isSimpleType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:137
// [1] bool isFloat16() const
// (11)qm424062076 (35)_ZNK17QCborStreamReader9isFloat16Ev
//static
/*void qm424062076()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isFloat16();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isFloat16;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:138
// [1] bool isFloat() const
// (12)qm3011762944 (33)_ZNK17QCborStreamReader7isFloatEv
//static
/*void qm3011762944()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isFloat();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isFloat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:139
// [1] bool isDouble() const
// (11)qm931419892 (34)_ZNK17QCborStreamReader8isDoubleEv
//static
/*void qm931419892()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isDouble();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:140
// [1] bool isInvalid() const
// (12)qm1200471069 (35)_ZNK17QCborStreamReader9isInvalidEv
//static
/*void qm1200471069()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isInvalid();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isInvalid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:142
// [1] bool isSimpleType(QCborSimpleType) const
// (11)qm253190812 (55)_ZNK17QCborStreamReader12isSimpleTypeE15QCborSimpleType
//static
/*void qm253190812(QCborSimpleType st)*/ {
  QCborSimpleType st = *(QCborSimpleType*)this_;
  (void) ((QCborStreamReader*)this_)->isSimpleType(st);
   auto xptr = (bool (QCborStreamReader::*)(QCborSimpleType) const ) &QCborStreamReader::isSimpleType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:143
// [1] bool isFalse() const
// (12)qm2940855389 (33)_ZNK17QCborStreamReader7isFalseEv
//static
/*void qm2940855389()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isFalse();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isFalse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:144
// [1] bool isTrue() const
// (11)qm761182491 (32)_ZNK17QCborStreamReader6isTrueEv
//static
/*void qm761182491()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isTrue();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isTrue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:145
// [1] bool isBool() const
// (12)qm1356105690 (32)_ZNK17QCborStreamReader6isBoolEv
//static
/*void qm1356105690()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isBool();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:146
// [1] bool isNull() const
// (11)qm536045420 (32)_ZNK17QCborStreamReader6isNullEv
//static
/*void qm536045420()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isNull();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:147
// [1] bool isUndefined() const
// (11)qm879503916 (38)_ZNK17QCborStreamReader11isUndefinedEv
//static
/*void qm879503916()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isUndefined();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isUndefined;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:152
// [1] bool isContainer() const
// (12)qm1709053437 (38)_ZNK17QCborStreamReader11isContainerEv
//static
/*void qm1709053437()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->isContainer();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::isContainer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:153
// [1] bool enterContainer() 
// (12)qm1358907149 (40)_ZN17QCborStreamReader14enterContainerEv
//static
/*void qm1358907149()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->enterContainer();
   auto xptr = (bool (QCborStreamReader::*)() ) &QCborStreamReader::enterContainer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:156
// [16] StringResult<QString> readString() 
// (12)qm2992182287 (36)_ZN17QCborStreamReader10readStringEv
//static
/*void qm2992182287()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->readString();
   auto xptr = (QCborStreamReader::StringResult<QString> (QCborStreamReader::*)() ) &QCborStreamReader::readString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:157
// [16] StringResult<QByteArray> readByteArray() 
// (12)qm2224424303 (39)_ZN17QCborStreamReader13readByteArrayEv
//static
/*void qm2224424303()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->readByteArray();
   auto xptr = (QCborStreamReader::StringResult<QByteArray> (QCborStreamReader::*)() ) &QCborStreamReader::readByteArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:158
// [8] qsizetype currentStringChunkSize() const
// (12)qm4191155775 (49)_ZNK17QCborStreamReader22currentStringChunkSizeEv
//static
/*void qm4191155775()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->currentStringChunkSize();
   auto xptr = (long long (QCborStreamReader::*)() const ) &QCborStreamReader::currentStringChunkSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:161
// [1] bool toBool() const
// (11)qm387208602 (32)_ZNK17QCborStreamReader6toBoolEv
//static
/*void qm387208602()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toBool();
   auto xptr = (bool (QCborStreamReader::*)() const ) &QCborStreamReader::toBool;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:162
// [8] QCborTag toTag() const
// (12)qm3639874681 (31)_ZNK17QCborStreamReader5toTagEv
//static
/*void qm3639874681()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toTag();
   auto xptr = (QCborTag (QCborStreamReader::*)() const ) &QCborStreamReader::toTag;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:163
// [8] quint64 toUnsignedInteger() const
// (12)qm1188524905 (44)_ZNK17QCborStreamReader17toUnsignedIntegerEv
//static
/*void qm1188524905()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toUnsignedInteger();
   auto xptr = (unsigned long long (QCborStreamReader::*)() const ) &QCborStreamReader::toUnsignedInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:164
// [8] QCborNegativeInteger toNegativeInteger() const
// (12)qm3860061126 (44)_ZNK17QCborStreamReader17toNegativeIntegerEv
//static
/*void qm3860061126()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toNegativeInteger();
   auto xptr = (QCborNegativeInteger (QCborStreamReader::*)() const ) &QCborStreamReader::toNegativeInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:165
// [1] QCborSimpleType toSimpleType() const
// (11)qm780686681 (39)_ZNK17QCborStreamReader12toSimpleTypeEv
//static
/*void qm780686681()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toSimpleType();
   auto xptr = (QCborSimpleType (QCborStreamReader::*)() const ) &QCborStreamReader::toSimpleType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:166
// [2] qfloat16 toFloat16() const
// (12)qm1102464214 (35)_ZNK17QCborStreamReader9toFloat16Ev
//static
/*void qm1102464214()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toFloat16();
   auto xptr = (qfloat16 (QCborStreamReader::*)() const ) &QCborStreamReader::toFloat16;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:167
// [4] float toFloat() const
// (12)qm3306707522 (33)_ZNK17QCborStreamReader7toFloatEv
//static
/*void qm3306707522()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toFloat();
   auto xptr = (float (QCborStreamReader::*)() const ) &QCborStreamReader::toFloat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:168
// [8] double toDouble() const
// (12)qm2938170825 (34)_ZNK17QCborStreamReader8toDoubleEv
//static
/*void qm2938170825()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toDouble();
   auto xptr = (double (QCborStreamReader::*)() const ) &QCborStreamReader::toDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamreader.h:170
// [8] qint64 toInteger() const
// (11)qm920540899 (35)_ZNK17QCborStreamReader9toIntegerEv
//static
/*void qm920540899()*/ {
  ;
  (void) ((QCborStreamReader*)this_)->toInteger();
   auto xptr = (long long (QCborStreamReader::*)() const ) &QCborStreamReader::toInteger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qcborstreamreader
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(cborstreamreader)
#endif // #ifndef QT_MINIMAL
//  footer block end
