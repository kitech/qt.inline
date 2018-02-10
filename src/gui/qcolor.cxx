//  header block begin
// /usr/include/qt/QtGui/qcolor.h
#include <qcolor.h>
#include <QtGui>
#include "callback_inherit.h"

// QColor is pure virtual: false
// QColor has virtual projected: false
//  header block end

//  main block begin

class MyQColor : public QColor {
public:
  virtual ~MyQColor() {}
// void QColor()
MyQColor() : QColor() {}
// void QColor(Qt::GlobalColor)
MyQColor(Qt::GlobalColor color) : QColor(color) {}
// void QColor(int, int, int, int)
MyQColor(int r, int g, int b, int a) : QColor(r, g, b, a) {}
// void QColor(QRgb)
MyQColor(QRgb rgb) : QColor(rgb) {}
// void QColor(class QRgba64)
MyQColor(QRgba64 rgba64) : QColor(rgba64) {}
// void QColor(const class QString &)
MyQColor(const QString & name) : QColor(name) {}
// void QColor(class QStringView)
MyQColor(QStringView name) : QColor(name) {}
// void QColor(const char *)
MyQColor(const char * aname) : QColor(aname) {}
// void QColor(class QLatin1String)
MyQColor(QLatin1String name) : QColor(name) {}
// void QColor(enum QColor::Spec)
MyQColor(QColor::Spec spec) : QColor(spec) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:70
// [-2] void QColor()
extern "C"
void* C_ZN6QColorC2Ev() {
  return  new QColor();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:71
// [-2] void QColor(Qt::GlobalColor)
extern "C"
void* C_ZN6QColorC2EN2Qt11GlobalColorE(Qt::GlobalColor color) {
  return  new QColor(color);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:72
// [-2] void QColor(int, int, int, int)
extern "C"
void* C_ZN6QColorC2Eiiii(int r, int g, int b, int a) {
  return  new QColor(r, g, b, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:73
// [-2] void QColor(QRgb)
extern "C"
void* C_ZN6QColorC2Ej(QRgb rgb) {
  return  new QColor(rgb);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:74
// [-2] void QColor(class QRgba64)
extern "C"
void* C_ZN6QColorC2E7QRgba64(QRgba64* rgba64) {
  return  new QColor(*rgba64);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:76
// [-2] void QColor(const class QString &)
extern "C"
void* C_ZN6QColorC2ERK7QString(QString* name) {
  return  new QColor(*name);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:78
// [-2] void QColor(class QStringView)
extern "C"
void* C_ZN6QColorC2E11QStringView(QStringView* name) {
  return  new QColor(*name);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:79
// [-2] void QColor(const char *)
extern "C"
void* C_ZN6QColorC2EPKc(const char * aname) {
  return  new QColor(aname);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:80
// [-2] void QColor(class QLatin1String)
extern "C"
void* C_ZN6QColorC2E13QLatin1String(QLatin1String* name) {
  return  new QColor(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:81
// [-2] void QColor(enum QColor::Spec)
extern "C"
void* C_ZN6QColorC2ENS_4SpecE(QColor::Spec spec) {
  return  new QColor(spec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:95
// [1] bool isValid()
extern "C"
bool C_ZNK6QColor7isValidEv(void *this_) {
  return (bool)((QColor*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:98
// [8] QString name()
extern "C"
void* C_ZNK6QColor4nameEv(void *this_) {
  auto rv = ((QColor*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:99
// [8] QString name(enum QColor::NameFormat)
extern "C"
void* C_ZNK6QColor4nameENS_10NameFormatE(void *this_, QColor::NameFormat format) {
  auto rv = ((QColor*)this_)->name(format);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:102
// [-2] void setNamedColor(const class QString &)
extern "C"
void C_ZN6QColor13setNamedColorERK7QString(void *this_, QString* name) {
  ((QColor*)this_)->setNamedColor(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:104
// [-2] void setNamedColor(class QStringView)
extern "C"
void C_ZN6QColor13setNamedColorE11QStringView(void *this_, QStringView* name) {
  ((QColor*)this_)->setNamedColor(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:105
// [-2] void setNamedColor(class QLatin1String)
extern "C"
void C_ZN6QColor13setNamedColorE13QLatin1String(void *this_, QLatin1String* name) {
  ((QColor*)this_)->setNamedColor(*name);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:107
// [8] QStringList colorNames()
extern "C"
void* C_ZN6QColor10colorNamesEv() {
  auto rv = QColor::colorNames();
return new QStringList(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:109
// [4] QColor::Spec spec()
extern "C"
QColor::Spec C_ZNK6QColor4specEv(void *this_) {
  return (QColor::Spec)((QColor*)this_)->spec();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:112
// [4] int alpha()
extern "C"
int C_ZNK6QColor5alphaEv(void *this_) {
  return (int)((QColor*)this_)->alpha();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:113
// [-2] void setAlpha(int)
extern "C"
void C_ZN6QColor8setAlphaEi(void *this_, int alpha) {
  ((QColor*)this_)->setAlpha(alpha);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:115
// [8] qreal alphaF()
extern "C"
qreal C_ZNK6QColor6alphaFEv(void *this_) {
  return (qreal)((QColor*)this_)->alphaF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:116
// [-2] void setAlphaF(qreal)
extern "C"
void C_ZN6QColor9setAlphaFEd(void *this_, qreal alpha) {
  ((QColor*)this_)->setAlphaF(alpha);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:118
// [4] int red()
extern "C"
int C_ZNK6QColor3redEv(void *this_) {
  return (int)((QColor*)this_)->red();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:119
// [4] int green()
extern "C"
int C_ZNK6QColor5greenEv(void *this_) {
  return (int)((QColor*)this_)->green();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:120
// [4] int blue()
extern "C"
int C_ZNK6QColor4blueEv(void *this_) {
  return (int)((QColor*)this_)->blue();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:121
// [-2] void setRed(int)
extern "C"
void C_ZN6QColor6setRedEi(void *this_, int red) {
  ((QColor*)this_)->setRed(red);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:122
// [-2] void setGreen(int)
extern "C"
void C_ZN6QColor8setGreenEi(void *this_, int green) {
  ((QColor*)this_)->setGreen(green);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:123
// [-2] void setBlue(int)
extern "C"
void C_ZN6QColor7setBlueEi(void *this_, int blue) {
  ((QColor*)this_)->setBlue(blue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:125
// [8] qreal redF()
extern "C"
qreal C_ZNK6QColor4redFEv(void *this_) {
  return (qreal)((QColor*)this_)->redF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:126
// [8] qreal greenF()
extern "C"
qreal C_ZNK6QColor6greenFEv(void *this_) {
  return (qreal)((QColor*)this_)->greenF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:127
// [8] qreal blueF()
extern "C"
qreal C_ZNK6QColor5blueFEv(void *this_) {
  return (qreal)((QColor*)this_)->blueF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:128
// [-2] void setRedF(qreal)
extern "C"
void C_ZN6QColor7setRedFEd(void *this_, qreal red) {
  ((QColor*)this_)->setRedF(red);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:129
// [-2] void setGreenF(qreal)
extern "C"
void C_ZN6QColor9setGreenFEd(void *this_, qreal green) {
  ((QColor*)this_)->setGreenF(green);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:130
// [-2] void setBlueF(qreal)
extern "C"
void C_ZN6QColor8setBlueFEd(void *this_, qreal blue) {
  ((QColor*)this_)->setBlueF(blue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:132
// [-2] void getRgb(int *, int *, int *, int *)
extern "C"
void C_ZNK6QColor6getRgbEPiS0_S0_S0_(void *this_, int * r, int * g, int * b, int * a) {
  ((QColor*)this_)->getRgb(r, g, b, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:133
// [-2] void setRgb(int, int, int, int)
extern "C"
void C_ZN6QColor6setRgbEiiii(void *this_, int r, int g, int b, int a) {
  ((QColor*)this_)->setRgb(r, g, b, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:135
// [-2] void getRgbF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK6QColor7getRgbFEPdS0_S0_S0_(void *this_, qreal * r, qreal * g, qreal * b, qreal * a) {
  ((QColor*)this_)->getRgbF(r, g, b, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:136
// [-2] void setRgbF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor7setRgbFEdddd(void *this_, qreal r, qreal g, qreal b, qreal a) {
  ((QColor*)this_)->setRgbF(r, g, b, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:138
// [8] QRgba64 rgba64()
extern "C"
void* C_ZNK6QColor6rgba64Ev(void *this_) {
  auto rv = ((QColor*)this_)->rgba64();
return new QRgba64(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:139
// [-2] void setRgba64(class QRgba64)
extern "C"
void C_ZN6QColor9setRgba64E7QRgba64(void *this_, QRgba64* rgba) {
  ((QColor*)this_)->setRgba64(*rgba);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:141
// [4] QRgb rgba()
extern "C"
QRgb C_ZNK6QColor4rgbaEv(void *this_) {
  return (QRgb)((QColor*)this_)->rgba();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:142
// [-2] void setRgba(QRgb)
extern "C"
void C_ZN6QColor7setRgbaEj(void *this_, QRgb rgba) {
  ((QColor*)this_)->setRgba(rgba);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:144
// [4] QRgb rgb()
extern "C"
QRgb C_ZNK6QColor3rgbEv(void *this_) {
  return (QRgb)((QColor*)this_)->rgb();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:145
// [-2] void setRgb(QRgb)
extern "C"
void C_ZN6QColor6setRgbEj(void *this_, QRgb rgb) {
  ((QColor*)this_)->setRgb(rgb);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:147
// [4] int hue()
extern "C"
int C_ZNK6QColor3hueEv(void *this_) {
  return (int)((QColor*)this_)->hue();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:148
// [4] int saturation()
extern "C"
int C_ZNK6QColor10saturationEv(void *this_) {
  return (int)((QColor*)this_)->saturation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:149
// [4] int hsvHue()
extern "C"
int C_ZNK6QColor6hsvHueEv(void *this_) {
  return (int)((QColor*)this_)->hsvHue();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:150
// [4] int hsvSaturation()
extern "C"
int C_ZNK6QColor13hsvSaturationEv(void *this_) {
  return (int)((QColor*)this_)->hsvSaturation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:151
// [4] int value()
extern "C"
int C_ZNK6QColor5valueEv(void *this_) {
  return (int)((QColor*)this_)->value();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:153
// [8] qreal hueF()
extern "C"
qreal C_ZNK6QColor4hueFEv(void *this_) {
  return (qreal)((QColor*)this_)->hueF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:154
// [8] qreal saturationF()
extern "C"
qreal C_ZNK6QColor11saturationFEv(void *this_) {
  return (qreal)((QColor*)this_)->saturationF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:155
// [8] qreal hsvHueF()
extern "C"
qreal C_ZNK6QColor7hsvHueFEv(void *this_) {
  return (qreal)((QColor*)this_)->hsvHueF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:156
// [8] qreal hsvSaturationF()
extern "C"
qreal C_ZNK6QColor14hsvSaturationFEv(void *this_) {
  return (qreal)((QColor*)this_)->hsvSaturationF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:157
// [8] qreal valueF()
extern "C"
qreal C_ZNK6QColor6valueFEv(void *this_) {
  return (qreal)((QColor*)this_)->valueF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:159
// [-2] void getHsv(int *, int *, int *, int *)
extern "C"
void C_ZNK6QColor6getHsvEPiS0_S0_S0_(void *this_, int * h, int * s, int * v, int * a) {
  ((QColor*)this_)->getHsv(h, s, v, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:160
// [-2] void setHsv(int, int, int, int)
extern "C"
void C_ZN6QColor6setHsvEiiii(void *this_, int h, int s, int v, int a) {
  ((QColor*)this_)->setHsv(h, s, v, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:162
// [-2] void getHsvF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK6QColor7getHsvFEPdS0_S0_S0_(void *this_, qreal * h, qreal * s, qreal * v, qreal * a) {
  ((QColor*)this_)->getHsvF(h, s, v, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:163
// [-2] void setHsvF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor7setHsvFEdddd(void *this_, qreal h, qreal s, qreal v, qreal a) {
  ((QColor*)this_)->setHsvF(h, s, v, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:165
// [4] int cyan()
extern "C"
int C_ZNK6QColor4cyanEv(void *this_) {
  return (int)((QColor*)this_)->cyan();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:166
// [4] int magenta()
extern "C"
int C_ZNK6QColor7magentaEv(void *this_) {
  return (int)((QColor*)this_)->magenta();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:167
// [4] int yellow()
extern "C"
int C_ZNK6QColor6yellowEv(void *this_) {
  return (int)((QColor*)this_)->yellow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:168
// [4] int black()
extern "C"
int C_ZNK6QColor5blackEv(void *this_) {
  return (int)((QColor*)this_)->black();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:170
// [8] qreal cyanF()
extern "C"
qreal C_ZNK6QColor5cyanFEv(void *this_) {
  return (qreal)((QColor*)this_)->cyanF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:171
// [8] qreal magentaF()
extern "C"
qreal C_ZNK6QColor8magentaFEv(void *this_) {
  return (qreal)((QColor*)this_)->magentaF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:172
// [8] qreal yellowF()
extern "C"
qreal C_ZNK6QColor7yellowFEv(void *this_) {
  return (qreal)((QColor*)this_)->yellowF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:173
// [8] qreal blackF()
extern "C"
qreal C_ZNK6QColor6blackFEv(void *this_) {
  return (qreal)((QColor*)this_)->blackF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:175
// [-2] void getCmyk(int *, int *, int *, int *, int *)
extern "C"
void C_ZN6QColor7getCmykEPiS0_S0_S0_S0_(void *this_, int * c, int * m, int * y, int * k, int * a) {
  ((QColor*)this_)->getCmyk(c, m, y, k, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:176
// [-2] void setCmyk(int, int, int, int, int)
extern "C"
void C_ZN6QColor7setCmykEiiiii(void *this_, int c, int m, int y, int k, int a) {
  ((QColor*)this_)->setCmyk(c, m, y, k, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:178
// [-2] void getCmykF(qreal *, qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZN6QColor8getCmykFEPdS0_S0_S0_S0_(void *this_, qreal * c, qreal * m, qreal * y, qreal * k, qreal * a) {
  ((QColor*)this_)->getCmykF(c, m, y, k, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:179
// [-2] void setCmykF(qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor8setCmykFEddddd(void *this_, qreal c, qreal m, qreal y, qreal k, qreal a) {
  ((QColor*)this_)->setCmykF(c, m, y, k, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:181
// [4] int hslHue()
extern "C"
int C_ZNK6QColor6hslHueEv(void *this_) {
  return (int)((QColor*)this_)->hslHue();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:182
// [4] int hslSaturation()
extern "C"
int C_ZNK6QColor13hslSaturationEv(void *this_) {
  return (int)((QColor*)this_)->hslSaturation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:183
// [4] int lightness()
extern "C"
int C_ZNK6QColor9lightnessEv(void *this_) {
  return (int)((QColor*)this_)->lightness();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:185
// [8] qreal hslHueF()
extern "C"
qreal C_ZNK6QColor7hslHueFEv(void *this_) {
  return (qreal)((QColor*)this_)->hslHueF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:186
// [8] qreal hslSaturationF()
extern "C"
qreal C_ZNK6QColor14hslSaturationFEv(void *this_) {
  return (qreal)((QColor*)this_)->hslSaturationF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:187
// [8] qreal lightnessF()
extern "C"
qreal C_ZNK6QColor10lightnessFEv(void *this_) {
  return (qreal)((QColor*)this_)->lightnessF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:189
// [-2] void getHsl(int *, int *, int *, int *)
extern "C"
void C_ZNK6QColor6getHslEPiS0_S0_S0_(void *this_, int * h, int * s, int * l, int * a) {
  ((QColor*)this_)->getHsl(h, s, l, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:190
// [-2] void setHsl(int, int, int, int)
extern "C"
void C_ZN6QColor6setHslEiiii(void *this_, int h, int s, int l, int a) {
  ((QColor*)this_)->setHsl(h, s, l, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:192
// [-2] void getHslF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK6QColor7getHslFEPdS0_S0_S0_(void *this_, qreal * h, qreal * s, qreal * l, qreal * a) {
  ((QColor*)this_)->getHslF(h, s, l, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:193
// [-2] void setHslF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor7setHslFEdddd(void *this_, qreal h, qreal s, qreal l, qreal a) {
  ((QColor*)this_)->setHslF(h, s, l, a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:195
// [16] QColor toRgb()
extern "C"
void* C_ZNK6QColor5toRgbEv(void *this_) {
  auto rv = ((QColor*)this_)->toRgb();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:196
// [16] QColor toHsv()
extern "C"
void* C_ZNK6QColor5toHsvEv(void *this_) {
  auto rv = ((QColor*)this_)->toHsv();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:197
// [16] QColor toCmyk()
extern "C"
void* C_ZNK6QColor6toCmykEv(void *this_) {
  auto rv = ((QColor*)this_)->toCmyk();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:198
// [16] QColor toHsl()
extern "C"
void* C_ZNK6QColor5toHslEv(void *this_) {
  auto rv = ((QColor*)this_)->toHsl();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:200
// [16] QColor convertTo(enum QColor::Spec)
extern "C"
void* C_ZNK6QColor9convertToENS_4SpecE(void *this_, QColor::Spec colorSpec) {
  auto rv = ((QColor*)this_)->convertTo(colorSpec);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:202
// [16] QColor fromRgb(QRgb)
extern "C"
void* C_ZN6QColor7fromRgbEj(QRgb rgb) {
  auto rv = QColor::fromRgb(rgb);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:203
// [16] QColor fromRgba(QRgb)
extern "C"
void* C_ZN6QColor8fromRgbaEj(QRgb rgba) {
  auto rv = QColor::fromRgba(rgba);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:205
// [16] QColor fromRgb(int, int, int, int)
extern "C"
void* C_ZN6QColor7fromRgbEiiii(int r, int g, int b, int a) {
  auto rv = QColor::fromRgb(r, g, b, a);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:206
// [16] QColor fromRgbF(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN6QColor8fromRgbFEdddd(qreal r, qreal g, qreal b, qreal a) {
  auto rv = QColor::fromRgbF(r, g, b, a);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:208
// [16] QColor fromRgba64(ushort, ushort, ushort, ushort)
extern "C"
void* C_ZN6QColor10fromRgba64Etttt(ushort r, ushort g, ushort b, ushort a) {
  auto rv = QColor::fromRgba64(r, g, b, a);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:209
// [16] QColor fromRgba64(class QRgba64)
extern "C"
void* C_ZN6QColor10fromRgba64E7QRgba64(QRgba64* rgba) {
  auto rv = QColor::fromRgba64(*rgba);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:211
// [16] QColor fromHsv(int, int, int, int)
extern "C"
void* C_ZN6QColor7fromHsvEiiii(int h, int s, int v, int a) {
  auto rv = QColor::fromHsv(h, s, v, a);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:212
// [16] QColor fromHsvF(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN6QColor8fromHsvFEdddd(qreal h, qreal s, qreal v, qreal a) {
  auto rv = QColor::fromHsvF(h, s, v, a);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:214
// [16] QColor fromCmyk(int, int, int, int, int)
extern "C"
void* C_ZN6QColor8fromCmykEiiiii(int c, int m, int y, int k, int a) {
  auto rv = QColor::fromCmyk(c, m, y, k, a);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:215
// [16] QColor fromCmykF(qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN6QColor9fromCmykFEddddd(qreal c, qreal m, qreal y, qreal k, qreal a) {
  auto rv = QColor::fromCmykF(c, m, y, k, a);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:217
// [16] QColor fromHsl(int, int, int, int)
extern "C"
void* C_ZN6QColor7fromHslEiiii(int h, int s, int l, int a) {
  auto rv = QColor::fromHsl(h, s, l, a);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:218
// [16] QColor fromHslF(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN6QColor8fromHslFEdddd(qreal h, qreal s, qreal l, qreal a) {
  auto rv = QColor::fromHslF(h, s, l, a);
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:220
// [16] QColor light(int)
extern "C"
void* C_ZNK6QColor5lightEi(void *this_, int f) {
  auto rv = ((QColor*)this_)->light(f);
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:221
// [16] QColor lighter(int)
extern "C"
void* C_ZNK6QColor7lighterEi(void *this_, int f) {
  auto rv = ((QColor*)this_)->lighter(f);
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:222
// [16] QColor dark(int)
extern "C"
void* C_ZNK6QColor4darkEi(void *this_, int f) {
  auto rv = ((QColor*)this_)->dark(f);
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:223
// [16] QColor darker(int)
extern "C"
void* C_ZNK6QColor6darkerEi(void *this_, int f) {
  auto rv = ((QColor*)this_)->darker(f);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:231
// [1] bool isValidColor(const class QString &)
extern "C"
bool C_ZN6QColor12isValidColorERK7QString(QString* name) {
  return (bool)QColor::isValidColor(*name);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:233
// [1] bool isValidColor(class QStringView)
extern "C"
bool C_ZN6QColor12isValidColorE11QStringView(QStringView* arg0) {
  return (bool)QColor::isValidColor(*arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:234
// [1] bool isValidColor(class QLatin1String)
extern "C"
bool C_ZN6QColor12isValidColorE13QLatin1String(QLatin1String* arg0) {
  return (bool)QColor::isValidColor(*arg0);
}

extern "C"
void C_ZN6QColorD2Ev(void *this_) {
  delete (QColor*)(this_);
}
//  main block end
