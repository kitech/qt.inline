//  header block begin
// /usr/include/qt/QtGui/qaccessiblebridge.h
#ifndef protected
#define protected public
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
};

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:58
// [-2] void ~QAccessibleBridge()
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleBridgeD2Ev(void *this_) {
  delete (QAccessibleBridge*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:59
// [-2] void setRootObject(class QAccessibleInterface *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleBridge13setRootObjectEP20QAccessibleInterface(void *this_, QAccessibleInterface * arg0) {
  ((QAccessibleBridge*)this_)->setRootObject(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:60
// [-2] void notifyAccessibilityUpdate(class QAccessibleEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleBridge25notifyAccessibilityUpdateEP16QAccessibleEvent(void *this_, QAccessibleEvent * event) {
  ((QAccessibleBridge*)this_)->notifyAccessibilityUpdate(event);
}

//  main block end
