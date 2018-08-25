//  header block begin
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideosurface.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractVideoSurface is pure virtual: true
// QAbstractVideoSurface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractVideoSurface : public QAbstractVideoSurface {
public:
  virtual ~MyQAbstractVideoSurface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType)
  virtual QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType handleType) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedPixelFormats", &handled, 1, (uint64_t)handleType, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QVideoFrame::PixelFormat>){};}
    auto prv = (QList<QVideoFrame::PixelFormat>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QVideoFrame::PixelFormat>
    } else {
    return (QList<QVideoFrame::PixelFormat>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool present(const QVideoFrame &)
  virtual bool present(const QVideoFrame & frame)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"present", &handled, 1, (uint64_t)&frame, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// void QAbstractVideoSurface(QObject *)
MyQAbstractVideoSurface(QObject * parent) : QAbstractVideoSurface(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:70
// [-2] QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:84
// [1] bool present(const QVideoFrame &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractVideoSurface10metaObjectEv(void *this_) {
  return (void*)((QAbstractVideoSurface*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractVideoSurface11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractVideoSurface*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QAbstractVideoSurface11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractVideoSurface*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractVideoSurface2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractVideoSurface::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractVideoSurface6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractVideoSurface::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:67
// [-2] void QAbstractVideoSurface(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractVideoSurfaceC2EP7QObject(QObject * parent) {
  return  new MyQAbstractVideoSurface(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:68
// [-2] void ~QAbstractVideoSurface()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurfaceD2Ev(void *this_) {
  delete (QAbstractVideoSurface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:70
// [-2] QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType)
extern "C" Q_DECL_EXPORT
QList<QVideoFrame::PixelFormat>* C_ZNK21QAbstractVideoSurface21supportedPixelFormatsEN20QAbstractVideoBuffer10HandleTypeE(void *this_, QAbstractVideoBuffer::HandleType handleType) {
  auto rv = ((QAbstractVideoSurface*)this_)->supportedPixelFormats(handleType);
return new QList<QVideoFrame::PixelFormat>(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:72
// [1] bool isFormatSupported(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QAbstractVideoSurface17isFormatSupportedERK19QVideoSurfaceFormat(void *this_, QVideoSurfaceFormat* format) {
  return (bool)((QAbstractVideoSurface*)this_)->isFormatSupported(*format);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:73
// [8] QVideoSurfaceFormat nearestFormat(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractVideoSurface13nearestFormatERK19QVideoSurfaceFormat(void *this_, QVideoSurfaceFormat* format) {
  auto rv = ((QAbstractVideoSurface*)this_)->nearestFormat(*format);
return new QVideoSurfaceFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:75
// [8] QVideoSurfaceFormat surfaceFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractVideoSurface13surfaceFormatEv(void *this_) {
  auto rv = ((QAbstractVideoSurface*)this_)->surfaceFormat();
return new QVideoSurfaceFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:77
// [8] QSize nativeResolution()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractVideoSurface16nativeResolutionEv(void *this_) {
  auto rv = ((QAbstractVideoSurface*)this_)->nativeResolution();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:79
// [1] bool start(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QAbstractVideoSurface5startERK19QVideoSurfaceFormat(void *this_, QVideoSurfaceFormat* format) {
  return (bool)((QAbstractVideoSurface*)this_)->start(*format);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:80
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface4stopEv(void *this_) {
  ((QAbstractVideoSurface*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:82
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QAbstractVideoSurface8isActiveEv(void *this_) {
  return (bool)((QAbstractVideoSurface*)this_)->isActive();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:84
// [1] bool present(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QAbstractVideoSurface7presentERK11QVideoFrame(void *this_, QVideoFrame* frame) {
  return (bool)((QAbstractVideoSurface*)this_)->present(*frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:86
// [4] QAbstractVideoSurface::Error error()
extern "C" Q_DECL_EXPORT
QAbstractVideoSurface::Error C_ZNK21QAbstractVideoSurface5errorEv(void *this_) {
  return (QAbstractVideoSurface::Error)((QAbstractVideoSurface*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:89
// [-2] void activeChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface13activeChangedEb(void *this_, bool active) {
  ((QAbstractVideoSurface*)this_)->activeChanged(active);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:90
// [-2] void surfaceFormatChanged(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface20surfaceFormatChangedERK19QVideoSurfaceFormat(void *this_, QVideoSurfaceFormat* format) {
  ((QAbstractVideoSurface*)this_)->surfaceFormatChanged(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:91
// [-2] void supportedFormatsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface23supportedFormatsChangedEv(void *this_) {
  ((QAbstractVideoSurface*)this_)->supportedFormatsChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:92
// [-2] void nativeResolutionChanged(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface23nativeResolutionChangedERK5QSize(void *this_, QSize* arg0) {
  ((QAbstractVideoSurface*)this_)->nativeResolutionChanged(*arg0);
}

//  main block end
