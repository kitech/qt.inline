//  header block begin

// since 0x050800
// /usr/include/qt/QtQuick/qsgrendererinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgrendererinterface.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRendererInterface is pure virtual: true
// QSGRendererInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGRendererInterface_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGRendererInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGRendererInterface_t qt_meta_stringdata_MyQSGRendererInterface = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQSGRendererInterface"
  },
  "MyQSGRendererInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGRendererInterface[] = {
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
class Q_DECL_EXPORT MyQSGRendererInterface : public QSGRendererInterface {
public:
  virtual ~MyQSGRendererInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QSGRendererInterface::GraphicsApi graphicsApi()
  virtual QSGRendererInterface::GraphicsApi graphicsApi() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"graphicsApi", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGRendererInterface::GraphicsApi)(int)(irv);
      // Enum Enum QSGRendererInterface::GraphicsApi
    } else {
    return (QSGRendererInterface::GraphicsApi){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QSGRendererInterface::ShaderType shaderType()
  virtual QSGRendererInterface::ShaderType shaderType() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"shaderType", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGRendererInterface::ShaderType)(int)(irv);
      // Enum Enum QSGRendererInterface::ShaderType
    } else {
    return (QSGRendererInterface::ShaderType){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QSGRendererInterface::ShaderCompilationTypes shaderCompilationType()
  virtual QSGRendererInterface::ShaderCompilationTypes shaderCompilationType() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"shaderCompilationType", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGRendererInterface::ShaderCompilationTypes)(int)(irv);
      // Typedef Record QFlags<QSGRendererInterface::ShaderCompilationType>
    } else {
    return (QSGRendererInterface::ShaderCompilationTypes){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QSGRendererInterface::ShaderSourceTypes shaderSourceType()
  virtual QSGRendererInterface::ShaderSourceTypes shaderSourceType() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"shaderSourceType", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGRendererInterface::ShaderSourceTypes)(int)(irv);
      // Typedef Record QFlags<QSGRendererInterface::ShaderSourceType>
    } else {
    return (QSGRendererInterface::ShaderSourceTypes){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:88
// [4] QSGRendererInterface::GraphicsApi graphicsApi()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:93
// [4] QSGRendererInterface::ShaderType shaderType()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:94
// [4] QSGRendererInterface::ShaderCompilationTypes shaderCompilationType()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:95
// [4] QSGRendererInterface::ShaderSourceTypes shaderSourceType()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:86
// [-2] void ~QSGRendererInterface()
extern "C" Q_DECL_EXPORT
void C_ZN20QSGRendererInterfaceD2Ev(void *this_) {
  delete (QSGRendererInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:88
// [4] QSGRendererInterface::GraphicsApi graphicsApi()
extern "C" Q_DECL_EXPORT
QSGRendererInterface::GraphicsApi C_ZNK20QSGRendererInterface11graphicsApiEv(void *this_) {
  return (QSGRendererInterface::GraphicsApi)((QSGRendererInterface*)this_)->graphicsApi();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:90
// [8] void * getResource(QQuickWindow *, QSGRendererInterface::Resource)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGRendererInterface11getResourceEP12QQuickWindowNS_8ResourceE(void *this_, QQuickWindow * window, QSGRendererInterface::Resource resource) {
  return (void*)((QSGRendererInterface*)this_)->getResource(window, resource);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:91
// [8] void * getResource(QQuickWindow *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGRendererInterface11getResourceEP12QQuickWindowPKc(void *this_, QQuickWindow * window, const char * resource) {
  return (void*)((QSGRendererInterface*)this_)->getResource(window, resource);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:93
// [4] QSGRendererInterface::ShaderType shaderType()
extern "C" Q_DECL_EXPORT
QSGRendererInterface::ShaderType C_ZNK20QSGRendererInterface10shaderTypeEv(void *this_) {
  return (QSGRendererInterface::ShaderType)((QSGRendererInterface*)this_)->shaderType();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:94
// [4] QSGRendererInterface::ShaderCompilationTypes shaderCompilationType()
extern "C" Q_DECL_EXPORT
QSGRendererInterface::ShaderCompilationTypes* C_ZNK20QSGRendererInterface21shaderCompilationTypeEv(void *this_) {
  auto rv = ((QSGRendererInterface*)this_)->shaderCompilationType();
return new QSGRendererInterface::ShaderCompilationTypes(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:95
// [4] QSGRendererInterface::ShaderSourceTypes shaderSourceType()
extern "C" Q_DECL_EXPORT
QSGRendererInterface::ShaderSourceTypes* C_ZNK20QSGRendererInterface16shaderSourceTypeEv(void *this_) {
  auto rv = ((QSGRendererInterface*)this_)->shaderSourceType();
return new QSGRendererInterface::ShaderSourceTypes(rv);
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
