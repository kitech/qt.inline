// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qproxystyle.h
// dst-file: /src/widgets/qproxystyle.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qproxystyle.h>


#include <qpalette.h>
#include <qicon.h>
#include <qpixmap.h>
#include <qstyle.h>
#include <qsize.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qproxystyle_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QProxyStyle_Class_Size()
{
  return sizeof(QProxyStyle);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 86, column 10>
//   // proto:  void QProxyStyle::unpolish(QWidget * widget);
// _ZN11QProxyStyle8unpolishEP7QWidget unpolish(class QWidget *)
extern "C"
void
C_ZN11QProxyStyle8unpolishEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QProxyStyle*)qthis)->unpolish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 59, column 10>
//   // proto:  void QProxyStyle::drawComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex * option, QPainter * painter, const QWidget * widget);
// _ZNK11QProxyStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget drawComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK11QProxyStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QProxyStyle*)qthis)->drawComplexControl(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 51, column 5>
//   // proto:  void QProxyStyle::QProxyStyle(const QString & key);
extern "C"
QProxyStyle*
C_ZN11QProxyStyleC2ERK7QString(const QString* arg1) {
  auto ret = new QProxyStyle(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 87, column 10>
//   // proto:  void QProxyStyle::unpolish(QApplication * app);
// _ZN11QProxyStyle8unpolishEP12QApplication unpolish(class QApplication *)
extern "C"
void
C_ZN11QProxyStyle8unpolishEP12QApplication(void *qthis,
QApplication * arg1) {
  ((QProxyStyle*)qthis)->unpolish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 72, column 9>
//   // proto:  int QProxyStyle::styleHint(QStyle::StyleHint hint, const QStyleOption * option, const QWidget * widget, QStyleHintReturn * returnData);
// _ZNK11QProxyStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn styleHint(enum QStyle::StyleHint, const class QStyleOption *, const class QWidget *, class QStyleHintReturn *)
extern "C"
int
C_ZNK11QProxyStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *qthis,
QStyle::StyleHint arg1,
const QStyleOption * arg2,
const QWidget * arg3,
QStyleHintReturn * arg4) {
  auto ret =
  ((QProxyStyle*)qthis)->styleHint(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 80, column 14>
//   // proto:  QPalette QProxyStyle::standardPalette();
// _ZNK11QProxyStyle15standardPaletteEv standardPalette()
extern "C"
QPalette*
C_ZNK11QProxyStyle15standardPaletteEv(void *qthis) {
  auto ret =
  ((QProxyStyle*)qthis)->standardPalette();
  return new QPalette(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 55, column 10>
//   // proto:  void QProxyStyle::setBaseStyle(QStyle * style);
// _ZN11QProxyStyle12setBaseStyleEP6QStyle setBaseStyle(class QStyle *)
extern "C"
void
C_ZN11QProxyStyle12setBaseStyleEP6QStyle(void *qthis,
QStyle * arg1) {
  ((QProxyStyle*)qthis)->setBaseStyle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 73, column 9>
//   // proto:  int QProxyStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget);
// _ZNK11QProxyStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget pixelMetric(enum QStyle::PixelMetric, const class QStyleOption *, const class QWidget *)
extern "C"
int
C_ZNK11QProxyStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::PixelMetric arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QProxyStyle*)qthis)->pixelMetric(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 77, column 11>
//   // proto:  QIcon QProxyStyle::standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget);
// _ZNK11QProxyStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget standardIcon(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
QIcon*
C_ZNK11QProxyStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::StandardPixmap arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QProxyStyle*)qthis)->standardIcon(arg1,
arg2,
arg3);
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 79, column 13>
//   // proto:  QPixmap QProxyStyle::generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt);
// _ZNK11QProxyStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption generatedIconPixmap(class QIcon::Mode, const class QPixmap &, const class QStyleOption *)
extern "C"
QPixmap*
C_ZNK11QProxyStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *qthis,
QIcon::Mode* arg1,
const QPixmap* arg2,
const QStyleOption * arg3) {
  auto ret =
  ((QProxyStyle*)qthis)->generatedIconPixmap(*((QIcon::Mode*)arg1),
*((const QPixmap*)arg2),
arg3);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 83, column 10>
//   // proto:  void QProxyStyle::polish(QPalette & pal);
// _ZN11QProxyStyle6polishER8QPalette polish(class QPalette &)
extern "C"
void
C_ZN11QProxyStyle6polishER8QPalette(void *qthis,
QPalette* arg1) {
  ((QProxyStyle*)qthis)->polish(*((QPalette*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 71, column 16>
//   // proto:  QStyle::SubControl QProxyStyle::hitTestComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex * option, const QPoint & pos, const QWidget * widget);
// _ZNK11QProxyStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget hitTestComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, const class QPoint &, const class QWidget *)
extern "C"
QStyle::SubControl
C_ZNK11QProxyStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
const QPoint* arg3,
const QWidget * arg4) {
  auto ret =
  ((QProxyStyle*)qthis)->hitTestComplexControl(arg1,
arg2,
*((const QPoint*)arg3),
arg4);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 74, column 9>
//   // proto:  int QProxyStyle::layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget);
// _ZNK11QProxyStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget layoutSpacing(class QSizePolicy::ControlType, class QSizePolicy::ControlType, Qt::Orientation, const class QStyleOption *, const class QWidget *)
extern "C"
int
C_ZNK11QProxyStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *qthis,
QSizePolicy::ControlType* arg1,
QSizePolicy::ControlType* arg2,
Qt::Orientation* arg3,
const QStyleOption * arg4,
const QWidget * arg5) {
  auto ret =
  ((QProxyStyle*)qthis)->layoutSpacing(*((QSizePolicy::ControlType*)arg1),
*((QSizePolicy::ControlType*)arg2),
*((Qt::Orientation*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 64, column 11>
//   // proto:  QSize QProxyStyle::sizeFromContents(QStyle::ContentsType type, const QStyleOption * option, const QSize & size, const QWidget * widget);
// _ZNK11QProxyStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget sizeFromContents(enum QStyle::ContentsType, const class QStyleOption *, const class QSize &, const class QWidget *)
extern "C"
QSize*
C_ZNK11QProxyStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *qthis,
QStyle::ContentsType arg1,
const QStyleOption * arg2,
const QSize* arg3,
const QWidget * arg4) {
  auto ret =
  ((QProxyStyle*)qthis)->sizeFromContents(arg1,
arg2,
*((const QSize*)arg3),
arg4);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 62, column 18>
//   // proto:  void QProxyStyle::drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap);
// _ZNK11QProxyStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap drawItemPixmap(class QPainter *, const class QRect &, int, const class QPixmap &)
extern "C"
void
C_ZNK11QProxyStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap(void *qthis,
QPainter * arg1,
const QRect* arg2,
int arg3,
const QPixmap* arg4) {
  ((QProxyStyle*)qthis)->drawItemPixmap(arg1,
*((const QRect*)arg2),
arg3,
*((const QPixmap*)arg4));
}
//   // proto:  void QProxyStyle::~QProxyStyle();
extern "C"
void C_ZN11QProxyStyleD2Ev(void *qthis) {
  delete (QProxyStyle*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 54, column 13>
//   // proto:  QStyle * QProxyStyle::baseStyle();
// _ZNK11QProxyStyle9baseStyleEv baseStyle()
extern "C"
void*
C_ZNK11QProxyStyle9baseStyleEv(void *qthis) {
  auto ret =
  ((QProxyStyle*)qthis)->baseStyle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 67, column 11>
//   // proto:  QRect QProxyStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget);
// _ZNK11QProxyStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget subControlRect(enum QStyle::ComplexControl, const class QStyleOptionComplex *, enum QStyle::SubControl, const class QWidget *)
extern "C"
QRect*
C_ZNK11QProxyStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
QStyle::SubControl arg3,
const QWidget * arg4) {
  auto ret =
  ((QProxyStyle*)qthis)->subControlRect(arg1,
arg2,
arg3,
arg4);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 57, column 10>
//   // proto:  void QProxyStyle::drawPrimitive(QStyle::PrimitiveElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget);
// _ZNK11QProxyStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget drawPrimitive(enum QStyle::PrimitiveElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK11QProxyStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *qthis,
QStyle::PrimitiveElement arg1,
const QStyleOption * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QProxyStyle*)qthis)->drawPrimitive(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 84, column 10>
//   // proto:  void QProxyStyle::polish(QApplication * app);
// _ZN11QProxyStyle6polishEP12QApplication polish(class QApplication *)
extern "C"
void
C_ZN11QProxyStyle6polishEP12QApplication(void *qthis,
QApplication * arg1) {
  ((QProxyStyle*)qthis)->polish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 82, column 10>
//   // proto:  void QProxyStyle::polish(QWidget * widget);
// _ZN11QProxyStyle6polishEP7QWidget polish(class QWidget *)
extern "C"
void
C_ZN11QProxyStyle6polishEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QProxyStyle*)qthis)->polish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 66, column 11>
//   // proto:  QRect QProxyStyle::subElementRect(QStyle::SubElement element, const QStyleOption * option, const QWidget * widget);
// _ZNK11QProxyStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget subElementRect(enum QStyle::SubElement, const class QStyleOption *, const class QWidget *)
extern "C"
QRect*
C_ZNK11QProxyStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::SubElement arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QProxyStyle*)qthis)->subElementRect(arg1,
arg2,
arg3);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 60, column 10>
//   // proto:  void QProxyStyle::drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole);
// _ZNK11QProxyStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE drawItemText(class QPainter *, const class QRect &, int, const class QPalette &, _Bool, const class QString &, class QPalette::ColorRole)
extern "C"
void
C_ZNK11QProxyStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE(void *qthis,
QPainter * arg1,
const QRect* arg2,
int arg3,
const QPalette* arg4,
bool arg5,
const QString* arg6,
QPalette::ColorRole* arg7) {
  ((QProxyStyle*)qthis)->drawItemText(arg1,
*((const QRect*)arg2),
arg3,
*((const QPalette*)arg4),
arg5,
*((const QString*)arg6),
*((QPalette::ColorRole*)arg7));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 58, column 10>
//   // proto:  void QProxyStyle::drawControl(QStyle::ControlElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget);
// _ZNK11QProxyStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget drawControl(enum QStyle::ControlElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK11QProxyStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *qthis,
QStyle::ControlElement arg1,
const QStyleOption * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QProxyStyle*)qthis)->drawControl(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 68, column 11>
//   // proto:  QRect QProxyStyle::itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text);
// _ZNK11QProxyStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString itemTextRect(const class QFontMetrics &, const class QRect &, int, _Bool, const class QString &)
extern "C"
QRect*
C_ZNK11QProxyStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString(void *qthis,
const QFontMetrics* arg1,
const QRect* arg2,
int arg3,
bool arg4,
const QString* arg5) {
  auto ret =
  ((QProxyStyle*)qthis)->itemTextRect(*((const QFontMetrics*)arg1),
*((const QRect*)arg2),
arg3,
arg4,
*((const QString*)arg5));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 69, column 11>
//   // proto:  QRect QProxyStyle::itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap);
// _ZNK11QProxyStyle14itemPixmapRectERK5QRectiRK7QPixmap itemPixmapRect(const class QRect &, int, const class QPixmap &)
extern "C"
QRect*
C_ZNK11QProxyStyle14itemPixmapRectERK5QRectiRK7QPixmap(void *qthis,
const QRect* arg1,
int arg2,
const QPixmap* arg3) {
  auto ret =
  ((QProxyStyle*)qthis)->itemPixmapRect(*((const QRect*)arg1),
arg2,
*((const QPixmap*)arg3));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 47, column 5>
//   // proto:  const QMetaObject * QProxyStyle::metaObject();
// _ZNK11QProxyStyle10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QProxyStyle10metaObjectEv(void *qthis) {
  auto ret =
  ((QProxyStyle*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 50, column 5>
//   // proto:  void QProxyStyle::QProxyStyle(QStyle * style);
extern "C"
QProxyStyle*
C_ZN11QProxyStyleC2EP6QStyle(QStyle * arg1) {
  auto ret = new QProxyStyle(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qproxystyle.h', line 78, column 13>
//   // proto:  QPixmap QProxyStyle::standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget);
// _ZNK11QProxyStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget standardPixmap(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
QPixmap*
C_ZNK11QProxyStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::StandardPixmap arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QProxyStyle*)qthis)->standardPixmap(arg1,
arg2,
arg3);
  return new QPixmap(ret); // 5
}
// <= ext block end

// body block begin =>
// QProxyStyle_SlotProxy here
class QProxyStyle_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QProxyStyle_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qproxystyle.moc"

extern "C" {
  QProxyStyle_SlotProxy* QProxyStyle_SlotProxy_new()
  {
    return new QProxyStyle_SlotProxy();
  }
};

// <= body block end

