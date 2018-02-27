//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QPersistentModelIndex is pure virtual: false
// QPersistentModelIndex has virtual projected: false
//  header block end

//  main block begin

class MyQPersistentModelIndex : public QPersistentModelIndex {
public:
  virtual ~MyQPersistentModelIndex() {}
// void QPersistentModelIndex()
MyQPersistentModelIndex() : QPersistentModelIndex() {}
// void QPersistentModelIndex(const class QModelIndex &)
MyQPersistentModelIndex(const QModelIndex & index) : QPersistentModelIndex(index) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:107
// [-2] void QPersistentModelIndex()
extern "C"
void* C_ZN21QPersistentModelIndexC2Ev() {
  return  new QPersistentModelIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:108
// [-2] void QPersistentModelIndex(const class QModelIndex &)
extern "C"
void* C_ZN21QPersistentModelIndexC2ERK11QModelIndex(QModelIndex* index) {
  return  new QPersistentModelIndex(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:110
// [-2] void ~QPersistentModelIndex()
extern "C"
void C_ZN21QPersistentModelIndexD2Ev(void *this_) {
  delete (QPersistentModelIndex*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:111
// [1] bool operator<(const class QPersistentModelIndex &)
extern "C"
bool C_ZNK21QPersistentModelIndexltERKS_(void *this_, QPersistentModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator<(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:112
// [1] bool operator==(const class QPersistentModelIndex &)
extern "C"
bool C_ZNK21QPersistentModelIndexeqERKS_(void *this_, QPersistentModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:113
// [1] bool operator!=(const class QPersistentModelIndex &)
extern "C"
bool C_ZNK21QPersistentModelIndexneERKS_(void *this_, QPersistentModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:115
// [8] QPersistentModelIndex & operator=(const class QPersistentModelIndex &)
extern "C"
void* C_ZN21QPersistentModelIndexaSERKS_(void *this_, QPersistentModelIndex* other) {
  auto& rv = ((QPersistentModelIndex*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:119
// [8] QPersistentModelIndex & operator=(class QPersistentModelIndex &&)
extern "C"
void* C_ZN21QPersistentModelIndexaSEOS_(void *this_, QPersistentModelIndex && other) {
  auto& rv = ((QPersistentModelIndex*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:122
// [-2] void swap(class QPersistentModelIndex &)
extern "C"
void C_ZN21QPersistentModelIndex4swapERS_(void *this_, QPersistentModelIndex* other) {
  ((QPersistentModelIndex*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:123
// [1] bool operator==(const class QModelIndex &)
extern "C"
bool C_ZNK21QPersistentModelIndexeqERK11QModelIndex(void *this_, QModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:124
// [1] bool operator!=(const class QModelIndex &)
extern "C"
bool C_ZNK21QPersistentModelIndexneERK11QModelIndex(void *this_, QModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:125
// [8] QPersistentModelIndex & operator=(const class QModelIndex &)
extern "C"
void* C_ZN21QPersistentModelIndexaSERK11QModelIndex(void *this_, QModelIndex* other) {
  auto& rv = ((QPersistentModelIndex*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:127
// [4] int row()
extern "C"
int C_ZNK21QPersistentModelIndex3rowEv(void *this_) {
  return (int)((QPersistentModelIndex*)this_)->row();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:128
// [4] int column()
extern "C"
int C_ZNK21QPersistentModelIndex6columnEv(void *this_) {
  return (int)((QPersistentModelIndex*)this_)->column();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:129
// [8] void * internalPointer()
extern "C"
void* C_ZNK21QPersistentModelIndex15internalPointerEv(void *this_) {
  return (void*)((QPersistentModelIndex*)this_)->internalPointer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:130
// [8] quintptr internalId()
extern "C"
quintptr C_ZNK21QPersistentModelIndex10internalIdEv(void *this_) {
  return (quintptr)((QPersistentModelIndex*)this_)->internalId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:131
// [24] QModelIndex parent()
extern "C"
void* C_ZNK21QPersistentModelIndex6parentEv(void *this_) {
  auto rv = ((QPersistentModelIndex*)this_)->parent();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:132
// [24] QModelIndex sibling(int, int)
extern "C"
void* C_ZNK21QPersistentModelIndex7siblingEii(void *this_, int row, int column) {
  auto rv = ((QPersistentModelIndex*)this_)->sibling(row, column);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:134
// [24] QModelIndex child(int, int)
extern "C"
void* C_ZNK21QPersistentModelIndex5childEii(void *this_, int row, int column) {
  auto rv = ((QPersistentModelIndex*)this_)->child(row, column);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:136
// [16] QVariant data(int)
extern "C"
void* C_ZNK21QPersistentModelIndex4dataEi(void *this_, int role) {
  auto rv = ((QPersistentModelIndex*)this_)->data(role);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:137
// [4] Qt::ItemFlags flags()
extern "C"
Qt::ItemFlags C_ZNK21QPersistentModelIndex5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QPersistentModelIndex*)this_)->flags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:138
// [8] const QAbstractItemModel * model()
extern "C"
void* C_ZNK21QPersistentModelIndex5modelEv(void *this_) {
  return (void*)((QPersistentModelIndex*)this_)->model();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:139
// [1] bool isValid()
extern "C"
bool C_ZNK21QPersistentModelIndex7isValidEv(void *this_) {
  return (bool)((QPersistentModelIndex*)this_)->isValid();
}

//  main block end
