//  header block begin
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaaudioprobecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaAudioProbeControl is pure virtual: false
// QMediaAudioProbeControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaAudioProbeControl : public QMediaAudioProbeControl {
public:
  virtual ~MyQMediaAudioProbeControl() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QMediaAudioProbeControl10metaObjectEv(void *this_) {
  return (void*)((QMediaAudioProbeControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaAudioProbeControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaAudioProbeControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QMediaAudioProbeControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaAudioProbeControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaAudioProbeControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaAudioProbeControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaAudioProbeControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaAudioProbeControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:52
// [-2] void ~QMediaAudioProbeControl()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControlD2Ev(void *this_) {
  delete (QMediaAudioProbeControl*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:55
// [-2] void audioBufferProbed(const QAudioBuffer &)
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControl17audioBufferProbedERK12QAudioBuffer(void *this_, QAudioBuffer* buffer) {
  ((QMediaAudioProbeControl*)this_)->audioBufferProbed(*buffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:56
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControl5flushEv(void *this_) {
  ((QMediaAudioProbeControl*)this_)->flush();
}

//  main block end
