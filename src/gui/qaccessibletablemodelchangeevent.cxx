//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:932
// void QAccessibleTableModelChangeEvent(class QObject *, enum QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C"
void* C_ZN32QAccessibleTableModelChangeEventC1EP7QObjectNS_15ModelChangeTypeE(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  return new QAccessibleTableModelChangeEvent(obj, changeType);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:939
// void QAccessibleTableModelChangeEvent(class QAccessibleInterface *, enum QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C"
void* C_ZN32QAccessibleTableModelChangeEventC1EP20QAccessibleInterfaceNS_15ModelChangeTypeE(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  return new QAccessibleTableModelChangeEvent(iface, changeType);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:947
// void ~QAccessibleTableModelChangeEvent()
extern "C"
void C_ZN32QAccessibleTableModelChangeEventD1Ev(void *this_) {
  delete (QAccessibleTableModelChangeEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:949
// void setModelChangeType(enum QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent18setModelChangeTypeENS_15ModelChangeTypeE(void *this_, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  ((QAccessibleTableModelChangeEvent*)this_)->setModelChangeType(changeType);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:950
// QAccessibleTableModelChangeEvent::ModelChangeType modelChangeType()
extern "C"
void C_ZNK32QAccessibleTableModelChangeEvent15modelChangeTypeEv(void *this_) {
  /*return*/ ((QAccessibleTableModelChangeEvent*)this_)->modelChangeType();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:952
// void setFirstRow(int)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent11setFirstRowEi(void *this_, int row) {
  ((QAccessibleTableModelChangeEvent*)this_)->setFirstRow(row);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:953
// void setFirstColumn(int)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent14setFirstColumnEi(void *this_, int col) {
  ((QAccessibleTableModelChangeEvent*)this_)->setFirstColumn(col);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:954
// void setLastRow(int)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent10setLastRowEi(void *this_, int row) {
  ((QAccessibleTableModelChangeEvent*)this_)->setLastRow(row);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:955
// void setLastColumn(int)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent13setLastColumnEi(void *this_, int col) {
  ((QAccessibleTableModelChangeEvent*)this_)->setLastColumn(col);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:956
// int firstRow()
extern "C"
void C_ZNK32QAccessibleTableModelChangeEvent8firstRowEv(void *this_) {
  /*return*/ ((QAccessibleTableModelChangeEvent*)this_)->firstRow();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:957
// int firstColumn()
extern "C"
void C_ZNK32QAccessibleTableModelChangeEvent11firstColumnEv(void *this_) {
  /*return*/ ((QAccessibleTableModelChangeEvent*)this_)->firstColumn();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:958
// int lastRow()
extern "C"
void C_ZNK32QAccessibleTableModelChangeEvent7lastRowEv(void *this_) {
  /*return*/ ((QAccessibleTableModelChangeEvent*)this_)->lastRow();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:959
// int lastColumn()
extern "C"
void C_ZNK32QAccessibleTableModelChangeEvent10lastColumnEv(void *this_) {
  /*return*/ ((QAccessibleTableModelChangeEvent*)this_)->lastColumn();
}
//  main block end
