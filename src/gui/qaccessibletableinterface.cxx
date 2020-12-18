//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTableInterface is pure virtual: true true
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
// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletableinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN25QAccessibleTableInterfaceD2Ev(void *this_)*/ {
  delete (QAccessibleTableInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletableinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
