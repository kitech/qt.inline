// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qcolor.h
// dst-file: /src/gui/qcolor.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcolor.h>


#include <qglobal.h>
#include <qstring.h>
#include <qrgb.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qcolor_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 62, column 5>
//   // proto:  void QColor::QColor();
if (true) {
  auto f = []() {
    new QColor();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 67, column 5>
//   // proto:  void QColor::QColor(const char * name);
if (true) {
  auto f = [](const char * arg1) {
    new QColor(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 80, column 17>
//   // proto:  QColor::Spec QColor::spec();
if (true) {
  auto f = [](QColor flythis) {
    ((QColor*)0)->spec();
    flythis.spec();
  };
  if (f == nullptr){}
}
// _ZNK6QColor4specEv spec()
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 68, column 5>
//   // proto:  void QColor::QColor(const QColor & color);
if (true) {
  auto f = [](const QColor & arg1) {
    new QColor(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 71, column 10>
//   // proto:  bool QColor::isValid();
if (true) {
  auto f = [](QColor flythis) {
    ((QColor*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK6QColor7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 188, column 12>
//   // proto:  QColor QColor::darker(int f);
if (true) {
  auto f = [](QColor flythis, int arg1) {
    ((QColor*)0)->darker(arg1);
    flythis.darker(arg1);
  };
  if (f == nullptr){}
}
// _ZNK6QColor6darkerEi darker(int)
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 186, column 12>
//   // proto:  QColor QColor::lighter(int f);
if (true) {
  auto f = [](QColor flythis, int arg1) {
    ((QColor*)0)->lighter(arg1);
    flythis.lighter(arg1);
  };
  if (f == nullptr){}
}
// _ZNK6QColor7lighterEi lighter(int)
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 66, column 5>
//   // proto:  void QColor::QColor(const QString & name);
if (true) {
  auto f = [](const QString & arg1) {
    new QColor(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 64, column 5>
//   // proto:  void QColor::QColor(int r, int g, int b, int a);
if (true) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    new QColor(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QColor_Class_Size()
{
  return sizeof(QColor);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 130, column 10>
//   // proto:  void QColor::getHsvF(qreal * h, qreal * s, qreal * v, qreal * a);
// _ZNK6QColor7getHsvFEPdS0_S0_S0_ getHsvF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void
C_ZNK6QColor7getHsvFEPdS0_S0_S0_(void *qthis,
qreal * arg1,
qreal * arg2,
qreal * arg3,
qreal * arg4) {
  ((QColor*)qthis)->getHsvF(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 168, column 12>
//   // proto:  QColor QColor::convertTo(QColor::Spec colorSpec);
// _ZNK6QColor9convertToENS_4SpecE convertTo(enum QColor::Spec)
extern "C"
QColor*
C_ZNK6QColor9convertToENS_4SpecE(void *qthis,
QColor::Spec arg1) {
  auto ret =
  ((QColor*)qthis)->convertTo(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 83, column 9>
//   // proto:  int QColor::alpha();
// _ZNK6QColor5alphaEv alpha()
extern "C"
int
C_ZNK6QColor5alphaEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->alpha();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 154, column 11>
//   // proto:  qreal QColor::hslSaturationF();
// _ZNK6QColor14hslSaturationFEv hslSaturationF()
extern "C"
double
C_ZNK6QColor14hslSaturationFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hslSaturationF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 87, column 10>
//   // proto:  void QColor::setAlphaF(qreal alpha);
// _ZN6QColor9setAlphaFEd setAlphaF(qreal)
extern "C"
void
C_ZN6QColor9setAlphaFEd(void *qthis,
qreal arg1) {
  ((QColor*)qthis)->setAlphaF(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 103, column 10>
//   // proto:  void QColor::getRgb(int * r, int * g, int * b, int * a);
// _ZNK6QColor6getRgbEPiS0_S0_S0_ getRgb(int *, int *, int *, int *)
extern "C"
void
C_ZNK6QColor6getRgbEPiS0_S0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3,
int * arg4) {
  ((QColor*)qthis)->getRgb(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 149, column 9>
//   // proto:  int QColor::hslHue();
// _ZNK6QColor6hslHueEv hslHue()
extern "C"
int
C_ZNK6QColor6hslHueEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hslHue();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 151, column 9>
//   // proto:  int QColor::lightness();
// _ZNK6QColor9lightnessEv lightness()
extern "C"
int
C_ZNK6QColor9lightnessEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->lightness();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 84, column 10>
//   // proto:  void QColor::setAlpha(int alpha);
// _ZN6QColor8setAlphaEi setAlpha(int)
extern "C"
void
C_ZN6QColor8setAlphaEi(void *qthis,
int arg1) {
  ((QColor*)qthis)->setAlpha(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 183, column 19>
//   // proto: static QColor QColor::fromHslF(qreal h, qreal s, qreal l, qreal a);
// _ZN6QColor8fromHslFEdddd fromHslF(qreal, qreal, qreal, qreal)
extern "C"
QColor*
C_ZN6QColor8fromHslFEdddd(qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  QColor::fromHslF(arg1,
arg2,
arg3,
arg4);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 143, column 10>
//   // proto:  void QColor::getCmyk(int * c, int * m, int * y, int * k, int * a);
// _ZN6QColor7getCmykEPiS0_S0_S0_S0_ getCmyk(int *, int *, int *, int *, int *)
extern "C"
void
C_ZN6QColor7getCmykEPiS0_S0_S0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3,
int * arg4,
int * arg5) {
  ((QColor*)qthis)->getCmyk(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 90, column 9>
//   // proto:  int QColor::green();
// _ZNK6QColor5greenEv green()
extern "C"
int
C_ZNK6QColor5greenEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->green();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 118, column 9>
//   // proto:  int QColor::hsvSaturation();
// _ZNK6QColor13hsvSaturationEv hsvSaturation()
extern "C"
int
C_ZNK6QColor13hsvSaturationEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hsvSaturation();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 166, column 12>
//   // proto:  QColor QColor::toHsl();
// _ZNK6QColor5toHslEv toHsl()
extern "C"
QColor*
C_ZNK6QColor5toHslEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->toHsl();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 62, column 5>
//   // proto:  void QColor::QColor();
extern "C"
QColor*
C_ZN6QColorC2Ev() {
  auto ret = new QColor();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 67, column 5>
//   // proto:  void QColor::QColor(const char * name);
extern "C"
QColor*
C_ZN6QColorC2EPKc(const char * arg1) {
  auto ret = new QColor(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 94, column 10>
//   // proto:  void QColor::setBlue(int blue);
// _ZN6QColor7setBlueEi setBlue(int)
extern "C"
void
C_ZN6QColor7setBlueEi(void *qthis,
int arg1) {
  ((QColor*)qthis)->setBlue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 63, column 5>
//   // proto:  void QColor::QColor(Qt::GlobalColor color);
extern "C"
QColor*
C_ZN6QColorC2EN2Qt11GlobalColorE(Qt::GlobalColor* arg1) {
  auto ret = new QColor(*((Qt::GlobalColor*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 133, column 9>
//   // proto:  int QColor::cyan();
// _ZNK6QColor4cyanEv cyan()
extern "C"
int
C_ZNK6QColor4cyanEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->cyan();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 147, column 10>
//   // proto:  void QColor::setCmykF(qreal c, qreal m, qreal y, qreal k, qreal a);
// _ZN6QColor8setCmykFEddddd setCmykF(qreal, qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN6QColor8setCmykFEddddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
qreal arg5) {
  ((QColor*)qthis)->setCmykF(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 180, column 19>
//   // proto: static QColor QColor::fromCmykF(qreal c, qreal m, qreal y, qreal k, qreal a);
// _ZN6QColor9fromCmykFEddddd fromCmykF(qreal, qreal, qreal, qreal, qreal)
extern "C"
QColor*
C_ZN6QColor9fromCmykFEddddd(qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
qreal arg5) {
  auto ret =
  QColor::fromCmykF(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 185, column 12>
//   // proto:  QColor QColor::light(int f);
// _ZNK6QColor5lightEi light(int)
extern "C"
QColor*
C_ZNK6QColor5lightEi(void *qthis,
int arg1) {
  auto ret =
  ((QColor*)qthis)->light(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 160, column 10>
//   // proto:  void QColor::getHslF(qreal * h, qreal * s, qreal * l, qreal * a);
// _ZNK6QColor7getHslFEPdS0_S0_S0_ getHslF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void
C_ZNK6QColor7getHslFEPdS0_S0_S0_(void *qthis,
qreal * arg1,
qreal * arg2,
qreal * arg3,
qreal * arg4) {
  ((QColor*)qthis)->getHslF(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 170, column 19>
//   // proto: static QColor QColor::fromRgb(QRgb rgb);
// _ZN6QColor7fromRgbEj fromRgb(QRgb)
extern "C"
QColor*
C_ZN6QColor7fromRgbEj(QRgb arg1) {
  auto ret =
  QColor::fromRgb(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 135, column 9>
//   // proto:  int QColor::yellow();
// _ZNK6QColor6yellowEv yellow()
extern "C"
int
C_ZNK6QColor6yellowEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->yellow();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 106, column 10>
//   // proto:  void QColor::getRgbF(qreal * r, qreal * g, qreal * b, qreal * a);
// _ZNK6QColor7getRgbFEPdS0_S0_S0_ getRgbF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void
C_ZNK6QColor7getRgbFEPdS0_S0_S0_(void *qthis,
qreal * arg1,
qreal * arg2,
qreal * arg3,
qreal * arg4) {
  ((QColor*)qthis)->getRgbF(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 104, column 10>
//   // proto:  void QColor::setRgb(int r, int g, int b, int a);
// _ZN6QColor6setRgbEiiii setRgb(int, int, int, int)
extern "C"
void
C_ZN6QColor6setRgbEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QColor*)qthis)->setRgb(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 74, column 13>
//   // proto:  QString QColor::name();
// _ZNK6QColor4nameEv name()
extern "C"
QString*
C_ZNK6QColor4nameEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 96, column 11>
//   // proto:  qreal QColor::redF();
// _ZNK6QColor4redFEv redF()
extern "C"
double
C_ZNK6QColor4redFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->redF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 141, column 11>
//   // proto:  qreal QColor::blackF();
// _ZNK6QColor6blackFEv blackF()
extern "C"
double
C_ZNK6QColor6blackFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->blackF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 131, column 10>
//   // proto:  void QColor::setHsvF(qreal h, qreal s, qreal v, qreal a);
// _ZN6QColor7setHsvFEdddd setHsvF(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN6QColor7setHsvFEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QColor*)qthis)->setHsvF(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 113, column 10>
//   // proto:  void QColor::setRgb(QRgb rgb);
// _ZN6QColor6setRgbEj setRgb(QRgb)
extern "C"
void
C_ZN6QColor6setRgbEj(void *qthis,
QRgb arg1) {
  ((QColor*)qthis)->setRgb(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 173, column 19>
//   // proto: static QColor QColor::fromRgb(int r, int g, int b, int a);
// _ZN6QColor7fromRgbEiiii fromRgb(int, int, int, int)
extern "C"
QColor*
C_ZN6QColor7fromRgbEiiii(int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret =
  QColor::fromRgb(arg1,
arg2,
arg3,
arg4);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 123, column 11>
//   // proto:  qreal QColor::hsvHueF();
// _ZNK6QColor7hsvHueFEv hsvHueF()
extern "C"
double
C_ZNK6QColor7hsvHueFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hsvHueF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 124, column 11>
//   // proto:  qreal QColor::hsvSaturationF();
// _ZNK6QColor14hsvSaturationFEv hsvSaturationF()
extern "C"
double
C_ZNK6QColor14hsvSaturationFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hsvSaturationF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 140, column 11>
//   // proto:  qreal QColor::yellowF();
// _ZNK6QColor7yellowFEv yellowF()
extern "C"
double
C_ZNK6QColor7yellowFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->yellowF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 136, column 9>
//   // proto:  int QColor::black();
// _ZNK6QColor5blackEv black()
extern "C"
int
C_ZNK6QColor5blackEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->black();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 100, column 10>
//   // proto:  void QColor::setGreenF(qreal green);
// _ZN6QColor9setGreenFEd setGreenF(qreal)
extern "C"
void
C_ZN6QColor9setGreenFEd(void *qthis,
qreal arg1) {
  ((QColor*)qthis)->setGreenF(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 109, column 10>
//   // proto:  QRgb QColor::rgba();
// _ZNK6QColor4rgbaEv rgba()
extern "C"
unsigned int
C_ZNK6QColor4rgbaEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->rgba();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 165, column 12>
//   // proto:  QColor QColor::toCmyk();
// _ZNK6QColor6toCmykEv toCmyk()
extern "C"
QColor*
C_ZNK6QColor6toCmykEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->toCmyk();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 97, column 11>
//   // proto:  qreal QColor::greenF();
// _ZNK6QColor6greenFEv greenF()
extern "C"
double
C_ZNK6QColor6greenFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->greenF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 75, column 13>
//   // proto:  QString QColor::name(QColor::NameFormat format);
// _ZNK6QColor4nameENS_10NameFormatE name(enum QColor::NameFormat)
extern "C"
QString*
C_ZNK6QColor4nameENS_10NameFormatE(void *qthis,
QColor::NameFormat arg1) {
  auto ret =
  ((QColor*)qthis)->name(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 80, column 17>
//   // proto:  QColor::Spec QColor::spec();
// _ZNK6QColor4specEv spec()
extern "C"
QColor::Spec
C_ZNK6QColor4specEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->spec();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 89, column 9>
//   // proto:  int QColor::red();
// _ZNK6QColor3redEv red()
extern "C"
int
C_ZNK6QColor3redEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->red();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 107, column 10>
//   // proto:  void QColor::setRgbF(qreal r, qreal g, qreal b, qreal a);
// _ZN6QColor7setRgbFEdddd setRgbF(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN6QColor7setRgbFEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QColor*)qthis)->setRgbF(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 155, column 11>
//   // proto:  qreal QColor::lightnessF();
// _ZNK6QColor10lightnessFEv lightnessF()
extern "C"
double
C_ZNK6QColor10lightnessFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->lightnessF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 164, column 12>
//   // proto:  QColor QColor::toHsv();
// _ZNK6QColor5toHsvEv toHsv()
extern "C"
QColor*
C_ZNK6QColor5toHsvEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->toHsv();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 68, column 5>
//   // proto:  void QColor::QColor(const QColor & color);
extern "C"
QColor*
C_ZN6QColorC2ERKS_(const QColor* arg1) {
  auto ret = new QColor(*((const QColor*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 176, column 19>
//   // proto: static QColor QColor::fromHsv(int h, int s, int v, int a);
// _ZN6QColor7fromHsvEiiii fromHsv(int, int, int, int)
extern "C"
QColor*
C_ZN6QColor7fromHsvEiiii(int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret =
  QColor::fromHsv(arg1,
arg2,
arg3,
arg4);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 121, column 11>
//   // proto:  qreal QColor::hueF();
// _ZNK6QColor4hueFEv hueF()
extern "C"
double
C_ZNK6QColor4hueFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hueF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 101, column 10>
//   // proto:  void QColor::setBlueF(qreal blue);
// _ZN6QColor8setBlueFEd setBlueF(qreal)
extern "C"
void
C_ZN6QColor8setBlueFEd(void *qthis,
qreal arg1) {
  ((QColor*)qthis)->setBlueF(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 122, column 11>
//   // proto:  qreal QColor::saturationF();
// _ZNK6QColor11saturationFEv saturationF()
extern "C"
double
C_ZNK6QColor11saturationFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->saturationF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 71, column 10>
//   // proto:  bool QColor::isValid();
// _ZNK6QColor7isValidEv isValid()
extern "C"
bool
C_ZNK6QColor7isValidEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 188, column 12>
//   // proto:  QColor QColor::darker(int f);
// _ZNK6QColor6darkerEi darker(int)
extern "C"
QColor*
C_ZNK6QColor6darkerEi(void *qthis,
int arg1) {
  auto ret =
  ((QColor*)qthis)->darker(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 98, column 11>
//   // proto:  qreal QColor::blueF();
// _ZNK6QColor5blueFEv blueF()
extern "C"
double
C_ZNK6QColor5blueFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->blueF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 115, column 9>
//   // proto:  int QColor::hue();
// _ZNK6QColor3hueEv hue()
extern "C"
int
C_ZNK6QColor3hueEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hue();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 110, column 10>
//   // proto:  void QColor::setRgba(QRgb rgba);
// _ZN6QColor7setRgbaEj setRgba(QRgb)
extern "C"
void
C_ZN6QColor7setRgbaEj(void *qthis,
QRgb arg1) {
  ((QColor*)qthis)->setRgba(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 76, column 10>
//   // proto:  void QColor::setNamedColor(const QString & name);
// _ZN6QColor13setNamedColorERK7QString setNamedColor(const class QString &)
extern "C"
void
C_ZN6QColor13setNamedColorERK7QString(void *qthis,
const QString* arg1) {
  ((QColor*)qthis)->setNamedColor(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 134, column 9>
//   // proto:  int QColor::magenta();
// _ZNK6QColor7magentaEv magenta()
extern "C"
int
C_ZNK6QColor7magentaEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->magenta();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 186, column 12>
//   // proto:  QColor QColor::lighter(int f);
// _ZNK6QColor7lighterEi lighter(int)
extern "C"
QColor*
C_ZNK6QColor7lighterEi(void *qthis,
int arg1) {
  auto ret =
  ((QColor*)qthis)->lighter(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 163, column 12>
//   // proto:  QColor QColor::toRgb();
// _ZNK6QColor5toRgbEv toRgb()
extern "C"
QColor*
C_ZNK6QColor5toRgbEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->toRgb();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 139, column 11>
//   // proto:  qreal QColor::magentaF();
// _ZNK6QColor8magentaFEv magentaF()
extern "C"
double
C_ZNK6QColor8magentaFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->magentaF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 153, column 11>
//   // proto:  qreal QColor::hslHueF();
// _ZNK6QColor7hslHueFEv hslHueF()
extern "C"
double
C_ZNK6QColor7hslHueFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hslHueF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 179, column 19>
//   // proto: static QColor QColor::fromCmyk(int c, int m, int y, int k, int a);
// _ZN6QColor8fromCmykEiiiii fromCmyk(int, int, int, int, int)
extern "C"
QColor*
C_ZN6QColor8fromCmykEiiiii(int arg1,
int arg2,
int arg3,
int arg4,
int arg5) {
  auto ret =
  QColor::fromCmyk(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 144, column 10>
//   // proto:  void QColor::setCmyk(int c, int m, int y, int k, int a);
// _ZN6QColor7setCmykEiiiii setCmyk(int, int, int, int, int)
extern "C"
void
C_ZN6QColor7setCmykEiiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5) {
  ((QColor*)qthis)->setCmyk(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 78, column 24>
//   // proto: static QStringList QColor::colorNames();
// _ZN6QColor10colorNamesEv colorNames()
extern "C"
QStringList*
C_ZN6QColor10colorNamesEv() {
  auto ret =
  QColor::colorNames();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 127, column 10>
//   // proto:  void QColor::getHsv(int * h, int * s, int * v, int * a);
// _ZNK6QColor6getHsvEPiS0_S0_S0_ getHsv(int *, int *, int *, int *)
extern "C"
void
C_ZNK6QColor6getHsvEPiS0_S0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3,
int * arg4) {
  ((QColor*)qthis)->getHsv(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 146, column 10>
//   // proto:  void QColor::getCmykF(qreal * c, qreal * m, qreal * y, qreal * k, qreal * a);
// _ZN6QColor8getCmykFEPdS0_S0_S0_S0_ getCmykF(qreal *, qreal *, qreal *, qreal *, qreal *)
extern "C"
void
C_ZN6QColor8getCmykFEPdS0_S0_S0_S0_(void *qthis,
qreal * arg1,
qreal * arg2,
qreal * arg3,
qreal * arg4,
qreal * arg5) {
  ((QColor*)qthis)->getCmykF(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 92, column 10>
//   // proto:  void QColor::setRed(int red);
// _ZN6QColor6setRedEi setRed(int)
extern "C"
void
C_ZN6QColor6setRedEi(void *qthis,
int arg1) {
  ((QColor*)qthis)->setRed(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 69, column 5>
//   // proto:  void QColor::QColor(QColor::Spec spec);
extern "C"
QColor*
C_ZN6QColorC2ENS_4SpecE(QColor::Spec arg1) {
  auto ret = new QColor(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 66, column 5>
//   // proto:  void QColor::QColor(const QString & name);
extern "C"
QColor*
C_ZN6QColorC2ERK7QString(const QString* arg1) {
  auto ret = new QColor(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 171, column 19>
//   // proto: static QColor QColor::fromRgba(QRgb rgba);
// _ZN6QColor8fromRgbaEj fromRgba(QRgb)
extern "C"
QColor*
C_ZN6QColor8fromRgbaEj(QRgb arg1) {
  auto ret =
  QColor::fromRgba(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 128, column 10>
//   // proto:  void QColor::setHsv(int h, int s, int v, int a);
// _ZN6QColor6setHsvEiiii setHsv(int, int, int, int)
extern "C"
void
C_ZN6QColor6setHsvEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QColor*)qthis)->setHsv(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 112, column 10>
//   // proto:  QRgb QColor::rgb();
// _ZNK6QColor3rgbEv rgb()
extern "C"
unsigned int
C_ZNK6QColor3rgbEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->rgb();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 161, column 10>
//   // proto:  void QColor::setHslF(qreal h, qreal s, qreal l, qreal a);
// _ZN6QColor7setHslFEdddd setHslF(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN6QColor7setHslFEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QColor*)qthis)->setHslF(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 116, column 9>
//   // proto:  int QColor::saturation();
// _ZNK6QColor10saturationEv saturation()
extern "C"
int
C_ZNK6QColor10saturationEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->saturation();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 64, column 5>
//   // proto:  void QColor::QColor(int r, int g, int b, int a);
extern "C"
QColor*
C_ZN6QColorC2Eiiii(int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret = new QColor(arg1, arg2, arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 86, column 11>
//   // proto:  qreal QColor::alphaF();
// _ZNK6QColor6alphaFEv alphaF()
extern "C"
double
C_ZNK6QColor6alphaFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->alphaF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 119, column 9>
//   // proto:  int QColor::value();
// _ZNK6QColor5valueEv value()
extern "C"
int
C_ZNK6QColor5valueEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->value();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 177, column 19>
//   // proto: static QColor QColor::fromHsvF(qreal h, qreal s, qreal v, qreal a);
// _ZN6QColor8fromHsvFEdddd fromHsvF(qreal, qreal, qreal, qreal)
extern "C"
QColor*
C_ZN6QColor8fromHsvFEdddd(qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  QColor::fromHsvF(arg1,
arg2,
arg3,
arg4);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 187, column 12>
//   // proto:  QColor QColor::dark(int f);
// _ZNK6QColor4darkEi dark(int)
extern "C"
QColor*
C_ZNK6QColor4darkEi(void *qthis,
int arg1) {
  auto ret =
  ((QColor*)qthis)->dark(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 99, column 10>
//   // proto:  void QColor::setRedF(qreal red);
// _ZN6QColor7setRedFEd setRedF(qreal)
extern "C"
void
C_ZN6QColor7setRedFEd(void *qthis,
qreal arg1) {
  ((QColor*)qthis)->setRedF(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 182, column 19>
//   // proto: static QColor QColor::fromHsl(int h, int s, int l, int a);
// _ZN6QColor7fromHslEiiii fromHsl(int, int, int, int)
extern "C"
QColor*
C_ZN6QColor7fromHslEiiii(int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret =
  QColor::fromHsl(arg1,
arg2,
arg3,
arg4);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 158, column 10>
//   // proto:  void QColor::setHsl(int h, int s, int l, int a);
// _ZN6QColor6setHslEiiii setHsl(int, int, int, int)
extern "C"
void
C_ZN6QColor6setHslEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QColor*)qthis)->setHsl(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 65, column 5>
//   // proto:  void QColor::QColor(QRgb rgb);
extern "C"
QColor*
C_ZN6QColorC2Ej(QRgb arg1) {
  auto ret = new QColor(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 93, column 10>
//   // proto:  void QColor::setGreen(int green);
// _ZN6QColor8setGreenEi setGreen(int)
extern "C"
void
C_ZN6QColor8setGreenEi(void *qthis,
int arg1) {
  ((QColor*)qthis)->setGreen(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 157, column 10>
//   // proto:  void QColor::getHsl(int * h, int * s, int * l, int * a);
// _ZNK6QColor6getHslEPiS0_S0_S0_ getHsl(int *, int *, int *, int *)
extern "C"
void
C_ZNK6QColor6getHslEPiS0_S0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3,
int * arg4) {
  ((QColor*)qthis)->getHsl(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 198, column 17>
//   // proto: static bool QColor::isValidColor(const QString & name);
// _ZN6QColor12isValidColorERK7QString isValidColor(const class QString &)
extern "C"
bool
C_ZN6QColor12isValidColorERK7QString(const QString* arg1) {
  auto ret =
  QColor::isValidColor(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 150, column 9>
//   // proto:  int QColor::hslSaturation();
// _ZNK6QColor13hslSaturationEv hslSaturation()
extern "C"
int
C_ZNK6QColor13hslSaturationEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hslSaturation();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 174, column 19>
//   // proto: static QColor QColor::fromRgbF(qreal r, qreal g, qreal b, qreal a);
// _ZN6QColor8fromRgbFEdddd fromRgbF(qreal, qreal, qreal, qreal)
extern "C"
QColor*
C_ZN6QColor8fromRgbFEdddd(qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  QColor::fromRgbF(arg1,
arg2,
arg3,
arg4);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 91, column 9>
//   // proto:  int QColor::blue();
// _ZNK6QColor4blueEv blue()
extern "C"
int
C_ZNK6QColor4blueEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->blue();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 117, column 9>
//   // proto:  int QColor::hsvHue();
// _ZNK6QColor6hsvHueEv hsvHue()
extern "C"
int
C_ZNK6QColor6hsvHueEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->hsvHue();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 125, column 11>
//   // proto:  qreal QColor::valueF();
// _ZNK6QColor6valueFEv valueF()
extern "C"
double
C_ZNK6QColor6valueFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->valueF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qcolor.h', line 138, column 11>
//   // proto:  qreal QColor::cyanF();
// _ZNK6QColor5cyanFEv cyanF()
extern "C"
double
C_ZNK6QColor5cyanFEv(void *qthis) {
  auto ret =
  ((QColor*)qthis)->cyanF();
  return ret; // 0 TypeKind.DOUBLE
}
// <= ext block end

// body block begin =>
// <= body block end

