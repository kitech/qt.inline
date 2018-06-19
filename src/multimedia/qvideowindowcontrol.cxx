//  header block begin
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h
#ifndef protected
#define protected public
#endif
#include <qvideowindowcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoWindowControl is pure virtual: true
// QVideoWindowControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoWindowControl : public QVideoWindowControl {
public:
  virtual ~MyQVideoWindowControl() {}
// void QVideoWindowControl(QObject *)
MyQVideoWindowControl(QObject * parent) : QVideoWindowControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoWindowControl10metaObjectEv(void *this_) {
  return (void*)((QVideoWindowControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:58
// [-2] void ~QVideoWindowControl()
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControlD2Ev(void *this_) {
  delete (QVideoWindowControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:60
// [8] WId winId()
extern "C" Q_DECL_EXPORT
WId C_ZNK19QVideoWindowControl5winIdEv(void *this_) {
  return (WId)((QVideoWindowControl*)this_)->winId();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:61
// [-2] void setWinId(WId)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl8setWinIdEy(void *this_, WId id) {
  ((QVideoWindowControl*)this_)->setWinId(id);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:63
// [16] QRect displayRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoWindowControl11displayRectEv(void *this_) {
  auto rv = ((QVideoWindowControl*)this_)->displayRect();
return new QRect(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:64
// [-2] void setDisplayRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl14setDisplayRectERK5QRect(void *this_, QRect* rect) {
  ((QVideoWindowControl*)this_)->setDisplayRect(*rect);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:66
// [1] bool isFullScreen()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QVideoWindowControl12isFullScreenEv(void *this_) {
  return (bool)((QVideoWindowControl*)this_)->isFullScreen();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:67
// [-2] void setFullScreen(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl13setFullScreenEb(void *this_, bool fullScreen) {
  ((QVideoWindowControl*)this_)->setFullScreen(fullScreen);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:69
// [-2] void repaint()
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl7repaintEv(void *this_) {
  ((QVideoWindowControl*)this_)->repaint();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:71
// [8] QSize nativeSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoWindowControl10nativeSizeEv(void *this_) {
  auto rv = ((QVideoWindowControl*)this_)->nativeSize();
return new QSize(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:73
// [4] Qt::AspectRatioMode aspectRatioMode()
extern "C" Q_DECL_EXPORT
Qt::AspectRatioMode C_ZNK19QVideoWindowControl15aspectRatioModeEv(void *this_) {
  return (Qt::AspectRatioMode)((QVideoWindowControl*)this_)->aspectRatioMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:74
// [-2] void setAspectRatioMode(Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl18setAspectRatioModeEN2Qt15AspectRatioModeE(void *this_, Qt::AspectRatioMode mode) {
  ((QVideoWindowControl*)this_)->setAspectRatioMode(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:76
// [4] int brightness()
extern "C" Q_DECL_EXPORT
int C_ZNK19QVideoWindowControl10brightnessEv(void *this_) {
  return (int)((QVideoWindowControl*)this_)->brightness();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:77
// [-2] void setBrightness(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl13setBrightnessEi(void *this_, int brightness) {
  ((QVideoWindowControl*)this_)->setBrightness(brightness);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:79
// [4] int contrast()
extern "C" Q_DECL_EXPORT
int C_ZNK19QVideoWindowControl8contrastEv(void *this_) {
  return (int)((QVideoWindowControl*)this_)->contrast();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:80
// [-2] void setContrast(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl11setContrastEi(void *this_, int contrast) {
  ((QVideoWindowControl*)this_)->setContrast(contrast);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:82
// [4] int hue()
extern "C" Q_DECL_EXPORT
int C_ZNK19QVideoWindowControl3hueEv(void *this_) {
  return (int)((QVideoWindowControl*)this_)->hue();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:83
// [-2] void setHue(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl6setHueEi(void *this_, int hue) {
  ((QVideoWindowControl*)this_)->setHue(hue);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:85
// [4] int saturation()
extern "C" Q_DECL_EXPORT
int C_ZNK19QVideoWindowControl10saturationEv(void *this_) {
  return (int)((QVideoWindowControl*)this_)->saturation();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:86
// [-2] void setSaturation(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl13setSaturationEi(void *this_, int saturation) {
  ((QVideoWindowControl*)this_)->setSaturation(saturation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:89
// [-2] void fullScreenChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl17fullScreenChangedEb(void *this_, bool fullScreen) {
  ((QVideoWindowControl*)this_)->fullScreenChanged(fullScreen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:90
// [-2] void brightnessChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl17brightnessChangedEi(void *this_, int brightness) {
  ((QVideoWindowControl*)this_)->brightnessChanged(brightness);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:91
// [-2] void contrastChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl15contrastChangedEi(void *this_, int contrast) {
  ((QVideoWindowControl*)this_)->contrastChanged(contrast);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:92
// [-2] void hueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl10hueChangedEi(void *this_, int hue) {
  ((QVideoWindowControl*)this_)->hueChanged(hue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:93
// [-2] void saturationChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl17saturationChangedEi(void *this_, int saturation) {
  ((QVideoWindowControl*)this_)->saturationChanged(saturation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:94
// [-2] void nativeSizeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoWindowControl17nativeSizeChangedEv(void *this_) {
  ((QVideoWindowControl*)this_)->nativeSizeChanged();
}

//  main block end
