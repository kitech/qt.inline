// /usr/include/qt/QtWidgets/qstylepainter.h
#include <qstylepainter.h>
#include <QtWidgets>

// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:53
// void QStylePainter()
extern "C"
void* C_ZN13QStylePainterC1Ev() {
  return new QStylePainter();
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:54
// void QStylePainter(class QWidget *)
extern "C"
void* C_ZN13QStylePainterC1EP7QWidget(QWidget * w) {
  return new QStylePainter(w);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:55
// void QStylePainter(class QPaintDevice *, class QWidget *)
extern "C"
void* C_ZN13QStylePainterC1EP12QPaintDeviceP7QWidget(QPaintDevice * pd, QWidget * w) {
  return new QStylePainter(pd, w);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:56
// bool begin(class QWidget *)
extern "C"
void C_ZN13QStylePainter5beginEP7QWidget(void *this_, QWidget * w) {
  /*return*/ ((QStylePainter*)this_)->begin(w);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:57
// bool begin(class QPaintDevice *, class QWidget *)
extern "C"
void C_ZN13QStylePainter5beginEP12QPaintDeviceP7QWidget(void *this_, QPaintDevice * pd, QWidget * w) {
  /*return*/ ((QStylePainter*)this_)->begin(pd, w);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:63
// void drawPrimitive(class QStyle::PrimitiveElement, const class QStyleOption &)
extern "C"
void C_ZN13QStylePainter13drawPrimitiveEN6QStyle16PrimitiveElementERK12QStyleOption(void *this_, QStyle::PrimitiveElement pe, const QStyleOption & opt) {
  ((QStylePainter*)this_)->drawPrimitive(pe, opt);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:64
// void drawControl(class QStyle::ControlElement, const class QStyleOption &)
extern "C"
void C_ZN13QStylePainter11drawControlEN6QStyle14ControlElementERK12QStyleOption(void *this_, QStyle::ControlElement ce, const QStyleOption & opt) {
  ((QStylePainter*)this_)->drawControl(ce, opt);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:65
// void drawComplexControl(class QStyle::ComplexControl, const class QStyleOptionComplex &)
extern "C"
void C_ZN13QStylePainter18drawComplexControlEN6QStyle14ComplexControlERK19QStyleOptionComplex(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex & opt) {
  ((QStylePainter*)this_)->drawComplexControl(cc, opt);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:66
// void drawItemText(const class QRect &, int, const class QPalette &, _Bool, const class QString &, class QPalette::ColorRole)
extern "C"
void C_ZN13QStylePainter12drawItemTextERK5QRectiRK8QPalettebRK7QStringNS3_9ColorRoleE(void *this_, const QRect & r, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole) {
  ((QStylePainter*)this_)->drawItemText(r, flags, pal, enabled, text, textRole);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:68
// void drawItemPixmap(const class QRect &, int, const class QPixmap &)
extern "C"
void C_ZN13QStylePainter14drawItemPixmapERK5QRectiRK7QPixmap(void *this_, const QRect & r, int flags, const QPixmap & pixmap) {
  ((QStylePainter*)this_)->drawItemPixmap(r, flags, pixmap);
}
// inline
// /usr/include/qt/QtWidgets/qstylepainter.h:69
// QStyle * style()
extern "C"
void C_ZNK13QStylePainter5styleEv(void *this_) {
  /*return*/ ((QStylePainter*)this_)->style();
}