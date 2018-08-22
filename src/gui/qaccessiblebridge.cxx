//  header block begin
// /usr/include/qt/QtGui/qaccessiblebridge.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessiblebridge.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleBridge is pure virtual: true
// QAccessibleBridge has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleBridge : public QAccessibleBridge {
public:
  virtual ~MyQAccessibleBridge() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setRootObject(QAccessibleInterface *)
  virtual void setRootObject(QAccessibleInterface * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setRootObject", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleBridge::setRootObject(arg0);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void notifyAccessibilityUpdate(QAccessibleEvent *)
  virtual void notifyAccessibilityUpdate(QAccessibleEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"notifyAccessibilityUpdate", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleBridge::notifyAccessibilityUpdate(event);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:59
// [-2] void setRootObject(QAccessibleInterface *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:60
// [-2] void notifyAccessibilityUpdate(QAccessibleEvent *)
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:58
// [-2] void ~QAccessibleBridge()
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleBridgeD2Ev(void *this_) {
  delete (QAccessibleBridge*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:59
// [-2] void setRootObject(QAccessibleInterface *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleBridge13setRootObjectEP20QAccessibleInterface(void *this_, QAccessibleInterface * arg0) {
  ((QAccessibleBridge*)this_)->setRootObject(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:60
// [-2] void notifyAccessibilityUpdate(QAccessibleEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleBridge25notifyAccessibilityUpdateEP16QAccessibleEvent(void *this_, QAccessibleEvent * event) {
  ((QAccessibleBridge*)this_)->notifyAccessibilityUpdate(event);
}

//  main block end
