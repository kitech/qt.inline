//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleInterface is pure virtual: true true
// QAccessibleInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleInterface_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleInterface_t qt_meta_stringdata_MyQAccessibleInterface = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQAccessibleInterface"
  },
  "MyQAccessibleInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleInterface : public QAccessibleInterface {
public:
// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool isValid()
  virtual bool isValid() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isValid", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QObject * object()
  virtual QObject * object() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"object", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QObject *)(irv);
      // Pointer Pointer QObject *
    } else {
    return (QObject *){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QAccessibleInterface * childAt(int, int)
  virtual QAccessibleInterface * childAt(int x, int y) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childAt", &handled, 2, (uint64_t)x, (uint64_t)y, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QAccessibleInterface * parent()
  virtual QAccessibleInterface * parent() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"parent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QAccessibleInterface * child(int)
  virtual QAccessibleInterface * child(int index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"child", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int childCount()
  virtual int childCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int indexOfChild(const QAccessibleInterface *)
  virtual int indexOfChild(const QAccessibleInterface * arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"indexOfChild", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString text(QAccessible::Text)
  virtual QString text(QAccessible::Text t) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"text", &handled, 1, (uint64_t)t, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setText(QAccessible::Text, const QString &)
  virtual void setText(QAccessible::Text t, const QString & text)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setText", &handled, 2, (uint64_t)t, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleInterface::setText(t, text);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [16] QRect rect()
  virtual QRect rect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRect){};}
    auto prv = (QRect*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRect
    } else {
    return (QRect){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QAccessible::Role role()
  virtual QAccessible::Role role() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"role", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessible::Role)(int)(irv);
      // Elaborated Enum QAccessible::Role
    } else {
    return (QAccessible::Role){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QAccessible::State state()
  virtual QAccessible::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QAccessible::State*)(&irv);
      // Elaborated Record QAccessible::State
    } else {
    return (QAccessible::State){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleinterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:491
// [8] QAccessibleTextInterface * textInterface() 
// (11)qm117926435 (42)_ZN20QAccessibleInterface13textInterfaceEv
//static
/*void qm117926435()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->textInterface();
   auto xptr = (QAccessibleTextInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::textInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:494
// [8] QAccessibleEditableTextInterface * editableTextInterface() 
// (12)qm2801871774 (50)_ZN20QAccessibleInterface21editableTextInterfaceEv
//static
/*void qm2801871774()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->editableTextInterface();
   auto xptr = (QAccessibleEditableTextInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::editableTextInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:497
// [8] QAccessibleValueInterface * valueInterface() 
// (11)qm336514848 (43)_ZN20QAccessibleInterface14valueInterfaceEv
//static
/*void qm336514848()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->valueInterface();
   auto xptr = (QAccessibleValueInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::valueInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:500
// [8] QAccessibleActionInterface * actionInterface() 
// (12)qm3514993555 (44)_ZN20QAccessibleInterface15actionInterfaceEv
//static
/*void qm3514993555()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->actionInterface();
   auto xptr = (QAccessibleActionInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::actionInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:503
// [8] QAccessibleImageInterface * imageInterface() 
// (12)qm1519869098 (43)_ZN20QAccessibleInterface14imageInterfaceEv
//static
/*void qm1519869098()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->imageInterface();
   auto xptr = (QAccessibleImageInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::imageInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:506
// [8] QAccessibleTableInterface * tableInterface() 
// (12)qm1806111729 (43)_ZN20QAccessibleInterface14tableInterfaceEv
//static
/*void qm1806111729()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->tableInterface();
   auto xptr = (QAccessibleTableInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::tableInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:509
// [8] QAccessibleTableCellInterface * tableCellInterface() 
// (12)qm3431663401 (47)_ZN20QAccessibleInterface18tableCellInterfaceEv
//static
/*void qm3431663401()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->tableCellInterface();
   auto xptr = (QAccessibleTableCellInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::tableCellInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:514
// [8] void * interface_cast(QAccessible::InterfaceType) 
// (12)qm3395622546 (72)_ZN20QAccessibleInterface14interface_castEN11QAccessible13InterfaceTypeE
//static
/*void qm3395622546(QAccessible::InterfaceType arg0)*/ {
  QAccessible::InterfaceType arg0 = *(QAccessible::InterfaceType*)this_;
  (void) ((QAccessibleInterface*)this_)->interface_cast(arg0);
   auto xptr = (void * (QAccessibleInterface::*)(QAccessible::InterfaceType) ) &QAccessibleInterface::interface_cast;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
