//  header block begin
// /usr/include/qt/QtCore/qitemselectionmodel.h
#include <qitemselectionmodel.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:57
// void QItemSelectionRange()
extern "C"
void* C_ZN19QItemSelectionRangeC1Ev() {
  return new QItemSelectionRange();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:71
// void QItemSelectionRange(const class QModelIndex &, const class QModelIndex &)
extern "C"
void* C_ZN19QItemSelectionRangeC1ERK11QModelIndexS2_(const QModelIndex & topL, const QModelIndex & bottomR) {
  return new QItemSelectionRange(topL, bottomR);
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:72
// void QItemSelectionRange(const class QModelIndex &)
extern "C"
void* C_ZN19QItemSelectionRangeC1ERK11QModelIndex(const QModelIndex & index) {
  return new QItemSelectionRange(index);
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:74
// void swap(class QItemSelectionRange &)
extern "C"
void C_ZN19QItemSelectionRange4swapERS_(void *this_, QItemSelectionRange & other) {
  ((QItemSelectionRange*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:80
// int top()
extern "C"
void C_ZNK19QItemSelectionRange3topEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->top();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:81
// int left()
extern "C"
void C_ZNK19QItemSelectionRange4leftEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->left();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:82
// int bottom()
extern "C"
void C_ZNK19QItemSelectionRange6bottomEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->bottom();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:83
// int right()
extern "C"
void C_ZNK19QItemSelectionRange5rightEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->right();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:84
// int width()
extern "C"
void C_ZNK19QItemSelectionRange5widthEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->width();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:85
// int height()
extern "C"
void C_ZNK19QItemSelectionRange6heightEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->height();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:87
// const QPersistentModelIndex & topLeft()
extern "C"
void C_ZNK19QItemSelectionRange7topLeftEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->topLeft();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:88
// const QPersistentModelIndex & bottomRight()
extern "C"
void C_ZNK19QItemSelectionRange11bottomRightEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->bottomRight();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:89
// QModelIndex parent()
extern "C"
void C_ZNK19QItemSelectionRange6parentEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->parent();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:90
// const QAbstractItemModel * model()
extern "C"
void C_ZNK19QItemSelectionRange5modelEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->model();
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:92
// bool contains(const class QModelIndex &)
extern "C"
void C_ZNK19QItemSelectionRange8containsERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QItemSelectionRange*)this_)->contains(index);
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:99
// bool contains(int, int, const class QModelIndex &)
extern "C"
void C_ZNK19QItemSelectionRange8containsEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & parentIndex) {
  /*return*/ ((QItemSelectionRange*)this_)->contains(row, column, parentIndex);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:106
// bool intersects(const class QItemSelectionRange &)
extern "C"
void C_ZNK19QItemSelectionRange10intersectsERKS_(void *this_, const QItemSelectionRange & other) {
  /*return*/ ((QItemSelectionRange*)this_)->intersects(other);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:111
// QItemSelectionRange intersected(const class QItemSelectionRange &)
extern "C"
void C_ZNK19QItemSelectionRange11intersectedERKS_(void *this_, const QItemSelectionRange & other) {
  /*return*/ ((QItemSelectionRange*)this_)->intersected(other);
}
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:143
// bool isValid()
extern "C"
void C_ZNK19QItemSelectionRange7isValidEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->isValid();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:149
// bool isEmpty()
extern "C"
void C_ZNK19QItemSelectionRange7isEmptyEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:151
// QModelIndexList indexes()
extern "C"
void C_ZNK19QItemSelectionRange7indexesEv(void *this_) {
  /*return*/ ((QItemSelectionRange*)this_)->indexes();
}
//  main block end
