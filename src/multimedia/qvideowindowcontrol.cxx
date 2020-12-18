//  header block begin

// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideowindowcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoWindowControl is pure virtual: true true
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
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
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
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQVideoWindowControl() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" Q_DECL_EXPORT
void* C_QVideoWindowControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQVideoWindowControl* qo = (MyQVideoWindowControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideowindowcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (11)qm504728117 (35)_ZN19QVideoWindowControl2trEPKcS1_i
//static
/*void qm504728117(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QVideoWindowControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QVideoWindowControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QVideoWindowControlD2Ev(void *this_)*/ {
  delete (QVideoWindowControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideowindowcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
