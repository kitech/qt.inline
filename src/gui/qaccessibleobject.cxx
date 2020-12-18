//  header block begin

// /usr/include/qt/QtGui/qaccessibleobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessibleobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleObject is pure virtual: true true
// QAccessibleObject has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleObject_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleObject_t qt_meta_stringdata_MyQAccessibleObject = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQAccessibleObject"
  },
  "MyQAccessibleObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleObject[] = {
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
class Q_DECL_EXPORT MyQAccessibleObject : public QAccessibleObject {
public:
  virtual ~MyQAccessibleObject() {}
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

// void QAccessibleObject(QObject *)
MyQAccessibleObject(QObject * object) : QAccessibleObject(object) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleobject(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN17QAccessibleObjectD2Ev(void *this_)*/ {
  delete (QAccessibleObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
