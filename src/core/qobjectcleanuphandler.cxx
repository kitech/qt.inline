//  header block begin
// /usr/include/qt/QtCore/qobjectcleanuphandler.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobjectcleanuphandler.h>
#include <QtCore>
#include "callback_inherit.h"

// QObjectCleanupHandler is pure virtual: false
// QObjectCleanupHandler has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQObjectCleanupHandler : public QObjectCleanupHandler {
public:
  virtual ~MyQObjectCleanupHandler() {}
// void QObjectCleanupHandler()
MyQObjectCleanupHandler() : QObjectCleanupHandler() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QObjectCleanupHandler10metaObjectEv(void *this_) {
  return (void*)((QObjectCleanupHandler*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:50
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QObjectCleanupHandler11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QObjectCleanupHandler*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:50
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QObjectCleanupHandler11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QObjectCleanupHandler*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:50
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QObjectCleanupHandler2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QObjectCleanupHandler::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:50
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QObjectCleanupHandler6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QObjectCleanupHandler::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:53
// [-2] void QObjectCleanupHandler()
extern "C" Q_DECL_EXPORT
void* C_ZN21QObjectCleanupHandlerC2Ev() {
  return  new QObjectCleanupHandler();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:54
// [-2] void ~QObjectCleanupHandler()
extern "C" Q_DECL_EXPORT
void C_ZN21QObjectCleanupHandlerD2Ev(void *this_) {
  delete (QObjectCleanupHandler*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:56
// [8] QObject * add(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QObjectCleanupHandler3addEP7QObject(void *this_, QObject * object) {
  return (void*)((QObjectCleanupHandler*)this_)->add(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:57
// [-2] void remove(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN21QObjectCleanupHandler6removeEP7QObject(void *this_, QObject * object) {
  ((QObjectCleanupHandler*)this_)->remove(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:58
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QObjectCleanupHandler7isEmptyEv(void *this_) {
  return (bool)((QObjectCleanupHandler*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:59
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN21QObjectCleanupHandler5clearEv(void *this_) {
  ((QObjectCleanupHandler*)this_)->clear();
}

//  main block end
