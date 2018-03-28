//  header block begin
// /usr/include/qt/QtCore/qsharedpointer_impl.h
#ifndef protected
#define protected public
#endif
#include <qsharedpointer.h>
#include <QtCore>
#include "callback_inherit.h"

// ExternalRefCountData is pure virtual: false
// ExternalRefCountData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyExternalRefCountData : public QtSharedPointer::ExternalRefCountData {
public:
  virtual ~MyExternalRefCountData() {}
// void ExternalRefCountData(Qt::Initialization)
MyExternalRefCountData(Qt::Initialization arg0) : QtSharedPointer::ExternalRefCountData(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:154
// [-2] void ExternalRefCountData(Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN15QtSharedPointer20ExternalRefCountDataC2EN2Qt14InitializationE(Qt::Initialization arg0) {
  return  new QtSharedPointer::ExternalRefCountData(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:155
// [-2] void ~ExternalRefCountData()
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountDataD2Ev(void *this_) {
  delete (QtSharedPointer::ExternalRefCountData*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:157
// [-2] void destroy()
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountData7destroyEv(void *this_) {
  ((QtSharedPointer::ExternalRefCountData*)this_)->destroy();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:160
// [8] QtSharedPointer::ExternalRefCountData * getAndRef(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QtSharedPointer20ExternalRefCountData9getAndRefEPK7QObject(const QObject * arg0) {
  return (void*)QtSharedPointer::ExternalRefCountData::getAndRef(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:161
// [-2] void setQObjectShared(const QObject *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountData16setQObjectSharedEPK7QObjectb(void *this_, const QObject * arg0, bool enable) {
  ((QtSharedPointer::ExternalRefCountData*)this_)->setQObjectShared(arg0, enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:162
// [-2] void checkQObjectShared(const QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountData18checkQObjectSharedEPK7QObject(void *this_, const QObject * arg0) {
  ((QtSharedPointer::ExternalRefCountData*)this_)->checkQObjectShared(arg0);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:167
// [-2] void operator delete(void *)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountDatadlEPv(void * ptr) {
  QtSharedPointer::ExternalRefCountData::operator delete(ptr);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:168
// [-2] void operator delete(void *, void *)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountDatadlEPvS1_(void * arg0, void * arg1) {
  QtSharedPointer::ExternalRefCountData::operator delete(arg0, arg1);
}

//  main block end
