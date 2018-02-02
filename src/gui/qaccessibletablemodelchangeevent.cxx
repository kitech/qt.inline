//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTableModelChangeEvent is pure virtual: false
// QAccessibleTableModelChangeEvent has virtual projected: false
//  header block end

//  main block begin

class MyQAccessibleTableModelChangeEvent : public QAccessibleTableModelChangeEvent {
public:
  virtual ~MyQAccessibleTableModelChangeEvent() {}
// void QAccessibleTableModelChangeEvent(class QObject *, enum QAccessibleTableModelChangeEvent::ModelChangeType)
MyQAccessibleTableModelChangeEvent(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(obj, changeType) {}
// void QAccessibleTableModelChangeEvent(class QAccessibleInterface *, enum QAccessibleTableModelChangeEvent::ModelChangeType)
MyQAccessibleTableModelChangeEvent(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(iface, changeType) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:932
// [-2] void QAccessibleTableModelChangeEvent(class QObject *, enum QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C"
void* C_ZN32QAccessibleTableModelChangeEventC2EP7QObjectNS_15ModelChangeTypeE(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  return  new QAccessibleTableModelChangeEvent(obj, changeType);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:939
// [-2] void QAccessibleTableModelChangeEvent(class QAccessibleInterface *, enum QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C"
void* C_ZN32QAccessibleTableModelChangeEventC2EP20QAccessibleInterfaceNS_15ModelChangeTypeE(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  return  new QAccessibleTableModelChangeEvent(iface, changeType);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:947
// [-2] void ~QAccessibleTableModelChangeEvent()
extern "C"
void C_ZN32QAccessibleTableModelChangeEventD2Ev(void *this_) {
  delete (QAccessibleTableModelChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:949
// [-2] void setModelChangeType(enum QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent18setModelChangeTypeENS_15ModelChangeTypeE(void *this_, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  ((QAccessibleTableModelChangeEvent*)this_)->setModelChangeType(changeType);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:950
// [4] QAccessibleTableModelChangeEvent::ModelChangeType modelChangeType()
extern "C"
QAccessibleTableModelChangeEvent::ModelChangeType C_ZNK32QAccessibleTableModelChangeEvent15modelChangeTypeEv(void *this_) {
  return (QAccessibleTableModelChangeEvent::ModelChangeType)((QAccessibleTableModelChangeEvent*)this_)->modelChangeType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:952
// [-2] void setFirstRow(int)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent11setFirstRowEi(void *this_, int row) {
  ((QAccessibleTableModelChangeEvent*)this_)->setFirstRow(row);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:953
// [-2] void setFirstColumn(int)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent14setFirstColumnEi(void *this_, int col) {
  ((QAccessibleTableModelChangeEvent*)this_)->setFirstColumn(col);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:954
// [-2] void setLastRow(int)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent10setLastRowEi(void *this_, int row) {
  ((QAccessibleTableModelChangeEvent*)this_)->setLastRow(row);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:955
// [-2] void setLastColumn(int)
extern "C"
void C_ZN32QAccessibleTableModelChangeEvent13setLastColumnEi(void *this_, int col) {
  ((QAccessibleTableModelChangeEvent*)this_)->setLastColumn(col);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:956
// [4] int firstRow()
extern "C"
int C_ZNK32QAccessibleTableModelChangeEvent8firstRowEv(void *this_) {
  return (int)((QAccessibleTableModelChangeEvent*)this_)->firstRow();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:957
// [4] int firstColumn()
extern "C"
int C_ZNK32QAccessibleTableModelChangeEvent11firstColumnEv(void *this_) {
  return (int)((QAccessibleTableModelChangeEvent*)this_)->firstColumn();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:958
// [4] int lastRow()
extern "C"
int C_ZNK32QAccessibleTableModelChangeEvent7lastRowEv(void *this_) {
  return (int)((QAccessibleTableModelChangeEvent*)this_)->lastRow();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:959
// [4] int lastColumn()
extern "C"
int C_ZNK32QAccessibleTableModelChangeEvent10lastColumnEv(void *this_) {
  return (int)((QAccessibleTableModelChangeEvent*)this_)->lastColumn();
}
//  main block end
