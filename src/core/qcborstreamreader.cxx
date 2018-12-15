//  header block begin

// since 0x050c00
// /usr/include/qt/QtCore/qcborstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborStreamReader is pure virtual: false
// QCborStreamReader has virtual projected: false
//  header block end

//  main block begin


// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:155
// [-2] void QCborStreamReader()
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamReaderC2Ev() {
  return 0; // new QCborStreamReader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:156
// [-2] void QCborStreamReader(const char *, qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamReaderC2EPKcx(const char * data, qsizetype len_) {
  return 0; // new QCborStreamReader(data, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:157
// [-2] void QCborStreamReader(const quint8 *, qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamReaderC2EPKhx(const quint8 * data, qsizetype len_) {
  return 0; // new QCborStreamReader(data, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:158
// [-2] void QCborStreamReader(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamReaderC2ERK10QByteArray(QByteArray* data) {
  return 0; // new QCborStreamReader(*data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:159
// [-2] void QCborStreamReader(QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamReaderC2EP9QIODevice(QIODevice * device) {
  return 0; // new QCborStreamReader(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:160
// [-2] void ~QCborStreamReader()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReaderD2Ev(void *this_) {
  delete (QCborStreamReader*)(this_);
}
// Public inline Visibility=Default Availability=NotAvailable
// /usr/include/qt/QtCore/qcborstream.h:161
// [-2] void QCborStreamReader(const QCborStreamReader &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamReaderC2ERKS_(QCborStreamReader* arg0) {
  return 0; // new QCborStreamReader(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:163
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QCborStreamReader*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:164
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QCborStreamReader6deviceEv(void *this_) {
  return (void*)((QCborStreamReader*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:165
// [-2] void addData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader7addDataERK10QByteArray(void *this_, QByteArray* data) {
  ((QCborStreamReader*)this_)->addData(*data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:166
// [-2] void addData(const char *, qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader7addDataEPKcx(void *this_, const char * data, qsizetype len_) {
  ((QCborStreamReader*)this_)->addData(data, len_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:167
// [-2] void addData(const quint8 *, qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader7addDataEPKhx(void *this_, const quint8 * data, qsizetype len_) {
  ((QCborStreamReader*)this_)->addData(data, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:169
// [-2] void reparse()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader7reparseEv(void *this_) {
  ((QCborStreamReader*)this_)->reparse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:170
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader5clearEv(void *this_) {
  ((QCborStreamReader*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:171
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader5resetEv(void *this_) {
  ((QCborStreamReader*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:173
// [4] QCborError lastError()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader9lastErrorEv(void *this_) {
  auto rv = ((QCborStreamReader*)this_)->lastError();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:175
// [8] qint64 currentOffset()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK17QCborStreamReader13currentOffsetEv(void *this_) {
  return (qint64)((QCborStreamReader*)this_)->currentOffset();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:177
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader7isValidEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:179
// [4] int containerDepth()
extern "C" Q_DECL_EXPORT
int C_ZNK17QCborStreamReader14containerDepthEv(void *this_) {
  return (int)((QCborStreamReader*)this_)->containerDepth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:180
// [1] QCborStreamReader::Type parentContainerType()
extern "C" Q_DECL_EXPORT
QCborStreamReader::Type C_ZNK17QCborStreamReader19parentContainerTypeEv(void *this_) {
  return (QCborStreamReader::Type)((QCborStreamReader*)this_)->parentContainerType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:181
// [1] bool hasNext()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader7hasNextEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->hasNext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:182
// [1] bool next(int)
extern "C" Q_DECL_EXPORT
bool C_ZN17QCborStreamReader4nextEi(void *this_, int maxRecursion) {
  return (bool)((QCborStreamReader*)this_)->next(maxRecursion);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:184
// [1] QCborStreamReader::Type type()
extern "C" Q_DECL_EXPORT
QCborStreamReader::Type C_ZNK17QCborStreamReader4typeEv(void *this_) {
  return (QCborStreamReader::Type)((QCborStreamReader*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:185
// [1] bool isUnsignedInteger()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader17isUnsignedIntegerEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isUnsignedInteger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:186
// [1] bool isNegativeInteger()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader17isNegativeIntegerEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isNegativeInteger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:187
// [1] bool isInteger()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader9isIntegerEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isInteger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:188
// [1] bool isByteArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader11isByteArrayEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isByteArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:189
// [1] bool isString()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader8isStringEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isString();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:190
// [1] bool isArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader7isArrayEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:191
// [1] bool isMap()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader5isMapEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isMap();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:192
// [1] bool isTag()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader5isTagEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isTag();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:193
// [1] bool isSimpleType()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader12isSimpleTypeEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isSimpleType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:194
// [1] bool isFloat16()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader9isFloat16Ev(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isFloat16();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:195
// [1] bool isFloat()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader7isFloatEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isFloat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:196
// [1] bool isDouble()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader8isDoubleEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:197
// [1] bool isInvalid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader9isInvalidEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isInvalid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:199
// [1] bool isSimpleType(QCborSimpleType)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader12isSimpleTypeE15QCborSimpleType(void *this_, QCborSimpleType st) {
  return (bool)((QCborStreamReader*)this_)->isSimpleType(st);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:200
// [1] bool isFalse()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader7isFalseEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isFalse();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:201
// [1] bool isTrue()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader6isTrueEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isTrue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:202
// [1] bool isBool()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader6isBoolEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:203
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader6isNullEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:204
// [1] bool isUndefined()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader11isUndefinedEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isUndefined();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:206
// [1] bool isLengthKnown()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader13isLengthKnownEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isLengthKnown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:207
// [8] quint64 length()
extern "C" Q_DECL_EXPORT
quint64 C_ZNK17QCborStreamReader6lengthEv(void *this_) {
  return (quint64)((QCborStreamReader*)this_)->length();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:209
// [1] bool isContainer()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader11isContainerEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->isContainer();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:210
// [1] bool enterContainer()
extern "C" Q_DECL_EXPORT
bool C_ZN17QCborStreamReader14enterContainerEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->enterContainer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:211
// [1] bool leaveContainer()
extern "C" Q_DECL_EXPORT
bool C_ZN17QCborStreamReader14leaveContainerEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->leaveContainer();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:213
// [16] StringResult<QString> readString()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader10readStringEv(void *this_) {
  auto rv = ((QCborStreamReader*)this_)->readString();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:214
// [16] StringResult<QByteArray> readByteArray()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader13readByteArrayEv(void *this_) {
  auto rv = ((QCborStreamReader*)this_)->readByteArray();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:215
// [8] qsizetype currentStringChunkSize()
extern "C" Q_DECL_EXPORT
qsizetype C_ZNK17QCborStreamReader22currentStringChunkSizeEv(void *this_) {
  return (qsizetype)((QCborStreamReader*)this_)->currentStringChunkSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:216
// [-2] StringResult<qsizetype> readStringChunk(char *, qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamReader15readStringChunkEPcx(void *this_, char * ptr, qsizetype maxlen) {
  auto rv = ((QCborStreamReader*)this_)->readStringChunk(ptr, maxlen);
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:218
// [1] bool toBool()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QCborStreamReader6toBoolEv(void *this_) {
  return (bool)((QCborStreamReader*)this_)->toBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:219
// [8] QCborTag toTag()
extern "C" Q_DECL_EXPORT
QCborTag C_ZNK17QCborStreamReader5toTagEv(void *this_) {
  return (QCborTag)((QCborStreamReader*)this_)->toTag();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:220
// [8] quint64 toUnsignedInteger()
extern "C" Q_DECL_EXPORT
quint64 C_ZNK17QCborStreamReader17toUnsignedIntegerEv(void *this_) {
  return (quint64)((QCborStreamReader*)this_)->toUnsignedInteger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:221
// [8] QCborNegativeInteger toNegativeInteger()
extern "C" Q_DECL_EXPORT
QCborNegativeInteger C_ZNK17QCborStreamReader17toNegativeIntegerEv(void *this_) {
  return (QCborNegativeInteger)((QCborStreamReader*)this_)->toNegativeInteger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:222
// [1] QCborSimpleType toSimpleType()
extern "C" Q_DECL_EXPORT
QCborSimpleType C_ZNK17QCborStreamReader12toSimpleTypeEv(void *this_) {
  return (QCborSimpleType)((QCborStreamReader*)this_)->toSimpleType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:223
// [2] qfloat16 toFloat16()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QCborStreamReader9toFloat16Ev(void *this_) {
  auto rv = ((QCborStreamReader*)this_)->toFloat16();
return new qfloat16(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:224
// [4] float toFloat()
extern "C" Q_DECL_EXPORT
float C_ZNK17QCborStreamReader7toFloatEv(void *this_) {
  return (float)((QCborStreamReader*)this_)->toFloat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:225
// [8] double toDouble()
extern "C" Q_DECL_EXPORT
double C_ZNK17QCborStreamReader8toDoubleEv(void *this_) {
  return (double)((QCborStreamReader*)this_)->toDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:227
// [8] qint64 toInteger()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK17QCborStreamReader9toIntegerEv(void *this_) {
  return (qint64)((QCborStreamReader*)this_)->toInteger();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
