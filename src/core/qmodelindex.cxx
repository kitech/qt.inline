//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QModelIndex is pure virtual: false
// QModelIndex has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQModelIndex : public QModelIndex {
public:
  virtual ~MyQModelIndex() {}
// void QModelIndex()
MyQModelIndex() : QModelIndex() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:58
// [-2] void QModelIndex()
extern "C" Q_DECL_EXPORT
void* C_ZN11QModelIndexC2Ev() {
  return  new QModelIndex();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:60
// [4] int row()
extern "C" Q_DECL_EXPORT
int C_ZNK11QModelIndex3rowEv(void *this_) {
  return (int)((QModelIndex*)this_)->row();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:61
// [4] int column()
extern "C" Q_DECL_EXPORT
int C_ZNK11QModelIndex6columnEv(void *this_) {
  return (int)((QModelIndex*)this_)->column();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:62
// [8] quintptr internalId()
extern "C" Q_DECL_EXPORT
quintptr C_ZNK11QModelIndex10internalIdEv(void *this_) {
  return (quintptr)((QModelIndex*)this_)->internalId();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:63
// [8] void * internalPointer()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex15internalPointerEv(void *this_) {
  return (void*)((QModelIndex*)this_)->internalPointer();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:64
// [24] QModelIndex parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex6parentEv(void *this_) {
  auto rv = ((QModelIndex*)this_)->parent();
return new QModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:65
// [24] QModelIndex sibling(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex7siblingEii(void *this_, int row, int column) {
  auto rv = ((QModelIndex*)this_)->sibling(row, column);
return new QModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:67
// [24] QModelIndex child(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex5childEii(void *this_, int row, int column) {
  auto rv = ((QModelIndex*)this_)->child(row, column);
return new QModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:69
// [16] QVariant data(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex4dataEi(void *this_, int role) {
  auto rv = ((QModelIndex*)this_)->data(role);
return new QVariant(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:70
// [4] Qt::ItemFlags flags()
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK11QModelIndex5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QModelIndex*)this_)->flags();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:71
// [8] const QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex5modelEv(void *this_) {
  return (void*)((QModelIndex*)this_)->model();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:72
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QModelIndex7isValidEv(void *this_) {
  return (bool)((QModelIndex*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:73
// [1] bool operator==(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QModelIndexeqERKS_(void *this_, QModelIndex* other) {
  return (bool)((QModelIndex*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:75
// [1] bool operator!=(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QModelIndexneERKS_(void *this_, QModelIndex* other) {
  return (bool)((QModelIndex*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:77
// [1] bool operator<(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QModelIndexltERKS_(void *this_, QModelIndex* other) {
  return (bool)((QModelIndex*)this_)->operator<(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QModelIndexD2Ev(void *this_) {
  delete (QModelIndex*)(this_);
}
//  main block end
