//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTableInterface is pure virtual: true
// QAccessibleTableInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleTableInterface : public QAccessibleTableInterface {
public:
  virtual ~MyQAccessibleTableInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:595
// [-2] void ~QAccessibleTableInterface()
extern "C" Q_DECL_EXPORT
void C_ZN25QAccessibleTableInterfaceD2Ev(void *this_) {
  delete (QAccessibleTableInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:597
// [8] QAccessibleInterface * caption()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleTableInterface7captionEv(void *this_) {
  return (void*)((QAccessibleTableInterface*)this_)->caption();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:598
// [8] QAccessibleInterface * summary()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleTableInterface7summaryEv(void *this_) {
  return (void*)((QAccessibleTableInterface*)this_)->summary();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:600
// [8] QAccessibleInterface * cellAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleTableInterface6cellAtEii(void *this_, int row, int column) {
  return (void*)((QAccessibleTableInterface*)this_)->cellAt(row, column);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:601
// [4] int selectedCellCount()
extern "C" Q_DECL_EXPORT
int C_ZNK25QAccessibleTableInterface17selectedCellCountEv(void *this_) {
  return (int)((QAccessibleTableInterface*)this_)->selectedCellCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:602
// [-2] QList<QAccessibleInterface *> selectedCells()
extern "C" Q_DECL_EXPORT
QList<QAccessibleInterface *>* C_ZNK25QAccessibleTableInterface13selectedCellsEv(void *this_) {
  auto rv = ((QAccessibleTableInterface*)this_)->selectedCells();
return new QList<QAccessibleInterface *>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:604
// [8] QString columnDescription(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleTableInterface17columnDescriptionEi(void *this_, int column) {
  auto rv = ((QAccessibleTableInterface*)this_)->columnDescription(column);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:605
// [8] QString rowDescription(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleTableInterface14rowDescriptionEi(void *this_, int row) {
  auto rv = ((QAccessibleTableInterface*)this_)->rowDescription(row);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:606
// [4] int selectedColumnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK25QAccessibleTableInterface19selectedColumnCountEv(void *this_) {
  return (int)((QAccessibleTableInterface*)this_)->selectedColumnCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:607
// [4] int selectedRowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK25QAccessibleTableInterface16selectedRowCountEv(void *this_) {
  return (int)((QAccessibleTableInterface*)this_)->selectedRowCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:608
// [4] int columnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK25QAccessibleTableInterface11columnCountEv(void *this_) {
  return (int)((QAccessibleTableInterface*)this_)->columnCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:609
// [4] int rowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK25QAccessibleTableInterface8rowCountEv(void *this_) {
  return (int)((QAccessibleTableInterface*)this_)->rowCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:610
// [-2] QList<int> selectedColumns()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK25QAccessibleTableInterface15selectedColumnsEv(void *this_) {
  auto rv = ((QAccessibleTableInterface*)this_)->selectedColumns();
return new QList<int>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:611
// [-2] QList<int> selectedRows()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK25QAccessibleTableInterface12selectedRowsEv(void *this_) {
  auto rv = ((QAccessibleTableInterface*)this_)->selectedRows();
return new QList<int>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:612
// [1] bool isColumnSelected(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK25QAccessibleTableInterface16isColumnSelectedEi(void *this_, int column) {
  return (bool)((QAccessibleTableInterface*)this_)->isColumnSelected(column);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:613
// [1] bool isRowSelected(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK25QAccessibleTableInterface13isRowSelectedEi(void *this_, int row) {
  return (bool)((QAccessibleTableInterface*)this_)->isRowSelected(row);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:614
// [1] bool selectRow(int)
extern "C" Q_DECL_EXPORT
bool C_ZN25QAccessibleTableInterface9selectRowEi(void *this_, int row) {
  return (bool)((QAccessibleTableInterface*)this_)->selectRow(row);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:615
// [1] bool selectColumn(int)
extern "C" Q_DECL_EXPORT
bool C_ZN25QAccessibleTableInterface12selectColumnEi(void *this_, int column) {
  return (bool)((QAccessibleTableInterface*)this_)->selectColumn(column);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:616
// [1] bool unselectRow(int)
extern "C" Q_DECL_EXPORT
bool C_ZN25QAccessibleTableInterface11unselectRowEi(void *this_, int row) {
  return (bool)((QAccessibleTableInterface*)this_)->unselectRow(row);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:617
// [1] bool unselectColumn(int)
extern "C" Q_DECL_EXPORT
bool C_ZN25QAccessibleTableInterface14unselectColumnEi(void *this_, int column) {
  return (bool)((QAccessibleTableInterface*)this_)->unselectColumn(column);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:619
// [-2] void modelChange(QAccessibleTableModelChangeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN25QAccessibleTableInterface11modelChangeEP32QAccessibleTableModelChangeEvent(void *this_, QAccessibleTableModelChangeEvent * event) {
  ((QAccessibleTableInterface*)this_)->modelChange(event);
}

//  main block end
