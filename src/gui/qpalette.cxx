// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qpalette.h
// dst-file: /src/gui/qpalette.cxx
//

// header block begin =>
#include <qpalette.h>

extern "C" {

int QPalette_Class_Size()
{
  return sizeof(QPalette);
}

// QPalette(const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &)
QPalette* dector_ZN8QPaletteC1ERK6QColorS2_S2_S2_S2_S2_S2_(const QColor & windowText, const QColor & window, const QColor & light, const QColor & dark, const QColor & mid, const QColor & text, const QColor & base)
{
  // static_assert(sizeof(QPalette) == 32, "tyszerr");
  QPalette* rthis = new QPalette(windowText, window, light, dark, mid, text, base);
  return rthis;
}

// ~QPalette()
void dedtor_ZN8QPaletteD0Ev(QPalette* that)
{
  QPalette* rthis = (QPalette*)that;
  delete rthis;
}

// QPalette()
QPalette* dector_ZN8QPaletteC1Ev()
{
  // static_assert(sizeof(QPalette) == 32, "tyszerr");
  QPalette* rthis = new QPalette();
  return rthis;
}

// QPalette(const class QColor &)
QPalette* dector_ZN8QPaletteC1ERK6QColor(const QColor & button)
{
  // static_assert(sizeof(QPalette) == 32, "tyszerr");
  QPalette* rthis = new QPalette(button);
  return rthis;
}

// QPalette(Qt::GlobalColor)
QPalette* dector_ZN8QPaletteC1EN2Qt11GlobalColorE(Qt::GlobalColor button)
{
  // static_assert(sizeof(QPalette) == 32, "tyszerr");
  QPalette* rthis = new QPalette(button);
  return rthis;
}

// QPalette(const class QColor &, const class QColor &)
QPalette* dector_ZN8QPaletteC1ERK6QColorS2_(const QColor & button, const QColor & window)
{
  // static_assert(sizeof(QPalette) == 32, "tyszerr");
  QPalette* rthis = new QPalette(button, window);
  return rthis;
}

// QPalette(const class QPalette &)
QPalette* dector_ZN8QPaletteC1ERKS_(const QPalette & palette)
{
  // static_assert(sizeof(QPalette) == 32, "tyszerr");
  QPalette* rthis = new QPalette(palette);
  return rthis;
}

// QPalette(const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &)
QPalette* dector_ZN8QPaletteC1ERK6QBrushS2_S2_S2_S2_S2_S2_S2_S2_(const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window)
{
  // static_assert(sizeof(QPalette) == 32, "tyszerr");
  QPalette* rthis = new QPalette(windowText, button, light, dark, mid, text, bright_text, base, window);
  return rthis;
}

  // proto:  void QPalette::setBrush(QPalette::ColorRole cr, const QBrush & brush);
void _ZN8QPalette8setBrushENS_9ColorRoleERK6QBrush(void *that, QPalette::ColorRole cr, const QBrush & brush)
{
  QPalette *cthat = (QPalette *)that;
   cthat->setBrush(cr, brush);
}

  // proto:  void QPalette::setColor(QPalette::ColorRole cr, const QColor & color);
void _ZN8QPalette8setColorENS_9ColorRoleERK6QColor(void *that, QPalette::ColorRole cr, const QColor & color)
{
  QPalette *cthat = (QPalette *)that;
   cthat->setColor(cr, color);
}

  // proto:  void QPalette::setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor & color);
void _ZN8QPalette8setColorENS_10ColorGroupENS_9ColorRoleERK6QColor(void *that, QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor & color)
{
  QPalette *cthat = (QPalette *)that;
   cthat->setColor(cg, cr, color);
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

