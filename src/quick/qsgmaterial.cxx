// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qsgmaterial.h
// dst-file: /src/quick/qsgmaterial.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsgmaterial.h>


// <= header block end

// main block begin =>
void __keep_qsgmaterial_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 137, column 24>
//   // proto:  QSGMaterial::Flags QSGMaterial::flags();
if (true) {
  auto f = []() {
    ((QSGMaterial*)0)->flags();
  };
  if (f == nullptr){}
}
// _ZNK11QSGMaterial5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 92, column 34>
//   // proto:  QOpenGLShaderProgram * QSGMaterialShader::program();
if (true) {
  auto f = []() {
    ((QSGMaterialShader*)0)->program();
  };
  if (f == nullptr){}
}
// _ZN17QSGMaterialShader7programEv program()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSGMaterial_Class_Size()
{
  return sizeof(QSGMaterial);
}

extern "C"
int QSGMaterialShader_Class_Size()
{
  return sizeof(QSGMaterialShader);
}

extern "C"
int QSGMaterialType_Class_Size()
{
  return sizeof(QSGMaterialType);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 130, column 5>
//   // proto:  void QSGMaterial::QSGMaterial();
extern "C"
QSGMaterial*
C_ZN11QSGMaterialC2Ev() {
  // auto ret = new QSGMaterial();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 133, column 30>
//   // proto:  QSGMaterialType * QSGMaterial::type();
// _ZNK11QSGMaterial4typeEv type()
extern "C"
void*
C_ZNK11QSGMaterial4typeEv(void *qthis) {
  auto ret =
  ((QSGMaterial*)qthis)->type();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 134, column 32>
//   // proto:  QSGMaterialShader * QSGMaterial::createShader();
// _ZNK11QSGMaterial12createShaderEv createShader()
extern "C"
void*
C_ZNK11QSGMaterial12createShaderEv(void *qthis) {
  auto ret =
  ((QSGMaterial*)qthis)->createShader();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 137, column 24>
//   // proto:  QSGMaterial::Flags QSGMaterial::flags();
// _ZNK11QSGMaterial5flagsEv flags()
extern "C"
QFlags<QSGMaterial::Flag>*
C_ZNK11QSGMaterial5flagsEv(void *qthis) {
  auto ret =
  ((QSGMaterial*)qthis)->flags();
  return new QFlags<QSGMaterial::Flag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 138, column 10>
//   // proto:  void QSGMaterial::setFlag(Flags flags, bool on);
// _ZN11QSGMaterial7setFlagE6QFlagsINS_4FlagEEb setFlag(Flags, _Bool)
extern "C"
void
C_ZN11QSGMaterial7setFlagE6QFlagsINS_4FlagEEb(void *qthis,
QSGMaterial::Flags arg1,
bool arg2) {
  ((QSGMaterial*)qthis)->setFlag(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 135, column 17>
//   // proto:  int QSGMaterial::compare(const QSGMaterial * other);
// _ZNK11QSGMaterial7compareEPKS_ compare(const class QSGMaterial *)
extern "C"
int
C_ZNK11QSGMaterial7compareEPKS_(void *qthis,
const QSGMaterial * arg1) {
  auto ret =
  ((QSGMaterial*)qthis)->compare(arg1);
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QSGMaterial::~QSGMaterial();
extern "C"
void C_ZN11QSGMaterialD2Ev(void *qthis) {
  delete (QSGMaterial*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 86, column 18>
//   // proto:  void QSGMaterialShader::activate();
// _ZN17QSGMaterialShader8activateEv activate()
extern "C"
void
C_ZN17QSGMaterialShader8activateEv(void *qthis) {
  ((QSGMaterialShader*)qthis)->activate();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 83, column 5>
//   // proto:  void QSGMaterialShader::QSGMaterialShader();
extern "C"
QSGMaterialShader*
C_ZN17QSGMaterialShaderC2Ev() {
  // auto ret = new QSGMaterialShader();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 90, column 32>
//   // proto:  const char *const * QSGMaterialShader::attributeNames();
// _ZNK17QSGMaterialShader14attributeNamesEv attributeNames()
extern "C"
void*
C_ZNK17QSGMaterialShader14attributeNamesEv(void *qthis) {
  auto ret =
  ((QSGMaterialShader*)qthis)->attributeNames();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 89, column 18>
//   // proto:  void QSGMaterialShader::updateState(const QSGMaterialShader::RenderState & state, QSGMaterial * newMaterial, QSGMaterial * oldMaterial);
// _ZN17QSGMaterialShader11updateStateERKNS_11RenderStateEP11QSGMaterialS4_ updateState(const class QSGMaterialShader::RenderState &, class QSGMaterial *, class QSGMaterial *)
extern "C"
void
C_ZN17QSGMaterialShader11updateStateERKNS_11RenderStateEP11QSGMaterialS4_(void *qthis,
const QSGMaterialShader::RenderState* arg1,
QSGMaterial * arg2,
QSGMaterial * arg3) {
  ((QSGMaterialShader*)qthis)->updateState(*((const QSGMaterialShader::RenderState*)arg1),
arg2,
arg3);
}
//   // proto:  void QSGMaterialShader::~QSGMaterialShader();
extern "C"
void C_ZN17QSGMaterialShaderD2Ev(void *qthis) {
  delete (QSGMaterialShader*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 87, column 18>
//   // proto:  void QSGMaterialShader::deactivate();
// _ZN17QSGMaterialShader10deactivateEv deactivate()
extern "C"
void
C_ZN17QSGMaterialShader10deactivateEv(void *qthis) {
  ((QSGMaterialShader*)qthis)->deactivate();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgmaterial.h', line 92, column 34>
//   // proto:  QOpenGLShaderProgram * QSGMaterialShader::program();
// _ZN17QSGMaterialShader7programEv program()
extern "C"
void*
C_ZN17QSGMaterialShader7programEv(void *qthis) {
  auto ret =
  ((QSGMaterialShader*)qthis)->program();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// <= body block end

