// /usr/include/qt/QtCore/qobjectcleanuphandler.h
#include <qobjectcleanuphandler.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:50
// const QMetaObject * metaObject()
extern "C"
void C_ZNK21QObjectCleanupHandler10metaObjectEv(void *this_) {
  /*return*/ ((QObjectCleanupHandler*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:53
// void QObjectCleanupHandler()
extern "C"
void* C_ZN21QObjectCleanupHandlerC1Ev() {
  return new QObjectCleanupHandler();
}
// virtual
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:54
// void ~QObjectCleanupHandler()
extern "C"
void C_ZN21QObjectCleanupHandlerD1Ev(void *this_) {
  delete (QObjectCleanupHandler*)(this_);
}
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:56
// QObject * add(class QObject *)
extern "C"
void C_ZN21QObjectCleanupHandler3addEP7QObject(void *this_, QObject * object) {
  /*return*/ ((QObjectCleanupHandler*)this_)->add(object);
}
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:57
// void remove(class QObject *)
extern "C"
void C_ZN21QObjectCleanupHandler6removeEP7QObject(void *this_, QObject * object) {
  ((QObjectCleanupHandler*)this_)->remove(object);
}
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:58
// bool isEmpty()
extern "C"
void C_ZNK21QObjectCleanupHandler7isEmptyEv(void *this_) {
  /*return*/ ((QObjectCleanupHandler*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:59
// void clear()
extern "C"
void C_ZN21QObjectCleanupHandler5clearEv(void *this_) {
  ((QObjectCleanupHandler*)this_)->clear();
}