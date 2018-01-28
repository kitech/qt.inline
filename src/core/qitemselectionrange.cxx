//  header block begin
// /usr/include/qt/QtCore/qitemselectionmodel.h
#include <qitemselectionmodel.h>
#include <QtCore>

// QItemSelectionRange is pure virtual: false
//  header block end

//  main block begin

class MyQItemSelectionRange : public QItemSelectionRange {
public:
MyQItemSelectionRange() : QItemSelectionRange() {}
MyQItemSelectionRange(const QModelIndex & topL, const QModelIndex & bottomR) : QItemSelectionRange(topL, bottomR) {}
MyQItemSelectionRange(const QModelIndex & index) : QItemSelectionRange(index) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:56
// [-2] void QItemSelectionRange()
extern "C"
void* C_ZN19QItemSelectionRangeC1Ev() {
  (MyQItemSelectionRange*)(0);
  return  new MyQItemSelectionRange();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:70
// [-2] void QItemSelectionRange(const class QModelIndex &, const class QModelIndex &)
extern "C"
void* C_ZN19QItemSelectionRangeC1ERK11QModelIndexS2_(const QModelIndex & topL, const QModelIndex & bottomR) {
  (MyQItemSelectionRange*)(0);
  return  new MyQItemSelectionRange(topL, bottomR);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:71
// [-2] void QItemSelectionRange(const class QModelIndex &)
extern "C"
void* C_ZN19QItemSelectionRangeC1ERK11QModelIndex(const QModelIndex & index) {
  (MyQItemSelectionRange*)(0);
  return  new MyQItemSelectionRange(index);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:73
// [-2] void swap(class QItemSelectionRange &)
extern "C"
void C_ZN19QItemSelectionRange4swapERS_(void *this_, QItemSelectionRange & other) {
  ((QItemSelectionRange*)this_)->swap(other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:79
// [4] int top()
extern "C"
int C_ZNK19QItemSelectionRange3topEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->top();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:80
// [4] int left()
extern "C"
int C_ZNK19QItemSelectionRange4leftEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->left();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:81
// [4] int bottom()
extern "C"
int C_ZNK19QItemSelectionRange6bottomEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->bottom();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:82
// [4] int right()
extern "C"
int C_ZNK19QItemSelectionRange5rightEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->right();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:83
// [4] int width()
extern "C"
int C_ZNK19QItemSelectionRange5widthEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->width();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:84
// [4] int height()
extern "C"
int C_ZNK19QItemSelectionRange6heightEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->height();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:86
// [8] const QPersistentModelIndex & topLeft()
extern "C"
void* C_ZNK19QItemSelectionRange7topLeftEv(void *this_) {
  auto& rv = ((QItemSelectionRange*)this_)->topLeft();
return new QPersistentModelIndex(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:87
// [8] const QPersistentModelIndex & bottomRight()
extern "C"
void* C_ZNK19QItemSelectionRange11bottomRightEv(void *this_) {
  auto& rv = ((QItemSelectionRange*)this_)->bottomRight();
return new QPersistentModelIndex(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:88
// [24] QModelIndex parent()
extern "C"
void* C_ZNK19QItemSelectionRange6parentEv(void *this_) {
  auto rv = ((QItemSelectionRange*)this_)->parent();
return new QModelIndex(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:89
// [8] const QAbstractItemModel * model()
extern "C"
void* C_ZNK19QItemSelectionRange5modelEv(void *this_) {
  return (void*)((QItemSelectionRange*)this_)->model();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:91
// [1] bool contains(const class QModelIndex &)
extern "C"
bool C_ZNK19QItemSelectionRange8containsERK11QModelIndex(void *this_, const QModelIndex & index) {
  return (bool)((QItemSelectionRange*)this_)->contains(index);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:98
// [1] bool contains(int, int, const class QModelIndex &)
extern "C"
bool C_ZNK19QItemSelectionRange8containsEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & parentIndex) {
  return (bool)((QItemSelectionRange*)this_)->contains(row, column, parentIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:105
// [1] bool intersects(const class QItemSelectionRange &)
extern "C"
bool C_ZNK19QItemSelectionRange10intersectsERKS_(void *this_, const QItemSelectionRange & other) {
  return (bool)((QItemSelectionRange*)this_)->intersects(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:110
// [16] QItemSelectionRange intersected(const class QItemSelectionRange &)
extern "C"
void* C_ZNK19QItemSelectionRange11intersectedERKS_(void *this_, const QItemSelectionRange & other) {
  auto rv = ((QItemSelectionRange*)this_)->intersected(other);
return new QItemSelectionRange(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:119
// [1] bool isValid()
extern "C"
bool C_ZNK19QItemSelectionRange7isValidEv(void *this_) {
  return (bool)((QItemSelectionRange*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:125
// [1] bool isEmpty()
extern "C"
bool C_ZNK19QItemSelectionRange7isEmptyEv(void *this_) {
  return (bool)((QItemSelectionRange*)this_)->isEmpty();
}
//  main block end
