//  header block begin
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaavailabilitycontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaAvailabilityControl is pure virtual: true
// QMediaAvailabilityControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaAvailabilityControl : public QMediaAvailabilityControl {
public:
  virtual ~MyQMediaAvailabilityControl() {}
// void QMediaAvailabilityControl(QObject *)
MyQMediaAvailabilityControl(QObject * parent) : QMediaAvailabilityControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QMediaAvailabilityControl10metaObjectEv(void *this_) {
  return (void*)((QMediaAvailabilityControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaAvailabilityControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaAvailabilityControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN25QMediaAvailabilityControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaAvailabilityControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaAvailabilityControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaAvailabilityControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaAvailabilityControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaAvailabilityControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:57
// [-2] void ~QMediaAvailabilityControl()
extern "C" Q_DECL_EXPORT
void C_ZN25QMediaAvailabilityControlD2Ev(void *this_) {
  delete (QMediaAvailabilityControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:59
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK25QMediaAvailabilityControl12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QMediaAvailabilityControl*)this_)->availability();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:62
// [-2] void availabilityChanged(QMultimedia::AvailabilityStatus)
extern "C" Q_DECL_EXPORT
void C_ZN25QMediaAvailabilityControl19availabilityChangedEN11QMultimedia18AvailabilityStatusE(void *this_, QMultimedia::AvailabilityStatus availability) {
  ((QMediaAvailabilityControl*)this_)->availabilityChanged(availability);
}

//  main block end
