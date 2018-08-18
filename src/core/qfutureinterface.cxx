//  header block begin
// /usr/include/qt/QtCore/qfutureinterface.h
#ifndef protected
#define protected public
#endif
#include <qfutureinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureInterface is pure virtual: false
// QFutureInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFutureInterface : public QFutureInterface<void> {
public:
  virtual ~MyQFutureInterface() {}
// void QFutureInterface(QFutureInterfaceBase::State)
MyQFutureInterface(QFutureInterfaceBase::State initialState) : QFutureInterface<void>(initialState) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:282
// [-2] void QFutureInterface(QFutureInterfaceBase::State)
extern "C" Q_DECL_EXPORT
void* C_ZN16QFutureInterfaceIvEC2EN20QFutureInterfaceBase5StateE(QFutureInterfaceBase::State initialState) {
  return  new QFutureInterface<void>(initialState);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:286
// [16] QFutureInterface<void> canceledResult()
extern "C" Q_DECL_EXPORT
void* C_ZN16QFutureInterfaceIvE14canceledResultEv() {
  auto rv = QFutureInterface<void>::canceledResult();
return new QFutureInterface<void>(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:290
// [16] QFuture<void> future()
extern "C" Q_DECL_EXPORT
void* C_ZN16QFutureInterfaceIvE6futureEv(void *this_) {
  auto rv = ((QFutureInterface<void>*)this_)->future();
return new QFuture<void>(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:292
// [-2] void reportResult(const void *, int)
extern "C" Q_DECL_EXPORT
void C_ZN16QFutureInterfaceIvE12reportResultEPKvi(void *this_, const void * arg0, int arg1) {
  ((QFutureInterface<void>*)this_)->reportResult(arg0, arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:293
// [-2] void reportResults(const QVector<void> &, int)
extern "C" Q_DECL_EXPORT
void C_ZN16QFutureInterfaceIvE13reportResultsERK7QVectorIvEi(void *this_, const QVector<void> & arg0, int arg1) {
  ((QFutureInterface<void>*)this_)->reportResults(arg0, arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:294
// [-2] void reportFinished(const void *)
extern "C" Q_DECL_EXPORT
void C_ZN16QFutureInterfaceIvE14reportFinishedEPKv(void *this_, const void * arg0) {
  ((QFutureInterface<void>*)this_)->reportFinished(arg0);
}


extern "C" Q_DECL_EXPORT
void C_ZN16QFutureInterfaceD2Ev(void *this_) {
  delete (QFutureInterface<void>*)(this_);
}
//  main block end
