// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qpalette.h
// dst-file: /src/gui/qpalette.cxx
//

// header block begin =>
#include <qpalette.h>

extern "C" {

  // proto:  const QColor & QPalette::color(QPalette::ColorRole cr);
const QColor * _ZNK8QPalette5colorENS_9ColorRoleE(void *that, QPalette::ColorRole cr)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->color(cr);
}

  // proto:  const QBrush & QPalette::button();
const QBrush * _ZNK8QPalette6buttonEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->button();
}

  // proto:  const QBrush & QPalette::foreground();
const QBrush * _ZNK8QPalette10foregroundEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->foreground();
}

  // proto:  const QBrush & QPalette::background();
const QBrush * _ZNK8QPalette10backgroundEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->background();
}

  // proto:  void QPalette::setBrush(QPalette::ColorRole cr, const QBrush & brush);
void _ZN8QPalette8setBrushENS_9ColorRoleERK6QBrush(void *that, QPalette::ColorRole cr, const QBrush & brush)

{
  QPalette *cthat = (QPalette *)that;
   cthat->setBrush(cr, brush);
}

  // proto:  void QPalette::resolve(uint mask);
void _ZN8QPalette7resolveEj(void *that, unsigned int mask)

{
  QPalette *cthat = (QPalette *)that;
   cthat->resolve(mask);
}

  // proto:  uint QPalette::resolve();
uint _ZNK8QPalette7resolveEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return cthat->resolve();
}

  // proto:  void QPalette::setColor(QPalette::ColorRole cr, const QColor & color);
void _ZN8QPalette8setColorENS_9ColorRoleERK6QColor(void *that, QPalette::ColorRole cr, const QColor & color)

{
  QPalette *cthat = (QPalette *)that;
   cthat->setColor(cr, color);
}

  // proto:  const QBrush & QPalette::window();
const QBrush * _ZNK8QPalette6windowEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->window();
}

  // proto:  const QBrush & QPalette::brush(QPalette::ColorRole cr);
const QBrush * _ZNK8QPalette5brushENS_9ColorRoleE(void *that, QPalette::ColorRole cr)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->brush(cr);
}

  // proto:  const QColor & QPalette::color(QPalette::ColorGroup cg, QPalette::ColorRole cr);
const QColor * _ZNK8QPalette5colorENS_10ColorGroupENS_9ColorRoleE(void *that, QPalette::ColorGroup cg, QPalette::ColorRole cr)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->color(cg, cr);
}

  // proto:  const QBrush & QPalette::highlightedText();
const QBrush * _ZNK8QPalette15highlightedTextEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->highlightedText();
}

  // proto:  const QBrush & QPalette::text();
const QBrush * _ZNK8QPalette4textEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->text();
}

  // proto:  const QBrush & QPalette::light();
const QBrush * _ZNK8QPalette5lightEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->light();
}

  // proto:  const QBrush & QPalette::link();
const QBrush * _ZNK8QPalette4linkEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->link();
}

  // proto:  const QBrush & QPalette::base();
const QBrush * _ZNK8QPalette4baseEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->base();
}

  // proto:  const QBrush & QPalette::dark();
const QBrush * _ZNK8QPalette4darkEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->dark();
}

  // proto:  const QBrush & QPalette::highlight();
const QBrush * _ZNK8QPalette9highlightEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->highlight();
}

  // proto:  void QPalette::setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor & color);
void _ZN8QPalette8setColorENS_10ColorGroupENS_9ColorRoleERK6QColor(void *that, QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor & color)

{
  QPalette *cthat = (QPalette *)that;
   cthat->setColor(cg, cr, color);
}

  // proto:  void QPalette::setCurrentColorGroup(QPalette::ColorGroup cg);
void _ZN8QPalette20setCurrentColorGroupENS_10ColorGroupE(void *that, QPalette::ColorGroup cg)

{
  QPalette *cthat = (QPalette *)that;
   cthat->setCurrentColorGroup(cg);
}

  // proto:  const QBrush & QPalette::mid();
const QBrush * _ZNK8QPalette3midEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->mid();
}

  // proto:  const QBrush & QPalette::shadow();
const QBrush * _ZNK8QPalette6shadowEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->shadow();
}

  // proto:  void QPalette::QPalette(QPalette && other);
void _ZN8QPaletteC1EOS_(void *that, QPalette && other)

{
  QPalette *cthat = (QPalette *)that;
  auto _o = new(that) QPalette(other);
}

  // proto:  const QBrush & QPalette::buttonText();
const QBrush * _ZNK8QPalette10buttonTextEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->buttonText();
}

  // proto:  const QBrush & QPalette::toolTipBase();
const QBrush * _ZNK8QPalette11toolTipBaseEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->toolTipBase();
}

  // proto:  const QBrush & QPalette::midlight();
const QBrush * _ZNK8QPalette8midlightEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->midlight();
}

  // proto:  const QBrush & QPalette::brightText();
const QBrush * _ZNK8QPalette10brightTextEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->brightText();
}

  // proto:  const QBrush & QPalette::linkVisited();
const QBrush * _ZNK8QPalette11linkVisitedEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->linkVisited();
}

  // proto:  const QBrush & QPalette::alternateBase();
const QBrush * _ZNK8QPalette13alternateBaseEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->alternateBase();
}

  // proto:  const QBrush & QPalette::windowText();
const QBrush * _ZNK8QPalette10windowTextEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->windowText();
}

  // proto:  const QBrush & QPalette::toolTipText();
const QBrush * _ZNK8QPalette11toolTipTextEv(void *that)

{
  QPalette *cthat = (QPalette *)that;
  return &cthat->toolTipText();
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

