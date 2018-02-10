//  header block begin
// /usr/include/qt/QtCore/qmimetype.h
#include <qmimetype.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeType is pure virtual: false
// QMimeType has virtual projected: false
//  header block end

//  main block begin

class MyQMimeType : public QMimeType {
public:
  virtual ~MyQMimeType() {}
// void QMimeType()
MyQMimeType() : QMimeType() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:78
// [-2] void QMimeType()
extern "C"
void* C_ZN9QMimeTypeC2Ev() {
  return  new QMimeType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:84
// [-2] void swap(class QMimeType &)
extern "C"
void C_ZN9QMimeType4swapERS_(void *this_, QMimeType* other) {
  ((QMimeType*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:89
// [-2] void ~QMimeType()
extern "C"
void C_ZN9QMimeTypeD2Ev(void *this_) {
  delete (QMimeType*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:98
// [1] bool isValid()
extern "C"
bool C_ZNK9QMimeType7isValidEv(void *this_) {
  return (bool)((QMimeType*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:100
// [1] bool isDefault()
extern "C"
bool C_ZNK9QMimeType9isDefaultEv(void *this_) {
  return (bool)((QMimeType*)this_)->isDefault();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:102
// [8] QString name()
extern "C"
void* C_ZNK9QMimeType4nameEv(void *this_) {
  auto rv = ((QMimeType*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:103
// [8] QString comment()
extern "C"
void* C_ZNK9QMimeType7commentEv(void *this_) {
  auto rv = ((QMimeType*)this_)->comment();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:104
// [8] QString genericIconName()
extern "C"
void* C_ZNK9QMimeType15genericIconNameEv(void *this_) {
  auto rv = ((QMimeType*)this_)->genericIconName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:105
// [8] QString iconName()
extern "C"
void* C_ZNK9QMimeType8iconNameEv(void *this_) {
  auto rv = ((QMimeType*)this_)->iconName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:106
// [8] QStringList globPatterns()
extern "C"
void* C_ZNK9QMimeType12globPatternsEv(void *this_) {
  auto rv = ((QMimeType*)this_)->globPatterns();
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:107
// [8] QStringList parentMimeTypes()
extern "C"
void* C_ZNK9QMimeType15parentMimeTypesEv(void *this_) {
  auto rv = ((QMimeType*)this_)->parentMimeTypes();
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:108
// [8] QStringList allAncestors()
extern "C"
void* C_ZNK9QMimeType12allAncestorsEv(void *this_) {
  auto rv = ((QMimeType*)this_)->allAncestors();
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:109
// [8] QStringList aliases()
extern "C"
void* C_ZNK9QMimeType7aliasesEv(void *this_) {
  auto rv = ((QMimeType*)this_)->aliases();
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:110
// [8] QStringList suffixes()
extern "C"
void* C_ZNK9QMimeType8suffixesEv(void *this_) {
  auto rv = ((QMimeType*)this_)->suffixes();
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:111
// [8] QString preferredSuffix()
extern "C"
void* C_ZNK9QMimeType15preferredSuffixEv(void *this_) {
  auto rv = ((QMimeType*)this_)->preferredSuffix();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:113
// [1] bool inherits(const class QString &)
extern "C"
bool C_ZNK9QMimeType8inheritsERK7QString(void *this_, QString* mimeTypeName) {
  return (bool)((QMimeType*)this_)->inherits(*mimeTypeName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:115
// [8] QString filterString()
extern "C"
void* C_ZNK9QMimeType12filterStringEv(void *this_) {
  auto rv = ((QMimeType*)this_)->filterString();
return new QString(rv);
}
//  main block end
