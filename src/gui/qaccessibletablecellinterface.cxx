//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTableCellInterface is pure virtual: true
// QAccessibleTableCellInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleTableCellInterface : public QAccessibleTableCellInterface {
public:
  virtual ~MyQAccessibleTableCellInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:578
// [-2] void ~QAccessibleTableCellInterface()
extern "C" Q_DECL_EXPORT
void C_ZN29QAccessibleTableCellInterfaceD2Ev(void *this_) {
  delete (QAccessibleTableCellInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:580
// [1] bool isSelected()
extern "C" Q_DECL_EXPORT
bool C_ZNK29QAccessibleTableCellInterface10isSelectedEv(void *this_) {
  return (bool)((QAccessibleTableCellInterface*)this_)->isSelected();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:582
// [-2] QList<QAccessibleInterface *> columnHeaderCells()
extern "C" Q_DECL_EXPORT
QList<QAccessibleInterface *>* C_ZNK29QAccessibleTableCellInterface17columnHeaderCellsEv(void *this_) {
  auto rv = ((QAccessibleTableCellInterface*)this_)->columnHeaderCells();
return new QList<QAccessibleInterface *>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:583
// [-2] QList<QAccessibleInterface *> rowHeaderCells()
extern "C" Q_DECL_EXPORT
QList<QAccessibleInterface *>* C_ZNK29QAccessibleTableCellInterface14rowHeaderCellsEv(void *this_) {
  auto rv = ((QAccessibleTableCellInterface*)this_)->rowHeaderCells();
return new QList<QAccessibleInterface *>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:584
// [4] int columnIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK29QAccessibleTableCellInterface11columnIndexEv(void *this_) {
  return (int)((QAccessibleTableCellInterface*)this_)->columnIndex();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:585
// [4] int rowIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK29QAccessibleTableCellInterface8rowIndexEv(void *this_) {
  return (int)((QAccessibleTableCellInterface*)this_)->rowIndex();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:586
// [4] int columnExtent()
extern "C" Q_DECL_EXPORT
int C_ZNK29QAccessibleTableCellInterface12columnExtentEv(void *this_) {
  return (int)((QAccessibleTableCellInterface*)this_)->columnExtent();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:587
// [4] int rowExtent()
extern "C" Q_DECL_EXPORT
int C_ZNK29QAccessibleTableCellInterface9rowExtentEv(void *this_) {
  return (int)((QAccessibleTableCellInterface*)this_)->rowExtent();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:589
// [8] QAccessibleInterface * table()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QAccessibleTableCellInterface5tableEv(void *this_) {
  return (void*)((QAccessibleTableCellInterface*)this_)->table();
}

//  main block end
