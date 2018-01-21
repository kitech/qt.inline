//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#include <qabstractitemmodel.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:58
// void QModelIndex()
extern "C"
void* C_ZN11QModelIndexC1Ev() {
  return new QModelIndex();
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:60
// int row()
extern "C"
void C_ZNK11QModelIndex3rowEv(void *this_) {
  /*return*/ ((QModelIndex*)this_)->row();
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:61
// int column()
extern "C"
void C_ZNK11QModelIndex6columnEv(void *this_) {
  /*return*/ ((QModelIndex*)this_)->column();
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:62
// quintptr internalId()
extern "C"
void C_ZNK11QModelIndex10internalIdEv(void *this_) {
  /*return*/ ((QModelIndex*)this_)->internalId();
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:63
// void * internalPointer()
extern "C"
void C_ZNK11QModelIndex15internalPointerEv(void *this_) {
  /*return*/ ((QModelIndex*)this_)->internalPointer();
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:64
// QModelIndex parent()
extern "C"
void C_ZNK11QModelIndex6parentEv(void *this_) {
  /*return*/ ((QModelIndex*)this_)->parent();
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:65
// QModelIndex sibling(int, int)
extern "C"
void C_ZNK11QModelIndex7siblingEii(void *this_, int row, int column) {
  /*return*/ ((QModelIndex*)this_)->sibling(row, column);
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:66
// QModelIndex child(int, int)
extern "C"
void C_ZNK11QModelIndex5childEii(void *this_, int row, int column) {
  /*return*/ ((QModelIndex*)this_)->child(row, column);
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:67
// QVariant data(int)
extern "C"
void C_ZNK11QModelIndex4dataEi(void *this_, int role) {
  /*return*/ ((QModelIndex*)this_)->data(role);
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:68
// Qt::ItemFlags flags()
extern "C"
void C_ZNK11QModelIndex5flagsEv(void *this_) {
  /*return*/ ((QModelIndex*)this_)->flags();
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:69
// const QAbstractItemModel * model()
extern "C"
void C_ZNK11QModelIndex5modelEv(void *this_) {
  /*return*/ ((QModelIndex*)this_)->model();
}
// inline
// /usr/include/qt/QtCore/qabstractitemmodel.h:70
// bool isValid()
extern "C"
void C_ZNK11QModelIndex7isValidEv(void *this_) {
  /*return*/ ((QModelIndex*)this_)->isValid();
}
//  main block end
