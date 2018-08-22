//  header block begin
// /usr/include/qt/QtMultimedia/qmediaservice.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QMediaControl * requestControl(const char *)
  virtual QMediaControl * requestControl(const char * name)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestControl", &handled, 1, (uint64_t)name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaControl *)(irv);
      // Pointer Pointer QMediaControl *
    } else {
    return (QMediaControl *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void releaseControl(QMediaControl *)
  virtual void releaseControl(QMediaControl * control)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"releaseControl", &handled, 1, (uint64_t)control, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaService::releaseControl(control);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:60
// [8] QMediaControl * requestControl(const char *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:71
// [-2] void releaseControl(QMediaControl *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMediaService10metaObjectEv(void *this_) {
  return (void*)((QMediaService*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaService11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaService*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QMediaService11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaService*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaService2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaService::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaService6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaService::trUtf8(s, c, n);
return new QString(rv);
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
