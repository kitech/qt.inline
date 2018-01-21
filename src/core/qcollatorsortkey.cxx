//  header block begin
// /usr/include/qt/QtCore/qcollator.h
#include <qcollator.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qcollator.h:58
// void ~QCollatorSortKey()
extern "C"
void C_ZN16QCollatorSortKeyD1Ev(void *this_) {
  delete (QCollatorSortKey*)(this_);
}
// inline
// /usr/include/qt/QtCore/qcollator.h:64
// void swap(class QCollatorSortKey &)
extern "C"
void C_ZN16QCollatorSortKey4swapERS_(void *this_, QCollatorSortKey & other) {
  ((QCollatorSortKey*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qcollator.h:67
// int compare(const class QCollatorSortKey &)
extern "C"
void C_ZNK16QCollatorSortKey7compareERKS_(void *this_, const QCollatorSortKey & key) {
  /*return*/ ((QCollatorSortKey*)this_)->compare(key);
}
//  main block end
