//  header block begin
// /usr/include/qt/QtCore/qjsonobject.h
#include <qjsonobject.h>
#include <QtCore>

// QJsonObject is pure virtual: false
//  header block end

//  main block begin

class MyQJsonObject : public QJsonObject {
public:
MyQJsonObject() : QJsonObject() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:61
// [-2] void QJsonObject()
extern "C"
void* C_ZN11QJsonObjectC1Ev() {
  (MyQJsonObject*)(0);
  return  new MyQJsonObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:72
// [-2] void ~QJsonObject()
extern "C"
void C_ZN11QJsonObjectD1Ev(void *this_) {
  delete (QJsonObject*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:90
// [-2] void swap(class QJsonObject &)
extern "C"
void C_ZN11QJsonObject4swapERS_(void *this_, QJsonObject & other) {
  ((QJsonObject*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:102
// [4] int size()
extern "C"
int C_ZNK11QJsonObject4sizeEv(void *this_) {
  return (int)((QJsonObject*)this_)->size();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:103
// [4] int count()
extern "C"
int C_ZNK11QJsonObject5countEv(void *this_) {
  return (int)((QJsonObject*)this_)->count();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:104
// [4] int length()
extern "C"
int C_ZNK11QJsonObject6lengthEv(void *this_) {
  return (int)((QJsonObject*)this_)->length();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:105
// [1] bool isEmpty()
extern "C"
bool C_ZNK11QJsonObject7isEmptyEv(void *this_) {
  return (bool)((QJsonObject*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:107
// [24] QJsonValue value(const class QString &)
extern "C"
void* C_ZNK11QJsonObject5valueERK7QString(void *this_, const QString & key) {
  auto rv = ((QJsonObject*)this_)->value(key);
return new QJsonValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:108
// [24] QJsonValue value(class QLatin1String)
extern "C"
void* C_ZNK11QJsonObject5valueE13QLatin1String(void *this_, QLatin1String key) {
  auto rv = ((QJsonObject*)this_)->value(key);
return new QJsonValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:114
// [-2] void remove(const class QString &)
extern "C"
void C_ZN11QJsonObject6removeERK7QString(void *this_, const QString & key) {
  ((QJsonObject*)this_)->remove(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:115
// [24] QJsonValue take(const class QString &)
extern "C"
void* C_ZN11QJsonObject4takeERK7QString(void *this_, const QString & key) {
  auto rv = ((QJsonObject*)this_)->take(key);
return new QJsonValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:116
// [1] bool contains(const class QString &)
extern "C"
bool C_ZNK11QJsonObject8containsERK7QString(void *this_, const QString & key) {
  return (bool)((QJsonObject*)this_)->contains(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:117
// [1] bool contains(class QLatin1String)
extern "C"
bool C_ZNK11QJsonObject8containsE13QLatin1String(void *this_, QLatin1String key) {
  return (bool)((QJsonObject*)this_)->contains(key);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:214
// [16] QJsonObject::iterator begin()
extern "C"
void* C_ZN11QJsonObject5beginEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->begin();
return new QJsonObject::iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:215
// [16] QJsonObject::const_iterator begin()
extern "C"
void* C_ZNK11QJsonObject5beginEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->begin();
return new QJsonObject::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:216
// [16] QJsonObject::const_iterator constBegin()
extern "C"
void* C_ZNK11QJsonObject10constBeginEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->constBegin();
return new QJsonObject::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:217
// [16] QJsonObject::iterator end()
extern "C"
void* C_ZN11QJsonObject3endEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->end();
return new QJsonObject::iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:218
// [16] QJsonObject::const_iterator end()
extern "C"
void* C_ZNK11QJsonObject3endEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->end();
return new QJsonObject::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:219
// [16] QJsonObject::const_iterator constEnd()
extern "C"
void* C_ZNK11QJsonObject8constEndEv(void *this_) {
  auto rv = ((QJsonObject*)this_)->constEnd();
return new QJsonObject::const_iterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:225
// [16] QJsonObject::iterator find(const class QString &)
extern "C"
void* C_ZN11QJsonObject4findERK7QString(void *this_, const QString & key) {
  auto rv = ((QJsonObject*)this_)->find(key);
return new QJsonObject::iterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:226
// [16] QJsonObject::iterator find(class QLatin1String)
extern "C"
void* C_ZN11QJsonObject4findE13QLatin1String(void *this_, QLatin1String key) {
  auto rv = ((QJsonObject*)this_)->find(key);
return new QJsonObject::iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:227
// [16] QJsonObject::const_iterator find(const class QString &)
extern "C"
void* C_ZNK11QJsonObject4findERK7QString(void *this_, const QString & key) {
  auto rv = ((QJsonObject*)this_)->find(key);
return new QJsonObject::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:228
// [16] QJsonObject::const_iterator find(class QLatin1String)
extern "C"
void* C_ZNK11QJsonObject4findE13QLatin1String(void *this_, QLatin1String key) {
  auto rv = ((QJsonObject*)this_)->find(key);
return new QJsonObject::const_iterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:229
// [16] QJsonObject::const_iterator constFind(const class QString &)
extern "C"
void* C_ZNK11QJsonObject9constFindERK7QString(void *this_, const QString & key) {
  auto rv = ((QJsonObject*)this_)->constFind(key);
return new QJsonObject::const_iterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:230
// [16] QJsonObject::const_iterator constFind(class QLatin1String)
extern "C"
void* C_ZNK11QJsonObject9constFindE13QLatin1String(void *this_, QLatin1String key) {
  auto rv = ((QJsonObject*)this_)->constFind(key);
return new QJsonObject::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:238
// [1] bool empty()
extern "C"
bool C_ZNK11QJsonObject5emptyEv(void *this_) {
  return (bool)((QJsonObject*)this_)->empty();
}
//  main block end
