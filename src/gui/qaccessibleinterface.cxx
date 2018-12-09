//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleInterface is pure virtual: true
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
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:464
// [1] bool isValid()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:465
// [8] QObject * object()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:472
// [8] QAccessibleInterface * childAt(int, int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:475
// [8] QAccessibleInterface * parent()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:476
// [8] QAccessibleInterface * child(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:477
// [4] int childCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:478
// [4] int indexOfChild(const QAccessibleInterface *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:481
// [8] QString text(QAccessible::Text)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:482
// [-2] void setText(QAccessible::Text, const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:483
// [16] QRect rect()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:484
// [4] QAccessible::Role role()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:485
// [8] QAccessible::State state()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:464
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QAccessibleInterface7isValidEv(void *this_) {
  return (bool)((QAccessibleInterface*)this_)->isValid();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:465
// [8] QObject * object()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface6objectEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->object();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:466
// [8] QWindow * window()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface6windowEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->window();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:469
// [-2] QVector<QPair<QAccessibleInterface *, QAccessible::Relation> > relations(QAccessible::Relation)
extern "C" Q_DECL_EXPORT
void C_ZNK20QAccessibleInterface9relationsE6QFlagsIN11QAccessible12RelationFlagEE(void *this_, QFlags<QAccessible::RelationFlag> match_) {
  auto rv = ((QAccessibleInterface*)this_)->relations(match_);
/*return rv;*/
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:470
// [8] QAccessibleInterface * focusChild()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface10focusChildEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->focusChild();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:472
// [8] QAccessibleInterface * childAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface7childAtEii(void *this_, int x, int y) {
  return (void*)((QAccessibleInterface*)this_)->childAt(x, y);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:475
// [8] QAccessibleInterface * parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface6parentEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->parent();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:476
// [8] QAccessibleInterface * child(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface5childEi(void *this_, int index) {
  return (void*)((QAccessibleInterface*)this_)->child(index);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:477
// [4] int childCount()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAccessibleInterface10childCountEv(void *this_) {
  return (int)((QAccessibleInterface*)this_)->childCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:478
// [4] int indexOfChild(const QAccessibleInterface *)
extern "C" Q_DECL_EXPORT
int C_ZNK20QAccessibleInterface12indexOfChildEPKS_(void *this_, const QAccessibleInterface * arg0) {
  return (int)((QAccessibleInterface*)this_)->indexOfChild(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:481
// [8] QString text(QAccessible::Text)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface4textEN11QAccessible4TextE(void *this_, QAccessible::Text t) {
  auto rv = ((QAccessibleInterface*)this_)->text(t);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:482
// [-2] void setText(QAccessible::Text, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAccessibleInterface7setTextEN11QAccessible4TextERK7QString(void *this_, QAccessible::Text t, QString* text) {
  ((QAccessibleInterface*)this_)->setText(t, *text);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:483
// [16] QRect rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface4rectEv(void *this_) {
  auto rv = ((QAccessibleInterface*)this_)->rect();
return new QRect(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:484
// [4] QAccessible::Role role()
extern "C" Q_DECL_EXPORT
QAccessible::Role C_ZNK20QAccessibleInterface4roleEv(void *this_) {
  return (QAccessible::Role)((QAccessibleInterface*)this_)->role();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:485
// [8] QAccessible::State state()
extern "C" Q_DECL_EXPORT
QAccessible::State C_ZNK20QAccessibleInterface5stateEv(void *this_) {
  return (QAccessible::State)((QAccessibleInterface*)this_)->state();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:487
// [16] QColor foregroundColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface15foregroundColorEv(void *this_) {
  auto rv = ((QAccessibleInterface*)this_)->foregroundColor();
return new QColor(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:488
// [16] QColor backgroundColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAccessibleInterface15backgroundColorEv(void *this_) {
  auto rv = ((QAccessibleInterface*)this_)->backgroundColor();
return new QColor(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:490
// [8] QAccessibleTextInterface * textInterface()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAccessibleInterface13textInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->textInterface();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:493
// [8] QAccessibleEditableTextInterface * editableTextInterface()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAccessibleInterface21editableTextInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->editableTextInterface();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:496
// [8] QAccessibleValueInterface * valueInterface()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAccessibleInterface14valueInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->valueInterface();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:499
// [8] QAccessibleActionInterface * actionInterface()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAccessibleInterface15actionInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->actionInterface();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:502
// [8] QAccessibleImageInterface * imageInterface()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAccessibleInterface14imageInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->imageInterface();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:505
// [8] QAccessibleTableInterface * tableInterface()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAccessibleInterface14tableInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->tableInterface();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:508
// [8] QAccessibleTableCellInterface * tableCellInterface()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAccessibleInterface18tableCellInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->tableCellInterface();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:511
// [-2] void virtual_hook(int, void *)
extern "C" Q_DECL_EXPORT
void C_ZN20QAccessibleInterface12virtual_hookEiPv(void *this_, int id, void * data) {
  ((QAccessibleInterface*)this_)->virtual_hook(id, data);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:513
// [8] void * interface_cast(QAccessible::InterfaceType)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAccessibleInterface14interface_castEN11QAccessible13InterfaceTypeE(void *this_, QAccessible::InterfaceType arg0) {
  return (void*)((QAccessibleInterface*)this_)->interface_cast(arg0);
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
