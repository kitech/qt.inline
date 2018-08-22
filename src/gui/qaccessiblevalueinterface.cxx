//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleValueInterface is pure virtual: true
// QAccessibleValueInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleValueInterface : public QAccessibleValueInterface {
public:
  virtual ~MyQAccessibleValueInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:568
// [16] QVariant currentValue()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:569
// [-2] void setCurrentValue(const QVariant &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:570
// [16] QVariant maximumValue()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:571
// [16] QVariant minimumValue()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:572
// [16] QVariant minimumStepSize()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:566
// [-2] void ~QAccessibleValueInterface()
extern "C" Q_DECL_EXPORT
void C_ZN25QAccessibleValueInterfaceD2Ev(void *this_) {
  delete (QAccessibleValueInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:568
// [16] QVariant currentValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleValueInterface12currentValueEv(void *this_) {
  auto rv = ((QAccessibleValueInterface*)this_)->currentValue();
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:569
// [-2] void setCurrentValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN25QAccessibleValueInterface15setCurrentValueERK8QVariant(void *this_, QVariant* value) {
  ((QAccessibleValueInterface*)this_)->setCurrentValue(*value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:570
// [16] QVariant maximumValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleValueInterface12maximumValueEv(void *this_) {
  auto rv = ((QAccessibleValueInterface*)this_)->maximumValue();
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:571
// [16] QVariant minimumValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleValueInterface12minimumValueEv(void *this_) {
  auto rv = ((QAccessibleValueInterface*)this_)->minimumValue();
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:572
// [16] QVariant minimumStepSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleValueInterface15minimumStepSizeEv(void *this_) {
  auto rv = ((QAccessibleValueInterface*)this_)->minimumStepSize();
return new QVariant(rv);
}

//  main block end
