//  header block begin

// since 0x050c00
// /usr/include/qt/QtCore/qcbormap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcbormap.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborMap is pure virtual: false
// QCborMap has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborMap_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborMap_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborMap_t qt_meta_stringdata_MyQCborMap = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQCborMap"
  },
  "MyQCborMap"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborMap[] = {
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
class Q_DECL_EXPORT MyQCborMap : public QCborMap {
public:
  virtual ~MyQCborMap() {}
// void QCborMap()
MyQCborMap() : QCborMap() {}
// void QCborMap(const QCborMap &)
MyQCborMap(const QCborMap & other) : QCborMap(other) {}
// void QCborMap(std::initializer_list<value_type>)
MyQCborMap(std::initializer_list<value_type> args) : QCborMap(args) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:166
// [-2] void QCborMap()
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMapC2Ev() {
  return  new QCborMap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:167
// [-2] void QCborMap(const QCborMap &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMapC2ERKS_(QCborMap* other) {
  return  new QCborMap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:168
// [8] QCborMap & operator=(const QCborMap &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMapaSERKS_(void *this_, QCborMap* other) {
  auto& rv = ((QCborMap*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:169
// [-2] void QCborMap(std::initializer_list<value_type>)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMapC2ESt16initializer_listI5QPairI10QCborValueS2_EE(std::initializer_list<QPair<QCborValue, QCborValue> > args) {
  return  new QCborMap(args);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:176
// [-2] void ~QCborMap()
extern "C" Q_DECL_EXPORT
void C_ZN8QCborMapD2Ev(void *this_) {
  delete (QCborMap*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:178
// [-2] void swap(QCborMap &)
extern "C" Q_DECL_EXPORT
void C_ZN8QCborMap4swapERS_(void *this_, QCborMap* other) {
  ((QCborMap*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:183
// [24] QCborValue toCborValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMap11toCborValueEv(void *this_) {
  auto rv = ((QCborMap*)this_)->toCborValue();
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:185
// [8] qsizetype size()
extern "C" Q_DECL_EXPORT
qsizetype C_ZNK8QCborMap4sizeEv(void *this_) {
  return (qsizetype)((QCborMap*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:186
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMap7isEmptyEv(void *this_) {
  return (bool)((QCborMap*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:187
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN8QCborMap5clearEv(void *this_) {
  ((QCborMap*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:188
// [-2] QVector<QCborValue> keys()
extern "C" Q_DECL_EXPORT
void C_ZNK8QCborMap4keysEv(void *this_) {
  auto rv = ((QCborMap*)this_)->keys();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:190
// [24] QCborValue value(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMap5valueEx(void *this_, qint64 key) {
  auto rv = ((QCborMap*)this_)->value(key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:192
// [24] QCborValue value(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMap5valueE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QCborMap*)this_)->value(*key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:194
// [24] QCborValue value(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMap5valueERK7QString(void *this_, QString* key) {
  auto rv = ((QCborMap*)this_)->value(*key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:196
// [24] QCborValue value(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMap5valueERK10QCborValue(void *this_, QCborValue* key) {
  auto rv = ((QCborMap*)this_)->value(*key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:202
// [24] const QCborValue operator[](qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMapixEx(void *this_, qint64 key) {
  auto rv = ((QCborMap*)this_)->operator[](key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:204
// [24] const QCborValue operator[](QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMapixE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QCborMap*)this_)->operator[](*key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:206
// [24] const QCborValue operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMapixERK7QString(void *this_, QString* key) {
  auto rv = ((QCborMap*)this_)->operator[](*key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:208
// [24] const QCborValue operator[](const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMapixERK10QCborValue(void *this_, QCborValue* key) {
  auto rv = ((QCborMap*)this_)->operator[](*key);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:214
// [16] QCborValueRef operator[](qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMapixEx(void *this_, qint64 key) {
  auto rv = ((QCborMap*)this_)->operator[](key);
return new QCborValueRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:215
// [16] QCborValueRef operator[](QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMapixE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QCborMap*)this_)->operator[](*key);
return new QCborValueRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:216
// [16] QCborValueRef operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMapixERK7QString(void *this_, QString* key) {
  auto rv = ((QCborMap*)this_)->operator[](*key);
return new QCborValueRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:217
// [16] QCborValueRef operator[](const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMapixERK10QCborValue(void *this_, QCborValue* key) {
  auto rv = ((QCborMap*)this_)->operator[](*key);
return new QCborValueRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:219
// [24] QCborValue take(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap4takeEx(void *this_, qint64 key) {
  auto rv = ((QCborMap*)this_)->take(key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:221
// [24] QCborValue take(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap4takeE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QCborMap*)this_)->take(*key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:223
// [24] QCborValue take(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap4takeERK7QString(void *this_, QString* key) {
  auto rv = ((QCborMap*)this_)->take(*key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:225
// [24] QCborValue take(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap4takeERK10QCborValue(void *this_, QCborValue* key) {
  auto rv = ((QCborMap*)this_)->take(*key);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:227
// [-2] void remove(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN8QCborMap6removeEx(void *this_, qint64 key) {
  ((QCborMap*)this_)->remove(key);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:229
// [-2] void remove(QLatin1String)
extern "C" Q_DECL_EXPORT
void C_ZN8QCborMap6removeE13QLatin1String(void *this_, QLatin1String* key) {
  ((QCborMap*)this_)->remove(*key);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:231
// [-2] void remove(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QCborMap6removeERK7QString(void *this_, QString* key) {
  ((QCborMap*)this_)->remove(*key);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:233
// [-2] void remove(const QCborValue &)
extern "C" Q_DECL_EXPORT
void C_ZN8QCborMap6removeERK10QCborValue(void *this_, QCborValue* key) {
  ((QCborMap*)this_)->remove(*key);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:235
// [1] bool contains(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMap8containsEx(void *this_, qint64 key) {
  return (bool)((QCborMap*)this_)->contains(key);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:237
// [1] bool contains(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMap8containsE13QLatin1String(void *this_, QLatin1String* key) {
  return (bool)((QCborMap*)this_)->contains(*key);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:239
// [1] bool contains(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMap8containsERK7QString(void *this_, QString* key) {
  return (bool)((QCborMap*)this_)->contains(*key);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:241
// [1] bool contains(const QCborValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMap8containsERK10QCborValue(void *this_, QCborValue* key) {
  return (bool)((QCborMap*)this_)->contains(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:244
// [4] int compare(const QCborMap &)
extern "C" Q_DECL_EXPORT
int C_ZNK8QCborMap7compareERKS_(void *this_, QCborMap* other) {
  return (int)((QCborMap*)this_)->compare(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:254
// [1] bool operator==(const QCborMap &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMapeqERKS_(void *this_, QCborMap* other) {
  return (bool)((QCborMap*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:256
// [1] bool operator!=(const QCborMap &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMapneERKS_(void *this_, QCborMap* other) {
  return (bool)((QCborMap*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:258
// [1] bool operator<(const QCborMap &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMapltERKS_(void *this_, QCborMap* other) {
  return (bool)((QCborMap*)this_)->operator<(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:264
// [16] QCborMap::iterator begin()
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap5beginEv(void *this_) {
  auto rv = ((QCborMap*)this_)->begin();
return new QCborMap::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:265
// [16] QCborMap::const_iterator constBegin()
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap10constBeginEv(void *this_) {
  auto rv = ((QCborMap*)this_)->constBegin();
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:266
// [16] QCborMap::const_iterator begin()
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap5beginEv(void *this_) {
  auto rv = ((QCborMap*)this_)->constBegin();
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:267
// [16] QCborMap::const_iterator cbegin()
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap6cbeginEv(void *this_) {
  auto rv = ((QCborMap*)this_)->cbegin();
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:268
// [16] QCborMap::iterator end()
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap3endEv(void *this_) {
  auto rv = ((QCborMap*)this_)->end();
return new QCborMap::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:269
// [16] QCborMap::const_iterator constEnd()
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap8constEndEv(void *this_) {
  auto rv = ((QCborMap*)this_)->constEnd();
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:270
// [16] QCborMap::const_iterator end()
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap3endEv(void *this_) {
  auto rv = ((QCborMap*)this_)->constEnd();
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:271
// [16] QCborMap::const_iterator cend()
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap4cendEv(void *this_) {
  auto rv = ((QCborMap*)this_)->cend();
return new QCborMap::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:272
// [16] QCborMap::iterator erase(QCborMap::iterator)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap5eraseENS_8IteratorE(void *this_, QCborMap::iterator it) {
  auto rv = ((QCborMap*)this_)->erase(it);
return new QCborMap::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:273
// [16] QCborMap::iterator erase(QCborMap::const_iterator)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap5eraseENS_13ConstIteratorE(void *this_, QCborMap::const_iterator it) {
  auto rv = ((QCborMap*)this_)->erase(it);
return new QCborMap::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:274
// [24] QCborValue extract(QCborMap::iterator)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap7extractENS_8IteratorE(void *this_, QCborMap::iterator it) {
  auto rv = ((QCborMap*)this_)->extract(it);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:275
// [24] QCborValue extract(QCborMap::const_iterator)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap7extractENS_13ConstIteratorE(void *this_, QCborMap::const_iterator it) {
  auto rv = ((QCborMap*)this_)->extract(it);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:276
// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCborMap5emptyEv(void *this_) {
  return (bool)((QCborMap*)this_)->empty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:278
// [16] QCborMap::iterator find(qint64)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap4findEx(void *this_, qint64 key) {
  auto rv = ((QCborMap*)this_)->find(key);
return new QCborMap::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:279
// [16] QCborMap::iterator find(QLatin1String)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap4findE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QCborMap*)this_)->find(*key);
return new QCborMap::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:280
// [16] QCborMap::iterator find(const QString &)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap4findERK7QString(void *this_, QString* key) {
  auto rv = ((QCborMap*)this_)->find(*key);
return new QCborMap::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:281
// [16] QCborMap::iterator find(const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap4findERK10QCborValue(void *this_, QCborValue* key) {
  auto rv = ((QCborMap*)this_)->find(*key);
return new QCborMap::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:282
// [16] QCborMap::const_iterator constFind(qint64)
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap9constFindEx(void *this_, qint64 key) {
  auto rv = ((QCborMap*)this_)->constFind(key);
return new QCborMap::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:283
// [16] QCborMap::const_iterator constFind(QLatin1String)
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap9constFindE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QCborMap*)this_)->constFind(*key);
return new QCborMap::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:284
// [16] QCborMap::const_iterator constFind(const QString &)
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap9constFindERK7QString(void *this_, QString* key) {
  auto rv = ((QCborMap*)this_)->constFind(*key);
return new QCborMap::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:285
// [16] QCborMap::const_iterator constFind(const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap9constFindERK10QCborValue(void *this_, QCborValue* key) {
  auto rv = ((QCborMap*)this_)->constFind(*key);
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:286
// [16] QCborMap::const_iterator find(qint64)
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap4findEx(void *this_, qint64 key) {
  auto rv = ((QCborMap*)this_)->constFind(key);
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:287
// [16] QCborMap::const_iterator find(QLatin1String)
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap4findE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QCborMap*)this_)->constFind(*key);
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:288
// [16] QCborMap::const_iterator find(const QString &)
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap4findERK7QString(void *this_, QString* key) {
  auto rv = ((QCborMap*)this_)->constFind(*key);
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:289
// [16] QCborMap::const_iterator find(const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborMap::const_iterator* C_ZNK8QCborMap4findERK10QCborValue(void *this_, QCborValue* key) {
  auto rv = ((QCborMap*)this_)->constFind(*key);
return new QCborMap::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:291
// [16] QCborMap::iterator insert(qint64, const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap6insertExRK10QCborValue(void *this_, qint64 key, QCborValue* value_) {
  auto rv = ((QCborMap*)this_)->insert(key, *value_);
return new QCborMap::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:297
// [16] QCborMap::iterator insert(QLatin1String, const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap6insertE13QLatin1StringRK10QCborValue(void *this_, QLatin1String* key, QCborValue* value_) {
  auto rv = ((QCborMap*)this_)->insert(*key, *value_);
return new QCborMap::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:303
// [16] QCborMap::iterator insert(const QString &, const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap6insertERK7QStringRK10QCborValue(void *this_, QString* key, QCborValue* value_) {
  auto rv = ((QCborMap*)this_)->insert(*key, *value_);
return new QCborMap::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:309
// [16] QCborMap::iterator insert(const QCborValue &, const QCborValue &)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap6insertERK10QCborValueS2_(void *this_, QCborValue* key, QCborValue* value_) {
  auto rv = ((QCborMap*)this_)->insert(*key, *value_);
return new QCborMap::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:315
// [16] QCborMap::iterator insert(QCborMap::value_type)
extern "C" Q_DECL_EXPORT
QCborMap::iterator* C_ZN8QCborMap6insertE5QPairI10QCborValueS1_E(void *this_, QCborMap::value_type v) {
  auto rv = ((QCborMap*)this_)->insert(v);
return new QCborMap::iterator(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:317
// [8] QCborMap fromVariantMap(const QVariantMap &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap14fromVariantMapERK4QMapI7QString8QVariantE(const QVariantMap & map_) {
  auto rv = QCborMap::fromVariantMap(map_);
return new QCborMap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:318
// [8] QCborMap fromVariantHash(const QVariantHash &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap15fromVariantHashERK5QHashI7QString8QVariantE(const QVariantHash & hash) {
  auto rv = QCborMap::fromVariantHash(hash);
return new QCborMap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:319
// [8] QCborMap fromJsonObject(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCborMap14fromJsonObjectERK11QJsonObject(QJsonObject* o) {
  auto rv = QCborMap::fromJsonObject(*o);
return new QCborMap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:320
// [8] QVariantMap toVariantMap()
extern "C" Q_DECL_EXPORT
QVariantMap* C_ZNK8QCborMap12toVariantMapEv(void *this_) {
  auto rv = ((QCborMap*)this_)->toVariantMap();
return new QVariantMap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:321
// [8] QVariantHash toVariantHash()
extern "C" Q_DECL_EXPORT
QVariantHash* C_ZNK8QCborMap13toVariantHashEv(void *this_) {
  auto rv = ((QCborMap*)this_)->toVariantHash();
return new QVariantHash(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:322
// [16] QJsonObject toJsonObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCborMap12toJsonObjectEv(void *this_) {
  auto rv = ((QCborMap*)this_)->toJsonObject();
return new QJsonObject(rv);
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
