// /usr/include/qt/QtWidgets/qproxystyle.h
#include <qproxystyle.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QProxyStyle10metaObjectEv(void *this_) {
  /*return*/ ((QProxyStyle*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qproxystyle.h:56
// void QProxyStyle(class QStyle *)
extern "C"
void* C_ZN11QProxyStyleC1EP6QStyle(QStyle * style) {
  return new QProxyStyle(style);
}
// /usr/include/qt/QtWidgets/qproxystyle.h:57
// void QProxyStyle(const class QString &)
extern "C"
void* C_ZN11QProxyStyleC1ERK7QString(const QString & key) {
  return new QProxyStyle(key);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:58
// void ~QProxyStyle()
extern "C"
void C_ZN11QProxyStyleD1Ev(void *this_) {
  delete (QProxyStyle*)(this_);
}
// /usr/include/qt/QtWidgets/qproxystyle.h:60
// QStyle * baseStyle()
extern "C"
void C_ZNK11QProxyStyle9baseStyleEv(void *this_) {
  /*return*/ ((QProxyStyle*)this_)->baseStyle();
}
// /usr/include/qt/QtWidgets/qproxystyle.h:61
// void setBaseStyle(class QStyle *)
extern "C"
void C_ZN11QProxyStyle12setBaseStyleEP6QStyle(void *this_, QStyle * style) {
  ((QProxyStyle*)this_)->setBaseStyle(style);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:63
// void drawPrimitive(enum QStyle::PrimitiveElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::PrimitiveElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawPrimitive(element, option, painter, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:64
// void drawControl(enum QStyle::ControlElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::ControlElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawControl(element, option, painter, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:65
// void drawComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *this_, QStyle::ComplexControl control, const QStyleOptionComplex * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawComplexControl(control, option, painter, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:66
// void drawItemText(class QPainter *, const class QRect &, int, const class QPalette &, _Bool, const class QString &, class QPalette::ColorRole)
extern "C"
void C_ZNK11QProxyStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE(void *this_, QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole) {
  ((QProxyStyle*)this_)->drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:68
// void drawItemPixmap(class QPainter *, const class QRect &, int, const class QPixmap &)
extern "C"
void C_ZNK11QProxyStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap(void *this_, QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) {
  ((QProxyStyle*)this_)->drawItemPixmap(painter, rect, alignment, pixmap);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:70
// QSize sizeFromContents(enum QStyle::ContentsType, const class QStyleOption *, const class QSize &, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *this_, QStyle::ContentsType type, const QStyleOption * option, const QSize & size, const QWidget * widget) {
  /*return*/ ((QProxyStyle*)this_)->sizeFromContents(type, option, size, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:72
// QRect subElementRect(enum QStyle::SubElement, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget(void *this_, QStyle::SubElement element, const QStyleOption * option, const QWidget * widget) {
  /*return*/ ((QProxyStyle*)this_)->subElementRect(element, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:73
// QRect subControlRect(enum QStyle::ComplexControl, const class QStyleOptionComplex *, enum QStyle::SubControl, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) {
  /*return*/ ((QProxyStyle*)this_)->subControlRect(cc, opt, sc, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:74
// QRect itemTextRect(const class QFontMetrics &, const class QRect &, int, _Bool, const class QString &)
extern "C"
void C_ZNK11QProxyStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString(void *this_, const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text) {
  /*return*/ ((QProxyStyle*)this_)->itemTextRect(fm, r, flags, enabled, text);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:75
// QRect itemPixmapRect(const class QRect &, int, const class QPixmap &)
extern "C"
void C_ZNK11QProxyStyle14itemPixmapRectERK5QRectiRK7QPixmap(void *this_, const QRect & r, int flags, const QPixmap & pixmap) {
  /*return*/ ((QProxyStyle*)this_)->itemPixmapRect(r, flags, pixmap);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:77
// QStyle::SubControl hitTestComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, const class QPoint &, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *this_, QStyle::ComplexControl control, const QStyleOptionComplex * option, const QPoint & pos, const QWidget * widget) {
  /*return*/ ((QProxyStyle*)this_)->hitTestComplexControl(control, option, pos, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:78
// int styleHint(enum QStyle::StyleHint, const class QStyleOption *, const class QWidget *, class QStyleHintReturn *)
extern "C"
void C_ZNK11QProxyStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *this_, QStyle::StyleHint hint, const QStyleOption * option, const QWidget * widget, QStyleHintReturn * returnData) {
  /*return*/ ((QProxyStyle*)this_)->styleHint(hint, option, widget, returnData);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:79
// int pixelMetric(enum QStyle::PixelMetric, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget(void *this_, QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) {
  /*return*/ ((QProxyStyle*)this_)->pixelMetric(metric, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:80
// int layoutSpacing(class QSizePolicy::ControlType, class QSizePolicy::ControlType, Qt::Orientation, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *this_, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) {
  /*return*/ ((QProxyStyle*)this_)->layoutSpacing(control1, control2, orientation, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:83
// QIcon standardIcon(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) {
  /*return*/ ((QProxyStyle*)this_)->standardIcon(standardIcon, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:84
// QPixmap standardPixmap(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget) {
  /*return*/ ((QProxyStyle*)this_)->standardPixmap(standardPixmap, opt, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:85
// QPixmap generatedIconPixmap(class QIcon::Mode, const class QPixmap &, const class QStyleOption *)
extern "C"
void C_ZNK11QProxyStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *this_, QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) {
  /*return*/ ((QProxyStyle*)this_)->generatedIconPixmap(iconMode, pixmap, opt);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:86
// QPalette standardPalette()
extern "C"
void C_ZNK11QProxyStyle15standardPaletteEv(void *this_) {
  /*return*/ ((QProxyStyle*)this_)->standardPalette();
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:88
// void polish(class QWidget *)
extern "C"
void C_ZN11QProxyStyle6polishEP7QWidget(void *this_, QWidget * widget) {
  ((QProxyStyle*)this_)->polish(widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:89
// void polish(class QPalette &)
extern "C"
void C_ZN11QProxyStyle6polishER8QPalette(void *this_, QPalette & pal) {
  ((QProxyStyle*)this_)->polish(pal);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:90
// void polish(class QApplication *)
extern "C"
void C_ZN11QProxyStyle6polishEP12QApplication(void *this_, QApplication * app) {
  ((QProxyStyle*)this_)->polish(app);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:92
// void unpolish(class QWidget *)
extern "C"
void C_ZN11QProxyStyle8unpolishEP7QWidget(void *this_, QWidget * widget) {
  ((QProxyStyle*)this_)->unpolish(widget);
}
// virtual
// /usr/include/qt/QtWidgets/qproxystyle.h:93
// void unpolish(class QApplication *)
extern "C"
void C_ZN11QProxyStyle8unpolishEP12QApplication(void *this_, QApplication * app) {
  ((QProxyStyle*)this_)->unpolish(app);
}