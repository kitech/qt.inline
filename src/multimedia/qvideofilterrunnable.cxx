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
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QVideoFrame run(QVideoFrame *, const QVideoSurfaceFormat &, QVideoFilterRunnable::RunFlags)
  virtual QVideoFrame run(QVideoFrame * input, const QVideoSurfaceFormat & surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"run", &handled, 3, (uint64_t)input, (uint64_t)&surfaceFormat, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVideoFrame){};}
    auto prv = (QVideoFrame*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVideoFrame
    } else {
    return (QVideoFrame){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:60
// [8] QVideoFrame run(QVideoFrame *, const QVideoSurfaceFormat &, QVideoFilterRunnable::RunFlags)
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
