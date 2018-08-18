//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessible is pure virtual: false
// QAccessible has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessible : public QAccessible {
public:
  virtual ~MyQAccessible() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:400
// [-2] void installFactory(QAccessible::InterfaceFactory)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible14installFactoryEPFP20QAccessibleInterfaceRK7QStringP7QObjectE(QAccessible::InterfaceFactory arg0) {
  QAccessible::installFactory(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:401
// [-2] void removeFactory(QAccessible::InterfaceFactory)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible13removeFactoryEPFP20QAccessibleInterfaceRK7QStringP7QObjectE(QAccessible::InterfaceFactory arg0) {
  QAccessible::removeFactory(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:402
// [8] QAccessible::UpdateHandler installUpdateHandler(QAccessible::UpdateHandler)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible20installUpdateHandlerEPFvP16QAccessibleEventE(QAccessible::UpdateHandler arg0) {
  auto rv = QAccessible::installUpdateHandler(arg0);
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:403
// [8] QAccessible::RootObjectHandler installRootObjectHandler(QAccessible::RootObjectHandler)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible24installRootObjectHandlerEPFvP7QObjectE(QAccessible::RootObjectHandler arg0) {
  auto rv = QAccessible::installRootObjectHandler(arg0);
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:411
// [-2] void installActivationObserver(QAccessible::ActivationObserver *)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible25installActivationObserverEPNS_18ActivationObserverE(QAccessible::ActivationObserver * arg0) {
  QAccessible::installActivationObserver(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:412
// [-2] void removeActivationObserver(QAccessible::ActivationObserver *)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible24removeActivationObserverEPNS_18ActivationObserverE(QAccessible::ActivationObserver * arg0) {
  QAccessible::removeActivationObserver(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:414
// [8] QAccessibleInterface * queryAccessibleInterface(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAccessible24queryAccessibleInterfaceEP7QObject(QObject * arg0) {
  return (void*)QAccessible::queryAccessibleInterface(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:415
// [4] QAccessible::Id uniqueId(QAccessibleInterface *)
extern "C" Q_DECL_EXPORT
QAccessible::Id C_ZN11QAccessible8uniqueIdEP20QAccessibleInterface(QAccessibleInterface * iface) {
  return (QAccessible::Id)QAccessible::uniqueId(iface);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:416
// [8] QAccessibleInterface * accessibleInterface(QAccessible::Id)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAccessible19accessibleInterfaceEj(QAccessible::Id uniqueId) {
  return (void*)QAccessible::accessibleInterface(uniqueId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:417
// [4] QAccessible::Id registerAccessibleInterface(QAccessibleInterface *)
extern "C" Q_DECL_EXPORT
QAccessible::Id C_ZN11QAccessible27registerAccessibleInterfaceEP20QAccessibleInterface(QAccessibleInterface * iface) {
  return (QAccessible::Id)QAccessible::registerAccessibleInterface(iface);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:418
// [-2] void deleteAccessibleInterface(QAccessible::Id)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible25deleteAccessibleInterfaceEj(QAccessible::Id uniqueId) {
  QAccessible::deleteAccessibleInterface(uniqueId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:424
// [-2] void updateAccessibility(QAccessibleEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible19updateAccessibilityEP16QAccessibleEvent(QAccessibleEvent * event) {
  QAccessible::updateAccessibility(event);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:426
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZN11QAccessible8isActiveEv() {
  return (bool)QAccessible::isActive();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:427
// [-2] void setActive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible9setActiveEb(bool active) {
  QAccessible::setActive(active);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:428
// [-2] void setRootObject(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible13setRootObjectEP7QObject(QObject * object) {
  QAccessible::setRootObject(object);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:430
// [-2] void cleanup()
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible7cleanupEv() {
  QAccessible::cleanup();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:432
// [8] QPair<int, int> qAccessibleTextBoundaryHelper(const QTextCursor &, QAccessible::TextBoundaryType)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible29qAccessibleTextBoundaryHelperERK11QTextCursorNS_16TextBoundaryTypeE(QTextCursor* cursor, QAccessible::TextBoundaryType boundaryType) {
  auto rv = QAccessible::qAccessibleTextBoundaryHelper(*cursor, boundaryType);
/*return rv;*/
}


extern "C" Q_DECL_EXPORT
void C_ZN11QAccessibleD2Ev(void *this_) {
  delete (QAccessible*)(this_);
}
//  main block end
