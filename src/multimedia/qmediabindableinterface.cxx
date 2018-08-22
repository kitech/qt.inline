//  header block begin
// /usr/include/qt/QtMultimedia/qmediabindableinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediabindableinterface.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaBindableInterface is pure virtual: true
// QMediaBindableInterface has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaBindableInterface : public QMediaBindableInterface {
public:
  virtual ~MyQMediaBindableInterface() {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [1] bool setMediaObject(QMediaObject *)
  virtual bool setMediaObject(QMediaObject * object)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMediaObject", &handled, 1, (uint64_t)object, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediabindableinterface.h:59
// [1] bool setMediaObject(QMediaObject *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediabindableinterface.h:53
// [-2] void ~QMediaBindableInterface()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaBindableInterfaceD2Ev(void *this_) {
  delete (QMediaBindableInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediabindableinterface.h:55
// [8] QMediaObject * mediaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QMediaBindableInterface11mediaObjectEv(void *this_) {
  return (void*)((QMediaBindableInterface*)this_)->mediaObject();
}

//  main block end
