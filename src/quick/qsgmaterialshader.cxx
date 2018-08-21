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

class Q_DECL_EXPORT MyQSGMaterialShader : public QSGMaterialShader {
public:
  virtual ~MyQSGMaterialShader() {}
// void QSGMaterialShader()
MyQSGMaterialShader() : QSGMaterialShader() {}
// Protected inline Visibility=Default Availability=Available
// [8] QSGMaterialShaderPrivate * d_func()
  virtual QSGMaterialShaderPrivate * d_func() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"d_func", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialShaderPrivate *)(irv);
      // Pointer Pointer QSGMaterialShaderPrivate *
    } else {
    return QSGMaterialShader::d_func();
  }
  }

// Protected inline Visibility=Default Availability=Available
// [8] const QSGMaterialShaderPrivate * d_func()
  virtual const QSGMaterialShaderPrivate * d_func() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"d_func", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const QSGMaterialShaderPrivate *)(irv);
      // Pointer Pointer const QSGMaterialShaderPrivate *
    } else {
    return QSGMaterialShader::d_func();
  }
  }

// void QSGMaterialShader(QSGMaterialShaderPrivate &)
MyQSGMaterialShader(QSGMaterialShaderPrivate & dd) : QSGMaterialShader(dd) {}
// Protected Visibility=Default Availability=Available
// [-2] void setShaderSourceFile(QOpenGLShader::ShaderType, const QString &)
  virtual void setShaderSourceFile(QFlags<QOpenGLShader::ShaderTypeBit> type_, const QString & sourceFile) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setShaderSourceFile", &handled, 2, (uint64_t)type_, (uint64_t)&sourceFile, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGMaterialShader::setShaderSourceFile(type_, sourceFile);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setShaderSourceFiles(QOpenGLShader::ShaderType, const QStringList &)
  virtual void setShaderSourceFiles(QFlags<QOpenGLShader::ShaderTypeBit> type_, const QStringList & sourceFiles) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setShaderSourceFiles", &handled, 2, (uint64_t)type_, (uint64_t)&sourceFiles, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGMaterialShader::setShaderSourceFiles(type_, sourceFiles);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void compile()
  virtual void compile() {
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
  virtual void initialize() {
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
  virtual const char * vertexShader() const{
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
  virtual const char * fragmentShader() const{
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

// Protected inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:108
// [8] QSGMaterialShaderPrivate * d_func()
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGMaterialShader6d_funcEv(void *this_) {
  return (void*)((QSGMaterialShader*)this_)->QSGMaterialShader::d_func();
}

// Protected inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:108
// [8] const QSGMaterialShaderPrivate * d_func()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGMaterialShader6d_funcEv(void *this_) {
  return (void*)((QSGMaterialShader*)this_)->QSGMaterialShader::d_func();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:114
// [-2] void setShaderSourceFile(QOpenGLShader::ShaderType, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGMaterialShader19setShaderSourceFileE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, QString* sourceFile) {
  ((QSGMaterialShader*)this_)->QSGMaterialShader::setShaderSourceFile(type_, *sourceFile);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:115
// [-2] void setShaderSourceFiles(QOpenGLShader::ShaderType, const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGMaterialShader20setShaderSourceFilesE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK11QStringList(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, QStringList* sourceFiles) {
  ((QSGMaterialShader*)this_)->QSGMaterialShader::setShaderSourceFiles(type_, *sourceFiles);
}

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
