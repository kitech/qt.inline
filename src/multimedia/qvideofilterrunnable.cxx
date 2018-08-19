//  header block begin
// since 0x050500
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideofilter.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoFilterRunnable is pure virtual: true
// QVideoFilterRunnable has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoFilterRunnable : public QVideoFilterRunnable {
public:
  virtual ~MyQVideoFilterRunnable() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:59
// [-2] void ~QVideoFilterRunnable()
extern "C" Q_DECL_EXPORT
void C_ZN20QVideoFilterRunnableD2Ev(void *this_) {
  delete (QVideoFilterRunnable*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:60
// [8] QVideoFrame run(QVideoFrame *, const QVideoSurfaceFormat &, QVideoFilterRunnable::RunFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN20QVideoFilterRunnable3runEP11QVideoFrameRK19QVideoSurfaceFormat6QFlagsINS_7RunFlagEE(void *this_, QVideoFrame * input, QVideoSurfaceFormat* surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags) {
  auto rv = ((QVideoFilterRunnable*)this_)->run(input, *surfaceFormat, flags);
return new QVideoFrame(rv);
}

//  main block end
