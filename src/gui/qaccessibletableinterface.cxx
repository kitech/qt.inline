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


struct qt_meta_stringdata_MyQAccessibleTableInterface_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTableInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTableInterface_t qt_meta_stringdata_MyQAccessibleTableInterface = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQAccessibleTableInterface"
  },
  "MyQAccessibleTableInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTableInterface[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQAccessibleTableInterface : public QAccessibleTableInterface {
public:
  virtual ~MyQAccessibleTableInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAccessibleInterface * caption()
  virtual QAccessibleInterface * caption() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"caption", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAccessibleInterface * summary()
  virtual QAccessibleInterface * summary() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"summary", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAccessibleInterface * cellAt(int, int)
  virtual QAccessibleInterface * cellAt(int row, int column) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cellAt", &handled, 2, (uint64_t)row, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int selectedCellCount()
  virtual int selectedCellCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedCellCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QAccessibleInterface *> selectedCells()
  virtual QList<QAccessibleInterface *> selectedCells() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedCells", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QAccessibleInterface *>){};}
    auto prv = (QList<QAccessibleInterface *>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QAccessibleInterface *>
    } else {
    return (QList<QAccessibleInterface *>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString columnDescription(int)
  virtual QString columnDescription(int column) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnDescription", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString rowDescription(int)
  virtual QString rowDescription(int row) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowDescription", &handled, 1, (uint64_t)row, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int selectedColumnCount()
  virtual int selectedColumnCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedColumnCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int selectedRowCount()
  virtual int selectedRowCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedRowCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int columnCount()
  virtual int columnCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int rowCount()
  virtual int rowCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<int> selectedColumns()
  virtual QList<int> selectedColumns() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedColumns", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<int>){};}
    auto prv = (QList<int>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<int>
    } else {
    return (QList<int>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<int> selectedRows()
  virtual QList<int> selectedRows() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedRows", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<int>){};}
    auto prv = (QList<int>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<int>
    } else {
    return (QList<int>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isColumnSelected(int)
  virtual bool isColumnSelected(int column) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isColumnSelected", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isRowSelected(int)
  virtual bool isRowSelected(int row) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isRowSelected", &handled, 1, (uint64_t)row, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool selectRow(int)
  virtual bool selectRow(int row)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectRow", &handled, 1, (uint64_t)row, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool selectColumn(int)
  virtual bool selectColumn(int column)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool unselectRow(int)
  virtual bool unselectRow(int row)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"unselectRow", &handled, 1, (uint64_t)row, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool unselectColumn(int)
  virtual bool unselectColumn(int column)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"unselectColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void modelChange(QAccessibleTableModelChangeEvent *)
  virtual void modelChange(QAccessibleTableModelChangeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"modelChange", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleTableInterface::modelChange(event);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:597
// [8] QAccessibleInterface * caption()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:598
// [8] QAccessibleInterface * summary()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:600
// [8] QAccessibleInterface * cellAt(int, int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:601
// [4] int selectedCellCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:602
// [-2] QList<QAccessibleInterface *> selectedCells()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:604
// [8] QString columnDescription(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:605
// [8] QString rowDescription(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:606
// [4] int selectedColumnCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:607
// [4] int selectedRowCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:608
// [4] int columnCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:609
// [4] int rowCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:610
// [-2] QList<int> selectedColumns()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:611
// [-2] QList<int> selectedRows()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:612
// [1] bool isColumnSelected(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:613
// [1] bool isRowSelected(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:614
// [1] bool selectRow(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:615
// [1] bool selectColumn(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:616
// [1] bool unselectRow(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:617
// [1] bool unselectColumn(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:619
// [-2] void modelChange(QAccessibleTableModelChangeEvent *)
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
