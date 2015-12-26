// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qpagesize.h
// dst-file: /src/gui/qpagesize.cxx
//

// header block begin =>
#include <qpagesize.h>

extern "C" {

int QPageSize_Class_Size()
{
  return sizeof(QPageSize);
}

// QPageSize()
QPageSize* dector_ZN9QPageSizeC1Ev()
{
  // static_assert(sizeof(QPageSize) == 32, "tyszerr");
  QPageSize* rthis = new QPageSize();
  return rthis;
}

// QPageSize(const class QSizeF &, enum QPageSize::Unit, const class QString &, enum QPageSize::SizeMatchPolicy)
QPageSize* dector_ZN9QPageSizeC1ERK6QSizeFNS_4UnitERK7QStringNS_15SizeMatchPolicyE(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy)
{
  // static_assert(sizeof(QPageSize) == 32, "tyszerr");
  QPageSize* rthis = new QPageSize(size, units, name, matchPolicy);
  return rthis;
}

// ~QPageSize()
void dedtor_ZN9QPageSizeD0Ev(QPageSize* that)
{
  QPageSize* rthis = (QPageSize*)that;
  delete rthis;
}

// QPageSize(const class QSize &, const class QString &, enum QPageSize::SizeMatchPolicy)
QPageSize* dector_ZN9QPageSizeC1ERK5QSizeRK7QStringNS_15SizeMatchPolicyE(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy)
{
  // static_assert(sizeof(QPageSize) == 32, "tyszerr");
  QPageSize* rthis = new QPageSize(pointSize, name, matchPolicy);
  return rthis;
}

// QPageSize(const class QPageSize &)
QPageSize* dector_ZN9QPageSizeC1ERKS_(const QPageSize & other)
{
  // static_assert(sizeof(QPageSize) == 32, "tyszerr");
  QPageSize* rthis = new QPageSize(other);
  return rthis;
}

// QPageSize(enum QPageSize::PageSizeId)
QPageSize* dector_ZN9QPageSizeC1ENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId)
{
  // static_assert(sizeof(QPageSize) == 32, "tyszerr");
  QPageSize* rthis = new QPageSize(pageSizeId);
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

