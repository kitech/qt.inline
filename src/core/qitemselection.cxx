//  header block begin
// /usr/include/qt/QtCore/qitemselectionmodel.h
#include <qitemselectionmodel.h>
#include <QtCore>

// QItemSelection is pure virtual: false
// QItemSelection has virtual projected: false
//  header block end

//  main block begin

class MyQItemSelection : public QItemSelection {
public:
  virtual ~MyQItemSelection() {}
// void QItemSelection()
MyQItemSelection() : QItemSelection() {}
// void QItemSelection(const class QModelIndex &, const class QModelIndex &)
MyQItemSelection(const QModelIndex & topLeft, const QModelIndex & bottomRight) : QItemSelection(topLeft, bottomRight) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:250
// [-2] void QItemSelection()
extern "C"
void* C_ZN14QItemSelectionC2Ev() {
  return  new QItemSelection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:251
// [-2] void QItemSelection(const class QModelIndex &, const class QModelIndex &)
extern "C"
void* C_ZN14QItemSelectionC2ERK11QModelIndexS2_(const QModelIndex & topLeft, const QModelIndex & bottomRight) {
  return  new QItemSelection(topLeft, bottomRight);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:255
// [-2] void select(const class QModelIndex &, const class QModelIndex &)
extern "C"
void C_ZN14QItemSelection6selectERK11QModelIndexS2_(void *this_, const QModelIndex & topLeft, const QModelIndex & bottomRight) {
  ((QItemSelection*)this_)->select(topLeft, bottomRight);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:256
// [1] bool contains(const class QModelIndex &)
extern "C"
bool C_ZNK14QItemSelection8containsERK11QModelIndex(void *this_, const QModelIndex & index) {
  return (bool)((QItemSelection*)this_)->contains(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:258
// [-2] void merge(const class QItemSelection &, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN14QItemSelection5mergeERKS_6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, const QItemSelection & other, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelection*)this_)->merge(other, command);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:259
// [-2] void split(const class QItemSelectionRange &, const class QItemSelectionRange &, class QItemSelection *)
extern "C"
void C_ZN14QItemSelection5splitERK19QItemSelectionRangeS2_PS_(const QItemSelectionRange & range, const QItemSelectionRange & other, QItemSelection * result) {
  QItemSelection::split(range, other, result);
}
//  main block end
