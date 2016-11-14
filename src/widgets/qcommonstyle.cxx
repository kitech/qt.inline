// /usr/include/qt/QtWidgets/qcommonstyle.h
#include <qcommonstyle.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:51
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QCommonStyle10metaObjectEv(void *this_) {
  /*return*/ ((QCommonStyle*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qcommonstyle.h:54
// void QCommonStyle()
extern "C"
void* C_ZN12QCommonStyleC1Ev() {
  return new QCommonStyle();
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:55
// void ~QCommonStyle()
extern "C"
void C_ZN12QCommonStyleD1Ev(void *this_) {
  delete (QCommonStyle*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:57
// void drawPrimitive(enum QStyle::PrimitiveElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawPrimitive(pe, opt, p, w);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:59
// void drawControl(enum QStyle::ControlElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawControl(element, opt, p, w);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:61
// QRect subElementRect(enum QStyle::SubElement, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget(void *this_, QStyle::SubElement r, const QStyleOption * opt, const QWidget * widget) {
  /*return*/ ((QCommonStyle*)this_)->subElementRect(r, opt, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:62
// void drawComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawComplexControl(cc, opt, p, w);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:64
// QStyle::SubControl hitTestComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, const class QPoint &, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * w) {
  /*return*/ ((QCommonStyle*)this_)->hitTestComplexControl(cc, opt, pt, w);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:66
// QRect subControlRect(enum QStyle::ComplexControl, const class QStyleOptionComplex *, enum QStyle::SubControl, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * w) {
  /*return*/ ((QCommonStyle*)this_)->subControlRect(cc, opt, sc, w);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:68
// QSize sizeFromContents(enum QStyle::ContentsType, const class QStyleOption *, const class QSize &, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *this_, QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * widget) {
  /*return*/ ((QCommonStyle*)this_)->sizeFromContents(ct, opt, contentsSize, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:71
// int pixelMetric(enum QStyle::PixelMetric, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget(void *this_, QStyle::PixelMetric m, const QStyleOption * opt, const QWidget * widget) {
  /*return*/ ((QCommonStyle*)this_)->pixelMetric(m, opt, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:73
// int styleHint(enum QStyle::StyleHint, const class QStyleOption *, const class QWidget *, class QStyleHintReturn *)
extern "C"
void C_ZNK12QCommonStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *this_, QStyle::StyleHint sh, const QStyleOption * opt, const QWidget * w, QStyleHintReturn * shret) {
  /*return*/ ((QCommonStyle*)this_)->styleHint(sh, opt, w, shret);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:76
// QIcon standardIcon(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardIcon, const QStyleOption * opt, const QWidget * widget) {
  /*return*/ ((QCommonStyle*)this_)->standardIcon(standardIcon, opt, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:78
// QPixmap standardPixmap(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap sp, const QStyleOption * opt, const QWidget * widget) {
  /*return*/ ((QCommonStyle*)this_)->standardPixmap(sp, opt, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:81
// QPixmap generatedIconPixmap(class QIcon::Mode, const class QPixmap &, const class QStyleOption *)
extern "C"
void C_ZNK12QCommonStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *this_, QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) {
  /*return*/ ((QCommonStyle*)this_)->generatedIconPixmap(iconMode, pixmap, opt);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:83
// int layoutSpacing(class QSizePolicy::ControlType, class QSizePolicy::ControlType, Qt::Orientation, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK12QCommonStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *this_, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) {
  /*return*/ ((QCommonStyle*)this_)->layoutSpacing(control1, control2, orientation, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:87
// void polish(class QPalette &)
extern "C"
void C_ZN12QCommonStyle6polishER8QPalette(void *this_, QPalette & a0) {
  ((QCommonStyle*)this_)->polish(a0);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:88
// void polish(class QApplication *)
extern "C"
void C_ZN12QCommonStyle6polishEP12QApplication(void *this_, QApplication * app) {
  ((QCommonStyle*)this_)->polish(app);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:89
// void polish(class QWidget *)
extern "C"
void C_ZN12QCommonStyle6polishEP7QWidget(void *this_, QWidget * widget) {
  ((QCommonStyle*)this_)->polish(widget);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:90
// void unpolish(class QWidget *)
extern "C"
void C_ZN12QCommonStyle8unpolishEP7QWidget(void *this_, QWidget * widget) {
  ((QCommonStyle*)this_)->unpolish(widget);
}
// virtual
// /usr/include/qt/QtWidgets/qcommonstyle.h:91
// void unpolish(class QApplication *)
extern "C"
void C_ZN12QCommonStyle8unpolishEP12QApplication(void *this_, QApplication * application) {
  ((QCommonStyle*)this_)->unpolish(application);
}