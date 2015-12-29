// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
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
void demth_ZN11QTextOption8setFlagsE6QFlagsINS_4FlagEE(void *that, QTextOption::Flag flags)
{
  QTextOption *cthat = (QTextOption *)that;
   cthat->setFlags(flags);
}

  // proto:  void QTextOption::setWrapMode(QTextOption::WrapMode wrap);
void demth_ZN11QTextOption11setWrapModeENS_8WrapModeE(void *that, QTextOption::WrapMode wrap)
{
  QTextOption *cthat = (QTextOption *)that;
   cthat->setWrapMode(wrap);
}

  // proto:  qreal QTextOption::tabStop();
qreal demth_ZNK11QTextOption7tabStopEv(void *that)
{
  QTextOption *cthat = (QTextOption *)that;
  return cthat->tabStop();
}

  // proto:  void QTextOption::setTabStop(qreal tabStop);
void demth_ZN11QTextOption10setTabStopEd(void *that, double tabStop)
{
  QTextOption *cthat = (QTextOption *)that;
   cthat->setTabStop(tabStop);
}

  // proto:  void QTextOption::setTextDirection(Qt::LayoutDirection aDirection);
void demth_ZN11QTextOption16setTextDirectionEN2Qt15LayoutDirectionE(void *that, Qt::LayoutDirection aDirection)
{
  QTextOption *cthat = (QTextOption *)that;
   cthat->setTextDirection(aDirection);
}

  // proto:  void QTextOption::setAlignment(Qt::Alignment alignment);
void demth_ZN11QTextOption12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment alignment)
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

