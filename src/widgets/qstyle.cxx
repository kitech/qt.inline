//  header block begin
// /usr/include/qt/QtWidgets/qstyle.h
#ifndef protected
#define protected public
#endif
#include <qstyle.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyle is pure virtual: true
// QStyle has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyle : public QStyle {
public:
  virtual ~MyQStyle() {}
// void QStyle()
MyQStyle() : QStyle() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:66
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle10metaObjectEv(void *this_) {
  return (void*)((QStyle*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:73
// [-2] void QStyle()
extern "C" Q_DECL_EXPORT
void* C_ZN6QStyleC2Ev() {
  return 0; // new QStyle();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:74
// [-2] void ~QStyle()
extern "C" Q_DECL_EXPORT
void C_ZN6QStyleD2Ev(void *this_) {
  delete (QStyle*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:76
// [-2] void polish(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN6QStyle6polishEP7QWidget(void *this_, QWidget * widget) {
  ((QStyle*)this_)->polish(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:77
// [-2] void unpolish(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN6QStyle8unpolishEP7QWidget(void *this_, QWidget * widget) {
  ((QStyle*)this_)->unpolish(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:79
// [-2] void polish(QApplication *)
extern "C" Q_DECL_EXPORT
void C_ZN6QStyle6polishEP12QApplication(void *this_, QApplication * application) {
  ((QStyle*)this_)->polish(application);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:80
// [-2] void unpolish(QApplication *)
extern "C" Q_DECL_EXPORT
void C_ZN6QStyle8unpolishEP12QApplication(void *this_, QApplication * application) {
  ((QStyle*)this_)->unpolish(application);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:82
// [-2] void polish(QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN6QStyle6polishER8QPalette(void *this_, QPalette* palette) {
  ((QStyle*)this_)->polish(*palette);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:84
// [16] QRect itemTextRect(const QFontMetrics &, const QRect &, int, bool, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString(void *this_, QFontMetrics* fm, QRect* r, int flags, bool enabled, QString* text) {
  auto rv = ((QStyle*)this_)->itemTextRect(*fm, *r, flags, enabled, *text);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:88
// [16] QRect itemPixmapRect(const QRect &, int, const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle14itemPixmapRectERK5QRectiRK7QPixmap(void *this_, QRect* r, int flags, QPixmap* pixmap) {
  auto rv = ((QStyle*)this_)->itemPixmapRect(*r, flags, *pixmap);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:90
// [-2] void drawItemText(QPainter *, const QRect &, int, const QPalette &, bool, const QString &, QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void C_ZNK6QStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE(void *this_, QPainter * painter, QRect* rect, int flags, QPalette* pal, bool enabled, QString* text, QPalette::ColorRole textRole) {
  ((QStyle*)this_)->drawItemText(painter, *rect, flags, *pal, enabled, *text, textRole);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:94
// [-2] void drawItemPixmap(QPainter *, const QRect &, int, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZNK6QStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap(void *this_, QPainter * painter, QRect* rect, int alignment, QPixmap* pixmap) {
  ((QStyle*)this_)->drawItemPixmap(painter, *rect, alignment, *pixmap);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:97
// [16] QPalette standardPalette()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle15standardPaletteEv(void *this_) {
  auto rv = ((QStyle*)this_)->standardPalette();
return new QPalette(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:204
// [-2] void drawPrimitive(QStyle::PrimitiveElement, const QStyleOption *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QStyle13drawPrimitiveENS_16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) {
  ((QStyle*)this_)->drawPrimitive(pe, opt, p, w);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:275
// [-2] void drawControl(QStyle::ControlElement, const QStyleOption *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QStyle11drawControlENS_14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) {
  ((QStyle*)this_)->drawControl(element, opt, p, w);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:364
// [16] QRect subElementRect(QStyle::SubElement, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle14subElementRectENS_10SubElementEPK12QStyleOptionPK7QWidget(void *this_, QStyle::SubElement subElement, const QStyleOption * option, const QWidget * widget) {
  auto rv = ((QStyle*)this_)->subElementRect(subElement, option, widget);
return new QRect(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:443
// [-2] void drawComplexControl(QStyle::ComplexControl, const QStyleOptionComplex *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QStyle18drawComplexControlENS_14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * widget) {
  ((QStyle*)this_)->drawComplexControl(cc, opt, p, widget);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:445
// [4] QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl, const QStyleOptionComplex *, const QPoint &, const QWidget *)
extern "C" Q_DECL_EXPORT
QStyle::SubControl C_ZNK6QStyle21hitTestComplexControlENS_14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPoint* pt, const QWidget * widget) {
  return (QStyle::SubControl)((QStyle*)this_)->hitTestComplexControl(cc, opt, *pt, widget);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:447
// [16] QRect subControlRect(QStyle::ComplexControl, const QStyleOptionComplex *, QStyle::SubControl, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle14subControlRectENS_14ComplexControlEPK19QStyleOptionComplexNS_10SubControlEPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) {
  auto rv = ((QStyle*)this_)->subControlRect(cc, opt, sc, widget);
return new QRect(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:582
// [4] int pixelMetric(QStyle::PixelMetric, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK6QStyle11pixelMetricENS_11PixelMetricEPK12QStyleOptionPK7QWidget(void *this_, QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) {
  return (int)((QStyle*)this_)->pixelMetric(metric, option, widget);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:614
// [8] QSize sizeFromContents(QStyle::ContentsType, const QStyleOption *, const QSize &, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle16sizeFromContentsENS_12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *this_, QStyle::ContentsType ct, const QStyleOption * opt, QSize* contentsSize, const QWidget * w) {
  auto rv = ((QStyle*)this_)->sizeFromContents(ct, opt, *contentsSize, w);
return new QSize(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:748
// [4] int styleHint(QStyle::StyleHint, const QStyleOption *, const QWidget *, QStyleHintReturn *)
extern "C" Q_DECL_EXPORT
int C_ZNK6QStyle9styleHintENS_9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *this_, QStyle::StyleHint stylehint, const QStyleOption * opt, const QWidget * widget, QStyleHintReturn * returnData) {
  return (int)((QStyle*)this_)->styleHint(stylehint, opt, widget, returnData);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:828
// [32] QPixmap standardPixmap(QStyle::StandardPixmap, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle14standardPixmapENS_14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QStyle*)this_)->standardPixmap(standardPixmap, opt, widget);
return new QPixmap(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:831
// [8] QIcon standardIcon(QStyle::StandardPixmap, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle12standardIconENS_14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) {
  auto rv = ((QStyle*)this_)->standardIcon(standardIcon, option, widget);
return new QIcon(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:834
// [32] QPixmap generatedIconPixmap(QIcon::Mode, const QPixmap &, const QStyleOption *)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *this_, QIcon::Mode iconMode, QPixmap* pixmap, const QStyleOption * opt) {
  auto rv = ((QStyle*)this_)->generatedIconPixmap(iconMode, *pixmap, opt);
return new QPixmap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:837
// [16] QRect visualRect(Qt::LayoutDirection, const QRect &, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QStyle10visualRectEN2Qt15LayoutDirectionERK5QRectS4_(Qt::LayoutDirection direction, QRect* boundingRect, QRect* logicalRect) {
  auto rv = QStyle::visualRect(direction, *boundingRect, *logicalRect);
return new QRect(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:839
// [8] QPoint visualPos(Qt::LayoutDirection, const QRect &, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QStyle9visualPosEN2Qt15LayoutDirectionERK5QRectRK6QPoint(Qt::LayoutDirection direction, QRect* boundingRect, QPoint* logicalPos) {
  auto rv = QStyle::visualPos(direction, *boundingRect, *logicalPos);
return new QPoint(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:841
// [4] int sliderPositionFromValue(int, int, int, int, bool)
extern "C" Q_DECL_EXPORT
int C_ZN6QStyle23sliderPositionFromValueEiiiib(int min, int max, int val, int space, bool upsideDown) {
  return (int)QStyle::sliderPositionFromValue(min, max, val, space, upsideDown);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:843
// [4] int sliderValueFromPosition(int, int, int, int, bool)
extern "C" Q_DECL_EXPORT
int C_ZN6QStyle23sliderValueFromPositionEiiiib(int min, int max, int pos, int space, bool upsideDown) {
  return (int)QStyle::sliderValueFromPosition(min, max, pos, space, upsideDown);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:845
// [4] Qt::Alignment visualAlignment(Qt::LayoutDirection, Qt::Alignment)
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZN6QStyle15visualAlignmentEN2Qt15LayoutDirectionE6QFlagsINS0_13AlignmentFlagEE(Qt::LayoutDirection direction, QFlags<Qt::AlignmentFlag> alignment) {
  return (Qt::Alignment)QStyle::visualAlignment(direction, alignment);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:846
// [16] QRect alignedRect(Qt::LayoutDirection, Qt::Alignment, const QSize &, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QStyle11alignedRectEN2Qt15LayoutDirectionE6QFlagsINS0_13AlignmentFlagEERK5QSizeRK5QRect(Qt::LayoutDirection direction, QFlags<Qt::AlignmentFlag> alignment, QSize* size, QRect* rectangle) {
  auto rv = QStyle::alignedRect(direction, alignment, *size, *rectangle);
return new QRect(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:849
// [4] int layoutSpacing(QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK6QStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *this_, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) {
  return (int)((QStyle*)this_)->layoutSpacing(control1, control2, orientation, option, widget);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qstyle.h:852
// [4] int combinedLayoutSpacing(QSizePolicy::ControlTypes, QSizePolicy::ControlTypes, Qt::Orientation, QStyleOption *, QWidget *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
int C_ZNK6QStyle21combinedLayoutSpacingE6QFlagsIN11QSizePolicy11ControlTypeEES3_N2Qt11OrientationEP12QStyleOptionP7QWidget(void *this_, QFlags<QSizePolicy::ControlType> controls1, QFlags<QSizePolicy::ControlType> controls2, Qt::Orientation orientation, QStyleOption * option, QWidget * widget) {
  return (int)((QStyle*)this_)->combinedLayoutSpacing(controls1, controls2, orientation, option, widget);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qstyle.h:856
// [8] const QStyle * proxy()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK6QStyle5proxyEv(void *this_) {
  return (void*)((QStyle*)this_)->proxy();
}
#endif // QT_VERSION >= 0x040600

//  main block end
