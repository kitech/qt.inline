//  header block begin
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideowindowcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoWindowControl is pure virtual: true
// QVideoWindowControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQVideoWindowControl_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoWindowControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoWindowControl_t qt_meta_stringdata_MyQVideoWindowControl = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQVideoWindowControl"
  },
  "MyQVideoWindowControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoWindowControl[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQVideoWindowControl : public QVideoWindowControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QVideoWindowControl::staticMetaObject,
  qt_meta_stringdata_MyQVideoWindowControl.data,
  qt_meta_data_MyQVideoWindowControl,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQVideoWindowControl.stringdata0))
      return static_cast<void*>(this);
  return QVideoWindowControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QVideoWindowControl::qt_metacall(_c, _id, _a);
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  virtual ~MyQVideoWindowControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] WId winId()
  virtual WId winId() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"winId", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (WId)(irv);
      // Typedef ULongLong unsigned long long
    } else {
    return (WId){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setWinId(WId)
  virtual void setWinId(WId id)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setWinId", &handled, 1, (uint64_t)id, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::setWinId(id);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QRect displayRect()
  virtual QRect displayRect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"displayRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRect){};}
    auto prv = (QRect*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRect
    } else {
    return (QRect){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setDisplayRect(const QRect &)
  virtual void setDisplayRect(const QRect & rect)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setDisplayRect", &handled, 1, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::setDisplayRect(rect);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isFullScreen()
  virtual bool isFullScreen() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isFullScreen", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setFullScreen(bool)
  virtual void setFullScreen(bool fullScreen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFullScreen", &handled, 1, (uint64_t)fullScreen, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::setFullScreen(fullScreen);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void repaint()
  virtual void repaint()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"repaint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::repaint();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QSize nativeSize()
  virtual QSize nativeSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nativeSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] Qt::AspectRatioMode aspectRatioMode()
  virtual Qt::AspectRatioMode aspectRatioMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"aspectRatioMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::AspectRatioMode)(int)(irv);
      // Elaborated Enum Qt::AspectRatioMode
    } else {
    return (Qt::AspectRatioMode){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setAspectRatioMode(Qt::AspectRatioMode)
  virtual void setAspectRatioMode(Qt::AspectRatioMode mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAspectRatioMode", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::setAspectRatioMode(mode);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int brightness()
  virtual int brightness() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"brightness", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setBrightness(int)
  virtual void setBrightness(int brightness)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setBrightness", &handled, 1, (uint64_t)brightness, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::setBrightness(brightness);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int contrast()
  virtual int contrast() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contrast", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setContrast(int)
  virtual void setContrast(int contrast)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setContrast", &handled, 1, (uint64_t)contrast, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::setContrast(contrast);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int hue()
  virtual int hue() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hue", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setHue(int)
  virtual void setHue(int hue)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setHue", &handled, 1, (uint64_t)hue, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::setHue(hue);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int saturation()
  virtual int saturation() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"saturation", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setSaturation(int)
  virtual void setSaturation(int saturation)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSaturation", &handled, 1, (uint64_t)saturation, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoWindowControl::setSaturation(saturation);
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:60
// [8] WId winId()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:61
// [-2] void setWinId(WId)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:63
// [16] QRect displayRect()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:64
// [-2] void setDisplayRect(const QRect &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:66
// [1] bool isFullScreen()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:67
// [-2] void setFullScreen(bool)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:69
// [-2] void repaint()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:71
// [8] QSize nativeSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:73
// [4] Qt::AspectRatioMode aspectRatioMode()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:74
// [-2] void setAspectRatioMode(Qt::AspectRatioMode)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:76
// [4] int brightness()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:77
// [-2] void setBrightness(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:79
// [4] int contrast()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:80
// [-2] void setContrast(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:82
// [4] int hue()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:83
// [-2] void setHue(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:85
// [4] int saturation()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:86
// [-2] void setSaturation(int)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoWindowControl10metaObjectEv(void *this_) {
  return (void*)((QVideoWindowControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QVideoWindowControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVideoWindowControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QVideoWindowControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVideoWindowControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QVideoWindowControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoWindowControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QVideoWindowControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoWindowControl::trUtf8(s, c, n);
return new QString(rv);
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
