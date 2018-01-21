//  header block begin
// /usr/include/qt/QtCore/qitemselectionmodel.h
#include <qitemselectionmodel.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qitemselectionmodel.h:256
// void QItemSelection()
extern "C"
void* C_ZN14QItemSelectionC1Ev() {
  return new QItemSelection();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:257
// void QItemSelection(const class QModelIndex &, const class QModelIndex &)
extern "C"
void* C_ZN14QItemSelectionC1ERK11QModelIndexS2_(const QModelIndex & topLeft, const QModelIndex & bottomRight) {
  return new QItemSelection(topLeft, bottomRight);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:261
// void select(const class QModelIndex &, const class QModelIndex &)
extern "C"
void C_ZN14QItemSelection6selectERK11QModelIndexS2_(void *this_, const QModelIndex & topLeft, const QModelIndex & bottomRight) {
  ((QItemSelection*)this_)->select(topLeft, bottomRight);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:262
// bool contains(const class QModelIndex &)
extern "C"
void C_ZNK14QItemSelection8containsERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QItemSelection*)this_)->contains(index);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:263
// QModelIndexList indexes()
extern "C"
void C_ZNK14QItemSelection7indexesEv(void *this_) {
  /*return*/ ((QItemSelection*)this_)->indexes();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:264
// void merge(const class QItemSelection &, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN14QItemSelection5mergeERKS_6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, const QItemSelection & other, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelection*)this_)->merge(other, command);
}
// static
// /usr/include/qt/QtCore/qitemselectionmodel.h:265
// void split(const class QItemSelectionRange &, const class QItemSelectionRange &, class QItemSelection *)
extern "C"
void C_ZN14QItemSelection5splitERK19QItemSelectionRangeS2_PS_(const QItemSelectionRange & range, const QItemSelectionRange & other, QItemSelection * result) {
  QItemSelection::split(range, other, result);
}
//  main block end
