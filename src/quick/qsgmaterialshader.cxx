//  header block begin

// /usr/include/qt/QtQuick/qsgmaterialshader.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgmaterialshader.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGMaterialShader is pure virtual: true true
// QSGMaterialShader has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGMaterialShader_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGMaterialShader_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGMaterialShader_t qt_meta_stringdata_MyQSGMaterialShader = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSGMaterialShader"
  },
  "MyQSGMaterialShader"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGMaterialShader[] = {
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
class Q_DECL_EXPORT MyQSGMaterialShader : public QSGMaterialShader {
public:
  virtual ~MyQSGMaterialShader() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] const char *const * attributeNames()
  virtual const char *const * attributeNames() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"attributeNames", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const char *const *)(irv);
      // Pointer Pointer const char *const *
    } else {
    return (const char *const *){};
  }
  }

// void QSGMaterialShader()
MyQSGMaterialShader() : QSGMaterialShader() {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void compile()
  virtual void compile()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"compile", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGMaterialShader::compile();
  }
  }

// Protected inline virtual Ignore Visibility=Default Availability=Available
// [-2] void initialize()
  virtual void initialize()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initialize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGMaterialShader::initialize();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] const char * vertexShader()
  virtual const char * vertexShader() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"vertexShader", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const char *)(irv);
      // Pointer Pointer const char *
    } else {
    return QSGMaterialShader::vertexShader();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] const char * fragmentShader()
  virtual const char * fragmentShader() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"fragmentShader", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const char *)(irv);
      // Pointer Pointer const char *
    } else {
    return QSGMaterialShader::fragmentShader();
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgmaterialshader(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialshader.h:106
// [8] QOpenGLShaderProgram * program() 
// (12)qm3279383757 (32)_ZN17QSGMaterialShader7programEv
//static
/*void qm3279383757()*/ {
  ;
  (void) ((QSGMaterialShader*)this_)->program();
   auto xptr = (QOpenGLShaderProgram * (QSGMaterialShader::*)() ) &QSGMaterialShader::program;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSGMaterialShaderD2Ev(void *this_)*/ {
  delete (QSGMaterialShader*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgmaterialshader
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
