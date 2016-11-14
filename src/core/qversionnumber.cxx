// /usr/include/qt/QtCore/qversionnumber.h
#include <qversionnumber.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qversionnumber.h:221
// void QVersionNumber()
extern "C"
void* C_ZN14QVersionNumberC1Ev() {
  return new QVersionNumber();
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:224
// void QVersionNumber(const QVector<int> &)
extern "C"
void* C_ZN14QVersionNumberC1ERK7QVectorIiE(const QVector<int> & seg) {
  return new QVersionNumber(seg);
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:231
// void QVersionNumber(QVector<int> &&)
extern "C"
void* C_ZN14QVersionNumberC1EO7QVectorIiE(QVector<int> && seg) {
  return new QVersionNumber(seg);
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:237
// void QVersionNumber(std::initializer_list<int>)
extern "C"
void* C_ZN14QVersionNumberC1ESt16initializer_listIiE(std::initializer_list<int> args) {
  return new QVersionNumber(args);
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:242
// void QVersionNumber(int)
extern "C"
void* C_ZN14QVersionNumberC1Ei(int maj) {
  return new QVersionNumber(maj);
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:245
// void QVersionNumber(int, int)
extern "C"
void* C_ZN14QVersionNumberC1Eii(int maj, int min) {
  return new QVersionNumber(maj, min);
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:248
// void QVersionNumber(int, int, int)
extern "C"
void* C_ZN14QVersionNumberC1Eiii(int maj, int min, int mic) {
  return new QVersionNumber(maj, min, mic);
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:251
// bool isNull()
extern "C"
void C_ZNK14QVersionNumber6isNullEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:254
// bool isNormalized()
extern "C"
void C_ZNK14QVersionNumber12isNormalizedEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->isNormalized();
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:257
// int majorVersion()
extern "C"
void C_ZNK14QVersionNumber12majorVersionEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->majorVersion();
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:260
// int minorVersion()
extern "C"
void C_ZNK14QVersionNumber12minorVersionEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->minorVersion();
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:263
// int microVersion()
extern "C"
void C_ZNK14QVersionNumber12microVersionEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->microVersion();
}
// /usr/include/qt/QtCore/qversionnumber.h:266
// QVersionNumber normalized()
extern "C"
void C_ZNK14QVersionNumber10normalizedEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->normalized();
}
// /usr/include/qt/QtCore/qversionnumber.h:268
// QVector<int> segments()
extern "C"
void C_ZNK14QVersionNumber8segmentsEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->segments();
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:270
// int segmentAt(int)
extern "C"
void C_ZNK14QVersionNumber9segmentAtEi(void *this_, int index) {
  /*return*/ ((QVersionNumber*)this_)->segmentAt(index);
}
// inline
// /usr/include/qt/QtCore/qversionnumber.h:273
// int segmentCount()
extern "C"
void C_ZNK14QVersionNumber12segmentCountEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->segmentCount();
}
// /usr/include/qt/QtCore/qversionnumber.h:276
// bool isPrefixOf(const class QVersionNumber &)
extern "C"
void C_ZNK14QVersionNumber10isPrefixOfERKS_(void *this_, const QVersionNumber & other) {
  /*return*/ ((QVersionNumber*)this_)->isPrefixOf(other);
}
// static
// /usr/include/qt/QtCore/qversionnumber.h:278
// int compare(const class QVersionNumber &, const class QVersionNumber &)
extern "C"
void C_ZN14QVersionNumber7compareERKS_S1_(const QVersionNumber & v1, const QVersionNumber & v2) {
  /*return*/ QVersionNumber::compare(v1, v2);
}
// static
// /usr/include/qt/QtCore/qversionnumber.h:280
// QVersionNumber commonPrefix(const class QVersionNumber &, const class QVersionNumber &)
extern "C"
void C_ZN14QVersionNumber12commonPrefixERKS_S1_(const QVersionNumber & v1, const QVersionNumber & v2) {
  /*return*/ QVersionNumber::commonPrefix(v1, v2);
}
// /usr/include/qt/QtCore/qversionnumber.h:282
// QString toString()
extern "C"
void C_ZNK14QVersionNumber8toStringEv(void *this_) {
  /*return*/ ((QVersionNumber*)this_)->toString();
}
// static
// /usr/include/qt/QtCore/qversionnumber.h:283
// QVersionNumber fromString(const class QString &, int *)
extern "C"
void C_ZN14QVersionNumber10fromStringERK7QStringPi(const QString & string, int * suffixIndex) {
  /*return*/ QVersionNumber::fromString(string, suffixIndex);
}