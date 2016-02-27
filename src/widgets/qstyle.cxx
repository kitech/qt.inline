// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qstyle.h
// dst-file: /src/widgets/qstyle.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstyle.h>


#include <qpixmap.h>
#include <qrect.h>
#include <qpoint.h>
#include <qpalette.h>
#include <qsize.h>
#include <qicon.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qstyle_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStyle_Class_Size()
{
  return sizeof(QStyle);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 813, column 21>
//   // proto:  QPixmap QStyle::generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt);
// _ZNK6QStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption generatedIconPixmap(class QIcon::Mode, const class QPixmap &, const class QStyleOption *)
extern "C"
QPixmap*
C_ZNK6QStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *qthis,
QIcon::Mode* arg1,
const QPixmap* arg2,
const QStyleOption * arg3) {
  auto ret =
  ((QStyle*)qthis)->generatedIconPixmap(*((QIcon::Mode*)arg1),
*((const QPixmap*)arg2),
arg3);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 828, column 17>
//   // proto:  int QStyle::layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget);
// _ZNK6QStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget layoutSpacing(class QSizePolicy::ControlType, class QSizePolicy::ControlType, Qt::Orientation, const class QStyleOption *, const class QWidget *)
extern "C"
int
C_ZNK6QStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *qthis,
QSizePolicy::ControlType* arg1,
QSizePolicy::ControlType* arg2,
Qt::Orientation* arg3,
const QStyleOption * arg4,
const QWidget * arg5) {
  auto ret =
  ((QStyle*)qthis)->layoutSpacing(*((QSizePolicy::ControlType*)arg1),
*((QSizePolicy::ControlType*)arg2),
*((Qt::Orientation*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 428, column 18>
//   // proto:  void QStyle::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * widget);
// _ZNK6QStyle18drawComplexControlENS_14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget drawComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK6QStyle18drawComplexControlENS_14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QStyle*)qthis)->drawComplexControl(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 432, column 19>
//   // proto:  QRect QStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget);
// _ZNK6QStyle14subControlRectENS_14ComplexControlEPK19QStyleOptionComplexNS_10SubControlEPK7QWidget subControlRect(enum QStyle::ComplexControl, const class QStyleOptionComplex *, enum QStyle::SubControl, const class QWidget *)
extern "C"
QRect*
C_ZNK6QStyle14subControlRectENS_14ComplexControlEPK19QStyleOptionComplexNS_10SubControlEPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
QStyle::SubControl arg3,
const QWidget * arg4) {
  auto ret =
  ((QStyle*)qthis)->subControlRect(arg1,
arg2,
arg3,
arg4);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 430, column 24>
//   // proto:  QStyle::SubControl QStyle::hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget);
// _ZNK6QStyle21hitTestComplexControlENS_14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget hitTestComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, const class QPoint &, const class QWidget *)
extern "C"
QStyle::SubControl
C_ZNK6QStyle21hitTestComplexControlENS_14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
const QPoint* arg3,
const QWidget * arg4) {
  auto ret =
  ((QStyle*)qthis)->hitTestComplexControl(arg1,
arg2,
*((const QPoint*)arg3),
arg4);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 818, column 19>
//   // proto: static QPoint QStyle::visualPos(Qt::LayoutDirection direction, const QRect & boundingRect, const QPoint & logicalPos);
// _ZN6QStyle9visualPosEN2Qt15LayoutDirectionERK5QRectRK6QPoint visualPos(Qt::LayoutDirection, const class QRect &, const class QPoint &)
extern "C"
QPoint*
C_ZN6QStyle9visualPosEN2Qt15LayoutDirectionERK5QRectRK6QPoint(Qt::LayoutDirection* arg1,
const QRect* arg2,
const QPoint* arg3) {
  auto ret =
  QStyle::visualPos(*((Qt::LayoutDirection*)arg1),
*((const QRect*)arg2),
*((const QPoint*)arg3));
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 70, column 18>
//   // proto:  void QStyle::unpolish(QWidget * );
// _ZN6QStyle8unpolishEP7QWidget unpolish(class QWidget *)
extern "C"
void
C_ZN6QStyle8unpolishEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QStyle*)qthis)->unpolish(arg1);
}
//   // proto:  void QStyle::~QStyle();
extern "C"
void C_ZN6QStyleD2Ev(void *qthis) {
  delete (QStyle*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 75, column 18>
//   // proto:  void QStyle::polish(QPalette & );
// _ZN6QStyle6polishER8QPalette polish(class QPalette &)
extern "C"
void
C_ZN6QStyle6polishER8QPalette(void *qthis,
QPalette* arg1) {
  ((QStyle*)qthis)->polish(*((QPalette*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 66, column 5>
//   // proto:  void QStyle::QStyle();
extern "C"
QStyle*
C_ZN6QStyleC2Ev() {
  // auto ret = new QStyle();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 816, column 18>
//   // proto: static QRect QStyle::visualRect(Qt::LayoutDirection direction, const QRect & boundingRect, const QRect & logicalRect);
// _ZN6QStyle10visualRectEN2Qt15LayoutDirectionERK5QRectS4_ visualRect(Qt::LayoutDirection, const class QRect &, const class QRect &)
extern "C"
QRect*
C_ZN6QStyle10visualRectEN2Qt15LayoutDirectionERK5QRectS4_(Qt::LayoutDirection* arg1,
const QRect* arg2,
const QRect* arg3) {
  auto ret =
  QStyle::visualRect(*((Qt::LayoutDirection*)arg1),
*((const QRect*)arg2),
*((const QRect*)arg3));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 81, column 19>
//   // proto:  QRect QStyle::itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap);
// _ZNK6QStyle14itemPixmapRectERK5QRectiRK7QPixmap itemPixmapRect(const class QRect &, int, const class QPixmap &)
extern "C"
QRect*
C_ZNK6QStyle14itemPixmapRectERK5QRectiRK7QPixmap(void *qthis,
const QRect* arg1,
int arg2,
const QPixmap* arg3) {
  auto ret =
  ((QStyle*)qthis)->itemPixmapRect(*((const QRect*)arg1),
arg2,
*((const QPixmap*)arg3));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 77, column 19>
//   // proto:  QRect QStyle::itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text);
// _ZNK6QStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString itemTextRect(const class QFontMetrics &, const class QRect &, int, _Bool, const class QString &)
extern "C"
QRect*
C_ZNK6QStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString(void *qthis,
const QFontMetrics* arg1,
const QRect* arg2,
int arg3,
bool arg4,
const QString* arg5) {
  auto ret =
  ((QStyle*)qthis)->itemTextRect(*((const QFontMetrics*)arg1),
*((const QRect*)arg2),
arg3,
arg4,
*((const QString*)arg5));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 564, column 17>
//   // proto:  int QStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget);
// _ZNK6QStyle11pixelMetricENS_11PixelMetricEPK12QStyleOptionPK7QWidget pixelMetric(enum QStyle::PixelMetric, const class QStyleOption *, const class QWidget *)
extern "C"
int
C_ZNK6QStyle11pixelMetricENS_11PixelMetricEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::PixelMetric arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QStyle*)qthis)->pixelMetric(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 727, column 17>
//   // proto:  int QStyle::styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt, const QWidget * widget, QStyleHintReturn * returnData);
// _ZNK6QStyle9styleHintENS_9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn styleHint(enum QStyle::StyleHint, const class QStyleOption *, const class QWidget *, class QStyleHintReturn *)
extern "C"
int
C_ZNK6QStyle9styleHintENS_9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *qthis,
QStyle::StyleHint arg1,
const QStyleOption * arg2,
const QWidget * arg3,
QStyleHintReturn * arg4) {
  auto ret =
  ((QStyle*)qthis)->styleHint(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 831, column 9>
//   // proto:  int QStyle::combinedLayoutSpacing(QSizePolicy::ControlTypes controls1, QSizePolicy::ControlTypes controls2, Qt::Orientation orientation, QStyleOption * option, QWidget * widget);
// _ZNK6QStyle21combinedLayoutSpacingE6QFlagsIN11QSizePolicy11ControlTypeEES3_N2Qt11OrientationEP12QStyleOptionP7QWidget combinedLayoutSpacing(class QSizePolicy::ControlTypes, class QSizePolicy::ControlTypes, Qt::Orientation, class QStyleOption *, class QWidget *)
extern "C"
int
C_ZNK6QStyle21combinedLayoutSpacingE6QFlagsIN11QSizePolicy11ControlTypeEES3_N2Qt11OrientationEP12QStyleOptionP7QWidget(void *qthis,
QSizePolicy::ControlTypes* arg1,
QSizePolicy::ControlTypes* arg2,
Qt::Orientation* arg3,
QStyleOption * arg4,
QWidget * arg5) {
  auto ret =
  ((QStyle*)qthis)->combinedLayoutSpacing(*((QSizePolicy::ControlTypes*)arg1),
*((QSizePolicy::ControlTypes*)arg2),
*((Qt::Orientation*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 835, column 20>
//   // proto:  const QStyle * QStyle::proxy();
// _ZNK6QStyle5proxyEv proxy()
extern "C"
void*
C_ZNK6QStyle5proxyEv(void *qthis) {
  auto ret =
  ((QStyle*)qthis)->proxy();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 194, column 18>
//   // proto:  void QStyle::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w);
// _ZNK6QStyle13drawPrimitiveENS_16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget drawPrimitive(enum QStyle::PrimitiveElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK6QStyle13drawPrimitiveENS_16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *qthis,
QStyle::PrimitiveElement arg1,
const QStyleOption * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QStyle*)qthis)->drawPrimitive(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 90, column 22>
//   // proto:  QPalette QStyle::standardPalette();
// _ZNK6QStyle15standardPaletteEv standardPalette()
extern "C"
QPalette*
C_ZNK6QStyle15standardPaletteEv(void *qthis) {
  auto ret =
  ((QStyle*)qthis)->standardPalette();
  return new QPalette(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 83, column 18>
//   // proto:  void QStyle::drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole);
// _ZNK6QStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE drawItemText(class QPainter *, const class QRect &, int, const class QPalette &, _Bool, const class QString &, class QPalette::ColorRole)
extern "C"
void
C_ZNK6QStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE(void *qthis,
QPainter * arg1,
const QRect* arg2,
int arg3,
const QPalette* arg4,
bool arg5,
const QString* arg6,
QPalette::ColorRole* arg7) {
  ((QStyle*)qthis)->drawItemText(arg1,
*((const QRect*)arg2),
arg3,
*((const QPalette*)arg4),
arg5,
*((const QString*)arg6),
*((QPalette::ColorRole*)arg7));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 596, column 19>
//   // proto:  QSize QStyle::sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * w);
// _ZNK6QStyle16sizeFromContentsENS_12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget sizeFromContents(enum QStyle::ContentsType, const class QStyleOption *, const class QSize &, const class QWidget *)
extern "C"
QSize*
C_ZNK6QStyle16sizeFromContentsENS_12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *qthis,
QStyle::ContentsType arg1,
const QStyleOption * arg2,
const QSize* arg3,
const QWidget * arg4) {
  auto ret =
  ((QStyle*)qthis)->sizeFromContents(arg1,
arg2,
*((const QSize*)arg3),
arg4);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 810, column 19>
//   // proto:  QIcon QStyle::standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget);
// _ZNK6QStyle12standardIconENS_14StandardPixmapEPK12QStyleOptionPK7QWidget standardIcon(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
QIcon*
C_ZNK6QStyle12standardIconENS_14StandardPixmapEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::StandardPixmap arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QStyle*)qthis)->standardIcon(arg1,
arg2,
arg3);
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 59, column 5>
//   // proto:  const QMetaObject * QStyle::metaObject();
// _ZNK6QStyle10metaObjectEv metaObject()
extern "C"
void*
C_ZNK6QStyle10metaObjectEv(void *qthis) {
  auto ret =
  ((QStyle*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 72, column 18>
//   // proto:  void QStyle::polish(QApplication * );
// _ZN6QStyle6polishEP12QApplication polish(class QApplication *)
extern "C"
void
C_ZN6QStyle6polishEP12QApplication(void *qthis,
QApplication * arg1) {
  ((QStyle*)qthis)->polish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 824, column 26>
//   // proto: static Qt::Alignment QStyle::visualAlignment(Qt::LayoutDirection direction, Qt::Alignment alignment);
// _ZN6QStyle15visualAlignmentEN2Qt15LayoutDirectionE6QFlagsINS0_13AlignmentFlagEE visualAlignment(Qt::LayoutDirection, Qt::Alignment)
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZN6QStyle15visualAlignmentEN2Qt15LayoutDirectionE6QFlagsINS0_13AlignmentFlagEE(Qt::LayoutDirection* arg1,
Qt::Alignment* arg2) {
  auto ret =
  QStyle::visualAlignment(*((Qt::LayoutDirection*)arg1),
*((Qt::Alignment*)arg2));
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 825, column 18>
//   // proto: static QRect QStyle::alignedRect(Qt::LayoutDirection direction, Qt::Alignment alignment, const QSize & size, const QRect & rectangle);
// _ZN6QStyle11alignedRectEN2Qt15LayoutDirectionE6QFlagsINS0_13AlignmentFlagEERK5QSizeRK5QRect alignedRect(Qt::LayoutDirection, Qt::Alignment, const class QSize &, const class QRect &)
extern "C"
QRect*
C_ZN6QStyle11alignedRectEN2Qt15LayoutDirectionE6QFlagsINS0_13AlignmentFlagEERK5QSizeRK5QRect(Qt::LayoutDirection* arg1,
Qt::Alignment* arg2,
const QSize* arg3,
const QRect* arg4) {
  auto ret =
  QStyle::alignedRect(*((Qt::LayoutDirection*)arg1),
*((Qt::Alignment*)arg2),
*((const QSize*)arg3),
*((const QRect*)arg4));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 807, column 21>
//   // proto:  QPixmap QStyle::standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget);
// _ZNK6QStyle14standardPixmapENS_14StandardPixmapEPK12QStyleOptionPK7QWidget standardPixmap(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
QPixmap*
C_ZNK6QStyle14standardPixmapENS_14StandardPixmapEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::StandardPixmap arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QStyle*)qthis)->standardPixmap(arg1,
arg2,
arg3);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 349, column 19>
//   // proto:  QRect QStyle::subElementRect(QStyle::SubElement subElement, const QStyleOption * option, const QWidget * widget);
// _ZNK6QStyle14subElementRectENS_10SubElementEPK12QStyleOptionPK7QWidget subElementRect(enum QStyle::SubElement, const class QStyleOption *, const class QWidget *)
extern "C"
QRect*
C_ZNK6QStyle14subElementRectENS_10SubElementEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::SubElement arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QStyle*)qthis)->subElementRect(arg1,
arg2,
arg3);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 265, column 18>
//   // proto:  void QStyle::drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w);
// _ZNK6QStyle11drawControlENS_14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget drawControl(enum QStyle::ControlElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK6QStyle11drawControlENS_14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *qthis,
QStyle::ControlElement arg1,
const QStyleOption * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QStyle*)qthis)->drawControl(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 87, column 18>
//   // proto:  void QStyle::drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap);
// _ZNK6QStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap drawItemPixmap(class QPainter *, const class QRect &, int, const class QPixmap &)
extern "C"
void
C_ZNK6QStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap(void *qthis,
QPainter * arg1,
const QRect* arg2,
int arg3,
const QPixmap* arg4) {
  ((QStyle*)qthis)->drawItemPixmap(arg1,
*((const QRect*)arg2),
arg3,
*((const QPixmap*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 69, column 18>
//   // proto:  void QStyle::polish(QWidget * );
// _ZN6QStyle6polishEP7QWidget polish(class QWidget *)
extern "C"
void
C_ZN6QStyle6polishEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QStyle*)qthis)->polish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 820, column 16>
//   // proto: static int QStyle::sliderPositionFromValue(int min, int max, int val, int space, bool upsideDown);
// _ZN6QStyle23sliderPositionFromValueEiiiib sliderPositionFromValue(int, int, int, int, _Bool)
extern "C"
int
C_ZN6QStyle23sliderPositionFromValueEiiiib(int arg1,
int arg2,
int arg3,
int arg4,
bool arg5) {
  auto ret =
  QStyle::sliderPositionFromValue(arg1,
arg2,
arg3,
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 822, column 16>
//   // proto: static int QStyle::sliderValueFromPosition(int min, int max, int pos, int space, bool upsideDown);
// _ZN6QStyle23sliderValueFromPositionEiiiib sliderValueFromPosition(int, int, int, int, _Bool)
extern "C"
int
C_ZN6QStyle23sliderValueFromPositionEiiiib(int arg1,
int arg2,
int arg3,
int arg4,
bool arg5) {
  auto ret =
  QStyle::sliderValueFromPosition(arg1,
arg2,
arg3,
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyle.h', line 73, column 18>
//   // proto:  void QStyle::unpolish(QApplication * );
// _ZN6QStyle8unpolishEP12QApplication unpolish(class QApplication *)
extern "C"
void
C_ZN6QStyle8unpolishEP12QApplication(void *qthis,
QApplication * arg1) {
  ((QStyle*)qthis)->unpolish(arg1);
}
// <= ext block end

// body block begin =>
// QStyle_SlotProxy here
class QStyle_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStyle_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qstyle.moc"

extern "C" {
  QStyle_SlotProxy* QStyle_SlotProxy_new()
  {
    return new QStyle_SlotProxy();
  }
};

// <= body block end

