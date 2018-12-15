//  header block begin

// /usr/include/qt/QtGui/qcolor.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolor.h>
#include <QtGui>
#include "callback_inherit.h"

// QColor is pure virtual: false
// QColor has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQColor_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQColor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQColor_t qt_meta_stringdata_MyQColor = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQColor"
  },
  "MyQColor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQColor[] = {
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
class Q_DECL_EXPORT MyQColor : public QColor {
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
// void QColor(QRgba64)
MyQColor(QRgba64 rgba64) : QColor(rgba64) {}
// void QColor(const QString &)
MyQColor(const QString & name) : QColor(name) {}
// void QColor(const char *)
MyQColor(const char * aname) : QColor(aname) {}
// void QColor(QLatin1String)
MyQColor(QLatin1String name) : QColor(name) {}
// void QColor(QColor::Spec)
MyQColor(QColor::Spec spec) : QColor(spec) {}
// void QColor(const QColor &)
MyQColor(const QColor & color) : QColor(color) {}
// void QColor(QColor &&)
MyQColor(QColor && other) : QColor(other) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:70
// [-2] void QColor()
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2Ev() {
  return  new QColor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:71
// [-2] void QColor(Qt::GlobalColor)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2EN2Qt11GlobalColorE(Qt::GlobalColor color) {
  return  new QColor(color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:72
// [-2] void QColor(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2Eiiii(int r, int g, int b, int a) {
  return  new QColor(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:73
// [-2] void QColor(QRgb)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2Ej(QRgb rgb) {
  return  new QColor(rgb);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qcolor.h:74
// [-2] void QColor(QRgba64)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2E7QRgba64(QRgba64* rgba64) {
  return  new QColor(*rgba64);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:75
// [-2] void QColor(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2ERK7QString(QString* name) {
  return  new QColor(*name);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:76
// [-2] void QColor(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2EPKc(const char * aname) {
  return  new QColor(aname);
}

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qcolor.h:77
// [-2] void QColor(QLatin1String)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2E13QLatin1String(QLatin1String* name) {
  return  new QColor(*name);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:78
// [-2] void QColor(QColor::Spec)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2ENS_4SpecE(QColor::Spec spec) {
  return  new QColor(spec);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:81
// [-2] void QColor(const QColor &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2ERKS_(QColor* color) {
  return  new QColor(*color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:83
// [-2] void QColor(QColor &&)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColorC2EOS_(QColor && other) {
  return  new QColor(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:84
// [16] QColor & operator=(QColor &&)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColoraSEOS_(void *this_, QColor && other) {
  auto& rv = ((QColor*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:87
// [16] QColor & operator=(const QColor &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColoraSERKS_(void *this_, QColor* arg0) {
  auto& rv = ((QColor*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:90
// [16] QColor & operator=(Qt::GlobalColor)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColoraSEN2Qt11GlobalColorE(void *this_, Qt::GlobalColor color) {
  auto& rv = ((QColor*)this_)->operator=(color);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:92
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QColor7isValidEv(void *this_) {
  return (bool)((QColor*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:95
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor4nameEv(void *this_) {
  auto rv = ((QColor*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:96
// [8] QString name(QColor::NameFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor4nameENS_10NameFormatE(void *this_, QColor::NameFormat format) {
  auto rv = ((QColor*)this_)->name(format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:98
// [-2] void setNamedColor(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor13setNamedColorERK7QString(void *this_, QString* name) {
  ((QColor*)this_)->setNamedColor(*name);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qcolor.h:99
// [-2] void setNamedColor(QLatin1String)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN6QColor13setNamedColorE13QLatin1String(void *this_, QLatin1String* name) {
  ((QColor*)this_)->setNamedColor(*name);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:101
// [8] QStringList colorNames()
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor10colorNamesEv() {
  auto rv = QColor::colorNames();
return new QStringList(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:103
// [4] QColor::Spec spec()
extern "C" Q_DECL_EXPORT
QColor::Spec C_ZNK6QColor4specEv(void *this_) {
  return (QColor::Spec)((QColor*)this_)->spec();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:106
// [4] int alpha()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor5alphaEv(void *this_) {
  return (int)((QColor*)this_)->alpha();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:107
// [-2] void setAlpha(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor8setAlphaEi(void *this_, int alpha) {
  ((QColor*)this_)->setAlpha(alpha);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:109
// [8] qreal alphaF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor6alphaFEv(void *this_) {
  return (qreal)((QColor*)this_)->alphaF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:110
// [-2] void setAlphaF(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor9setAlphaFEd(void *this_, qreal alpha) {
  ((QColor*)this_)->setAlphaF(alpha);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:112
// [4] int red()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor3redEv(void *this_) {
  return (int)((QColor*)this_)->red();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:113
// [4] int green()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor5greenEv(void *this_) {
  return (int)((QColor*)this_)->green();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:114
// [4] int blue()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor4blueEv(void *this_) {
  return (int)((QColor*)this_)->blue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:115
// [-2] void setRed(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor6setRedEi(void *this_, int red) {
  ((QColor*)this_)->setRed(red);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:116
// [-2] void setGreen(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor8setGreenEi(void *this_, int green) {
  ((QColor*)this_)->setGreen(green);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:117
// [-2] void setBlue(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor7setBlueEi(void *this_, int blue) {
  ((QColor*)this_)->setBlue(blue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:119
// [8] qreal redF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor4redFEv(void *this_) {
  return (qreal)((QColor*)this_)->redF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:120
// [8] qreal greenF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor6greenFEv(void *this_) {
  return (qreal)((QColor*)this_)->greenF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:121
// [8] qreal blueF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor5blueFEv(void *this_) {
  return (qreal)((QColor*)this_)->blueF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:122
// [-2] void setRedF(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor7setRedFEd(void *this_, qreal red) {
  ((QColor*)this_)->setRedF(red);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:123
// [-2] void setGreenF(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor9setGreenFEd(void *this_, qreal green) {
  ((QColor*)this_)->setGreenF(green);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:124
// [-2] void setBlueF(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor8setBlueFEd(void *this_, qreal blue) {
  ((QColor*)this_)->setBlueF(blue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:126
// [-2] void getRgb(int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QColor6getRgbEPiS0_S0_S0_(void *this_, int * r, int * g, int * b, int * a) {
  ((QColor*)this_)->getRgb(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:127
// [-2] void setRgb(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor6setRgbEiiii(void *this_, int r, int g, int b, int a) {
  ((QColor*)this_)->setRgb(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:129
// [-2] void getRgbF(qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QColor7getRgbFEPdS0_S0_S0_(void *this_, qreal * r, qreal * g, qreal * b, qreal * a) {
  ((QColor*)this_)->getRgbF(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:130
// [-2] void setRgbF(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor7setRgbFEdddd(void *this_, qreal r, qreal g, qreal b, qreal a) {
  ((QColor*)this_)->setRgbF(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qcolor.h:132
// [8] QRgba64 rgba64()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor6rgba64Ev(void *this_) {
  auto rv = ((QColor*)this_)->rgba64();
return new QRgba64(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qcolor.h:133
// [-2] void setRgba64(QRgba64)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN6QColor9setRgba64E7QRgba64(void *this_, QRgba64* rgba) {
  ((QColor*)this_)->setRgba64(*rgba);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:135
// [4] QRgb rgba()
extern "C" Q_DECL_EXPORT
QRgb C_ZNK6QColor4rgbaEv(void *this_) {
  return (QRgb)((QColor*)this_)->rgba();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:136
// [-2] void setRgba(QRgb)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor7setRgbaEj(void *this_, QRgb rgba) {
  ((QColor*)this_)->setRgba(rgba);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:138
// [4] QRgb rgb()
extern "C" Q_DECL_EXPORT
QRgb C_ZNK6QColor3rgbEv(void *this_) {
  return (QRgb)((QColor*)this_)->rgb();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:139
// [-2] void setRgb(QRgb)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor6setRgbEj(void *this_, QRgb rgb) {
  ((QColor*)this_)->setRgb(rgb);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:141
// [4] int hue()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor3hueEv(void *this_) {
  return (int)((QColor*)this_)->hue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:142
// [4] int saturation()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor10saturationEv(void *this_) {
  return (int)((QColor*)this_)->saturation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:143
// [4] int hsvHue()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor6hsvHueEv(void *this_) {
  return (int)((QColor*)this_)->hsvHue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:144
// [4] int hsvSaturation()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor13hsvSaturationEv(void *this_) {
  return (int)((QColor*)this_)->hsvSaturation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:145
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor5valueEv(void *this_) {
  return (int)((QColor*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:147
// [8] qreal hueF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor4hueFEv(void *this_) {
  return (qreal)((QColor*)this_)->hueF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:148
// [8] qreal saturationF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor11saturationFEv(void *this_) {
  return (qreal)((QColor*)this_)->saturationF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:149
// [8] qreal hsvHueF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor7hsvHueFEv(void *this_) {
  return (qreal)((QColor*)this_)->hsvHueF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:150
// [8] qreal hsvSaturationF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor14hsvSaturationFEv(void *this_) {
  return (qreal)((QColor*)this_)->hsvSaturationF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:151
// [8] qreal valueF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor6valueFEv(void *this_) {
  return (qreal)((QColor*)this_)->valueF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:153
// [-2] void getHsv(int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QColor6getHsvEPiS0_S0_S0_(void *this_, int * h, int * s, int * v, int * a) {
  ((QColor*)this_)->getHsv(h, s, v, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:154
// [-2] void setHsv(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor6setHsvEiiii(void *this_, int h, int s, int v, int a) {
  ((QColor*)this_)->setHsv(h, s, v, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:156
// [-2] void getHsvF(qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QColor7getHsvFEPdS0_S0_S0_(void *this_, qreal * h, qreal * s, qreal * v, qreal * a) {
  ((QColor*)this_)->getHsvF(h, s, v, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:157
// [-2] void setHsvF(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor7setHsvFEdddd(void *this_, qreal h, qreal s, qreal v, qreal a) {
  ((QColor*)this_)->setHsvF(h, s, v, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:159
// [4] int cyan()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor4cyanEv(void *this_) {
  return (int)((QColor*)this_)->cyan();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:160
// [4] int magenta()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor7magentaEv(void *this_) {
  return (int)((QColor*)this_)->magenta();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:161
// [4] int yellow()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor6yellowEv(void *this_) {
  return (int)((QColor*)this_)->yellow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:162
// [4] int black()
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor5blackEv(void *this_) {
  return (int)((QColor*)this_)->black();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:164
// [8] qreal cyanF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor5cyanFEv(void *this_) {
  return (qreal)((QColor*)this_)->cyanF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:165
// [8] qreal magentaF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor8magentaFEv(void *this_) {
  return (qreal)((QColor*)this_)->magentaF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:166
// [8] qreal yellowF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor7yellowFEv(void *this_) {
  return (qreal)((QColor*)this_)->yellowF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:167
// [8] qreal blackF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor6blackFEv(void *this_) {
  return (qreal)((QColor*)this_)->blackF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:169
// [-2] void getCmyk(int *, int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor7getCmykEPiS0_S0_S0_S0_(void *this_, int * c, int * m, int * y, int * k, int * a) {
  ((QColor*)this_)->getCmyk(c, m, y, k, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:170
// [-2] void setCmyk(int, int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor7setCmykEiiiii(void *this_, int c, int m, int y, int k, int a) {
  ((QColor*)this_)->setCmyk(c, m, y, k, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:172
// [-2] void getCmykF(qreal *, qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor8getCmykFEPdS0_S0_S0_S0_(void *this_, qreal * c, qreal * m, qreal * y, qreal * k, qreal * a) {
  ((QColor*)this_)->getCmykF(c, m, y, k, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:173
// [-2] void setCmykF(qreal, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QColor8setCmykFEddddd(void *this_, qreal c, qreal m, qreal y, qreal k, qreal a) {
  ((QColor*)this_)->setCmykF(c, m, y, k, a);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:175
// [4] int hslHue()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor6hslHueEv(void *this_) {
  return (int)((QColor*)this_)->hslHue();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:176
// [4] int hslSaturation()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor13hslSaturationEv(void *this_) {
  return (int)((QColor*)this_)->hslSaturation();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:177
// [4] int lightness()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK6QColor9lightnessEv(void *this_) {
  return (int)((QColor*)this_)->lightness();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:179
// [8] qreal hslHueF()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor7hslHueFEv(void *this_) {
  return (qreal)((QColor*)this_)->hslHueF();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:180
// [8] qreal hslSaturationF()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor14hslSaturationFEv(void *this_) {
  return (qreal)((QColor*)this_)->hslSaturationF();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:181
// [8] qreal lightnessF()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QColor10lightnessFEv(void *this_) {
  return (qreal)((QColor*)this_)->lightnessF();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:183
// [-2] void getHsl(int *, int *, int *, int *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZNK6QColor6getHslEPiS0_S0_S0_(void *this_, int * h, int * s, int * l, int * a) {
  ((QColor*)this_)->getHsl(h, s, l, a);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:184
// [-2] void setHsl(int, int, int, int)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN6QColor6setHslEiiii(void *this_, int h, int s, int l, int a) {
  ((QColor*)this_)->setHsl(h, s, l, a);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:186
// [-2] void getHslF(qreal *, qreal *, qreal *, qreal *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZNK6QColor7getHslFEPdS0_S0_S0_(void *this_, qreal * h, qreal * s, qreal * l, qreal * a) {
  ((QColor*)this_)->getHslF(h, s, l, a);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:187
// [-2] void setHslF(qreal, qreal, qreal, qreal)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN6QColor7setHslFEdddd(void *this_, qreal h, qreal s, qreal l, qreal a) {
  ((QColor*)this_)->setHslF(h, s, l, a);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:189
// [16] QColor toRgb()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor5toRgbEv(void *this_) {
  auto rv = ((QColor*)this_)->toRgb();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:190
// [16] QColor toHsv()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor5toHsvEv(void *this_) {
  auto rv = ((QColor*)this_)->toHsv();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:191
// [16] QColor toCmyk()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor6toCmykEv(void *this_) {
  auto rv = ((QColor*)this_)->toCmyk();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:192
// [16] QColor toHsl()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor5toHslEv(void *this_) {
  auto rv = ((QColor*)this_)->toHsl();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:194
// [16] QColor convertTo(QColor::Spec)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor9convertToENS_4SpecE(void *this_, QColor::Spec colorSpec) {
  auto rv = ((QColor*)this_)->convertTo(colorSpec);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:196
// [16] QColor fromRgb(QRgb)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor7fromRgbEj(QRgb rgb) {
  auto rv = QColor::fromRgb(rgb);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:197
// [16] QColor fromRgba(QRgb)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor8fromRgbaEj(QRgb rgba) {
  auto rv = QColor::fromRgba(rgba);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:199
// [16] QColor fromRgb(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor7fromRgbEiiii(int r, int g, int b, int a) {
  auto rv = QColor::fromRgb(r, g, b, a);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:200
// [16] QColor fromRgbF(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor8fromRgbFEdddd(qreal r, qreal g, qreal b, qreal a) {
  auto rv = QColor::fromRgbF(r, g, b, a);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qcolor.h:202
// [16] QColor fromRgba64(ushort, ushort, ushort, ushort)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor10fromRgba64Etttt(ushort r, ushort g, ushort b, ushort a) {
  auto rv = QColor::fromRgba64(r, g, b, a);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qcolor.h:203
// [16] QColor fromRgba64(QRgba64)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor10fromRgba64E7QRgba64(QRgba64* rgba) {
  auto rv = QColor::fromRgba64(*rgba);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:205
// [16] QColor fromHsv(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor7fromHsvEiiii(int h, int s, int v, int a) {
  auto rv = QColor::fromHsv(h, s, v, a);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:206
// [16] QColor fromHsvF(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor8fromHsvFEdddd(qreal h, qreal s, qreal v, qreal a) {
  auto rv = QColor::fromHsvF(h, s, v, a);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:208
// [16] QColor fromCmyk(int, int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor8fromCmykEiiiii(int c, int m, int y, int k, int a) {
  auto rv = QColor::fromCmyk(c, m, y, k, a);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:209
// [16] QColor fromCmykF(qreal, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor9fromCmykFEddddd(qreal c, qreal m, qreal y, qreal k, qreal a) {
  auto rv = QColor::fromCmykF(c, m, y, k, a);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:211
// [16] QColor fromHsl(int, int, int, int)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor7fromHslEiiii(int h, int s, int l, int a) {
  auto rv = QColor::fromHsl(h, s, l, a);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qcolor.h:212
// [16] QColor fromHslF(qreal, qreal, qreal, qreal)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN6QColor8fromHslFEdddd(qreal h, qreal s, qreal l, qreal a) {
  auto rv = QColor::fromHslF(h, s, l, a);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:214
// [16] QColor light(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor5lightEi(void *this_, int f) {
  auto rv = ((QColor*)this_)->light(f);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qcolor.h:215
// [16] QColor lighter(int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor7lighterEi(void *this_, int f) {
  auto rv = ((QColor*)this_)->lighter(f);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:216
// [16] QColor dark(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor4darkEi(void *this_, int f) {
  auto rv = ((QColor*)this_)->dark(f);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qcolor.h:217
// [16] QColor darker(int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK6QColor6darkerEi(void *this_, int f) {
  auto rv = ((QColor*)this_)->darker(f);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:219
// [1] bool operator==(const QColor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QColoreqERKS_(void *this_, QColor* c) {
  return (bool)((QColor*)this_)->operator==(*c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:220
// [1] bool operator!=(const QColor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QColorneERKS_(void *this_, QColor* c) {
  return (bool)((QColor*)this_)->operator!=(*c);
}

// Public static Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qcolor.h:224
// [1] bool isValidColor(const QString &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
bool C_ZN6QColor12isValidColorERK7QString(QString* name) {
  return (bool)QColor::isValidColor(*name);
}
#endif // QT_VERSION >= 0x040700

// Public static Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qcolor.h:225
// [1] bool isValidColor(QLatin1String)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
bool C_ZN6QColor12isValidColorE13QLatin1String(QLatin1String* arg0) {
  return (bool)QColor::isValidColor(*arg0);
}
#endif // QT_VERSION >= 0x050800


extern "C" Q_DECL_EXPORT
void C_ZN6QColorD2Ev(void *this_) {
  delete (QColor*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
