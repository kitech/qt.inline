//  header block begin
// /usr/include/qt/QtQuick/qsgmaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgmaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGMaterialShader is pure virtual: true
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
// Public purevirtual virtual Visibility=Default Availability=Available
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:103
// [8] const char *const * attributeNames()
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:117
// [-2] void compile()
extern "C" Q_DECL_EXPORT
void C_ZN17QSGMaterialShader7compileEv(void *this_) {
  ((QSGMaterialShader*)this_)->QSGMaterialShader::compile();
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:119
// [-2] void initialize()
extern "C" Q_DECL_EXPORT
void C_ZN17QSGMaterialShader10initializeEv(void *this_) {
  ((QSGMaterialShader*)this_)->QSGMaterialShader::initialize();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:121
// [8] const char * vertexShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGMaterialShader12vertexShaderEv(void *this_) {
  return (void*)((QSGMaterialShader*)this_)->QSGMaterialShader::vertexShader();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:122
// [8] const char * fragmentShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGMaterialShader14fragmentShaderEv(void *this_) {
  return (void*)((QSGMaterialShader*)this_)->QSGMaterialShader::fragmentShader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:96
// [-2] void QSGMaterialShader()
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGMaterialShaderC2Ev() {
  auto _nilp = (MyQSGMaterialShader*)(0);
  return 0; // new MyQSGMaterialShader();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:97
// [-2] void ~QSGMaterialShader()
extern "C" Q_DECL_EXPORT
void C_ZN17QSGMaterialShaderD2Ev(void *this_) {
  delete (QSGMaterialShader*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:99
// [-2] void activate()
extern "C" Q_DECL_EXPORT
void C_ZN17QSGMaterialShader8activateEv(void *this_) {
  ((QSGMaterialShader*)this_)->activate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:100
// [-2] void deactivate()
extern "C" Q_DECL_EXPORT
void C_ZN17QSGMaterialShader10deactivateEv(void *this_) {
  ((QSGMaterialShader*)this_)->deactivate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:102
// [-2] void updateState(const QSGMaterialShader::RenderState &, QSGMaterial *, QSGMaterial *)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGMaterialShader11updateStateERKNS_11RenderStateEP11QSGMaterialS4_(void *this_, QSGMaterialShader::RenderState* state, QSGMaterial * newMaterial, QSGMaterial * oldMaterial) {
  ((QSGMaterialShader*)this_)->updateState(*state, newMaterial, oldMaterial);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:103
// [8] const char *const * attributeNames()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGMaterialShader14attributeNamesEv(void *this_) {
  return (void*)((QSGMaterialShader*)this_)->attributeNames();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:105
// [8] QOpenGLShaderProgram * program()
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGMaterialShader7programEv(void *this_) {
  return (void*)((QSGMaterialShader*)this_)->program();
}

//  main block end
