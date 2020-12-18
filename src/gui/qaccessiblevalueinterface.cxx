//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleValueInterface is pure virtual: true true
// QAccessibleValueInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleValueInterface_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleValueInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleValueInterface_t qt_meta_stringdata_MyQAccessibleValueInterface = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQAccessibleValueInterface"
  },
  "MyQAccessibleValueInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleValueInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleValueInterface : public QAccessibleValueInterface {
public:
  virtual ~MyQAccessibleValueInterface() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [16] QVariant currentValue()
  virtual QVariant currentValue() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentValue", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setCurrentValue(const QVariant &)
  virtual void setCurrentValue(const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCurrentValue", &handled, 1, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleValueInterface::setCurrentValue(value);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [16] QVariant maximumValue()
  virtual QVariant maximumValue() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"maximumValue", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [16] QVariant minimumValue()
  virtual QVariant minimumValue() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"minimumValue", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [16] QVariant minimumStepSize()
  virtual QVariant minimumStepSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"minimumStepSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessiblevalueinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN25QAccessibleValueInterfaceD2Ev(void *this_)*/ {
  delete (QAccessibleValueInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessiblevalueinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
