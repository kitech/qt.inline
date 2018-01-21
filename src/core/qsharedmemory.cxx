//  header block begin
// /usr/include/qt/QtCore/qsharedmemory.h
#include <qsharedmemory.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qsharedmemory.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QSharedMemory10metaObjectEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qsharedmemory.h:77
// void QSharedMemory(class QObject *)
extern "C"
void* C_ZN13QSharedMemoryC1EP7QObject(QObject * parent) {
  return new QSharedMemory(parent);
}
// /usr/include/qt/QtCore/qsharedmemory.h:78
// void QSharedMemory(const class QString &, class QObject *)
extern "C"
void* C_ZN13QSharedMemoryC1ERK7QStringP7QObject(const QString & key, QObject * parent) {
  return new QSharedMemory(key, parent);
}
// virtual
// /usr/include/qt/QtCore/qsharedmemory.h:79
// void ~QSharedMemory()
extern "C"
void C_ZN13QSharedMemoryD1Ev(void *this_) {
  delete (QSharedMemory*)(this_);
}
// /usr/include/qt/QtCore/qsharedmemory.h:81
// void setKey(const class QString &)
extern "C"
void C_ZN13QSharedMemory6setKeyERK7QString(void *this_, const QString & key) {
  ((QSharedMemory*)this_)->setKey(key);
}
// /usr/include/qt/QtCore/qsharedmemory.h:82
// QString key()
extern "C"
void C_ZNK13QSharedMemory3keyEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->key();
}
// /usr/include/qt/QtCore/qsharedmemory.h:83
// void setNativeKey(const class QString &)
extern "C"
void C_ZN13QSharedMemory12setNativeKeyERK7QString(void *this_, const QString & key) {
  ((QSharedMemory*)this_)->setNativeKey(key);
}
// /usr/include/qt/QtCore/qsharedmemory.h:84
// QString nativeKey()
extern "C"
void C_ZNK13QSharedMemory9nativeKeyEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->nativeKey();
}
// /usr/include/qt/QtCore/qsharedmemory.h:86
// bool create(int, enum QSharedMemory::AccessMode)
extern "C"
void C_ZN13QSharedMemory6createEiNS_10AccessModeE(void *this_, int size, QSharedMemory::AccessMode mode) {
  /*return*/ ((QSharedMemory*)this_)->create(size, mode);
}
// /usr/include/qt/QtCore/qsharedmemory.h:87
// int size()
extern "C"
void C_ZNK13QSharedMemory4sizeEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->size();
}
// /usr/include/qt/QtCore/qsharedmemory.h:89
// bool attach(enum QSharedMemory::AccessMode)
extern "C"
void C_ZN13QSharedMemory6attachENS_10AccessModeE(void *this_, QSharedMemory::AccessMode mode) {
  /*return*/ ((QSharedMemory*)this_)->attach(mode);
}
// /usr/include/qt/QtCore/qsharedmemory.h:90
// bool isAttached()
extern "C"
void C_ZNK13QSharedMemory10isAttachedEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->isAttached();
}
// /usr/include/qt/QtCore/qsharedmemory.h:91
// bool detach()
extern "C"
void C_ZN13QSharedMemory6detachEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->detach();
}
// /usr/include/qt/QtCore/qsharedmemory.h:93
// void * data()
extern "C"
void C_ZN13QSharedMemory4dataEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->data();
}
// /usr/include/qt/QtCore/qsharedmemory.h:94
// const void * constData()
extern "C"
void C_ZNK13QSharedMemory9constDataEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->constData();
}
// /usr/include/qt/QtCore/qsharedmemory.h:95
// const void * data()
extern "C"
void C_ZNK13QSharedMemory4dataEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->data();
}
// /usr/include/qt/QtCore/qsharedmemory.h:98
// bool lock()
extern "C"
void C_ZN13QSharedMemory4lockEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->lock();
}
// /usr/include/qt/QtCore/qsharedmemory.h:99
// bool unlock()
extern "C"
void C_ZN13QSharedMemory6unlockEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->unlock();
}
// /usr/include/qt/QtCore/qsharedmemory.h:102
// QSharedMemory::SharedMemoryError error()
extern "C"
void C_ZNK13QSharedMemory5errorEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->error();
}
// /usr/include/qt/QtCore/qsharedmemory.h:103
// QString errorString()
extern "C"
void C_ZNK13QSharedMemory11errorStringEv(void *this_) {
  /*return*/ ((QSharedMemory*)this_)->errorString();
}
//  main block end
