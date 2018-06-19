//  header block begin
// /usr/include/qt/QtMultimedia/qmediaservice.h
#ifndef protected
#define protected public
#endif
#include <qmediaservice.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaService is pure virtual: true
// QMediaService has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaService : public QMediaService {
public:
  virtual ~MyQMediaService() {}
// void QMediaService(QObject *)
MyQMediaService(QObject * parent) : QMediaService(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMediaService10metaObjectEv(void *this_) {
  return (void*)((QMediaService*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:58
// [-2] void ~QMediaService()
extern "C" Q_DECL_EXPORT
void C_ZN13QMediaServiceD2Ev(void *this_) {
  delete (QMediaService*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:60
// [8] QMediaControl * requestControl(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaService14requestControlEPKc(void *this_, const char * name) {
  return (void*)((QMediaService*)this_)->requestControl(name);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:71
// [-2] void releaseControl(QMediaControl *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMediaService14releaseControlEP13QMediaControl(void *this_, QMediaControl * control) {
  ((QMediaService*)this_)->releaseControl(control);
}

//  main block end
