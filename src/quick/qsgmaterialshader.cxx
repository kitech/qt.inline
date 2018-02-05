//  header block begin
// /usr/include/qt/QtQuick/qsgmaterial.h
#include <qsgmaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGMaterialShader is pure virtual: true
// QSGMaterialShader has virtual projected: true
//  header block end

//  main block begin

class MyQSGMaterialShader : public QSGMaterialShader {
public:
  virtual ~MyQSGMaterialShader() {}
// void QSGMaterialShader()
MyQSGMaterialShader() : QSGMaterialShader() {}
// void setShaderSourceFile(class QOpenGLShader::ShaderType, const class QString &)
  virtual void setShaderSourceFile(QFlags<QOpenGLShader::ShaderTypeBit> type, const QString & sourceFile) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setShaderSourceFile", &handled, 2, (uint64_t)type, (uint64_t)&sourceFile, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGMaterialShader::setShaderSourceFile(type, sourceFile);
  }
  }
// void setShaderSourceFiles(class QOpenGLShader::ShaderType, const class QStringList &)
  virtual void setShaderSourceFiles(QFlags<QOpenGLShader::ShaderTypeBit> type, const QStringList & sourceFiles) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setShaderSourceFiles", &handled, 2, (uint64_t)type, (uint64_t)&sourceFiles, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGMaterialShader::setShaderSourceFiles(type, sourceFiles);
  }
  }
// void compile()
  virtual void compile() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"compile", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGMaterialShader::compile();
  }
  }
// void initialize()
  virtual void initialize() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initialize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGMaterialShader::initialize();
  }
  }
// const char * vertexShader()
  virtual const char * vertexShader() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"vertexShader", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const char *)(irv);
      // PointerPointerconst char *
    } else {
    return QSGMaterialShader::vertexShader();
  }
  }
// const char * fragmentShader()
  virtual const char * fragmentShader() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"fragmentShader", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const char *)(irv);
      // PointerPointerconst char *
    } else {
    return QSGMaterialShader::fragmentShader();
  }
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:96
// [-2] void QSGMaterialShader()
extern "C"
void* C_ZN17QSGMaterialShaderC1Ev() {
  auto _nilp = (MyQSGMaterialShader*)(0);
  return 0; // new MyQSGMaterialShader();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:97
// [-2] void ~QSGMaterialShader()
extern "C"
void C_ZN17QSGMaterialShaderD2Ev(void *this_) {
  delete (QSGMaterialShader*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:99
// [-2] void activate()
extern "C"
void C_ZN17QSGMaterialShader8activateEv(void *this_) {
  ((QSGMaterialShader*)this_)->activate();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:100
// [-2] void deactivate()
extern "C"
void C_ZN17QSGMaterialShader10deactivateEv(void *this_) {
  ((QSGMaterialShader*)this_)->deactivate();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:103
// [8] const char *const * attributeNames()
extern "C"
void* C_ZNK17QSGMaterialShader14attributeNamesEv(void *this_) {
  return (void*)((QSGMaterialShader*)this_)->attributeNames();
}
//  main block end
