// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qsharedmemory.h
// dst-file: /src/core/qsharedmemory.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsharedmemory.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qsharedmemory_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSharedMemory_Class_Size()
{
  return sizeof(QSharedMemory);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 87, column 9>
//   // proto:  int QSharedMemory::size();
// _ZNK13QSharedMemory4sizeEv size()
extern "C"
int
C_ZNK13QSharedMemory4sizeEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->size();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 95, column 17>
//   // proto:  const void * QSharedMemory::data();
// _ZNK13QSharedMemory4dataEv data()
extern "C"
void*
C_ZNK13QSharedMemory4dataEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->data();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 83, column 10>
//   // proto:  void QSharedMemory::setNativeKey(const QString & key);
// _ZN13QSharedMemory12setNativeKeyERK7QString setNativeKey(const class QString &)
extern "C"
void
C_ZN13QSharedMemory12setNativeKeyERK7QString(void *qthis,
const QString* arg1) {
  ((QSharedMemory*)qthis)->setNativeKey(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 78, column 5>
//   // proto:  void QSharedMemory::QSharedMemory(const QString & key, QObject * parent);
extern "C"
QSharedMemory*
C_ZN13QSharedMemoryC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QSharedMemory(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 102, column 23>
//   // proto:  QSharedMemory::SharedMemoryError QSharedMemory::error();
// _ZNK13QSharedMemory5errorEv error()
extern "C"
QSharedMemory::SharedMemoryError
C_ZNK13QSharedMemory5errorEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 103, column 13>
//   // proto:  QString QSharedMemory::errorString();
// _ZNK13QSharedMemory11errorStringEv errorString()
extern "C"
QString*
C_ZNK13QSharedMemory11errorStringEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 89, column 10>
//   // proto:  bool QSharedMemory::attach(QSharedMemory::AccessMode mode);
// _ZN13QSharedMemory6attachENS_10AccessModeE attach(enum QSharedMemory::AccessMode)
extern "C"
bool
C_ZN13QSharedMemory6attachENS_10AccessModeE(void *qthis,
QSharedMemory::AccessMode arg1) {
  auto ret =
  ((QSharedMemory*)qthis)->attach(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 81, column 10>
//   // proto:  void QSharedMemory::setKey(const QString & key);
// _ZN13QSharedMemory6setKeyERK7QString setKey(const class QString &)
extern "C"
void
C_ZN13QSharedMemory6setKeyERK7QString(void *qthis,
const QString* arg1) {
  ((QSharedMemory*)qthis)->setKey(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 82, column 13>
//   // proto:  QString QSharedMemory::key();
// _ZNK13QSharedMemory3keyEv key()
extern "C"
QString*
C_ZNK13QSharedMemory3keyEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->key();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 94, column 17>
//   // proto:  const void * QSharedMemory::constData();
// _ZNK13QSharedMemory9constDataEv constData()
extern "C"
void*
C_ZNK13QSharedMemory9constDataEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->constData();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 93, column 11>
//   // proto:  void * QSharedMemory::data();
// _ZN13QSharedMemory4dataEv data()
extern "C"
void*
C_ZN13QSharedMemory4dataEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->data();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 90, column 10>
//   // proto:  bool QSharedMemory::isAttached();
// _ZNK13QSharedMemory10isAttachedEv isAttached()
extern "C"
bool
C_ZNK13QSharedMemory10isAttachedEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->isAttached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 98, column 10>
//   // proto:  bool QSharedMemory::lock();
// _ZN13QSharedMemory4lockEv lock()
extern "C"
bool
C_ZN13QSharedMemory4lockEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->lock();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QSharedMemory::~QSharedMemory();
extern "C"
void C_ZN13QSharedMemoryD2Ev(void *qthis) {
  delete (QSharedMemory*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 99, column 10>
//   // proto:  bool QSharedMemory::unlock();
// _ZN13QSharedMemory6unlockEv unlock()
extern "C"
bool
C_ZN13QSharedMemory6unlockEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->unlock();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 91, column 10>
//   // proto:  bool QSharedMemory::detach();
// _ZN13QSharedMemory6detachEv detach()
extern "C"
bool
C_ZN13QSharedMemory6detachEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->detach();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 84, column 13>
//   // proto:  QString QSharedMemory::nativeKey();
// _ZNK13QSharedMemory9nativeKeyEv nativeKey()
extern "C"
QString*
C_ZNK13QSharedMemory9nativeKeyEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->nativeKey();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 54, column 5>
//   // proto:  const QMetaObject * QSharedMemory::metaObject();
// _ZNK13QSharedMemory10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QSharedMemory10metaObjectEv(void *qthis) {
  auto ret =
  ((QSharedMemory*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 77, column 5>
//   // proto:  void QSharedMemory::QSharedMemory(QObject * parent);
extern "C"
QSharedMemory*
C_ZN13QSharedMemoryC2EP7QObject(QObject * arg1) {
  auto ret = new QSharedMemory(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsharedmemory.h', line 86, column 10>
//   // proto:  bool QSharedMemory::create(int size, QSharedMemory::AccessMode mode);
// _ZN13QSharedMemory6createEiNS_10AccessModeE create(int, enum QSharedMemory::AccessMode)
extern "C"
bool
C_ZN13QSharedMemory6createEiNS_10AccessModeE(void *qthis,
int arg1,
QSharedMemory::AccessMode arg2) {
  auto ret =
  ((QSharedMemory*)qthis)->create(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QSharedMemory_SlotProxy here
class QSharedMemory_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSharedMemory_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsharedmemory.moc"

extern "C" {
  QSharedMemory_SlotProxy* QSharedMemory_SlotProxy_new()
  {
    return new QSharedMemory_SlotProxy();
  }
};

// <= body block end

