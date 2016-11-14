// /usr/include/qt/QtGui/qcolor.h
#include <qcolor.h>
#include <QtGui>

// /usr/include/qt/QtGui/qcolor.h:69
// void QColor()
extern "C"
void* C_ZN6QColorC1Ev() {
  return new QColor();
}
// /usr/include/qt/QtGui/qcolor.h:70
// void QColor(Qt::GlobalColor)
extern "C"
void* C_ZN6QColorC1EN2Qt11GlobalColorE(Qt::GlobalColor color) {
  return new QColor(color);
}
// /usr/include/qt/QtGui/qcolor.h:71
// void QColor(int, int, int, int)
extern "C"
void* C_ZN6QColorC1Eiiii(int r, int g, int b, int a) {
  return new QColor(r, g, b, a);
}
// /usr/include/qt/QtGui/qcolor.h:72
// void QColor(QRgb)
extern "C"
void* C_ZN6QColorC1Ej(QRgb rgb) {
  return new QColor(rgb);
}
// /usr/include/qt/QtGui/qcolor.h:73
// void QColor(class QRgba64)
extern "C"
void* C_ZN6QColorC1E7QRgba64(QRgba64 rgba64) {
  return new QColor(rgba64);
}
// /usr/include/qt/QtGui/qcolor.h:74
// void QColor(const class QString &)
extern "C"
void* C_ZN6QColorC1ERK7QString(const QString & name) {
  return new QColor(name);
}
// /usr/include/qt/QtGui/qcolor.h:75
// void QColor(const char *)
extern "C"
void* C_ZN6QColorC1EPKc(const char * name) {
  return new QColor(name);
}
// /usr/include/qt/QtGui/qcolor.h:76
// void QColor(enum QColor::Spec)
extern "C"
void* C_ZN6QColorC1ENS_4SpecE(QColor::Spec spec) {
  return new QColor(spec);
}
// /usr/include/qt/QtGui/qcolor.h:90
// bool isValid()
extern "C"
void C_ZNK6QColor7isValidEv(void *this_) {
  /*return*/ ((QColor*)this_)->isValid();
}
// /usr/include/qt/QtGui/qcolor.h:93
// QString name()
extern "C"
void C_ZNK6QColor4nameEv(void *this_) {
  /*return*/ ((QColor*)this_)->name();
}
// /usr/include/qt/QtGui/qcolor.h:94
// QString name(enum QColor::NameFormat)
extern "C"
void C_ZNK6QColor4nameENS_10NameFormatE(void *this_, QColor::NameFormat format) {
  /*return*/ ((QColor*)this_)->name(format);
}
// /usr/include/qt/QtGui/qcolor.h:95
// void setNamedColor(const class QString &)
extern "C"
void C_ZN6QColor13setNamedColorERK7QString(void *this_, const QString & name) {
  ((QColor*)this_)->setNamedColor(name);
}
// static
// /usr/include/qt/QtGui/qcolor.h:97
// QStringList colorNames()
extern "C"
void C_ZN6QColor10colorNamesEv() {
  /*return*/ QColor::colorNames();
}
// inline
// /usr/include/qt/QtGui/qcolor.h:99
// QColor::Spec spec()
extern "C"
void C_ZNK6QColor4specEv(void *this_) {
  /*return*/ ((QColor*)this_)->spec();
}
// /usr/include/qt/QtGui/qcolor.h:102
// int alpha()
extern "C"
void C_ZNK6QColor5alphaEv(void *this_) {
  /*return*/ ((QColor*)this_)->alpha();
}
// /usr/include/qt/QtGui/qcolor.h:103
// void setAlpha(int)
extern "C"
void C_ZN6QColor8setAlphaEi(void *this_, int alpha) {
  ((QColor*)this_)->setAlpha(alpha);
}
// /usr/include/qt/QtGui/qcolor.h:105
// qreal alphaF()
extern "C"
void C_ZNK6QColor6alphaFEv(void *this_) {
  /*return*/ ((QColor*)this_)->alphaF();
}
// /usr/include/qt/QtGui/qcolor.h:106
// void setAlphaF(qreal)
extern "C"
void C_ZN6QColor9setAlphaFEd(void *this_, qreal alpha) {
  ((QColor*)this_)->setAlphaF(alpha);
}
// /usr/include/qt/QtGui/qcolor.h:108
// int red()
extern "C"
void C_ZNK6QColor3redEv(void *this_) {
  /*return*/ ((QColor*)this_)->red();
}
// /usr/include/qt/QtGui/qcolor.h:109
// int green()
extern "C"
void C_ZNK6QColor5greenEv(void *this_) {
  /*return*/ ((QColor*)this_)->green();
}
// /usr/include/qt/QtGui/qcolor.h:110
// int blue()
extern "C"
void C_ZNK6QColor4blueEv(void *this_) {
  /*return*/ ((QColor*)this_)->blue();
}
// /usr/include/qt/QtGui/qcolor.h:111
// void setRed(int)
extern "C"
void C_ZN6QColor6setRedEi(void *this_, int red) {
  ((QColor*)this_)->setRed(red);
}
// /usr/include/qt/QtGui/qcolor.h:112
// void setGreen(int)
extern "C"
void C_ZN6QColor8setGreenEi(void *this_, int green) {
  ((QColor*)this_)->setGreen(green);
}
// /usr/include/qt/QtGui/qcolor.h:113
// void setBlue(int)
extern "C"
void C_ZN6QColor7setBlueEi(void *this_, int blue) {
  ((QColor*)this_)->setBlue(blue);
}
// /usr/include/qt/QtGui/qcolor.h:115
// qreal redF()
extern "C"
void C_ZNK6QColor4redFEv(void *this_) {
  /*return*/ ((QColor*)this_)->redF();
}
// /usr/include/qt/QtGui/qcolor.h:116
// qreal greenF()
extern "C"
void C_ZNK6QColor6greenFEv(void *this_) {
  /*return*/ ((QColor*)this_)->greenF();
}
// /usr/include/qt/QtGui/qcolor.h:117
// qreal blueF()
extern "C"
void C_ZNK6QColor5blueFEv(void *this_) {
  /*return*/ ((QColor*)this_)->blueF();
}
// /usr/include/qt/QtGui/qcolor.h:118
// void setRedF(qreal)
extern "C"
void C_ZN6QColor7setRedFEd(void *this_, qreal red) {
  ((QColor*)this_)->setRedF(red);
}
// /usr/include/qt/QtGui/qcolor.h:119
// void setGreenF(qreal)
extern "C"
void C_ZN6QColor9setGreenFEd(void *this_, qreal green) {
  ((QColor*)this_)->setGreenF(green);
}
// /usr/include/qt/QtGui/qcolor.h:120
// void setBlueF(qreal)
extern "C"
void C_ZN6QColor8setBlueFEd(void *this_, qreal blue) {
  ((QColor*)this_)->setBlueF(blue);
}
// /usr/include/qt/QtGui/qcolor.h:122
// void getRgb(int *, int *, int *, int *)
extern "C"
void C_ZNK6QColor6getRgbEPiS0_S0_S0_(void *this_, int * r, int * g, int * b, int * a) {
  ((QColor*)this_)->getRgb(r, g, b, a);
}
// /usr/include/qt/QtGui/qcolor.h:123
// void setRgb(int, int, int, int)
extern "C"
void C_ZN6QColor6setRgbEiiii(void *this_, int r, int g, int b, int a) {
  ((QColor*)this_)->setRgb(r, g, b, a);
}
// /usr/include/qt/QtGui/qcolor.h:125
// void getRgbF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK6QColor7getRgbFEPdS0_S0_S0_(void *this_, qreal * r, qreal * g, qreal * b, qreal * a) {
  ((QColor*)this_)->getRgbF(r, g, b, a);
}
// /usr/include/qt/QtGui/qcolor.h:126
// void setRgbF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor7setRgbFEdddd(void *this_, qreal r, qreal g, qreal b, qreal a) {
  ((QColor*)this_)->setRgbF(r, g, b, a);
}
// /usr/include/qt/QtGui/qcolor.h:128
// QRgba64 rgba64()
extern "C"
void C_ZNK6QColor6rgba64Ev(void *this_) {
  /*return*/ ((QColor*)this_)->rgba64();
}
// /usr/include/qt/QtGui/qcolor.h:129
// void setRgba64(class QRgba64)
extern "C"
void C_ZN6QColor9setRgba64E7QRgba64(void *this_, QRgba64 rgba) {
  ((QColor*)this_)->setRgba64(rgba);
}
// /usr/include/qt/QtGui/qcolor.h:131
// QRgb rgba()
extern "C"
void C_ZNK6QColor4rgbaEv(void *this_) {
  /*return*/ ((QColor*)this_)->rgba();
}
// /usr/include/qt/QtGui/qcolor.h:132
// void setRgba(QRgb)
extern "C"
void C_ZN6QColor7setRgbaEj(void *this_, QRgb rgba) {
  ((QColor*)this_)->setRgba(rgba);
}
// /usr/include/qt/QtGui/qcolor.h:134
// QRgb rgb()
extern "C"
void C_ZNK6QColor3rgbEv(void *this_) {
  /*return*/ ((QColor*)this_)->rgb();
}
// /usr/include/qt/QtGui/qcolor.h:135
// void setRgb(QRgb)
extern "C"
void C_ZN6QColor6setRgbEj(void *this_, QRgb rgb) {
  ((QColor*)this_)->setRgb(rgb);
}
// /usr/include/qt/QtGui/qcolor.h:137
// int hue()
extern "C"
void C_ZNK6QColor3hueEv(void *this_) {
  /*return*/ ((QColor*)this_)->hue();
}
// /usr/include/qt/QtGui/qcolor.h:138
// int saturation()
extern "C"
void C_ZNK6QColor10saturationEv(void *this_) {
  /*return*/ ((QColor*)this_)->saturation();
}
// /usr/include/qt/QtGui/qcolor.h:139
// int hsvHue()
extern "C"
void C_ZNK6QColor6hsvHueEv(void *this_) {
  /*return*/ ((QColor*)this_)->hsvHue();
}
// /usr/include/qt/QtGui/qcolor.h:140
// int hsvSaturation()
extern "C"
void C_ZNK6QColor13hsvSaturationEv(void *this_) {
  /*return*/ ((QColor*)this_)->hsvSaturation();
}
// /usr/include/qt/QtGui/qcolor.h:141
// int value()
extern "C"
void C_ZNK6QColor5valueEv(void *this_) {
  /*return*/ ((QColor*)this_)->value();
}
// /usr/include/qt/QtGui/qcolor.h:143
// qreal hueF()
extern "C"
void C_ZNK6QColor4hueFEv(void *this_) {
  /*return*/ ((QColor*)this_)->hueF();
}
// /usr/include/qt/QtGui/qcolor.h:144
// qreal saturationF()
extern "C"
void C_ZNK6QColor11saturationFEv(void *this_) {
  /*return*/ ((QColor*)this_)->saturationF();
}
// /usr/include/qt/QtGui/qcolor.h:145
// qreal hsvHueF()
extern "C"
void C_ZNK6QColor7hsvHueFEv(void *this_) {
  /*return*/ ((QColor*)this_)->hsvHueF();
}
// /usr/include/qt/QtGui/qcolor.h:146
// qreal hsvSaturationF()
extern "C"
void C_ZNK6QColor14hsvSaturationFEv(void *this_) {
  /*return*/ ((QColor*)this_)->hsvSaturationF();
}
// /usr/include/qt/QtGui/qcolor.h:147
// qreal valueF()
extern "C"
void C_ZNK6QColor6valueFEv(void *this_) {
  /*return*/ ((QColor*)this_)->valueF();
}
// /usr/include/qt/QtGui/qcolor.h:149
// void getHsv(int *, int *, int *, int *)
extern "C"
void C_ZNK6QColor6getHsvEPiS0_S0_S0_(void *this_, int * h, int * s, int * v, int * a) {
  ((QColor*)this_)->getHsv(h, s, v, a);
}
// /usr/include/qt/QtGui/qcolor.h:150
// void setHsv(int, int, int, int)
extern "C"
void C_ZN6QColor6setHsvEiiii(void *this_, int h, int s, int v, int a) {
  ((QColor*)this_)->setHsv(h, s, v, a);
}
// /usr/include/qt/QtGui/qcolor.h:152
// void getHsvF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK6QColor7getHsvFEPdS0_S0_S0_(void *this_, qreal * h, qreal * s, qreal * v, qreal * a) {
  ((QColor*)this_)->getHsvF(h, s, v, a);
}
// /usr/include/qt/QtGui/qcolor.h:153
// void setHsvF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor7setHsvFEdddd(void *this_, qreal h, qreal s, qreal v, qreal a) {
  ((QColor*)this_)->setHsvF(h, s, v, a);
}
// /usr/include/qt/QtGui/qcolor.h:155
// int cyan()
extern "C"
void C_ZNK6QColor4cyanEv(void *this_) {
  /*return*/ ((QColor*)this_)->cyan();
}
// /usr/include/qt/QtGui/qcolor.h:156
// int magenta()
extern "C"
void C_ZNK6QColor7magentaEv(void *this_) {
  /*return*/ ((QColor*)this_)->magenta();
}
// /usr/include/qt/QtGui/qcolor.h:157
// int yellow()
extern "C"
void C_ZNK6QColor6yellowEv(void *this_) {
  /*return*/ ((QColor*)this_)->yellow();
}
// /usr/include/qt/QtGui/qcolor.h:158
// int black()
extern "C"
void C_ZNK6QColor5blackEv(void *this_) {
  /*return*/ ((QColor*)this_)->black();
}
// /usr/include/qt/QtGui/qcolor.h:160
// qreal cyanF()
extern "C"
void C_ZNK6QColor5cyanFEv(void *this_) {
  /*return*/ ((QColor*)this_)->cyanF();
}
// /usr/include/qt/QtGui/qcolor.h:161
// qreal magentaF()
extern "C"
void C_ZNK6QColor8magentaFEv(void *this_) {
  /*return*/ ((QColor*)this_)->magentaF();
}
// /usr/include/qt/QtGui/qcolor.h:162
// qreal yellowF()
extern "C"
void C_ZNK6QColor7yellowFEv(void *this_) {
  /*return*/ ((QColor*)this_)->yellowF();
}
// /usr/include/qt/QtGui/qcolor.h:163
// qreal blackF()
extern "C"
void C_ZNK6QColor6blackFEv(void *this_) {
  /*return*/ ((QColor*)this_)->blackF();
}
// /usr/include/qt/QtGui/qcolor.h:165
// void getCmyk(int *, int *, int *, int *, int *)
extern "C"
void C_ZN6QColor7getCmykEPiS0_S0_S0_S0_(void *this_, int * c, int * m, int * y, int * k, int * a) {
  ((QColor*)this_)->getCmyk(c, m, y, k, a);
}
// /usr/include/qt/QtGui/qcolor.h:166
// void setCmyk(int, int, int, int, int)
extern "C"
void C_ZN6QColor7setCmykEiiiii(void *this_, int c, int m, int y, int k, int a) {
  ((QColor*)this_)->setCmyk(c, m, y, k, a);
}
// /usr/include/qt/QtGui/qcolor.h:168
// void getCmykF(qreal *, qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZN6QColor8getCmykFEPdS0_S0_S0_S0_(void *this_, qreal * c, qreal * m, qreal * y, qreal * k, qreal * a) {
  ((QColor*)this_)->getCmykF(c, m, y, k, a);
}
// /usr/include/qt/QtGui/qcolor.h:169
// void setCmykF(qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor8setCmykFEddddd(void *this_, qreal c, qreal m, qreal y, qreal k, qreal a) {
  ((QColor*)this_)->setCmykF(c, m, y, k, a);
}
// /usr/include/qt/QtGui/qcolor.h:171
// int hslHue()
extern "C"
void C_ZNK6QColor6hslHueEv(void *this_) {
  /*return*/ ((QColor*)this_)->hslHue();
}
// /usr/include/qt/QtGui/qcolor.h:172
// int hslSaturation()
extern "C"
void C_ZNK6QColor13hslSaturationEv(void *this_) {
  /*return*/ ((QColor*)this_)->hslSaturation();
}
// /usr/include/qt/QtGui/qcolor.h:173
// int lightness()
extern "C"
void C_ZNK6QColor9lightnessEv(void *this_) {
  /*return*/ ((QColor*)this_)->lightness();
}
// /usr/include/qt/QtGui/qcolor.h:175
// qreal hslHueF()
extern "C"
void C_ZNK6QColor7hslHueFEv(void *this_) {
  /*return*/ ((QColor*)this_)->hslHueF();
}
// /usr/include/qt/QtGui/qcolor.h:176
// qreal hslSaturationF()
extern "C"
void C_ZNK6QColor14hslSaturationFEv(void *this_) {
  /*return*/ ((QColor*)this_)->hslSaturationF();
}
// /usr/include/qt/QtGui/qcolor.h:177
// qreal lightnessF()
extern "C"
void C_ZNK6QColor10lightnessFEv(void *this_) {
  /*return*/ ((QColor*)this_)->lightnessF();
}
// /usr/include/qt/QtGui/qcolor.h:179
// void getHsl(int *, int *, int *, int *)
extern "C"
void C_ZNK6QColor6getHslEPiS0_S0_S0_(void *this_, int * h, int * s, int * l, int * a) {
  ((QColor*)this_)->getHsl(h, s, l, a);
}
// /usr/include/qt/QtGui/qcolor.h:180
// void setHsl(int, int, int, int)
extern "C"
void C_ZN6QColor6setHslEiiii(void *this_, int h, int s, int l, int a) {
  ((QColor*)this_)->setHsl(h, s, l, a);
}
// /usr/include/qt/QtGui/qcolor.h:182
// void getHslF(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK6QColor7getHslFEPdS0_S0_S0_(void *this_, qreal * h, qreal * s, qreal * l, qreal * a) {
  ((QColor*)this_)->getHslF(h, s, l, a);
}
// /usr/include/qt/QtGui/qcolor.h:183
// void setHslF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor7setHslFEdddd(void *this_, qreal h, qreal s, qreal l, qreal a) {
  ((QColor*)this_)->setHslF(h, s, l, a);
}
// /usr/include/qt/QtGui/qcolor.h:185
// QColor toRgb()
extern "C"
void C_ZNK6QColor5toRgbEv(void *this_) {
  /*return*/ ((QColor*)this_)->toRgb();
}
// /usr/include/qt/QtGui/qcolor.h:186
// QColor toHsv()
extern "C"
void C_ZNK6QColor5toHsvEv(void *this_) {
  /*return*/ ((QColor*)this_)->toHsv();
}
// /usr/include/qt/QtGui/qcolor.h:187
// QColor toCmyk()
extern "C"
void C_ZNK6QColor6toCmykEv(void *this_) {
  /*return*/ ((QColor*)this_)->toCmyk();
}
// /usr/include/qt/QtGui/qcolor.h:188
// QColor toHsl()
extern "C"
void C_ZNK6QColor5toHslEv(void *this_) {
  /*return*/ ((QColor*)this_)->toHsl();
}
// /usr/include/qt/QtGui/qcolor.h:190
// QColor convertTo(enum QColor::Spec)
extern "C"
void C_ZNK6QColor9convertToENS_4SpecE(void *this_, QColor::Spec colorSpec) {
  /*return*/ ((QColor*)this_)->convertTo(colorSpec);
}
// static
// /usr/include/qt/QtGui/qcolor.h:192
// QColor fromRgb(QRgb)
extern "C"
void C_ZN6QColor7fromRgbEj(QRgb rgb) {
  /*return*/ QColor::fromRgb(rgb);
}
// static
// /usr/include/qt/QtGui/qcolor.h:193
// QColor fromRgba(QRgb)
extern "C"
void C_ZN6QColor8fromRgbaEj(QRgb rgba) {
  /*return*/ QColor::fromRgba(rgba);
}
// static
// /usr/include/qt/QtGui/qcolor.h:195
// QColor fromRgb(int, int, int, int)
extern "C"
void C_ZN6QColor7fromRgbEiiii(int r, int g, int b, int a) {
  /*return*/ QColor::fromRgb(r, g, b, a);
}
// static
// /usr/include/qt/QtGui/qcolor.h:196
// QColor fromRgbF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor8fromRgbFEdddd(qreal r, qreal g, qreal b, qreal a) {
  /*return*/ QColor::fromRgbF(r, g, b, a);
}
// static
// /usr/include/qt/QtGui/qcolor.h:198
// QColor fromRgba64(ushort, ushort, ushort, ushort)
extern "C"
void C_ZN6QColor10fromRgba64Etttt(ushort r, ushort g, ushort b, ushort a) {
  /*return*/ QColor::fromRgba64(r, g, b, a);
}
// static
// /usr/include/qt/QtGui/qcolor.h:199
// QColor fromRgba64(class QRgba64)
extern "C"
void C_ZN6QColor10fromRgba64E7QRgba64(QRgba64 rgba) {
  /*return*/ QColor::fromRgba64(rgba);
}
// static
// /usr/include/qt/QtGui/qcolor.h:201
// QColor fromHsv(int, int, int, int)
extern "C"
void C_ZN6QColor7fromHsvEiiii(int h, int s, int v, int a) {
  /*return*/ QColor::fromHsv(h, s, v, a);
}
// static
// /usr/include/qt/QtGui/qcolor.h:202
// QColor fromHsvF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor8fromHsvFEdddd(qreal h, qreal s, qreal v, qreal a) {
  /*return*/ QColor::fromHsvF(h, s, v, a);
}
// static
// /usr/include/qt/QtGui/qcolor.h:204
// QColor fromCmyk(int, int, int, int, int)
extern "C"
void C_ZN6QColor8fromCmykEiiiii(int c, int m, int y, int k, int a) {
  /*return*/ QColor::fromCmyk(c, m, y, k, a);
}
// static
// /usr/include/qt/QtGui/qcolor.h:205
// QColor fromCmykF(qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor9fromCmykFEddddd(qreal c, qreal m, qreal y, qreal k, qreal a) {
  /*return*/ QColor::fromCmykF(c, m, y, k, a);
}
// static
// /usr/include/qt/QtGui/qcolor.h:207
// QColor fromHsl(int, int, int, int)
extern "C"
void C_ZN6QColor7fromHslEiiii(int h, int s, int l, int a) {
  /*return*/ QColor::fromHsl(h, s, l, a);
}
// static
// /usr/include/qt/QtGui/qcolor.h:208
// QColor fromHslF(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QColor8fromHslFEdddd(qreal h, qreal s, qreal l, qreal a) {
  /*return*/ QColor::fromHslF(h, s, l, a);
}
// /usr/include/qt/QtGui/qcolor.h:210
// QColor light(int)
extern "C"
void C_ZNK6QColor5lightEi(void *this_, int f) {
  /*return*/ ((QColor*)this_)->light(f);
}
// /usr/include/qt/QtGui/qcolor.h:211
// QColor lighter(int)
extern "C"
void C_ZNK6QColor7lighterEi(void *this_, int f) {
  /*return*/ ((QColor*)this_)->lighter(f);
}
// /usr/include/qt/QtGui/qcolor.h:212
// QColor dark(int)
extern "C"
void C_ZNK6QColor4darkEi(void *this_, int f) {
  /*return*/ ((QColor*)this_)->dark(f);
}
// /usr/include/qt/QtGui/qcolor.h:213
// QColor darker(int)
extern "C"
void C_ZNK6QColor6darkerEi(void *this_, int f) {
  /*return*/ ((QColor*)this_)->darker(f);
}
// static
// /usr/include/qt/QtGui/qcolor.h:220
// bool isValidColor(const class QString &)
extern "C"
void C_ZN6QColor12isValidColorERK7QString(const QString & name) {
  /*return*/ QColor::isValidColor(name);
}