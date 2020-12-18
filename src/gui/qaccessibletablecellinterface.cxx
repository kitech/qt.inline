//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTableCellInterface is pure virtual: true true
// QAccessibleTableCellInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleTableCellInterface_t {
  QByteArrayData data[1];
  char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTableCellInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTableCellInterface_t qt_meta_stringdata_MyQAccessibleTableCellInterface = {
   {
  QT_MOC_LITERAL(0, 0, 31), // "MyQAccessibleTableCellInterface"
  },
  "MyQAccessibleTableCellInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTableCellInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleTableCellInterface : public QAccessibleTableCellInterface {
public:
  virtual ~MyQAccessibleTableCellInterface() {}
// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool isSelected()
  virtual bool isSelected() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isSelected", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QAccessibleInterface *> columnHeaderCells()
  virtual QList<QAccessibleInterface *> columnHeaderCells() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnHeaderCells", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QAccessibleInterface *>){};}
    auto prv = (QList<QAccessibleInterface *>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QAccessibleInterface *>
    } else {
    return (QList<QAccessibleInterface *>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QAccessibleInterface *> rowHeaderCells()
  virtual QList<QAccessibleInterface *> rowHeaderCells() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowHeaderCells", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QAccessibleInterface *>){};}
    auto prv = (QList<QAccessibleInterface *>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QAccessibleInterface *>
    } else {
    return (QList<QAccessibleInterface *>){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int columnIndex()
  virtual int columnIndex() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnIndex", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int rowIndex()
  virtual int rowIndex() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowIndex", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int columnExtent()
  virtual int columnExtent() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnExtent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int rowExtent()
  virtual int rowExtent() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowExtent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QAccessibleInterface * table()
  virtual QAccessibleInterface * table() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"table", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletablecellinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN29QAccessibleTableCellInterfaceD2Ev(void *this_)*/ {
  delete (QAccessibleTableCellInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletablecellinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
