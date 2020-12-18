//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleActionInterface is pure virtual: true true
// QAccessibleActionInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleActionInterface_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleActionInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleActionInterface_t qt_meta_stringdata_MyQAccessibleActionInterface = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAccessibleActionInterface"
  },
  "MyQAccessibleActionInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleActionInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleActionInterface : public QAccessibleActionInterface {
public:
  virtual ~MyQAccessibleActionInterface() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QStringList actionNames()
  virtual QStringList actionNames() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actionNames", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void doAction(const QString &)
  virtual void doAction(const QString & actionName)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"doAction", &handled, 1, (uint64_t)&actionName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleActionInterface::doAction(actionName);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QStringList keyBindingsForAction(const QString &)
  virtual QStringList keyBindingsForAction(const QString & actionName) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyBindingsForAction", &handled, 1, (uint64_t)&actionName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleactioninterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:629
// [8] QString tr(const char *, const char *, int) 
// (12)qm1689132216 (42)_ZN26QAccessibleActionInterface2trEPKcS1_i
//static
/*void qm1689132216(const char * sourceText, const char * disambiguation, int n)*/ {
  const char * sourceText = *(const char **)this_; const char * disambiguation = *(const char **)this_; int n = *(int*)this_;
  (void) QAccessibleActionInterface::tr(sourceText, disambiguation, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAccessibleActionInterface::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAccessibleActionInterfaceD2Ev(void *this_)*/ {
  delete (QAccessibleActionInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleactioninterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
