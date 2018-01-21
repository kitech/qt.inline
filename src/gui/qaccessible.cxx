//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// static
// /usr/include/qt/QtGui/qaccessible.h:411
// void installActivationObserver(class QAccessible::ActivationObserver *)
extern "C"
void C_ZN11QAccessible25installActivationObserverEPNS_18ActivationObserverE(QAccessible::ActivationObserver * arg0) {
  QAccessible::installActivationObserver(arg0);
}
// static
// /usr/include/qt/QtGui/qaccessible.h:412
// void removeActivationObserver(class QAccessible::ActivationObserver *)
extern "C"
void C_ZN11QAccessible24removeActivationObserverEPNS_18ActivationObserverE(QAccessible::ActivationObserver * arg0) {
  QAccessible::removeActivationObserver(arg0);
}
// static
// /usr/include/qt/QtGui/qaccessible.h:414
// QAccessibleInterface * queryAccessibleInterface(class QObject *)
extern "C"
void C_ZN11QAccessible24queryAccessibleInterfaceEP7QObject(QObject * arg0) {
  /*return*/ QAccessible::queryAccessibleInterface(arg0);
}
// static
// /usr/include/qt/QtGui/qaccessible.h:415
// Id uniqueId(class QAccessibleInterface *)
extern "C"
void C_ZN11QAccessible8uniqueIdEP20QAccessibleInterface(QAccessibleInterface * iface) {
  /*return*/ QAccessible::uniqueId(iface);
}
// static
// /usr/include/qt/QtGui/qaccessible.h:417
// Id registerAccessibleInterface(class QAccessibleInterface *)
extern "C"
void C_ZN11QAccessible27registerAccessibleInterfaceEP20QAccessibleInterface(QAccessibleInterface * iface) {
  /*return*/ QAccessible::registerAccessibleInterface(iface);
}
// static
// /usr/include/qt/QtGui/qaccessible.h:424
// void updateAccessibility(class QAccessibleEvent *)
extern "C"
void C_ZN11QAccessible19updateAccessibilityEP16QAccessibleEvent(QAccessibleEvent * event) {
  QAccessible::updateAccessibility(event);
}
// static
// /usr/include/qt/QtGui/qaccessible.h:426
// bool isActive()
extern "C"
void C_ZN11QAccessible8isActiveEv() {
  /*return*/ QAccessible::isActive();
}
// static
// /usr/include/qt/QtGui/qaccessible.h:427
// void setActive(_Bool)
extern "C"
void C_ZN11QAccessible9setActiveEb(bool active) {
  QAccessible::setActive(active);
}
// static
// /usr/include/qt/QtGui/qaccessible.h:428
// void setRootObject(class QObject *)
extern "C"
void C_ZN11QAccessible13setRootObjectEP7QObject(QObject * object) {
  QAccessible::setRootObject(object);
}
// static
// /usr/include/qt/QtGui/qaccessible.h:430
// void cleanup()
extern "C"
void C_ZN11QAccessible7cleanupEv() {
  QAccessible::cleanup();
}
// static
// /usr/include/qt/QtGui/qaccessible.h:432
// QPair<int, int> qAccessibleTextBoundaryHelper(const class QTextCursor &, enum QAccessible::TextBoundaryType)
extern "C"
void C_ZN11QAccessible29qAccessibleTextBoundaryHelperERK11QTextCursorNS_16TextBoundaryTypeE(const QTextCursor & cursor, QAccessible::TextBoundaryType boundaryType) {
  /*return*/ QAccessible::qAccessibleTextBoundaryHelper(cursor, boundaryType);
}
//  main block end
