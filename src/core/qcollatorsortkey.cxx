//  header block begin
// /usr/include/qt/QtCore/qcollator.h
#include <qcollator.h>
#include <QtCore>

// QCollatorSortKey is pure virtual: false
//  header block end

//  main block begin

class MyQCollatorSortKey : public QCollatorSortKey {
public:
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:58
// [-2] void ~QCollatorSortKey()
extern "C"
void C_ZN16QCollatorSortKeyD1Ev(void *this_) {
  delete (QCollatorSortKey*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:64
// [-2] void swap(class QCollatorSortKey &)
extern "C"
void C_ZN16QCollatorSortKey4swapERS_(void *this_, QCollatorSortKey & other) {
  ((QCollatorSortKey*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:67
// [4] int compare(const class QCollatorSortKey &)
extern "C"
int C_ZNK16QCollatorSortKey7compareERKS_(void *this_, const QCollatorSortKey & key) {
  return (int)((QCollatorSortKey*)this_)->compare(key);
}
//  main block end
