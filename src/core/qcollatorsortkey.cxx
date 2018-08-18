//  header block begin
// since 0x050200
// /usr/include/qt/QtCore/qcollator.h
#ifndef protected
#define protected public
#endif
#include <qcollator.h>
#include <QtCore>
#include "callback_inherit.h"

// QCollatorSortKey is pure virtual: false
// QCollatorSortKey has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCollatorSortKey : public QCollatorSortKey {
public:
  virtual ~MyQCollatorSortKey() {}
// void QCollatorSortKey(const QCollatorSortKey &)
MyQCollatorSortKey(const QCollatorSortKey & other) : QCollatorSortKey(other) {}
// void QCollatorSortKey(QCollatorSortKeyPrivate *)
MyQCollatorSortKey(QCollatorSortKeyPrivate * arg0) : QCollatorSortKey(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:57
// [-2] void QCollatorSortKey(const QCollatorSortKey &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCollatorSortKeyC2ERKS_(QCollatorSortKey* other) {
  return  new QCollatorSortKey(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:58
// [-2] void ~QCollatorSortKey()
extern "C" Q_DECL_EXPORT
void C_ZN16QCollatorSortKeyD2Ev(void *this_) {
  delete (QCollatorSortKey*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:59
// [8] QCollatorSortKey & operator=(const QCollatorSortKey &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCollatorSortKeyaSERKS_(void *this_, QCollatorSortKey* other) {
  auto& rv = ((QCollatorSortKey*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:61
// [8] QCollatorSortKey & operator=(QCollatorSortKey &&)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCollatorSortKeyaSEOS_(void *this_, QCollatorSortKey && other) {
  auto& rv = ((QCollatorSortKey*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:64
// [-2] void swap(QCollatorSortKey &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCollatorSortKey4swapERS_(void *this_, QCollatorSortKey* other) {
  ((QCollatorSortKey*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:67
// [4] int compare(const QCollatorSortKey &)
extern "C" Q_DECL_EXPORT
int C_ZNK16QCollatorSortKey7compareERKS_(void *this_, QCollatorSortKey* key) {
  return (int)((QCollatorSortKey*)this_)->compare(*key);
}

//  main block end
