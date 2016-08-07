// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qcolormap.h
// dst-file: /src/widgets/qcolormap.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcolormap.h>


#include <qglobal.h>
#include <qtextdocument.h>
#include <qcolor.h>
// <= header block end

// main block begin =>
void __keep_qcolormap_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QColormap_Class_Size()
{
  return sizeof(QColormap);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 74, column 10>
//   // proto:  uint QColormap::pixel(const QColor & color);
// _ZNK9QColormap5pixelERK6QColor pixel(const class QColor &)
extern "C"
unsigned int
C_ZNK9QColormap5pixelERK6QColor(void *qthis,
const QColor* arg1) {
  auto ret =
  ((QColormap*)qthis)->pixel(*((const QColor*)arg1));
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 77, column 27>
//   // proto:  const QVector<QColor> QColormap::colormap();
// _ZNK9QColormap8colormapEv colormap()
extern "C"
QVector<QColor>*
C_ZNK9QColormap8colormapEv(void *qthis) {
  auto ret =
  ((QColormap*)qthis)->colormap();
  return new QVector<QColor>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 75, column 18>
//   // proto:  const QColor QColormap::colorAt(uint pixel);
// _ZNK9QColormap7colorAtEj colorAt(uint)
extern "C"
QColor*
C_ZNK9QColormap7colorAtEj(void *qthis,
uint arg1) {
  auto ret =
  ((QColormap*)qthis)->colorAt(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 69, column 10>
//   // proto:  QColormap::Mode QColormap::mode();
// _ZNK9QColormap4modeEv mode()
extern "C"
QColormap::Mode
C_ZNK9QColormap4modeEv(void *qthis) {
  auto ret =
  ((QColormap*)qthis)->mode();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QColormap::~QColormap();
extern "C"
void C_ZN9QColormapD2Ev(void *qthis) {
  delete (QColormap*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 62, column 22>
//   // proto: static QColormap QColormap::instance(int screen);
// _ZN9QColormap8instanceEi instance(int)
extern "C"
QColormap*
C_ZN9QColormap8instanceEi(int arg1) {
  auto ret =
  QColormap::instance(arg1);
  return new QColormap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 72, column 9>
//   // proto:  int QColormap::size();
// _ZNK9QColormap4sizeEv size()
extern "C"
int
C_ZNK9QColormap4sizeEv(void *qthis) {
  auto ret =
  ((QColormap*)qthis)->size();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 64, column 5>
//   // proto:  void QColormap::QColormap(const QColormap & colormap);
extern "C"
QColormap*
C_ZN9QColormapC2ERKS_(const QColormap* arg1) {
  auto ret = new QColormap(*((const QColormap*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 59, column 17>
//   // proto: static void QColormap::initialize();
// _ZN9QColormap10initializeEv initialize()
extern "C"
void
C_ZN9QColormap10initializeEv() {
  QColormap::initialize();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 71, column 9>
//   // proto:  int QColormap::depth();
// _ZNK9QColormap5depthEv depth()
extern "C"
int
C_ZNK9QColormap5depthEv(void *qthis) {
  auto ret =
  ((QColormap*)qthis)->depth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolormap.h', line 60, column 17>
//   // proto: static void QColormap::cleanup();
// _ZN9QColormap7cleanupEv cleanup()
extern "C"
void
C_ZN9QColormap7cleanupEv() {
  QColormap::cleanup();
}
// <= ext block end

// body block begin =>
// <= body block end

