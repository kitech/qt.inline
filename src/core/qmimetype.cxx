// /usr/include/qt/QtCore/qmimetype.h
#include <qmimetype.h>
#include <QtCore>

// /usr/include/qt/QtCore/qmimetype.h:62
// void QMimeType()
extern "C"
void* C_ZN9QMimeTypeC1Ev() {
  return new QMimeType();
}
// inline
// /usr/include/qt/QtCore/qmimetype.h:68
// void swap(class QMimeType &)
extern "C"
void C_ZN9QMimeType4swapERS_(void *this_, QMimeType & other) {
  ((QMimeType*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qmimetype.h:72
// void QMimeType(const class QMimeTypePrivate &)
extern "C"
void* C_ZN9QMimeTypeC1ERK16QMimeTypePrivate(const QMimeTypePrivate & dd) {
  return new QMimeType(dd);
}
// /usr/include/qt/QtCore/qmimetype.h:73
// void ~QMimeType()
extern "C"
void C_ZN9QMimeTypeD1Ev(void *this_) {
  delete (QMimeType*)(this_);
}
// /usr/include/qt/QtCore/qmimetype.h:82
// bool isValid()
extern "C"
void C_ZNK9QMimeType7isValidEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->isValid();
}
// /usr/include/qt/QtCore/qmimetype.h:84
// bool isDefault()
extern "C"
void C_ZNK9QMimeType9isDefaultEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->isDefault();
}
// /usr/include/qt/QtCore/qmimetype.h:86
// QString name()
extern "C"
void C_ZNK9QMimeType4nameEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->name();
}
// /usr/include/qt/QtCore/qmimetype.h:87
// QString comment()
extern "C"
void C_ZNK9QMimeType7commentEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->comment();
}
// /usr/include/qt/QtCore/qmimetype.h:88
// QString genericIconName()
extern "C"
void C_ZNK9QMimeType15genericIconNameEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->genericIconName();
}
// /usr/include/qt/QtCore/qmimetype.h:89
// QString iconName()
extern "C"
void C_ZNK9QMimeType8iconNameEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->iconName();
}
// /usr/include/qt/QtCore/qmimetype.h:90
// QStringList globPatterns()
extern "C"
void C_ZNK9QMimeType12globPatternsEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->globPatterns();
}
// /usr/include/qt/QtCore/qmimetype.h:91
// QStringList parentMimeTypes()
extern "C"
void C_ZNK9QMimeType15parentMimeTypesEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->parentMimeTypes();
}
// /usr/include/qt/QtCore/qmimetype.h:92
// QStringList allAncestors()
extern "C"
void C_ZNK9QMimeType12allAncestorsEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->allAncestors();
}
// /usr/include/qt/QtCore/qmimetype.h:93
// QStringList aliases()
extern "C"
void C_ZNK9QMimeType7aliasesEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->aliases();
}
// /usr/include/qt/QtCore/qmimetype.h:94
// QStringList suffixes()
extern "C"
void C_ZNK9QMimeType8suffixesEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->suffixes();
}
// /usr/include/qt/QtCore/qmimetype.h:95
// QString preferredSuffix()
extern "C"
void C_ZNK9QMimeType15preferredSuffixEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->preferredSuffix();
}
// /usr/include/qt/QtCore/qmimetype.h:97
// bool inherits(const class QString &)
extern "C"
void C_ZNK9QMimeType8inheritsERK7QString(void *this_, const QString & mimeTypeName) {
  /*return*/ ((QMimeType*)this_)->inherits(mimeTypeName);
}
// /usr/include/qt/QtCore/qmimetype.h:99
// QString filterString()
extern "C"
void C_ZNK9QMimeType12filterStringEv(void *this_) {
  /*return*/ ((QMimeType*)this_)->filterString();
}