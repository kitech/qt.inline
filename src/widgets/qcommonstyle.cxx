//  header block begin
// /usr/include/qt/QtWidgets/qcommonstyle.h
#ifndef protected
#define protected public
#endif
#include <qcommonstyle.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCommonStyle is pure virtual: false
// QCommonStyle has virtual projected: false
//  header block end

//  main block begin

class MyQCommonStyle : public QCommonStyle {
public:
  virtual ~MyQCommonStyle() {}
// void QCommonStyle()
MyQCommonStyle() : QCommonStyle() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:52
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QCommonStyle10metaObjectEv(void *this_) {
  return (void*)((QCommonStyle*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:55
// [-2] void QCommonStyle()
extern "C"
void* C_ZN12QCommonStyleC2Ev() {
  return  new QCommonStyle();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:56
// [-2] void ~QCommonStyle()
extern "C"
void C_ZN12QCommonStyleD2Ev(void *this_) {
  delete (QCommonStyle*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:58
// [-2] void drawPrimitive(enum QStyle::PrimitiveElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawPrimitive(pe, opt, p, w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:60
// [-2] void drawControl(enum QStyle::ControlElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawControl(element, opt, p, w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:62
// [16] QRect subElementRect(enum QStyle::SubElement, const class QStyleOption *, const class QWidget *)
extern "C"
void* C_ZNK12QCommonStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget(void *this_, QStyle::SubElement r, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QCommonStyle*)this_)->subElementRect(r, opt, widget);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:63
// [-2] void drawComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawComplexControl(cc, opt, p, w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:65
// [4] QStyle::SubControl hitTestComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, const class QPoint &, const class QWidget *)
extern "C"
QStyle::SubControl C_ZNK12QCommonStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPoint* pt, const QWidget * w) {
  return (QStyle::SubControl)((QCommonStyle*)this_)->hitTestComplexControl(cc, opt, *pt, w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:67
// [16] QRect subControlRect(enum QStyle::ComplexControl, const class QStyleOptionComplex *, enum QStyle::SubControl, const class QWidget *)
extern "C"
void* C_ZNK12QCommonStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * w) {
  auto rv = ((QCommonStyle*)this_)->subControlRect(cc, opt, sc, w);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:69
// [8] QSize sizeFromContents(enum QStyle::ContentsType, const class QStyleOption *, const class QSize &, const class QWidget *)
extern "C"
void* C_ZNK12QCommonStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *this_, QStyle::ContentsType ct, const QStyleOption * opt, QSize* contentsSize, const QWidget * widget) {
  auto rv = ((QCommonStyle*)this_)->sizeFromContents(ct, opt, *contentsSize, widget);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:72
// [4] int pixelMetric(enum QStyle::PixelMetric, const class QStyleOption *, const class QWidget *)
extern "C"
int C_ZNK12QCommonStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget(void *this_, QStyle::PixelMetric m, const QStyleOption * opt, const QWidget * widget) {
  return (int)((QCommonStyle*)this_)->pixelMetric(m, opt, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:74
// [4] int styleHint(enum QStyle::StyleHint, const class QStyleOption *, const class QWidget *, class QStyleHintReturn *)
extern "C"
int C_ZNK12QCommonStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *this_, QStyle::StyleHint sh, const QStyleOption * opt, const QWidget * w, QStyleHintReturn * shret) {
  return (int)((QCommonStyle*)this_)->styleHint(sh, opt, w, shret);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:77
// [8] QIcon standardIcon(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
void* C_ZNK12QCommonStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardIcon, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QCommonStyle*)this_)->standardIcon(standardIcon, opt, widget);
return new QIcon(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:79
// [32] QPixmap standardPixmap(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
void* C_ZNK12QCommonStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap sp, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QCommonStyle*)this_)->standardPixmap(sp, opt, widget);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:82
// [32] QPixmap generatedIconPixmap(class QIcon::Mode, const class QPixmap &, const class QStyleOption *)
extern "C"
void* C_ZNK12QCommonStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *this_, QIcon::Mode iconMode, QPixmap* pixmap, const QStyleOption * opt) {
  auto rv = ((QCommonStyle*)this_)->generatedIconPixmap(iconMode, *pixmap, opt);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:84
// [4] int layoutSpacing(class QSizePolicy::ControlType, class QSizePolicy::ControlType, Qt::Orientation, const class QStyleOption *, const class QWidget *)
extern "C"
int C_ZNK12QCommonStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *this_, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) {
  return (int)((QCommonStyle*)this_)->layoutSpacing(control1, control2, orientation, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:88
// [-2] void polish(class QPalette &)
extern "C"
void C_ZN12QCommonStyle6polishER8QPalette(void *this_, QPalette* arg0) {
  ((QCommonStyle*)this_)->polish(*arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:89
// [-2] void polish(class QApplication *)
extern "C"
void C_ZN12QCommonStyle6polishEP12QApplication(void *this_, QApplication * app) {
  ((QCommonStyle*)this_)->polish(app);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:90
// [-2] void polish(class QWidget *)
extern "C"
void C_ZN12QCommonStyle6polishEP7QWidget(void *this_, QWidget * widget) {
  ((QCommonStyle*)this_)->polish(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:91
// [-2] void unpolish(class QWidget *)
extern "C"
void C_ZN12QCommonStyle8unpolishEP7QWidget(void *this_, QWidget * widget) {
  ((QCommonStyle*)this_)->unpolish(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:92
// [-2] void unpolish(class QApplication *)
extern "C"
void C_ZN12QCommonStyle8unpolishEP12QApplication(void *this_, QApplication * application) {
  ((QCommonStyle*)this_)->unpolish(application);
}

//  main block end
