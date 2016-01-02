// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qpagelayout.h
// dst-file: /src/gui/qpagelayout.cxx
//

// header block begin =>
#include <qpagelayout.h>

extern "C" {

int QPageLayout_Class_Size()
{
  return sizeof(QPageLayout);
}

// QPageLayout()
QPageLayout* dector_ZN11QPageLayoutC1Ev()
{
  // static_assert(sizeof(QPageLayout) == 32, "tyszerr");
  QPageLayout* rthis = new QPageLayout();
  return rthis;
}

// QPageLayout(const class QPageLayout &)
QPageLayout* dector_ZN11QPageLayoutC1ERKS_(const QPageLayout & other)
{
  // static_assert(sizeof(QPageLayout) == 32, "tyszerr");
  QPageLayout* rthis = new QPageLayout(other);
  return rthis;
}

// ~QPageLayout()
void dedtor_ZN11QPageLayoutD0Ev(QPageLayout* that)
{
  QPageLayout* rthis = (QPageLayout*)that;
  delete rthis;
}

// QPageLayout(const class QPageSize &, enum QPageLayout::Orientation, const class QMarginsF &, enum QPageLayout::Unit, const class QMarginsF &)
QPageLayout* dector_ZN11QPageLayoutC1ERK9QPageSizeNS_11OrientationERK9QMarginsFNS_4UnitES6_(const QPageSize & pageSize, QPageLayout::Orientation orientation, const QMarginsF & margins, QPageLayout::Unit units, const QMarginsF & minMargins)
{
  // static_assert(sizeof(QPageLayout) == 32, "tyszerr");
  QPageLayout* rthis = new QPageLayout(pageSize, orientation, margins, units, minMargins);
  return rthis;
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

