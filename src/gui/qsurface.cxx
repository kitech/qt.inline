//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qsurface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsurface.h>
#include <QtGui>
#include "callback_inherit.h"

// QSurface is pure virtual: true
// QSurface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSurface_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSurface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSurface_t qt_meta_stringdata_MyQSurface = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQSurface"
  },
  "MyQSurface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSurface[] = {
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
class Q_DECL_EXPORT MyQSurface : public QSurface {
public:
  virtual ~MyQSurface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QSurfaceFormat format()
  virtual QSurfaceFormat format() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"format", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSurfaceFormat){};}
    auto prv = (QSurfaceFormat*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSurfaceFormat
    } else {
    return (QSurfaceFormat){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QPlatformSurface * surfaceHandle()
  virtual QPlatformSurface * surfaceHandle() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"surfaceHandle", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPlatformSurface *)(irv);
      // Pointer Pointer QPlatformSurface *
    } else {
    return (QPlatformSurface *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QSurface::SurfaceType surfaceType()
  virtual QSurface::SurfaceType surfaceType() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"surfaceType", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSurface::SurfaceType)(int)(irv);
      // Enum Enum QSurface::SurfaceType
    } else {
    return (QSurface::SurfaceType){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QSize size()
  virtual QSize size() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"size", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:75
// [8] QSurfaceFormat format()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:76
// [8] QPlatformSurface * surfaceHandle()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:78
// [4] QSurface::SurfaceType surfaceType()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:81
// [8] QSize size()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:71
// [-2] void ~QSurface()
extern "C" Q_DECL_EXPORT
void C_ZN8QSurfaceD2Ev(void *this_) {
  delete (QSurface*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:73
// [4] QSurface::SurfaceClass surfaceClass()
extern "C" Q_DECL_EXPORT
QSurface::SurfaceClass C_ZNK8QSurface12surfaceClassEv(void *this_) {
  return (QSurface::SurfaceClass)((QSurface*)this_)->surfaceClass();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:75
// [8] QSurfaceFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSurface6formatEv(void *this_) {
  auto rv = ((QSurface*)this_)->format();
return new QSurfaceFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:76
// [8] QPlatformSurface * surfaceHandle()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSurface13surfaceHandleEv(void *this_) {
  return (void*)((QSurface*)this_)->surfaceHandle();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:78
// [4] QSurface::SurfaceType surfaceType()
extern "C" Q_DECL_EXPORT
QSurface::SurfaceType C_ZNK8QSurface11surfaceTypeEv(void *this_) {
  return (QSurface::SurfaceType)((QSurface*)this_)->surfaceType();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qsurface.h:79
// [1] bool supportsOpenGL()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZNK8QSurface14supportsOpenGLEv(void *this_) {
  return (bool)((QSurface*)this_)->supportsOpenGL();
}
#endif // QT_VERSION >= 0x050300

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:81
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSurface4sizeEv(void *this_) {
  auto rv = ((QSurface*)this_)->size();
return new QSize(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
