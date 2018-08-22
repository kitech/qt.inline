//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qproxystyle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qproxystyle.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QProxyStyle is pure virtual: false
// QProxyStyle has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQProxyStyle : public QProxyStyle {
public:
  virtual ~MyQProxyStyle() {}
// void QProxyStyle(QStyle *)
MyQProxyStyle(QStyle * style) : QProxyStyle(style) {}
// void QProxyStyle(const QString &)
MyQProxyStyle(const QString & key) : QProxyStyle(key) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QProxyStyle::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:97
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QProxyStyle5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QProxyStyle*)this_)->QProxyStyle::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle10metaObjectEv(void *this_) {
  return (void*)((QProxyStyle*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QProxyStyle11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QProxyStyle*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QProxyStyle11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QProxyStyle*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QProxyStyle2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QProxyStyle::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QProxyStyle6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QProxyStyle::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:57
// [-2] void QProxyStyle(QStyle *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QProxyStyleC2EP6QStyle(QStyle * style) {
  auto _nilp = (MyQProxyStyle*)(0);
  return  new MyQProxyStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:58
// [-2] void QProxyStyle(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QProxyStyleC2ERK7QString(QString* key) {
  auto _nilp = (MyQProxyStyle*)(0);
  return  new MyQProxyStyle(*key);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:59
// [-2] void ~QProxyStyle()
extern "C" Q_DECL_EXPORT
void C_ZN11QProxyStyleD2Ev(void *this_) {
  delete (QProxyStyle*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:61
// [8] QStyle * baseStyle()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle9baseStyleEv(void *this_) {
  return (void*)((QProxyStyle*)this_)->baseStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:62
// [-2] void setBaseStyle(QStyle *)
extern "C" Q_DECL_EXPORT
void C_ZN11QProxyStyle12setBaseStyleEP6QStyle(void *this_, QStyle * style) {
  ((QProxyStyle*)this_)->setBaseStyle(style);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:64
// [-2] void drawPrimitive(QStyle::PrimitiveElement, const QStyleOption *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QProxyStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::PrimitiveElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawPrimitive(element, option, painter, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:65
// [-2] void drawControl(QStyle::ControlElement, const QStyleOption *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QProxyStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::ControlElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawControl(element, option, painter, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:66
// [-2] void drawComplexControl(QStyle::ComplexControl, const QStyleOptionComplex *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QProxyStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *this_, QStyle::ComplexControl control, const QStyleOptionComplex * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawComplexControl(control, option, painter, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:67
// [-2] void drawItemText(QPainter *, const QRect &, int, const QPalette &, bool, const QString &, QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void C_ZNK11QProxyStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE(void *this_, QPainter * painter, QRect* rect, int flags, QPalette* pal, bool enabled, QString* text, QPalette::ColorRole textRole) {
  ((QProxyStyle*)this_)->drawItemText(painter, *rect, flags, *pal, enabled, *text, textRole);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:69
// [-2] void drawItemPixmap(QPainter *, const QRect &, int, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZNK11QProxyStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap(void *this_, QPainter * painter, QRect* rect, int alignment, QPixmap* pixmap) {
  ((QProxyStyle*)this_)->drawItemPixmap(painter, *rect, alignment, *pixmap);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:71
// [8] QSize sizeFromContents(QStyle::ContentsType, const QStyleOption *, const QSize &, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *this_, QStyle::ContentsType type_, const QStyleOption * option, QSize* size, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->sizeFromContents(type_, option, *size, widget);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:73
// [16] QRect subElementRect(QStyle::SubElement, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget(void *this_, QStyle::SubElement element, const QStyleOption * option, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->subElementRect(element, option, widget);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:74
// [16] QRect subControlRect(QStyle::ComplexControl, const QStyleOptionComplex *, QStyle::SubControl, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->subControlRect(cc, opt, sc, widget);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:75
// [16] QRect itemTextRect(const QFontMetrics &, const QRect &, int, bool, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString(void *this_, QFontMetrics* fm, QRect* r, int flags, bool enabled, QString* text) {
  auto rv = ((QProxyStyle*)this_)->itemTextRect(*fm, *r, flags, enabled, *text);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:76
// [16] QRect itemPixmapRect(const QRect &, int, const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle14itemPixmapRectERK5QRectiRK7QPixmap(void *this_, QRect* r, int flags, QPixmap* pixmap) {
  auto rv = ((QProxyStyle*)this_)->itemPixmapRect(*r, flags, *pixmap);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:78
// [4] QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl, const QStyleOptionComplex *, const QPoint &, const QWidget *)
extern "C" Q_DECL_EXPORT
QStyle::SubControl C_ZNK11QProxyStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *this_, QStyle::ComplexControl control, const QStyleOptionComplex * option, QPoint* pos, const QWidget * widget) {
  return (QStyle::SubControl)((QProxyStyle*)this_)->hitTestComplexControl(control, option, *pos, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:79
// [4] int styleHint(QStyle::StyleHint, const QStyleOption *, const QWidget *, QStyleHintReturn *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QProxyStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *this_, QStyle::StyleHint hint, const QStyleOption * option, const QWidget * widget, QStyleHintReturn * returnData) {
  return (int)((QProxyStyle*)this_)->styleHint(hint, option, widget, returnData);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:80
// [4] int pixelMetric(QStyle::PixelMetric, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QProxyStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget(void *this_, QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) {
  return (int)((QProxyStyle*)this_)->pixelMetric(metric, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:81
// [4] int layoutSpacing(QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QProxyStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *this_, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) {
  return (int)((QProxyStyle*)this_)->layoutSpacing(control1, control2, orientation, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:84
// [8] QIcon standardIcon(QStyle::StandardPixmap, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->standardIcon(standardIcon, option, widget);
return new QIcon(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:85
// [32] QPixmap standardPixmap(QStyle::StandardPixmap, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->standardPixmap(standardPixmap, opt, widget);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:86
// [32] QPixmap generatedIconPixmap(QIcon::Mode, const QPixmap &, const QStyleOption *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *this_, QIcon::Mode iconMode, QPixmap* pixmap, const QStyleOption * opt) {
  auto rv = ((QProxyStyle*)this_)->generatedIconPixmap(iconMode, *pixmap, opt);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:87
// [16] QPalette standardPalette()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QProxyStyle15standardPaletteEv(void *this_) {
  auto rv = ((QProxyStyle*)this_)->standardPalette();
return new QPalette(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:89
// [-2] void polish(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QProxyStyle6polishEP7QWidget(void *this_, QWidget * widget) {
  ((QProxyStyle*)this_)->polish(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:90
// [-2] void polish(QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN11QProxyStyle6polishER8QPalette(void *this_, QPalette* pal) {
  ((QProxyStyle*)this_)->polish(*pal);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:91
// [-2] void polish(QApplication *)
extern "C" Q_DECL_EXPORT
void C_ZN11QProxyStyle6polishEP12QApplication(void *this_, QApplication * app) {
  ((QProxyStyle*)this_)->polish(app);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:93
// [-2] void unpolish(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QProxyStyle8unpolishEP7QWidget(void *this_, QWidget * widget) {
  ((QProxyStyle*)this_)->unpolish(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:94
// [-2] void unpolish(QApplication *)
extern "C" Q_DECL_EXPORT
void C_ZN11QProxyStyle8unpolishEP12QApplication(void *this_, QApplication * app) {
  ((QProxyStyle*)this_)->unpolish(app);
}

//  main block end
