//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qjsonobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonObject is pure virtual: false
// QJsonObject has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQJsonObject : public QJsonObject {
public:
  virtual ~MyQJsonObject() {}
// void QJsonObject()
MyQJsonObject() : QJsonObject() {}
// void QJsonObject(std::initializer_list<QPair<QString, QJsonValue> >)
MyQJsonObject(std::initializer_list<QPair<QString, QJsonValue> > args) : QJsonObject(args) {}
// void QJsonObject(const QJsonObject &)
MyQJsonObject(const QJsonObject & other) : QJsonObject(other) {}
// void QJsonObject(QJsonObject &&)
MyQJsonObject(QJsonObject && other) : QJsonObject(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:61
// [-2] void QJsonObject()
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObjectC2Ev() {
  return  new QJsonObject();
}

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qjsonobject.h:64
// [-2] void QJsonObject(std::initializer_list<QPair<QString, QJsonValue> >)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObjectC2ESt16initializer_listI5QPairI7QString10QJsonValueEE(std::initializer_list<QPair<QString, QJsonValue> > args) {
  return  new QJsonObject(args);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:72
// [-2] void ~QJsonObject()
extern "C" Q_DECL_EXPORT
void C_ZN11QJsonObjectD2Ev(void *this_) {
  delete (QJsonObject*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:74
// [-2] void QJsonObject(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObjectC2ERKS_(QJsonObject* other) {
  return  new QJsonObject(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:75
// [16] QJsonObject & operator=(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObjectaSERKS_(void *this_, QJsonObject* other) {
  auto& rv = ((QJsonObject*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qjsonobject.h:77
// [-2] void QJsonObject(QJsonObject &&)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObjectC2EOS_(QJsonObject && other) {
  return  new QJsonObject(other);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:84
// [16] QJsonObject & operator=(QJsonObject &&)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObjectaSEOS_(void *this_, QJsonObject && other) {
  auto& rv = ((QJsonObject*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qjsonobject.h:90
// [-2] void swap(QJsonObject &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN11QJsonObject4swapERS_(void *this_, QJsonObject* other) {
  ((QJsonObject*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050a00

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:96
// [16] QJsonObject fromVariantMap(const QVariantMap &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject14fromVariantMapERK4QMapI7QString8QVariantE(const QVariantMap & map_) {
  auto rv = QJsonObject::fromVariantMap(map_);
return new QJsonObject(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:97
// [8] QVariantMap toVariantMap()
extern "C" Q_DECL_EXPORT
QVariantMap* C_ZNK11QJsonObject12toVariantMapEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->toVariantMap();
return new QVariantMap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:98
// [16] QJsonObject fromVariantHash(const QVariantHash &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject15fromVariantHashERK5QHashI7QString8QVariantE(const QVariantHash & map_) {
  auto rv = QJsonObject::fromVariantHash(map_);
return new QJsonObject(rv);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qjsonobject.h:99
// [8] QVariantHash toVariantHash()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QVariantHash* C_ZNK11QJsonObject13toVariantHashEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->toVariantHash();
return new QVariantHash(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:101
// [8] QStringList keys()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject4keysEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->keys();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:102
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK11QJsonObject4sizeEv(void *this_) {
  return (int)((QJsonObject*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:103
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK11QJsonObject5countEv(void *this_) {
  return (int)((QJsonObject*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:104
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK11QJsonObject6lengthEv(void *this_) {
  return (int)((QJsonObject*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:105
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QJsonObject7isEmptyEv(void *this_) {
  return (bool)((QJsonObject*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:107
// [24] QJsonValue value(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject5valueERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonObject*)this_)->value(*key);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qjsonobject.h:108
// [24] QJsonValue value(QLatin1String)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject5valueE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QJsonObject*)this_)->value(*key);
return new QJsonValue(rv);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:109
// [24] QJsonValue operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObjectixERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonObject*)this_)->operator[](*key);
return new QJsonValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:110
// [24] QJsonValue operator[](QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObjectixE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QJsonObject*)this_)->operator[](*key);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:111
// [16] QJsonValueRef operator[](const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QJsonObjectixERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonObject*)this_)->operator[](*key);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:112
// [16] QJsonValueRef operator[](QLatin1String)
extern "C" Q_DECL_EXPORT
void C_ZN11QJsonObjectixE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QJsonObject*)this_)->operator[](*key);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:114
// [-2] void remove(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QJsonObject6removeERK7QString(void *this_, QString* key) {
  ((QJsonObject*)this_)->remove(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:115
// [24] QJsonValue take(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject4takeERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonObject*)this_)->take(*key);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:116
// [1] bool contains(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QJsonObject8containsERK7QString(void *this_, QString* key) {
  return (bool)((QJsonObject*)this_)->contains(*key);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qjsonobject.h:117
// [1] bool contains(QLatin1String)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
bool C_ZNK11QJsonObject8containsE13QLatin1String(void *this_, QLatin1String* key) {
  return (bool)((QJsonObject*)this_)->contains(*key);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:119
// [1] bool operator==(const QJsonObject &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QJsonObjecteqERKS_(void *this_, QJsonObject* other) {
  return (bool)((QJsonObject*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:120
// [1] bool operator!=(const QJsonObject &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QJsonObjectneERKS_(void *this_, QJsonObject* other) {
  return (bool)((QJsonObject*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:214
// [16] QJsonObject::iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject5beginEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->begin();
return new QJsonObject::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:215
// [16] QJsonObject::const_iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject5beginEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->begin();
return new QJsonObject::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:216
// [16] QJsonObject::const_iterator constBegin()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject10constBeginEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->constBegin();
return new QJsonObject::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:217
// [16] QJsonObject::iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject3endEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->end();
return new QJsonObject::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:218
// [16] QJsonObject::const_iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject3endEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->end();
return new QJsonObject::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:219
// [16] QJsonObject::const_iterator constEnd()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject8constEndEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->constEnd();
return new QJsonObject::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:220
// [16] QJsonObject::iterator erase(QJsonObject::iterator)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject5eraseENS_8iteratorE(void *this_, QJsonObject::iterator* it) {
  auto rv = ((QJsonObject*)this_)->erase(*it);
return new QJsonObject::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:225
// [16] QJsonObject::iterator find(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject4findERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonObject*)this_)->find(*key);
return new QJsonObject::iterator(rv);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qjsonobject.h:226
// [16] QJsonObject::iterator find(QLatin1String)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject4findE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QJsonObject*)this_)->find(*key);
return new QJsonObject::iterator(rv);
}
#endif // QT_VERSION >= 0x050700

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:227
// [16] QJsonObject::const_iterator find(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject4findERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonObject*)this_)->find(*key);
return new QJsonObject::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qjsonobject.h:228
// [16] QJsonObject::const_iterator find(QLatin1String)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject4findE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QJsonObject*)this_)->find(*key);
return new QJsonObject::const_iterator(rv);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:229
// [16] QJsonObject::const_iterator constFind(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject9constFindERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonObject*)this_)->constFind(*key);
return new QJsonObject::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qjsonobject.h:230
// [16] QJsonObject::const_iterator constFind(QLatin1String)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK11QJsonObject9constFindE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QJsonObject*)this_)->constFind(*key);
return new QJsonObject::const_iterator(rv);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:231
// [16] QJsonObject::iterator insert(const QString &, const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QJsonObject6insertERK7QStringRK10QJsonValue(void *this_, QString* key, QJsonValue* value) {
  auto rv = ((QJsonObject*)this_)->insert(*key, *value);
return new QJsonObject::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:238
// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QJsonObject5emptyEv(void *this_) {
  return (bool)((QJsonObject*)this_)->empty();
}

//  main block end
