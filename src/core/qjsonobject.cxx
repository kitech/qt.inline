// /usr/include/qt/QtCore/qjsonobject.h
#include <qjsonobject.h>
#include <QtCore>

// /usr/include/qt/QtCore/qjsonobject.h:61
// void QJsonObject()
extern "C"
void* C_ZN11QJsonObjectC1Ev() {
  return new QJsonObject();
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:64
// void QJsonObject(std::initializer_list<QPair<QString, QJsonValue> >)
extern "C"
void* C_ZN11QJsonObjectC1ESt16initializer_listI5QPairI7QString10QJsonValueEE(std::initializer_list<QPair<QString, QJsonValue> > args) {
  return new QJsonObject(args);
}
// /usr/include/qt/QtCore/qjsonobject.h:72
// void ~QJsonObject()
extern "C"
void C_ZN11QJsonObjectD1Ev(void *this_) {
  delete (QJsonObject*)(this_);
}
// static
// /usr/include/qt/QtCore/qjsonobject.h:77
// QJsonObject fromVariantMap(const QVariantMap &)
extern "C"
void C_ZN11QJsonObject14fromVariantMapERK4QMapI7QString8QVariantE(const QVariantMap & map) {
  /*return*/ QJsonObject::fromVariantMap(map);
}
// /usr/include/qt/QtCore/qjsonobject.h:78
// QVariantMap toVariantMap()
extern "C"
void C_ZNK11QJsonObject12toVariantMapEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->toVariantMap();
}
// static
// /usr/include/qt/QtCore/qjsonobject.h:79
// QJsonObject fromVariantHash(const QVariantHash &)
extern "C"
void C_ZN11QJsonObject15fromVariantHashERK5QHashI7QString8QVariantE(const QVariantHash & map) {
  /*return*/ QJsonObject::fromVariantHash(map);
}
// /usr/include/qt/QtCore/qjsonobject.h:80
// QVariantHash toVariantHash()
extern "C"
void C_ZNK11QJsonObject13toVariantHashEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->toVariantHash();
}
// /usr/include/qt/QtCore/qjsonobject.h:82
// QStringList keys()
extern "C"
void C_ZNK11QJsonObject4keysEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->keys();
}
// /usr/include/qt/QtCore/qjsonobject.h:83
// int size()
extern "C"
void C_ZNK11QJsonObject4sizeEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->size();
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:84
// int count()
extern "C"
void C_ZNK11QJsonObject5countEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->count();
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:85
// int length()
extern "C"
void C_ZNK11QJsonObject6lengthEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->length();
}
// /usr/include/qt/QtCore/qjsonobject.h:86
// bool isEmpty()
extern "C"
void C_ZNK11QJsonObject7isEmptyEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qjsonobject.h:88
// QJsonValue value(const class QString &)
extern "C"
void C_ZNK11QJsonObject5valueERK7QString(void *this_, const QString & key) {
  /*return*/ ((QJsonObject*)this_)->value(key);
}
// /usr/include/qt/QtCore/qjsonobject.h:89
// QJsonValue value(class QLatin1String)
extern "C"
void C_ZNK11QJsonObject5valueE13QLatin1String(void *this_, QLatin1String key) {
  /*return*/ ((QJsonObject*)this_)->value(key);
}
// /usr/include/qt/QtCore/qjsonobject.h:95
// void remove(const class QString &)
extern "C"
void C_ZN11QJsonObject6removeERK7QString(void *this_, const QString & key) {
  ((QJsonObject*)this_)->remove(key);
}
// /usr/include/qt/QtCore/qjsonobject.h:96
// QJsonValue take(const class QString &)
extern "C"
void C_ZN11QJsonObject4takeERK7QString(void *this_, const QString & key) {
  /*return*/ ((QJsonObject*)this_)->take(key);
}
// /usr/include/qt/QtCore/qjsonobject.h:97
// bool contains(const class QString &)
extern "C"
void C_ZNK11QJsonObject8containsERK7QString(void *this_, const QString & key) {
  /*return*/ ((QJsonObject*)this_)->contains(key);
}
// /usr/include/qt/QtCore/qjsonobject.h:98
// bool contains(class QLatin1String)
extern "C"
void C_ZNK11QJsonObject8containsE13QLatin1String(void *this_, QLatin1String key) {
  /*return*/ ((QJsonObject*)this_)->contains(key);
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:195
// QJsonObject::iterator begin()
extern "C"
void C_ZN11QJsonObject5beginEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:196
// QJsonObject::const_iterator begin()
extern "C"
void C_ZNK11QJsonObject5beginEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:197
// QJsonObject::const_iterator constBegin()
extern "C"
void C_ZNK11QJsonObject10constBeginEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->constBegin();
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:198
// QJsonObject::iterator end()
extern "C"
void C_ZN11QJsonObject3endEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:199
// QJsonObject::const_iterator end()
extern "C"
void C_ZNK11QJsonObject3endEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:200
// QJsonObject::const_iterator constEnd()
extern "C"
void C_ZNK11QJsonObject8constEndEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->constEnd();
}
// /usr/include/qt/QtCore/qjsonobject.h:201
// QJsonObject::iterator erase(class QJsonObject::iterator)
extern "C"
void C_ZN11QJsonObject5eraseENS_8iteratorE(void *this_, QJsonObject::iterator it) {
  /*return*/ ((QJsonObject*)this_)->erase(it);
}
// /usr/include/qt/QtCore/qjsonobject.h:206
// QJsonObject::iterator find(const class QString &)
extern "C"
void C_ZN11QJsonObject4findERK7QString(void *this_, const QString & key) {
  /*return*/ ((QJsonObject*)this_)->find(key);
}
// /usr/include/qt/QtCore/qjsonobject.h:207
// QJsonObject::iterator find(class QLatin1String)
extern "C"
void C_ZN11QJsonObject4findE13QLatin1String(void *this_, QLatin1String key) {
  /*return*/ ((QJsonObject*)this_)->find(key);
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:208
// QJsonObject::const_iterator find(const class QString &)
extern "C"
void C_ZNK11QJsonObject4findERK7QString(void *this_, const QString & key) {
  /*return*/ ((QJsonObject*)this_)->find(key);
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:209
// QJsonObject::const_iterator find(class QLatin1String)
extern "C"
void C_ZNK11QJsonObject4findE13QLatin1String(void *this_, QLatin1String key) {
  /*return*/ ((QJsonObject*)this_)->find(key);
}
// /usr/include/qt/QtCore/qjsonobject.h:210
// QJsonObject::const_iterator constFind(const class QString &)
extern "C"
void C_ZNK11QJsonObject9constFindERK7QString(void *this_, const QString & key) {
  /*return*/ ((QJsonObject*)this_)->constFind(key);
}
// /usr/include/qt/QtCore/qjsonobject.h:211
// QJsonObject::const_iterator constFind(class QLatin1String)
extern "C"
void C_ZNK11QJsonObject9constFindE13QLatin1String(void *this_, QLatin1String key) {
  /*return*/ ((QJsonObject*)this_)->constFind(key);
}
// inline
// /usr/include/qt/QtCore/qjsonobject.h:219
// bool empty()
extern "C"
void C_ZNK11QJsonObject5emptyEv(void *this_) {
  /*return*/ ((QJsonObject*)this_)->empty();
}