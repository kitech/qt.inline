// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qtextoption.h
// dst-file: /src/gui/qtextoption.cxx
//

// header block begin =>
#include <qtextoption.h>

extern "C" {

int QTextOption_Class_Size()
{
  return sizeof(QTextOption);
}

// QTextOption(const class QTextOption &)
QTextOption* dector_ZN11QTextOptionC1ERKS_(const QTextOption & o)
{
  // static_assert(sizeof(QTextOption) == 32, "tyszerr");
  QTextOption* rthis = new QTextOption(o);
  return rthis;
}

// QTextOption(Qt::Alignment)
QTextOption* dector_ZN11QTextOptionC1E6QFlagsIN2Qt13AlignmentFlagEE(Qt::Alignment alignment)
{
  // static_assert(sizeof(QTextOption) == 32, "tyszerr");
  QTextOption* rthis = new QTextOption(alignment);
  return rthis;
}

// QTextOption()
QTextOption* dector_ZN11QTextOptionC1Ev()
{
  // static_assert(sizeof(QTextOption) == 32, "tyszerr");
  QTextOption* rthis = new QTextOption();
  return rthis;
}

// ~QTextOption()
void dedtor_ZN11QTextOptionD0Ev(QTextOption* that)
{
  QTextOption* rthis = (QTextOption*)that;
  delete rthis;
}

  // proto:  void QTextOption::setFlags(Flags flags);
void _ZN11QTextOption8setFlagsE6QFlagsINS_4FlagEE(void *that, QTextOption::Flag flags)
{
  QTextOption *cthat = (QTextOption *)that;
   cthat->setFlags(flags);
}

  // proto:  void QTextOption::setTabStop(qreal tabStop);
void _ZN11QTextOption10setTabStopEd(void *that, double tabStop)
{
  QTextOption *cthat = (QTextOption *)that;
   cthat->setTabStop(tabStop);
}

  // proto:  void QTextOption::setAlignment(Qt::Alignment alignment);
void _ZN11QTextOption12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment alignment)
{
  QTextOption *cthat = (QTextOption *)that;
   cthat->setAlignment(alignment);
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

