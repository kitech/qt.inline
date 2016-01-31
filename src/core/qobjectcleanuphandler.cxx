// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qobjectcleanuphandler.h
// dst-file: /src/core/qobjectcleanuphandler.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qobjectcleanuphandler.h>


// <= header block end

// main block begin =>
void __keep_qobjectcleanuphandler_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QObjectCleanupHandler_Class_Size()
{
  return sizeof(QObjectCleanupHandler);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qobjectcleanuphandler.h', line 53, column 10>
//   // proto:  void QObjectCleanupHandler::clear();
// _ZN21QObjectCleanupHandler5clearEv clear()
extern "C"
void
C_ZN21QObjectCleanupHandler5clearEv(void *qthis) {
  ((QObjectCleanupHandler*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qobjectcleanuphandler.h', line 52, column 10>
//   // proto:  bool QObjectCleanupHandler::isEmpty();
// _ZNK21QObjectCleanupHandler7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK21QObjectCleanupHandler7isEmptyEv(void *qthis) {
  auto ret =
  ((QObjectCleanupHandler*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QObjectCleanupHandler::~QObjectCleanupHandler();
extern "C"
void C_ZN21QObjectCleanupHandlerD2Ev(void *qthis) {
  delete (QObjectCleanupHandler*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobjectcleanuphandler.h', line 44, column 5>
//   // proto:  const QMetaObject * QObjectCleanupHandler::metaObject();
// _ZNK21QObjectCleanupHandler10metaObjectEv metaObject()
extern "C"
void*
C_ZNK21QObjectCleanupHandler10metaObjectEv(void *qthis) {
  auto ret =
  ((QObjectCleanupHandler*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobjectcleanuphandler.h', line 51, column 10>
//   // proto:  void QObjectCleanupHandler::remove(QObject * object);
// _ZN21QObjectCleanupHandler6removeEP7QObject remove(class QObject *)
extern "C"
void
C_ZN21QObjectCleanupHandler6removeEP7QObject(void *qthis,
QObject * arg1) {
  ((QObjectCleanupHandler*)qthis)->remove(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobjectcleanuphandler.h', line 50, column 14>
//   // proto:  QObject * QObjectCleanupHandler::add(QObject * object);
// _ZN21QObjectCleanupHandler3addEP7QObject add(class QObject *)
extern "C"
void*
C_ZN21QObjectCleanupHandler3addEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QObjectCleanupHandler*)qthis)->add(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobjectcleanuphandler.h', line 47, column 5>
//   // proto:  void QObjectCleanupHandler::QObjectCleanupHandler();
extern "C"
QObjectCleanupHandler*
C_ZN21QObjectCleanupHandlerC2Ev() {
  auto ret = new QObjectCleanupHandler();
  return ret;
}
// <= ext block end

// body block begin =>
// QObjectCleanupHandler_SlotProxy here
class QObjectCleanupHandler_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QObjectCleanupHandler_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qobjectcleanuphandler.moc"

extern "C" {
  QObjectCleanupHandler_SlotProxy* QObjectCleanupHandler_SlotProxy_new()
  {
    return new QObjectCleanupHandler_SlotProxy();
  }
};

// <= body block end

