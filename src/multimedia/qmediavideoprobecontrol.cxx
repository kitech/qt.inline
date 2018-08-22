//  header block begin
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediavideoprobecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaVideoProbeControl is pure virtual: false
// QMediaVideoProbeControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaVideoProbeControl : public QMediaVideoProbeControl {
public:
  virtual ~MyQMediaVideoProbeControl() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QMediaVideoProbeControl10metaObjectEv(void *this_) {
  return (void*)((QMediaVideoProbeControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaVideoProbeControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaVideoProbeControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QMediaVideoProbeControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaVideoProbeControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaVideoProbeControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaVideoProbeControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaVideoProbeControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaVideoProbeControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:54
// [-2] void ~QMediaVideoProbeControl()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaVideoProbeControlD2Ev(void *this_) {
  delete (QMediaVideoProbeControl*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:57
// [-2] void videoFrameProbed(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaVideoProbeControl16videoFrameProbedERK11QVideoFrame(void *this_, QVideoFrame* frame) {
  ((QMediaVideoProbeControl*)this_)->videoFrameProbed(*frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:58
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaVideoProbeControl5flushEv(void *this_) {
  ((QMediaVideoProbeControl*)this_)->flush();
}

//  main block end
