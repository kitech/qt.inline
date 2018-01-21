//  header block begin
// /usr/include/qt/QtCore/quuid.h
#include <quuid.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/quuid.h:90
// void QUuid()
extern "C"
void* C_ZN5QUuidC1Ev() {
  return new QUuid();
}
// inline
// /usr/include/qt/QtCore/quuid.h:92
// void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
extern "C"
void* C_ZN5QUuidC1Ejtthhhhhhhh(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8) {
  return new QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}
// /usr/include/qt/QtCore/quuid.h:120
// void QUuid(const class QString &)
extern "C"
void* C_ZN5QUuidC1ERK7QString(const QString & arg0) {
  return new QUuid(arg0);
}
// /usr/include/qt/QtCore/quuid.h:121
// void QUuid(const char *)
extern "C"
void* C_ZN5QUuidC1EPKc(const char * arg0) {
  return new QUuid(arg0);
}
// /usr/include/qt/QtCore/quuid.h:122
// QString toString()
extern "C"
void C_ZNK5QUuid8toStringEv(void *this_) {
  /*return*/ ((QUuid*)this_)->toString();
}
// /usr/include/qt/QtCore/quuid.h:123
// void QUuid(const class QByteArray &)
extern "C"
void* C_ZN5QUuidC1ERK10QByteArray(const QByteArray & arg0) {
  return new QUuid(arg0);
}
// /usr/include/qt/QtCore/quuid.h:124
// QByteArray toByteArray()
extern "C"
void C_ZNK5QUuid11toByteArrayEv(void *this_) {
  /*return*/ ((QUuid*)this_)->toByteArray();
}
// /usr/include/qt/QtCore/quuid.h:125
// QByteArray toRfc4122()
extern "C"
void C_ZNK5QUuid9toRfc4122Ev(void *this_) {
  /*return*/ ((QUuid*)this_)->toRfc4122();
}
// static
// /usr/include/qt/QtCore/quuid.h:126
// QUuid fromRfc4122(const class QByteArray &)
extern "C"
void C_ZN5QUuid11fromRfc4122ERK10QByteArray(const QByteArray & arg0) {
  /*return*/ QUuid::fromRfc4122(arg0);
}
// /usr/include/qt/QtCore/quuid.h:127
// bool isNull()
extern "C"
void C_ZNK5QUuid6isNullEv(void *this_) {
  /*return*/ ((QUuid*)this_)->isNull();
}
// static
// /usr/include/qt/QtCore/quuid.h:191
// QUuid createUuid()
extern "C"
void C_ZN5QUuid10createUuidEv() {
  /*return*/ QUuid::createUuid();
}
// static
// /usr/include/qt/QtCore/quuid.h:193
// QUuid createUuidV3(const class QUuid &, const class QByteArray &)
extern "C"
void C_ZN5QUuid12createUuidV3ERKS_RK10QByteArray(const QUuid & ns, const QByteArray & baseData) {
  /*return*/ QUuid::createUuidV3(ns, baseData);
}
// static
// /usr/include/qt/QtCore/quuid.h:194
// QUuid createUuidV5(const class QUuid &, const class QByteArray &)
extern "C"
void C_ZN5QUuid12createUuidV5ERKS_RK10QByteArray(const QUuid & ns, const QByteArray & baseData) {
  /*return*/ QUuid::createUuidV5(ns, baseData);
}
// static inline
// /usr/include/qt/QtCore/quuid.h:195
// QUuid createUuidV3(const class QUuid &, const class QString &)
extern "C"
void C_ZN5QUuid12createUuidV3ERKS_RK7QString(const QUuid & ns, const QString & baseData) {
  /*return*/ QUuid::createUuidV3(ns, baseData);
}
// static inline
// /usr/include/qt/QtCore/quuid.h:200
// QUuid createUuidV5(const class QUuid &, const class QString &)
extern "C"
void C_ZN5QUuid12createUuidV5ERKS_RK7QString(const QUuid & ns, const QString & baseData) {
  /*return*/ QUuid::createUuidV5(ns, baseData);
}
// /usr/include/qt/QtCore/quuid.h:207
// QUuid::Variant variant()
extern "C"
void C_ZNK5QUuid7variantEv(void *this_) {
  /*return*/ ((QUuid*)this_)->variant();
}
// /usr/include/qt/QtCore/quuid.h:208
// QUuid::Version version()
extern "C"
void C_ZNK5QUuid7versionEv(void *this_) {
  /*return*/ ((QUuid*)this_)->version();
}
//  main block end
