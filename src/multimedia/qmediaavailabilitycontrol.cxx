//  header block begin
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h
#ifndef protected
#define protected public
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
