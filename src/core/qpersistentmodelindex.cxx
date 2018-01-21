//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#include <qabstractitemmodel.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h:105
// void QPersistentModelIndex()
extern "C"
void* C_ZN21QPersistentModelIndexC1Ev() {
  return new QPersistentModelIndex();
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:106
// void QPersistentModelIndex(const class QModelIndex &)
extern "C"
void* C_ZN21QPersistentModelIndexC1ERK11QModelIndex(const QModelIndex & index) {
  return new QPersistentModelIndex(index);
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:108
// void ~QPersistentModelIndex()
extern "C"
void C_ZN21QPersistentModelIndexD1Ev(void *this_) {
  delete (QPersistentModelIndex*)(this_);
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:120
// void swap(class QPersistentModelIndex &)
extern "C"
void C_ZN21QPersistentModelIndex4swapERS_(void *this_, QPersistentModelIndex & other) {
  ((QPersistentModelIndex*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:125
// int row()
extern "C"
void C_ZNK21QPersistentModelIndex3rowEv(void *this_) {
  /*return*/ ((QPersistentModelIndex*)this_)->row();
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:126
// int column()
extern "C"
void C_ZNK21QPersistentModelIndex6columnEv(void *this_) {
  /*return*/ ((QPersistentModelIndex*)this_)->column();
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:127
// void * internalPointer()
extern "C"
void C_ZNK21QPersistentModelIndex15internalPointerEv(void *this_) {
  /*return*/ ((QPersistentModelIndex*)this_)->internalPointer();
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:128
// quintptr internalId()
extern "C"
void C_ZNK21QPersistentModelIndex10internalIdEv(void *this_) {
  /*return*/ ((QPersistentModelIndex*)this_)->internalId();
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:129
// QModelIndex parent()
extern "C"
void C_ZNK21QPersistentModelIndex6parentEv(void *this_) {
  /*return*/ ((QPersistentModelIndex*)this_)->parent();
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:130
// QModelIndex sibling(int, int)
extern "C"
void C_ZNK21QPersistentModelIndex7siblingEii(void *this_, int row, int column) {
  /*return*/ ((QPersistentModelIndex*)this_)->sibling(row, column);
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:131
// QModelIndex child(int, int)
extern "C"
void C_ZNK21QPersistentModelIndex5childEii(void *this_, int row, int column) {
  /*return*/ ((QPersistentModelIndex*)this_)->child(row, column);
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:132
// QVariant data(int)
extern "C"
void C_ZNK21QPersistentModelIndex4dataEi(void *this_, int role) {
  /*return*/ ((QPersistentModelIndex*)this_)->data(role);
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:133
// Qt::ItemFlags flags()
extern "C"
void C_ZNK21QPersistentModelIndex5flagsEv(void *this_) {
  /*return*/ ((QPersistentModelIndex*)this_)->flags();
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:134
// const QAbstractItemModel * model()
extern "C"
void C_ZNK21QPersistentModelIndex5modelEv(void *this_) {
  /*return*/ ((QPersistentModelIndex*)this_)->model();
}
// /usr/include/qt/QtCore/qabstractitemmodel.h:135
// bool isValid()
extern "C"
void C_ZNK21QPersistentModelIndex7isValidEv(void *this_) {
  /*return*/ ((QPersistentModelIndex*)this_)->isValid();
}
//  main block end
