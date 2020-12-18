//  header block begin

// /usr/include/qt/QtQuick/qsgrendererinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgrendererinterface.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRendererInterface is pure virtual: true true
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
// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgrendererinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN20QSGRendererInterfaceD2Ev(void *this_)*/ {
  delete (QSGRendererInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgrendererinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
