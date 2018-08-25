//  header block begin
// /usr/include/qt/QtMultimedia/qvideoprobe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideoprobe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoProbe is pure virtual: false
// QVideoProbe has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoProbe : public QVideoProbe {
public:
  virtual ~MyQVideoProbe() {}
// void QVideoProbe(QObject *)
MyQVideoProbe(QObject * parent) : QVideoProbe(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QVideoProbe10metaObjectEv(void *this_) {
  return (void*)((QVideoProbe*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoProbe11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVideoProbe*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QVideoProbe11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVideoProbe*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoProbe2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoProbe::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoProbe6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoProbe::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:56
// [-2] void QVideoProbe(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoProbeC2EP7QObject(QObject * parent) {
  return  new MyQVideoProbe(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:57
// [-2] void ~QVideoProbe()
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoProbeD2Ev(void *this_) {
  delete (QVideoProbe*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:59
// [1] bool setSource(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QVideoProbe9setSourceEP12QMediaObject(void *this_, QMediaObject * source) {
  return (bool)((QVideoProbe*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:60
// [1] bool setSource(QMediaRecorder *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QVideoProbe9setSourceEP14QMediaRecorder(void *this_, QMediaRecorder * source) {
  return (bool)((QVideoProbe*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:62
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QVideoProbe8isActiveEv(void *this_) {
  return (bool)((QVideoProbe*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:65
// [-2] void videoFrameProbed(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoProbe16videoFrameProbedERK11QVideoFrame(void *this_, QVideoFrame* videoFrame) {
  ((QVideoProbe*)this_)->videoFrameProbed(*videoFrame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:66
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoProbe5flushEv(void *this_) {
  ((QVideoProbe*)this_)->flush();
}

//  main block end
