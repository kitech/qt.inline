//  header block begin
// /usr/include/qt/QtCore/qcollator.h
#include <qcollator.h>
#include <QtCore>
#include "callback_inherit.h"

// QCollatorSortKey is pure virtual: false
// QCollatorSortKey has virtual projected: false
//  header block end

//  main block begin

class MyQCollatorSortKey : public QCollatorSortKey {
public:
  virtual ~MyQCollatorSortKey() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:58
// [-2] void ~QCollatorSortKey()
extern "C"
void C_ZN16QCollatorSortKeyD2Ev(void *this_) {
  delete (QCollatorSortKey*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:64
// [-2] void swap(class QCollatorSortKey &)
extern "C"
void C_ZN16QCollatorSortKey4swapERS_(void *this_, QCollatorSortKey* other) {
  ((QCollatorSortKey*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:67
// [4] int compare(const class QCollatorSortKey &)
extern "C"
int C_ZNK16QCollatorSortKey7compareERKS_(void *this_, QCollatorSortKey* key) {
  return (int)((QCollatorSortKey*)this_)->compare(*key);
}
//  main block end
