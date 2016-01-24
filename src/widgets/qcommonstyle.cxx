// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qcommonstyle.h
// dst-file: /src/widgets/qcommonstyle.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcommonstyle.h>


#include <qpixmap.h>
#include <qicon.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyle.h>
// <= header block end

// main block begin =>
void __keep_qcommonstyle_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCommonStyle_Class_Size()
{
  return sizeof(QCommonStyle);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 77, column 9>
//   // proto:  int QCommonStyle::layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget);
// _ZNK12QCommonStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget layoutSpacing(class QSizePolicy::ControlType, class QSizePolicy::ControlType, Qt::Orientation, const class QStyleOption *, const class QWidget *)
extern "C"
int
C_ZNK12QCommonStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *qthis,
QSizePolicy::ControlType* arg1,
QSizePolicy::ControlType* arg2,
Qt::Orientation* arg3,
const QStyleOption * arg4,
const QWidget * arg5) {
  auto ret =
  ((QCommonStyle*)qthis)->layoutSpacing(*((QSizePolicy::ControlType*)arg1),
*((QSizePolicy::ControlType*)arg2),
*((Qt::Orientation*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 56, column 10>
//   // proto:  void QCommonStyle::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * w);
// _ZNK12QCommonStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget drawComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK12QCommonStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QCommonStyle*)qthis)->drawComplexControl(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 83, column 10>
//   // proto:  void QCommonStyle::polish(QWidget * widget);
// _ZN12QCommonStyle6polishEP7QWidget polish(class QWidget *)
extern "C"
void
C_ZN12QCommonStyle6polishEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QCommonStyle*)qthis)->polish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 75, column 13>
//   // proto:  QPixmap QCommonStyle::generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt);
// _ZNK12QCommonStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption generatedIconPixmap(class QIcon::Mode, const class QPixmap &, const class QStyleOption *)
extern "C"
QPixmap*
C_ZNK12QCommonStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *qthis,
QIcon::Mode* arg1,
const QPixmap* arg2,
const QStyleOption * arg3) {
  auto ret =
  ((QCommonStyle*)qthis)->generatedIconPixmap(*((QIcon::Mode*)arg1),
*((const QPixmap*)arg2),
arg3);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 70, column 11>
//   // proto:  QIcon QCommonStyle::standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * opt, const QWidget * widget);
// _ZNK12QCommonStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget standardIcon(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
QIcon*
C_ZNK12QCommonStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::StandardPixmap arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QCommonStyle*)qthis)->standardIcon(arg1,
arg2,
arg3);
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 60, column 11>
//   // proto:  QRect QCommonStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * w);
// _ZNK12QCommonStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget subControlRect(enum QStyle::ComplexControl, const class QStyleOptionComplex *, enum QStyle::SubControl, const class QWidget *)
extern "C"
QRect*
C_ZNK12QCommonStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
QStyle::SubControl arg3,
const QWidget * arg4) {
  auto ret =
  ((QCommonStyle*)qthis)->subControlRect(arg1,
arg2,
arg3,
arg4);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 81, column 10>
//   // proto:  void QCommonStyle::polish(QPalette & );
// _ZN12QCommonStyle6polishER8QPalette polish(class QPalette &)
extern "C"
void
C_ZN12QCommonStyle6polishER8QPalette(void *qthis,
QPalette* arg1) {
  ((QCommonStyle*)qthis)->polish(*((QPalette*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 84, column 10>
//   // proto:  void QCommonStyle::unpolish(QWidget * widget);
// _ZN12QCommonStyle8unpolishEP7QWidget unpolish(class QWidget *)
extern "C"
void
C_ZN12QCommonStyle8unpolishEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QCommonStyle*)qthis)->unpolish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 62, column 11>
//   // proto:  QSize QCommonStyle::sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * widget);
// _ZNK12QCommonStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget sizeFromContents(enum QStyle::ContentsType, const class QStyleOption *, const class QSize &, const class QWidget *)
extern "C"
QSize*
C_ZNK12QCommonStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *qthis,
QStyle::ContentsType arg1,
const QStyleOption * arg2,
const QSize* arg3,
const QWidget * arg4) {
  auto ret =
  ((QCommonStyle*)qthis)->sizeFromContents(arg1,
arg2,
*((const QSize*)arg3),
arg4);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 85, column 10>
//   // proto:  void QCommonStyle::unpolish(QApplication * application);
// _ZN12QCommonStyle8unpolishEP12QApplication unpolish(class QApplication *)
extern "C"
void
C_ZN12QCommonStyle8unpolishEP12QApplication(void *qthis,
QApplication * arg1) {
  ((QCommonStyle*)qthis)->unpolish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 67, column 9>
//   // proto:  int QCommonStyle::styleHint(QStyle::StyleHint sh, const QStyleOption * opt, const QWidget * w, QStyleHintReturn * shret);
// _ZNK12QCommonStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn styleHint(enum QStyle::StyleHint, const class QStyleOption *, const class QWidget *, class QStyleHintReturn *)
extern "C"
int
C_ZNK12QCommonStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *qthis,
QStyle::StyleHint arg1,
const QStyleOption * arg2,
const QWidget * arg3,
QStyleHintReturn * arg4) {
  auto ret =
  ((QCommonStyle*)qthis)->styleHint(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 82, column 10>
//   // proto:  void QCommonStyle::polish(QApplication * app);
// _ZN12QCommonStyle6polishEP12QApplication polish(class QApplication *)
extern "C"
void
C_ZN12QCommonStyle6polishEP12QApplication(void *qthis,
QApplication * arg1) {
  ((QCommonStyle*)qthis)->polish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 48, column 5>
//   // proto:  void QCommonStyle::QCommonStyle();
extern "C"
QCommonStyle*
C_ZN12QCommonStyleC2Ev() {
  auto ret = new QCommonStyle();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 51, column 10>
//   // proto:  void QCommonStyle::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w);
// _ZNK12QCommonStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget drawPrimitive(enum QStyle::PrimitiveElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK12QCommonStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *qthis,
QStyle::PrimitiveElement arg1,
const QStyleOption * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QCommonStyle*)qthis)->drawPrimitive(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 55, column 11>
//   // proto:  QRect QCommonStyle::subElementRect(QStyle::SubElement r, const QStyleOption * opt, const QWidget * widget);
// _ZNK12QCommonStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget subElementRect(enum QStyle::SubElement, const class QStyleOption *, const class QWidget *)
extern "C"
QRect*
C_ZNK12QCommonStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::SubElement arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QCommonStyle*)qthis)->subElementRect(arg1,
arg2,
arg3);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 58, column 16>
//   // proto:  QStyle::SubControl QCommonStyle::hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * w);
// _ZNK12QCommonStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget hitTestComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, const class QPoint &, const class QWidget *)
extern "C"
QStyle::SubControl
C_ZNK12QCommonStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *qthis,
QStyle::ComplexControl arg1,
const QStyleOptionComplex * arg2,
const QPoint* arg3,
const QWidget * arg4) {
  auto ret =
  ((QCommonStyle*)qthis)->hitTestComplexControl(arg1,
arg2,
*((const QPoint*)arg3),
arg4);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 65, column 9>
//   // proto:  int QCommonStyle::pixelMetric(QStyle::PixelMetric m, const QStyleOption * opt, const QWidget * widget);
// _ZNK12QCommonStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget pixelMetric(enum QStyle::PixelMetric, const class QStyleOption *, const class QWidget *)
extern "C"
int
C_ZNK12QCommonStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::PixelMetric arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QCommonStyle*)qthis)->pixelMetric(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 45, column 5>
//   // proto:  const QMetaObject * QCommonStyle::metaObject();
// _ZNK12QCommonStyle10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QCommonStyle10metaObjectEv(void *qthis) {
  auto ret =
  ((QCommonStyle*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QCommonStyle::~QCommonStyle();
extern "C"
void C_ZN12QCommonStyleD2Ev(void *qthis) {
  delete (QCommonStyle*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 72, column 13>
//   // proto:  QPixmap QCommonStyle::standardPixmap(QStyle::StandardPixmap sp, const QStyleOption * opt, const QWidget * widget);
// _ZNK12QCommonStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget standardPixmap(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
QPixmap*
C_ZNK12QCommonStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *qthis,
QStyle::StandardPixmap arg1,
const QStyleOption * arg2,
const QWidget * arg3) {
  auto ret =
  ((QCommonStyle*)qthis)->standardPixmap(arg1,
arg2,
arg3);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommonstyle.h', line 53, column 10>
//   // proto:  void QCommonStyle::drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w);
// _ZNK12QCommonStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget drawControl(enum QStyle::ControlElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void
C_ZNK12QCommonStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *qthis,
QStyle::ControlElement arg1,
const QStyleOption * arg2,
QPainter * arg3,
const QWidget * arg4) {
  ((QCommonStyle*)qthis)->drawControl(arg1,
arg2,
arg3,
arg4);
}
// <= ext block end

// body block begin =>
// QCommonStyle_SlotProxy here
class QCommonStyle_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCommonStyle_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qcommonstyle.moc"

extern "C" {
  QCommonStyle_SlotProxy* QCommonStyle_SlotProxy_new()
  {
    return new QCommonStyle_SlotProxy();
  }
};

// <= body block end

