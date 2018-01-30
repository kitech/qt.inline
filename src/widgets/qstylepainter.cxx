//  header block begin
// /usr/include/qt/QtWidgets/qstylepainter.h
#include <qstylepainter.h>
#include <QtWidgets>

// QStylePainter is pure virtual: false
// QStylePainter has virtual projected: false
//  header block end

//  main block begin

class MyQStylePainter : public QStylePainter {
public:
  virtual ~MyQStylePainter() {}
// void QStylePainter()
MyQStylePainter() : QStylePainter() {}
// void QStylePainter(class QWidget *)
MyQStylePainter(QWidget * w) : QStylePainter(w) {}
// void QStylePainter(class QPaintDevice *, class QWidget *)
MyQStylePainter(QPaintDevice * pd, QWidget * w) : QStylePainter(pd, w) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:54
// [-2] void QStylePainter()
extern "C"
void* C_ZN13QStylePainterC2Ev() {
  return  new QStylePainter();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:55
// [-2] void QStylePainter(class QWidget *)
extern "C"
void* C_ZN13QStylePainterC2EP7QWidget(QWidget * w) {
  return  new QStylePainter(w);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:56
// [-2] void QStylePainter(class QPaintDevice *, class QWidget *)
extern "C"
void* C_ZN13QStylePainterC2EP12QPaintDeviceP7QWidget(QPaintDevice * pd, QWidget * w) {
  return  new QStylePainter(pd, w);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:57
// [1] bool begin(class QWidget *)
extern "C"
bool C_ZN13QStylePainter5beginEP7QWidget(void *this_, QWidget * w) {
  return (bool)((QStylePainter*)this_)->begin(w);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:58
// [1] bool begin(class QPaintDevice *, class QWidget *)
extern "C"
bool C_ZN13QStylePainter5beginEP12QPaintDeviceP7QWidget(void *this_, QPaintDevice * pd, QWidget * w) {
  return (bool)((QStylePainter*)this_)->begin(pd, w);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:64
// [-2] void drawPrimitive(class QStyle::PrimitiveElement, const class QStyleOption &)
extern "C"
void C_ZN13QStylePainter13drawPrimitiveEN6QStyle16PrimitiveElementERK12QStyleOption(void *this_, QStyle::PrimitiveElement pe, const QStyleOption & opt) {
  ((QStylePainter*)this_)->drawPrimitive(pe, opt);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:65
// [-2] void drawControl(class QStyle::ControlElement, const class QStyleOption &)
extern "C"
void C_ZN13QStylePainter11drawControlEN6QStyle14ControlElementERK12QStyleOption(void *this_, QStyle::ControlElement ce, const QStyleOption & opt) {
  ((QStylePainter*)this_)->drawControl(ce, opt);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:66
// [-2] void drawComplexControl(class QStyle::ComplexControl, const class QStyleOptionComplex &)
extern "C"
void C_ZN13QStylePainter18drawComplexControlEN6QStyle14ComplexControlERK19QStyleOptionComplex(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex & opt) {
  ((QStylePainter*)this_)->drawComplexControl(cc, opt);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:67
// [-2] void drawItemText(const class QRect &, int, const class QPalette &, _Bool, const class QString &, class QPalette::ColorRole)
extern "C"
void C_ZN13QStylePainter12drawItemTextERK5QRectiRK8QPalettebRK7QStringNS3_9ColorRoleE(void *this_, const QRect & r, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole) {
  ((QStylePainter*)this_)->drawItemText(r, flags, pal, enabled, text, textRole);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:69
// [-2] void drawItemPixmap(const class QRect &, int, const class QPixmap &)
extern "C"
void C_ZN13QStylePainter14drawItemPixmapERK5QRectiRK7QPixmap(void *this_, const QRect & r, int flags, const QPixmap & pixmap) {
  ((QStylePainter*)this_)->drawItemPixmap(r, flags, pixmap);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:70
// [8] QStyle * style()
extern "C"
void* C_ZNK13QStylePainter5styleEv(void *this_) {
  return (void*)((QStylePainter*)this_)->style();
}
//  main block end
