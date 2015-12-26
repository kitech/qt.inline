// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qstylepainter.h
// dst-file: /src/widgets/qstylepainter.cxx
//

// header block begin =>
#include <qstylepainter.h>

extern "C" {

int QStylePainter_Class_Size()
{
  return sizeof(QStylePainter);
}

// QStylePainter(class QWidget *)
QStylePainter* dector_ZN13QStylePainterC1EP7QWidget(QWidget * w)
{
  // static_assert(sizeof(QStylePainter) == 32, "tyszerr");
  QStylePainter* rthis = new QStylePainter(w);
  return rthis;
}

// QStylePainter(class QPaintDevice *, class QWidget *)
QStylePainter* dector_ZN13QStylePainterC1EP12QPaintDeviceP7QWidget(QPaintDevice * pd, QWidget * w)
{
  // static_assert(sizeof(QStylePainter) == 32, "tyszerr");
  QStylePainter* rthis = new QStylePainter(pd, w);
  return rthis;
}

// QStylePainter()
QStylePainter* dector_ZN13QStylePainterC1Ev()
{
  // static_assert(sizeof(QStylePainter) == 32, "tyszerr");
  QStylePainter* rthis = new QStylePainter();
  return rthis;
}

  // proto:  void QStylePainter::QStylePainter(QWidget * w);
void _ZN13QStylePainterC1EP7QWidget(void *that, QWidget * w)
{
  QStylePainter *cthat = (QStylePainter *)that;
  auto _o = new(that) QStylePainter(w);
}

  // proto:  void QStylePainter::QStylePainter(QPaintDevice * pd, QWidget * w);
void _ZN13QStylePainterC1EP12QPaintDeviceP7QWidget(void *that, QPaintDevice * pd, QWidget * w)
{
  QStylePainter *cthat = (QStylePainter *)that;
  auto _o = new(that) QStylePainter(pd, w);
}

  // proto:  void QStylePainter::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex & opt);
void _ZN13QStylePainter18drawComplexControlEN6QStyle14ComplexControlERK19QStyleOptionComplex(void *that, QStyle::ComplexControl cc, const QStyleOptionComplex & opt)
{
  QStylePainter *cthat = (QStylePainter *)that;
   cthat->drawComplexControl(cc, opt);
}

  // proto:  void QStylePainter::QStylePainter();
void _ZN13QStylePainterC1Ev(void *that)
{
  QStylePainter *cthat = (QStylePainter *)that;
  auto _o = new(that) QStylePainter();
}

  // proto:  bool QStylePainter::begin(QPaintDevice * pd, QWidget * w);
bool _ZN13QStylePainter5beginEP12QPaintDeviceP7QWidget(void *that, QPaintDevice * pd, QWidget * w)
{
  QStylePainter *cthat = (QStylePainter *)that;
  return cthat->begin(pd, w);
}

  // proto:  void QStylePainter::drawItemText(const QRect & r, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole);
void _ZN13QStylePainter12drawItemTextERK5QRectiRK8QPalettebRK7QStringNS3_9ColorRoleE(void *that, const QRect & r, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole)
{
  QStylePainter *cthat = (QStylePainter *)that;
   cthat->drawItemText(r, flags, pal, enabled, text, textRole);
}

  // proto:  bool QStylePainter::begin(QWidget * w);
bool _ZN13QStylePainter5beginEP7QWidget(void *that, QWidget * w)
{
  QStylePainter *cthat = (QStylePainter *)that;
  return cthat->begin(w);
}

  // proto:  void QStylePainter::drawItemPixmap(const QRect & r, int flags, const QPixmap & pixmap);
void _ZN13QStylePainter14drawItemPixmapERK5QRectiRK7QPixmap(void *that, const QRect & r, int flags, const QPixmap & pixmap)
{
  QStylePainter *cthat = (QStylePainter *)that;
   cthat->drawItemPixmap(r, flags, pixmap);
}

  // proto:  QStyle * QStylePainter::style();
QStyle * _ZNK13QStylePainter5styleEv(void *that)
{
  QStylePainter *cthat = (QStylePainter *)that;
  return cthat->style();
}

  // proto:  void QStylePainter::drawControl(QStyle::ControlElement ce, const QStyleOption & opt);
void _ZN13QStylePainter11drawControlEN6QStyle14ControlElementERK12QStyleOption(void *that, QStyle::ControlElement ce, const QStyleOption & opt)
{
  QStylePainter *cthat = (QStylePainter *)that;
   cthat->drawControl(ce, opt);
}

  // proto:  void QStylePainter::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption & opt);
void _ZN13QStylePainter13drawPrimitiveEN6QStyle16PrimitiveElementERK12QStyleOption(void *that, QStyle::PrimitiveElement pe, const QStyleOption & opt)
{
  QStylePainter *cthat = (QStylePainter *)that;
   cthat->drawPrimitive(pe, opt);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

