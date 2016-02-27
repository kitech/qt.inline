// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qsgflatcolormaterial.h
// dst-file: /src/quick/qsgflatcolormaterial.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsgflatcolormaterial.h>


#include <qcolor.h>
// <= header block end

// main block begin =>
void __keep_qsgflatcolormaterial_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgflatcolormaterial.h', line 50, column 19>
//   // proto:  const QColor & QSGFlatColorMaterial::color();
if (true) {
  auto f = [](QSGFlatColorMaterial flythis) {
    ((QSGFlatColorMaterial*)0)->color();
    flythis.color();
  };
  if (f == nullptr){}
}
// _ZNK20QSGFlatColorMaterial5colorEv color()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSGFlatColorMaterial_Class_Size()
{
  return sizeof(QSGFlatColorMaterial);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgflatcolormaterial.h', line 49, column 10>
//   // proto:  void QSGFlatColorMaterial::setColor(const QColor & color);
// _ZN20QSGFlatColorMaterial8setColorERK6QColor setColor(const class QColor &)
extern "C"
void
C_ZN20QSGFlatColorMaterial8setColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QSGFlatColorMaterial*)qthis)->setColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgflatcolormaterial.h', line 45, column 5>
//   // proto:  void QSGFlatColorMaterial::QSGFlatColorMaterial();
extern "C"
QSGFlatColorMaterial*
C_ZN20QSGFlatColorMaterialC2Ev() {
  auto ret = new QSGFlatColorMaterial();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgflatcolormaterial.h', line 52, column 9>
//   // proto:  int QSGFlatColorMaterial::compare(const QSGMaterial * other);
// _ZNK20QSGFlatColorMaterial7compareEPK11QSGMaterial compare(const class QSGMaterial *)
extern "C"
int
C_ZNK20QSGFlatColorMaterial7compareEPK11QSGMaterial(void *qthis,
const QSGMaterial * arg1) {
  auto ret =
  ((QSGFlatColorMaterial*)qthis)->compare(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgflatcolormaterial.h', line 47, column 32>
//   // proto:  QSGMaterialShader * QSGFlatColorMaterial::createShader();
// _ZNK20QSGFlatColorMaterial12createShaderEv createShader()
extern "C"
void*
C_ZNK20QSGFlatColorMaterial12createShaderEv(void *qthis) {
  auto ret =
  ((QSGFlatColorMaterial*)qthis)->createShader();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgflatcolormaterial.h', line 46, column 30>
//   // proto:  QSGMaterialType * QSGFlatColorMaterial::type();
// _ZNK20QSGFlatColorMaterial4typeEv type()
extern "C"
void*
C_ZNK20QSGFlatColorMaterial4typeEv(void *qthis) {
  auto ret =
  ((QSGFlatColorMaterial*)qthis)->type();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgflatcolormaterial.h', line 50, column 19>
//   // proto:  const QColor & QSGFlatColorMaterial::color();
// _ZNK20QSGFlatColorMaterial5colorEv color()
extern "C"
QColor*
C_ZNK20QSGFlatColorMaterial5colorEv(void *qthis) {
  auto& ret =
  ((QSGFlatColorMaterial*)qthis)->color();
  return new QColor(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

