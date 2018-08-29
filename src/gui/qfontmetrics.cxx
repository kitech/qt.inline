//  header block begin
// /usr/include/qt/QtGui/qfontmetrics.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontmetrics.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontMetrics is pure virtual: false
// QFontMetrics has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFontMetrics_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFontMetrics_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFontMetrics_t qt_meta_stringdata_MyQFontMetrics = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQFontMetrics"
  },
  "MyQFontMetrics"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFontMetrics[] = {
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
class Q_DECL_EXPORT MyQFontMetrics : public QFontMetrics {
public:
  virtual ~MyQFontMetrics() {}
// void QFontMetrics(const QFont &)
MyQFontMetrics(const QFont & arg0) : QFontMetrics(arg0) {}
// void QFontMetrics(const QFont &, QPaintDevice *)
MyQFontMetrics(const QFont & arg0, QPaintDevice * pd) : QFontMetrics(arg0, pd) {}
// void QFontMetrics(const QFontMetrics &)
MyQFontMetrics(const QFontMetrics & arg0) : QFontMetrics(arg0) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:61
// [-2] void QFontMetrics(const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QFontMetricsC2ERK5QFont(QFont* arg0) {
  return  new QFontMetrics(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:62
// [-2] void QFontMetrics(const QFont &, QPaintDevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QFontMetricsC2ERK5QFontP12QPaintDevice(QFont* arg0, QPaintDevice * pd) {
  return  new QFontMetrics(*arg0, pd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:63
// [-2] void QFontMetrics(const QFontMetrics &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QFontMetricsC2ERKS_(QFontMetrics* arg0) {
  return  new QFontMetrics(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:64
// [-2] void ~QFontMetrics()
extern "C" Q_DECL_EXPORT
void C_ZN12QFontMetricsD2Ev(void *this_) {
  delete (QFontMetrics*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:66
// [8] QFontMetrics & operator=(const QFontMetrics &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QFontMetricsaSERKS_(void *this_, QFontMetrics* arg0) {
  auto& rv = ((QFontMetrics*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:68
// [8] QFontMetrics & operator=(QFontMetrics &&)
extern "C" Q_DECL_EXPORT
void* C_ZN12QFontMetricsaSEOS_(void *this_, QFontMetrics && other) {
  auto& rv = ((QFontMetrics*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qfontmetrics.h:72
// [-2] void swap(QFontMetrics &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN12QFontMetrics4swapERS_(void *this_, QFontMetrics* other) {
  ((QFontMetrics*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:75
// [4] int ascent()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics6ascentEv(void *this_) {
  return (int)((QFontMetrics*)this_)->ascent();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qfontmetrics.h:76
// [4] int capHeight()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics9capHeightEv(void *this_) {
  return (int)((QFontMetrics*)this_)->capHeight();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:77
// [4] int descent()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics7descentEv(void *this_) {
  return (int)((QFontMetrics*)this_)->descent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:78
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics6heightEv(void *this_) {
  return (int)((QFontMetrics*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:79
// [4] int leading()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics7leadingEv(void *this_) {
  return (int)((QFontMetrics*)this_)->leading();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:80
// [4] int lineSpacing()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics11lineSpacingEv(void *this_) {
  return (int)((QFontMetrics*)this_)->lineSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:81
// [4] int minLeftBearing()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics14minLeftBearingEv(void *this_) {
  return (int)((QFontMetrics*)this_)->minLeftBearing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:82
// [4] int minRightBearing()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics15minRightBearingEv(void *this_) {
  return (int)((QFontMetrics*)this_)->minRightBearing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:83
// [4] int maxWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics8maxWidthEv(void *this_) {
  return (int)((QFontMetrics*)this_)->maxWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:85
// [4] int xHeight()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics7xHeightEv(void *this_) {
  return (int)((QFontMetrics*)this_)->xHeight();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontmetrics.h:86
// [4] int averageCharWidth()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics16averageCharWidthEv(void *this_) {
  return (int)((QFontMetrics*)this_)->averageCharWidth();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:88
// [1] bool inFont(QChar)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QFontMetrics6inFontE5QChar(void *this_, QChar* arg0) {
  return (bool)((QFontMetrics*)this_)->inFont(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:89
// [1] bool inFontUcs4(uint)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QFontMetrics10inFontUcs4Ej(void *this_, uint ucs4) {
  return (bool)((QFontMetrics*)this_)->inFontUcs4(ucs4);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:91
// [4] int leftBearing(QChar)
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics11leftBearingE5QChar(void *this_, QChar* arg0) {
  return (int)((QFontMetrics*)this_)->leftBearing(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:92
// [4] int rightBearing(QChar)
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics12rightBearingE5QChar(void *this_, QChar* arg0) {
  return (int)((QFontMetrics*)this_)->rightBearing(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:93
// [4] int width(const QString &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics5widthERK7QStringi(void *this_, QString* arg0, int len_) {
  return (int)((QFontMetrics*)this_)->width(*arg0, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:94
// [4] int width(const QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics5widthERK7QStringii(void *this_, QString* arg0, int len_, int flags) {
  return (int)((QFontMetrics*)this_)->width(*arg0, len_, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:96
// [4] int width(QChar)
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics5widthE5QChar(void *this_, QChar* arg0) {
  return (int)((QFontMetrics*)this_)->width(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:98
// [4] int charWidth(const QString &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics9charWidthERK7QStringi(void *this_, QString* str, int pos) {
  return (int)((QFontMetrics*)this_)->charWidth(*str, pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:101
// [16] QRect boundingRect(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QFontMetrics12boundingRectE5QChar(void *this_, QChar* arg0) {
  auto rv = ((QFontMetrics*)this_)->boundingRect(*arg0);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:103
// [16] QRect boundingRect(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QFontMetrics12boundingRectERK7QString(void *this_, QString* text) {
  auto rv = ((QFontMetrics*)this_)->boundingRect(*text);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:104
// [16] QRect boundingRect(const QRect &, int, const QString &, int, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QFontMetrics12boundingRectERK5QRectiRK7QStringiPi(void *this_, QRect* r, int flags, QString* text, int tabstops, int * tabarray) {
  auto rv = ((QFontMetrics*)this_)->boundingRect(*r, flags, *text, tabstops, tabarray);
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:105
// [16] QRect boundingRect(int, int, int, int, int, const QString &, int, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi(void *this_, int x, int y, int w, int h, int flags, QString* text, int tabstops, int * tabarray) {
  auto rv = ((QFontMetrics*)this_)->boundingRect(x, y, w, h, flags, *text, tabstops, tabarray);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:108
// [8] QSize size(int, const QString &, int, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QFontMetrics4sizeEiRK7QStringiPi(void *this_, int flags, QString* str, int tabstops, int * tabarray) {
  auto rv = ((QFontMetrics*)this_)->size(flags, *str, tabstops, tabarray);
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qfontmetrics.h:110
// [16] QRect tightBoundingRect(const QString &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK12QFontMetrics17tightBoundingRectERK7QString(void *this_, QString* text) {
  auto rv = ((QFontMetrics*)this_)->tightBoundingRect(*text);
return new QRect(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontmetrics.h:112
// [8] QString elidedText(const QString &, Qt::TextElideMode, int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK12QFontMetrics10elidedTextERK7QStringN2Qt13TextElideModeEii(void *this_, QString* text, Qt::TextElideMode mode, int width, int flags) {
  auto rv = ((QFontMetrics*)this_)->elidedText(*text, mode, width, flags);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:114
// [4] int underlinePos()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics12underlinePosEv(void *this_) {
  return (int)((QFontMetrics*)this_)->underlinePos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:115
// [4] int overlinePos()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics11overlinePosEv(void *this_) {
  return (int)((QFontMetrics*)this_)->overlinePos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:116
// [4] int strikeOutPos()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics12strikeOutPosEv(void *this_) {
  return (int)((QFontMetrics*)this_)->strikeOutPos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:117
// [4] int lineWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK12QFontMetrics9lineWidthEv(void *this_) {
  return (int)((QFontMetrics*)this_)->lineWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:119
// [1] bool operator==(const QFontMetrics &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QFontMetricseqERKS_(void *this_, QFontMetrics* other) {
  return (bool)((QFontMetrics*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:120
// [1] bool operator!=(const QFontMetrics &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QFontMetricsneERKS_(void *this_, QFontMetrics* other) {
  return (bool)((QFontMetrics*)this_)->operator!=(*other);
}

//  main block end
