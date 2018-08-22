//  header block begin
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideorenderercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoRendererControl is pure virtual: true
// QVideoRendererControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoRendererControl : public QVideoRendererControl {
public:
  virtual ~MyQVideoRendererControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAbstractVideoSurface * surface()
  virtual QAbstractVideoSurface * surface() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"surface", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractVideoSurface *)(irv);
      // Pointer Pointer QAbstractVideoSurface *
    } else {
    return (QAbstractVideoSurface *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setSurface(QAbstractVideoSurface *)
  virtual void setSurface(QAbstractVideoSurface * surface)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSurface", &handled, 1, (uint64_t)surface, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoRendererControl::setSurface(surface);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:55
// [8] QAbstractVideoSurface * surface()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:56
// [-2] void setSurface(QAbstractVideoSurface *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoRendererControl10metaObjectEv(void *this_) {
  return (void*)((QVideoRendererControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QVideoRendererControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVideoRendererControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QVideoRendererControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVideoRendererControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QVideoRendererControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoRendererControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QVideoRendererControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoRendererControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:53
// [-2] void ~QVideoRendererControl()
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoRendererControlD2Ev(void *this_) {
  delete (QVideoRendererControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:55
// [8] QAbstractVideoSurface * surface()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoRendererControl7surfaceEv(void *this_) {
  return (void*)((QVideoRendererControl*)this_)->surface();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:56
// [-2] void setSurface(QAbstractVideoSurface *)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoRendererControl10setSurfaceEP21QAbstractVideoSurface(void *this_, QAbstractVideoSurface * surface) {
  ((QVideoRendererControl*)this_)->setSurface(surface);
}

//  main block end
