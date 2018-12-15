//  header block begin

// since 0x050c00
// /usr/include/qt/QtCore/qcborarray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborArray is pure virtual: false
// QCborArray has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborArray_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborArray_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborArray_t qt_meta_stringdata_MyQCborArray = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQCborArray"
  },
  "MyQCborArray"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborArray[] = {
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
class Q_DECL_EXPORT MyQCborArray : public QCborArray {
public:
  virtual ~MyQCborArray() {}
// void QCborArray()
MyQCborArray() : QCborArray() {}
// void QCborArray(const QCborArray &)
MyQCborArray(const QCborArray & other) : QCborArray(other) {}
// void QCborArray(std::initializer_list<QCborValue>)
MyQCborArray(std::initializer_list<QCborValue> args) : QCborArray(args) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:162
// [-2] void QCborArray()
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArrayC2Ev() {
  return  new QCborArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:163
// [-2] void QCborArray(const QCborArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArrayC2ERKS_(QCborArray* other) {
  return  new QCborArray(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:164
// [8] QCborArray & operator=(const QCborArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArrayaSERKS_(void *this_, QCborArray* other) {
  auto& rv = ((QCborArray*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:165
// [-2] void QCborArray(std::initializer_list<QCborValue>)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArrayC2ESt16initializer_listI10QCborValueE(std::initializer_list<QCborValue> args) {
  return  new QCborArray(args);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:172
// [-2] void ~QCborArray()
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArrayD2Ev(void *this_) {
  delete (QCborArray*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:174
// [-2] void swap(QCborArray &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray4swapERS_(void *this_, QCborArray* other) {
  ((QCborArray*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:179
// [24] QCborValue toCborValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborArray11toCborValueEv(void *this_) {
  auto rv = ((QCborArray*)this_)->toCborValue();
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:181
// [8] qsizetype size()
extern "C" Q_DECL_EXPORT
qsizetype C_ZNK10QCborArray4sizeEv(void *this_) {
  return (qsizetype)((QCborArray*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:182
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborArray7isEmptyEv(void *this_) {
  return (bool)((QCborArray*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:183
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray5clearEv(void *this_) {
  ((QCborArray*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:185
// [24] QCborValue at(qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborArray2atEx(void *this_, qsizetype i) {
  auto rv = ((QCborArray*)this_)->at(i);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:186
// [24] QCborValue first()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborArray5firstEv(void *this_) {
  auto rv = ((QCborArray*)this_)->first();
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:187
// [24] QCborValue last()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborArray4lastEv(void *this_) {
  auto rv = ((QCborArray*)this_)->last();
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:188
// [24] const QCborValue operator[](qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborArrayixEx(void *this_, qsizetype i) {
  auto rv = ((QCborArray*)this_)->operator[](i);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:189
// [16] QCborValueRef first()
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray5firstEv(void *this_) {
  auto rv = ((QCborArray*)this_)->first();
return new QCborValueRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:190
// [16] QCborValueRef last()
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray4lastEv(void *this_) {
  auto rv = ((QCborArray*)this_)->last();
return new QCborValueRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:191
// [16] QCborValueRef operator[](qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArrayixEx(void *this_, qsizetype i) {
  auto rv = ((QCborArray*)this_)->operator[](i);
return new QCborValueRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:198
// [-2] void insert(qsizetype, const QCborValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray6insertExRK10QCborValue(void *this_, qsizetype i, QCborValue* value) {
  ((QCborArray*)this_)->insert(i, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:199
// [-2] void insert(qsizetype, QCborValue &&)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray6insertExO10QCborValue(void *this_, qsizetype i, QCborValue && value) {
  ((QCborArray*)this_)->insert(i, value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:200
// [-2] void prepend(const QCborValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray7prependERK10QCborValue(void *this_, QCborValue* value) {
  ((QCborArray*)this_)->prepend(*value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:201
// [-2] void prepend(QCborValue &&)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray7prependEO10QCborValue(void *this_, QCborValue && value) {
  ((QCborArray*)this_)->prepend(value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:202
// [-2] void append(const QCborValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray6appendERK10QCborValue(void *this_, QCborValue* value) {
  ((QCborArray*)this_)->append(*value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:203
// [-2] void append(QCborValue &&)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray6appendEO10QCborValue(void *this_, QCborValue && value) {
  ((QCborArray*)this_)->append(value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:204
// [24] QCborValue extract(QCborArray::ConstIterator)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray7extractENS_13ConstIteratorE(void *this_, QCborArray::ConstIterator* it) {
  auto rv = ((QCborArray*)this_)->extract(*it);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:205
// [24] QCborValue extract(QCborArray::Iterator)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray7extractENS_8IteratorE(void *this_, QCborArray::Iterator* it) {
  auto rv = ((QCborArray*)this_)->extract(*it);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:206
// [-2] void removeAt(qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray8removeAtEx(void *this_, qsizetype i) {
  ((QCborArray*)this_)->removeAt(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:207
// [24] QCborValue takeAt(qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray6takeAtEx(void *this_, qsizetype i) {
  auto rv = ((QCborArray*)this_)->takeAt(i);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:208
// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray11removeFirstEv(void *this_) {
  ((QCborArray*)this_)->removeFirst();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:209
// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray10removeLastEv(void *this_) {
  ((QCborArray*)this_)->removeLast();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:210
// [24] QCborValue takeFirst()
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray9takeFirstEv(void *this_) {
  auto rv = ((QCborArray*)this_)->takeFirst();
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:211
// [24] QCborValue takeLast()
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray8takeLastEv(void *this_) {
  auto rv = ((QCborArray*)this_)->takeLast();
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:213
// [1] bool contains(const QCborValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborArray8containsERK10QCborValue(void *this_, QCborValue* value) {
  return (bool)((QCborArray*)this_)->contains(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:215
// [4] int compare(const QCborArray &)
extern "C" Q_DECL_EXPORT
int C_ZNK10QCborArray7compareERKS_(void *this_, QCborArray* other) {
  return (int)((QCborArray*)this_)->compare(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:225
// [1] bool operator==(const QCborArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborArrayeqERKS_(void *this_, QCborArray* other) {
  return (bool)((QCborArray*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:227
// [1] bool operator!=(const QCborArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborArrayneERKS_(void *this_, QCborArray* other) {
  return (bool)((QCborArray*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:229
// [1] bool operator<(const QCborArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborArrayltERKS_(void *this_, QCborArray* other) {
  return (bool)((QCborArray*)this_)->operator<(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:235
// [16] QCborArray::iterator begin()
extern "C" Q_DECL_EXPORT
QCborArray::iterator* C_ZN10QCborArray5beginEv(void *this_) {
  auto rv = ((QCborArray*)this_)->begin();
return new QCborArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:236
// [16] QCborArray::const_iterator constBegin()
extern "C" Q_DECL_EXPORT
QCborArray::const_iterator* C_ZNK10QCborArray10constBeginEv(void *this_) {
  auto rv = ((QCborArray*)this_)->constBegin();
return new QCborArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:237
// [16] QCborArray::const_iterator begin()
extern "C" Q_DECL_EXPORT
QCborArray::const_iterator* C_ZNK10QCborArray5beginEv(void *this_) {
  auto rv = ((QCborArray*)this_)->constBegin();
return new QCborArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:238
// [16] QCborArray::const_iterator cbegin()
extern "C" Q_DECL_EXPORT
QCborArray::const_iterator* C_ZNK10QCborArray6cbeginEv(void *this_) {
  auto rv = ((QCborArray*)this_)->cbegin();
return new QCborArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:239
// [16] QCborArray::iterator end()
extern "C" Q_DECL_EXPORT
QCborArray::iterator* C_ZN10QCborArray3endEv(void *this_) {
  auto rv = ((QCborArray*)this_)->end();
return new QCborArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:240
// [16] QCborArray::const_iterator constEnd()
extern "C" Q_DECL_EXPORT
QCborArray::const_iterator* C_ZNK10QCborArray8constEndEv(void *this_) {
  auto rv = ((QCborArray*)this_)->constEnd();
return new QCborArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:241
// [16] QCborArray::const_iterator end()
extern "C" Q_DECL_EXPORT
QCborArray::const_iterator* C_ZNK10QCborArray3endEv(void *this_) {
  auto rv = ((QCborArray*)this_)->constEnd();
return new QCborArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:242
// [16] QCborArray::const_iterator cend()
extern "C" Q_DECL_EXPORT
QCborArray::const_iterator* C_ZNK10QCborArray4cendEv(void *this_) {
  auto rv = ((QCborArray*)this_)->cend();
return new QCborArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:243
// [16] QCborArray::iterator insert(QCborArray::iterator, const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborArray::iterator* C_ZN10QCborArray6insertENS_8IteratorERK10QCborValue(void *this_, QCborArray::iterator before, QCborValue* value) {
  auto rv = ((QCborArray*)this_)->insert(before, *value);
return new QCborArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:245
// [16] QCborArray::iterator insert(QCborArray::const_iterator, const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborArray::iterator* C_ZN10QCborArray6insertENS_13ConstIteratorERK10QCborValue(void *this_, QCborArray::const_iterator before, QCborValue* value) {
  auto rv = ((QCborArray*)this_)->insert(before, *value);
return new QCborArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:247
// [16] QCborArray::iterator erase(QCborArray::iterator)
extern "C" Q_DECL_EXPORT
QCborArray::iterator* C_ZN10QCborArray5eraseENS_8IteratorE(void *this_, QCborArray::iterator it) {
  auto rv = ((QCborArray*)this_)->erase(it);
return new QCborArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:248
// [16] QCborArray::iterator erase(QCborArray::const_iterator)
extern "C" Q_DECL_EXPORT
QCborArray::iterator* C_ZN10QCborArray5eraseENS_13ConstIteratorE(void *this_, QCborArray::const_iterator it) {
  auto rv = ((QCborArray*)this_)->erase(it);
return new QCborArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:250
// [-2] void push_back(const QCborValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray9push_backERK10QCborValue(void *this_, QCborValue* t) {
  ((QCborArray*)this_)->push_back(*t);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:251
// [-2] void push_front(const QCborValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray10push_frontERK10QCborValue(void *this_, QCborValue* t) {
  ((QCborArray*)this_)->push_front(*t);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:252
// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray9pop_frontEv(void *this_) {
  ((QCborArray*)this_)->pop_front();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:253
// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_ZN10QCborArray8pop_backEv(void *this_) {
  ((QCborArray*)this_)->pop_back();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:254
// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborArray5emptyEv(void *this_) {
  return (bool)((QCborArray*)this_)->empty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:257
// [8] QCborArray operator+(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborArrayplERK10QCborValue(void *this_, QCborValue* v) {
  auto rv = ((QCborArray*)this_)->operator+(*v);
return new QCborArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:259
// [8] QCborArray & operator+=(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArraypLERK10QCborValue(void *this_, QCborValue* v) {
  auto& rv = ((QCborArray*)this_)->operator+=(*v);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:261
// [8] QCborArray & operator<<(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArraylsERK10QCborValue(void *this_, QCborValue* v) {
  auto& rv = ((QCborArray*)this_)->operator<<(*v);
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:264
// [8] QCborArray fromStringList(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray14fromStringListERK11QStringList(QStringList* list) {
  auto rv = QCborArray::fromStringList(*list);
return new QCborArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:265
// [8] QCborArray fromVariantList(const QVariantList &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray15fromVariantListERK5QListI8QVariantE(const QVariantList & list) {
  auto rv = QCborArray::fromVariantList(list);
return new QCborArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:266
// [8] QCborArray fromJsonArray(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborArray13fromJsonArrayERK10QJsonArray(QJsonArray* array) {
  auto rv = QCborArray::fromJsonArray(*array);
return new QCborArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:267
// [8] QVariantList toVariantList()
extern "C" Q_DECL_EXPORT
QVariantList* C_ZNK10QCborArray13toVariantListEv(void *this_) {
  auto rv = ((QCborArray*)this_)->toVariantList();
return new QVariantList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:268
// [16] QJsonArray toJsonArray()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborArray11toJsonArrayEv(void *this_) {
  auto rv = ((QCborArray*)this_)->toJsonArray();
return new QJsonArray(rv);
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
