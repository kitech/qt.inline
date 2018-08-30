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
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:580
// [1] bool isSelected()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:582
// [-2] QList<QAccessibleInterface *> columnHeaderCells()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:583
// [-2] QList<QAccessibleInterface *> rowHeaderCells()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:584
// [4] int columnIndex()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:585
// [4] int rowIndex()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:586
// [4] int columnExtent()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:587
// [4] int rowExtent()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:589
// [8] QAccessibleInterface * table()
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
