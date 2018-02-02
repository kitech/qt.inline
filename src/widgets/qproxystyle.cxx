//  header block begin
// /usr/include/qt/QtWidgets/qproxystyle.h
#include <qproxystyle.h>
#include <QtWidgets>

// QProxyStyle is pure virtual: false
// QProxyStyle has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:97
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QProxyStyle5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QProxyStyle5eventEP6QEvent(void*cbfn)
{ callback_ZN11QProxyStyle5eventEP6QEvent_fnptr = cbfn; }

class MyQProxyStyle : public QProxyStyle {
public:
  virtual ~MyQProxyStyle() {}
// void QProxyStyle(class QStyle *)
MyQProxyStyle(QStyle * style) : QProxyStyle(style) {}
// void QProxyStyle(const class QString &)
MyQProxyStyle(const QString & key) : QProxyStyle(key) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN11QProxyStyle5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QProxyStyle::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QProxyStyle10metaObjectEv(void *this_) {
  return (void*)((QProxyStyle*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:57
// [-2] void QProxyStyle(class QStyle *)
extern "C"
void* C_ZN11QProxyStyleC2EP6QStyle(QStyle * style) {
  auto _nilp = (MyQProxyStyle*)(0);
  return  new MyQProxyStyle(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:58
// [-2] void QProxyStyle(const class QString &)
extern "C"
void* C_ZN11QProxyStyleC2ERK7QString(QString* key) {
  auto _nilp = (MyQProxyStyle*)(0);
  return  new MyQProxyStyle(*key);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:59
// [-2] void ~QProxyStyle()
extern "C"
void C_ZN11QProxyStyleD2Ev(void *this_) {
  delete (QProxyStyle*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:61
// [8] QStyle * baseStyle()
extern "C"
void* C_ZNK11QProxyStyle9baseStyleEv(void *this_) {
  return (void*)((QProxyStyle*)this_)->baseStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:62
// [-2] void setBaseStyle(class QStyle *)
extern "C"
void C_ZN11QProxyStyle12setBaseStyleEP6QStyle(void *this_, QStyle * style) {
  ((QProxyStyle*)this_)->setBaseStyle(style);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:64
// [-2] void drawPrimitive(enum QStyle::PrimitiveElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::PrimitiveElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawPrimitive(element, option, painter, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:65
// [-2] void drawControl(enum QStyle::ControlElement, const class QStyleOption *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::ControlElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawControl(element, option, painter, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:66
// [-2] void drawComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, class QPainter *, const class QWidget *)
extern "C"
void C_ZNK11QProxyStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *this_, QStyle::ComplexControl control, const QStyleOptionComplex * option, QPainter * painter, const QWidget * widget) {
  ((QProxyStyle*)this_)->drawComplexControl(control, option, painter, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:67
// [-2] void drawItemText(class QPainter *, const class QRect &, int, const class QPalette &, _Bool, const class QString &, class QPalette::ColorRole)
extern "C"
void C_ZNK11QProxyStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE(void *this_, QPainter * painter, QRect* rect, int flags, QPalette* pal, bool enabled, QString* text, QPalette::ColorRole textRole) {
  ((QProxyStyle*)this_)->drawItemText(painter, *rect, flags, *pal, enabled, *text, textRole);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:69
// [-2] void drawItemPixmap(class QPainter *, const class QRect &, int, const class QPixmap &)
extern "C"
void C_ZNK11QProxyStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap(void *this_, QPainter * painter, QRect* rect, int alignment, QPixmap* pixmap) {
  ((QProxyStyle*)this_)->drawItemPixmap(painter, *rect, alignment, *pixmap);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:71
// [8] QSize sizeFromContents(enum QStyle::ContentsType, const class QStyleOption *, const class QSize &, const class QWidget *)
extern "C"
void* C_ZNK11QProxyStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *this_, QStyle::ContentsType type, const QStyleOption * option, QSize* size, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->sizeFromContents(type, option, *size, widget);
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:73
// [16] QRect subElementRect(enum QStyle::SubElement, const class QStyleOption *, const class QWidget *)
extern "C"
void* C_ZNK11QProxyStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget(void *this_, QStyle::SubElement element, const QStyleOption * option, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->subElementRect(element, option, widget);
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:74
// [16] QRect subControlRect(enum QStyle::ComplexControl, const class QStyleOptionComplex *, enum QStyle::SubControl, const class QWidget *)
extern "C"
void* C_ZNK11QProxyStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->subControlRect(cc, opt, sc, widget);
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:75
// [16] QRect itemTextRect(const class QFontMetrics &, const class QRect &, int, _Bool, const class QString &)
extern "C"
void* C_ZNK11QProxyStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString(void *this_, QFontMetrics* fm, QRect* r, int flags, bool enabled, QString* text) {
  auto rv = ((QProxyStyle*)this_)->itemTextRect(*fm, *r, flags, enabled, *text);
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:76
// [16] QRect itemPixmapRect(const class QRect &, int, const class QPixmap &)
extern "C"
void* C_ZNK11QProxyStyle14itemPixmapRectERK5QRectiRK7QPixmap(void *this_, QRect* r, int flags, QPixmap* pixmap) {
  auto rv = ((QProxyStyle*)this_)->itemPixmapRect(*r, flags, *pixmap);
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:78
// [4] QStyle::SubControl hitTestComplexControl(enum QStyle::ComplexControl, const class QStyleOptionComplex *, const class QPoint &, const class QWidget *)
extern "C"
QStyle::SubControl C_ZNK11QProxyStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *this_, QStyle::ComplexControl control, const QStyleOptionComplex * option, QPoint* pos, const QWidget * widget) {
  return (QStyle::SubControl)((QProxyStyle*)this_)->hitTestComplexControl(control, option, *pos, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:79
// [4] int styleHint(enum QStyle::StyleHint, const class QStyleOption *, const class QWidget *, class QStyleHintReturn *)
extern "C"
int C_ZNK11QProxyStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *this_, QStyle::StyleHint hint, const QStyleOption * option, const QWidget * widget, QStyleHintReturn * returnData) {
  return (int)((QProxyStyle*)this_)->styleHint(hint, option, widget, returnData);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:80
// [4] int pixelMetric(enum QStyle::PixelMetric, const class QStyleOption *, const class QWidget *)
extern "C"
int C_ZNK11QProxyStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget(void *this_, QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) {
  return (int)((QProxyStyle*)this_)->pixelMetric(metric, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:81
// [4] int layoutSpacing(class QSizePolicy::ControlType, class QSizePolicy::ControlType, Qt::Orientation, const class QStyleOption *, const class QWidget *)
extern "C"
int C_ZNK11QProxyStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *this_, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) {
  return (int)((QProxyStyle*)this_)->layoutSpacing(control1, control2, orientation, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:84
// [8] QIcon standardIcon(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
void* C_ZNK11QProxyStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->standardIcon(standardIcon, option, widget);
return new QIcon(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:85
// [32] QPixmap standardPixmap(enum QStyle::StandardPixmap, const class QStyleOption *, const class QWidget *)
extern "C"
void* C_ZNK11QProxyStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QProxyStyle*)this_)->standardPixmap(standardPixmap, opt, widget);
return new QPixmap(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:86
// [32] QPixmap generatedIconPixmap(class QIcon::Mode, const class QPixmap &, const class QStyleOption *)
extern "C"
void* C_ZNK11QProxyStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *this_, QIcon::Mode iconMode, QPixmap* pixmap, const QStyleOption * opt) {
  auto rv = ((QProxyStyle*)this_)->generatedIconPixmap(iconMode, *pixmap, opt);
return new QPixmap(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:87
// [16] QPalette standardPalette()
extern "C"
void* C_ZNK11QProxyStyle15standardPaletteEv(void *this_) {
  auto rv = ((QProxyStyle*)this_)->standardPalette();
return new QPalette(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:89
// [-2] void polish(class QWidget *)
extern "C"
void C_ZN11QProxyStyle6polishEP7QWidget(void *this_, QWidget * widget) {
  ((QProxyStyle*)this_)->polish(widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:90
// [-2] void polish(class QPalette &)
extern "C"
void C_ZN11QProxyStyle6polishER8QPalette(void *this_, QPalette* pal) {
  ((QProxyStyle*)this_)->polish(*pal);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:91
// [-2] void polish(class QApplication *)
extern "C"
void C_ZN11QProxyStyle6polishEP12QApplication(void *this_, QApplication * app) {
  ((QProxyStyle*)this_)->polish(app);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:93
// [-2] void unpolish(class QWidget *)
extern "C"
void C_ZN11QProxyStyle8unpolishEP7QWidget(void *this_, QWidget * widget) {
  ((QProxyStyle*)this_)->unpolish(widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qproxystyle.h:94
// [-2] void unpolish(class QApplication *)
extern "C"
void C_ZN11QProxyStyle8unpolishEP12QApplication(void *this_, QApplication * app) {
  ((QProxyStyle*)this_)->unpolish(app);
}
//  main block end
