//  header block begin
// /usr/include/qt/QtMultimedia/qmediacontrol.h
#ifndef protected
#define protected public
#endif
#include <qmediacontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaControl is pure virtual: false
// QMediaControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaControl : public QMediaControl {
public:
  virtual ~MyQMediaControl() {}
// void QMediaControl(QObject *)
MyQMediaControl(QObject * parent) : QMediaControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMediaControl10metaObjectEv(void *this_) {
  return (void*)((QMediaControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:59
// [-2] void ~QMediaControl()
extern "C" Q_DECL_EXPORT
void C_ZN13QMediaControlD2Ev(void *this_) {
  delete (QMediaControl*)(this_);
}
//  main block end
