//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(future)
// /usr/include/qt/QtCore/qfutureinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfutureinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureInterface is pure virtual: false
// QFutureInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFutureInterface_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFutureInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFutureInterface_t qt_meta_stringdata_MyQFutureInterface = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQFutureInterface"
  },
  "MyQFutureInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFutureInterface[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQFutureInterface : public QFutureInterface<void> {
public:
  virtual ~MyQFutureInterface() {}
// void QFutureInterface(QFutureInterfaceBase::State)
MyQFutureInterface(QFutureInterfaceBase::State initialState) : QFutureInterface<void>(initialState) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:281
// [-2] void QFutureInterface(QFutureInterfaceBase::State)
extern "C" Q_DECL_EXPORT
void* C_ZN16QFutureInterfaceIvEC2EN20QFutureInterfaceBase5StateE(QFutureInterfaceBase::State initialState) {
  return  new QFutureInterface<void>(initialState);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:285
// [16] QFutureInterface<void> canceledResult()
extern "C" Q_DECL_EXPORT
void* C_ZN16QFutureInterfaceIvE14canceledResultEv() {
  auto rv = QFutureInterface<void>::canceledResult();
return new QFutureInterface<void>(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:289
// [16] QFuture<void> future()
extern "C" Q_DECL_EXPORT
void* C_ZN16QFutureInterfaceIvE6futureEv(void *this_) {
  auto rv = ((QFutureInterface<void>*)this_)->future();
return new QFuture<void>(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:291
// [-2] void reportResult(const void *, int)
extern "C" Q_DECL_EXPORT
void C_ZN16QFutureInterfaceIvE12reportResultEPKvi(void *this_, const void * arg0, int arg1) {
  ((QFutureInterface<void>*)this_)->reportResult(arg0, arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:292
// [-2] void reportResults(const QVector<void> &, int)
extern "C" Q_DECL_EXPORT
void C_ZN16QFutureInterfaceIvE13reportResultsERK7QVectorIvEi(void *this_, QVector<void>* arg0, int arg1) {
  ((QFutureInterface<void>*)this_)->reportResults(*arg0, arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:293
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(future)
#endif // #ifndef QT_MINIMAL
//  footer block end
