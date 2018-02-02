//  header block begin
// /usr/include/qt/QtCore/qsharedmemory.h
#include <qsharedmemory.h>
#include <QtCore>
#include "callback_inherit.h"

// QSharedMemory is pure virtual: false
// QSharedMemory has virtual projected: false
//  header block end

//  main block begin

class MyQSharedMemory : public QSharedMemory {
public:
  virtual ~MyQSharedMemory() {}
// void QSharedMemory(class QObject *)
MyQSharedMemory(QObject * parent) : QSharedMemory(parent) {}
// void QSharedMemory(const class QString &, class QObject *)
MyQSharedMemory(const QString & key, QObject * parent) : QSharedMemory(key, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QSharedMemory10metaObjectEv(void *this_) {
  return (void*)((QSharedMemory*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:77
// [-2] void QSharedMemory(class QObject *)
extern "C"
void* C_ZN13QSharedMemoryC2EP7QObject(QObject * parent) {
  return  new QSharedMemory(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:78
// [-2] void QSharedMemory(const class QString &, class QObject *)
extern "C"
void* C_ZN13QSharedMemoryC2ERK7QStringP7QObject(QString* key, QObject * parent) {
  return  new QSharedMemory(*key, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:79
// [-2] void ~QSharedMemory()
extern "C"
void C_ZN13QSharedMemoryD2Ev(void *this_) {
  delete (QSharedMemory*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:81
// [-2] void setKey(const class QString &)
extern "C"
void C_ZN13QSharedMemory6setKeyERK7QString(void *this_, QString* key) {
  ((QSharedMemory*)this_)->setKey(*key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:82
// [8] QString key()
extern "C"
void* C_ZNK13QSharedMemory3keyEv(void *this_) {
  auto rv = ((QSharedMemory*)this_)->key();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:83
// [-2] void setNativeKey(const class QString &)
extern "C"
void C_ZN13QSharedMemory12setNativeKeyERK7QString(void *this_, QString* key) {
  ((QSharedMemory*)this_)->setNativeKey(*key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:84
// [8] QString nativeKey()
extern "C"
void* C_ZNK13QSharedMemory9nativeKeyEv(void *this_) {
  auto rv = ((QSharedMemory*)this_)->nativeKey();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:86
// [1] bool create(int, enum QSharedMemory::AccessMode)
extern "C"
bool C_ZN13QSharedMemory6createEiNS_10AccessModeE(void *this_, int size, QSharedMemory::AccessMode mode) {
  return (bool)((QSharedMemory*)this_)->create(size, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:87
// [4] int size()
extern "C"
int C_ZNK13QSharedMemory4sizeEv(void *this_) {
  return (int)((QSharedMemory*)this_)->size();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:89
// [1] bool attach(enum QSharedMemory::AccessMode)
extern "C"
bool C_ZN13QSharedMemory6attachENS_10AccessModeE(void *this_, QSharedMemory::AccessMode mode) {
  return (bool)((QSharedMemory*)this_)->attach(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:90
// [1] bool isAttached()
extern "C"
bool C_ZNK13QSharedMemory10isAttachedEv(void *this_) {
  return (bool)((QSharedMemory*)this_)->isAttached();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:91
// [1] bool detach()
extern "C"
bool C_ZN13QSharedMemory6detachEv(void *this_) {
  return (bool)((QSharedMemory*)this_)->detach();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:93
// [8] void * data()
extern "C"
void* C_ZN13QSharedMemory4dataEv(void *this_) {
  return (void*)((QSharedMemory*)this_)->data();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:94
// [8] const void * constData()
extern "C"
void* C_ZNK13QSharedMemory9constDataEv(void *this_) {
  return (void*)((QSharedMemory*)this_)->constData();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:95
// [8] const void * data()
extern "C"
void* C_ZNK13QSharedMemory4dataEv(void *this_) {
  return (void*)((QSharedMemory*)this_)->data();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:98
// [1] bool lock()
extern "C"
bool C_ZN13QSharedMemory4lockEv(void *this_) {
  return (bool)((QSharedMemory*)this_)->lock();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:99
// [1] bool unlock()
extern "C"
bool C_ZN13QSharedMemory6unlockEv(void *this_) {
  return (bool)((QSharedMemory*)this_)->unlock();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:102
// [4] QSharedMemory::SharedMemoryError error()
extern "C"
QSharedMemory::SharedMemoryError C_ZNK13QSharedMemory5errorEv(void *this_) {
  return (QSharedMemory::SharedMemoryError)((QSharedMemory*)this_)->error();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:103
// [8] QString errorString()
extern "C"
void* C_ZNK13QSharedMemory11errorStringEv(void *this_) {
  auto rv = ((QSharedMemory*)this_)->errorString();
return new QString(rv);
}
//  main block end
