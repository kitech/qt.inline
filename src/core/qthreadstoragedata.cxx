//  header block begin
// /usr/include/qt/QtCore/qthreadstorage.h
#ifndef protected
#define protected public
#endif
#include <qthreadstorage.h>
#include <QtCore>
#include "callback_inherit.h"

// QThreadStorageData is pure virtual: false
// QThreadStorageData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQThreadStorageData : public QThreadStorageData {
public:
  virtual ~MyQThreadStorageData() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:54
// [-2] void ~QThreadStorageData()
extern "C" Q_DECL_EXPORT
void C_ZN18QThreadStorageDataD2Ev(void *this_) {
  delete (QThreadStorageData*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:56
// [8] void ** get()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QThreadStorageData3getEv(void *this_) {
  return (void*)((QThreadStorageData*)this_)->get();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:57
// [8] void ** set(void *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QThreadStorageData3setEPv(void *this_, void * p) {
  return (void*)((QThreadStorageData*)this_)->set(p);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:59
// [-2] void finish(void **)
extern "C" Q_DECL_EXPORT
void C_ZN18QThreadStorageData6finishEPPv(void ** arg0) {
  QThreadStorageData::finish(arg0);
}

//  main block end
