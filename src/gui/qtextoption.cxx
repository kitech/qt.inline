// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qtextoption.h
// dst-file: /src/gui/qtextoption.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextoption.h>


#include <qlist.h>
#include <qglobal.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qtextoption_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 109, column 17>
//   // proto:  void QTextOption::setFlags(Flags flags);
if (true) {
  auto f = [](QTextOption flythis, QTextOption::Flags arg1) {
    ((QTextOption*)0)->setFlags(arg1);
    flythis.setFlags(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QTextOption8setFlagsE6QFlagsINS_4FlagEE setFlags(Flags)
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 98, column 17>
//   // proto:  void QTextOption::setWrapMode(QTextOption::WrapMode wrap);
if (true) {
  auto f = [](QTextOption flythis, QTextOption::WrapMode arg1) {
    ((QTextOption*)0)->setWrapMode(arg1);
    flythis.setWrapMode(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QTextOption11setWrapModeENS_8WrapModeE setWrapMode(enum QTextOption::WrapMode)
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 113, column 18>
//   // proto:  qreal QTextOption::tabStop();
if (true) {
  auto f = [](QTextOption flythis) {
    ((QTextOption*)0)->tabStop();
    flythis.tabStop();
  };
  if (f == nullptr){}
}
// _ZNK11QTextOption7tabStopEv tabStop()
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 121, column 10>
//   // proto:  void QTextOption::setUseDesignMetrics(bool b);
if (true) {
  auto f = [](QTextOption flythis, bool arg1) {
    ((QTextOption*)0)->setUseDesignMetrics(arg1);
    flythis.setUseDesignMetrics(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QTextOption19setUseDesignMetricsEb setUseDesignMetrics(_Bool)
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 112, column 17>
//   // proto:  void QTextOption::setTabStop(qreal tabStop);
if (true) {
  auto f = [](QTextOption flythis, qreal arg1) {
    ((QTextOption*)0)->setTabStop(arg1);
    flythis.setTabStop(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QTextOption10setTabStopEd setTabStop(qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 122, column 10>
//   // proto:  bool QTextOption::useDesignMetrics();
if (true) {
  auto f = [](QTextOption flythis) {
    ((QTextOption*)0)->useDesignMetrics();
    flythis.useDesignMetrics();
  };
  if (f == nullptr){}
}
// _ZNK11QTextOption16useDesignMetricsEv useDesignMetrics()
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 88, column 17>
//   // proto:  void QTextOption::setTextDirection(Qt::LayoutDirection aDirection);
if (true) {
  auto f = [](QTextOption flythis, Qt::LayoutDirection arg1) {
    ((QTextOption*)0)->setTextDirection(arg1);
    flythis.setTextDirection(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QTextOption16setTextDirectionEN2Qt15LayoutDirectionE setTextDirection(Qt::LayoutDirection)
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 110, column 18>
//   // proto:  Flags QTextOption::flags();
if (true) {
  auto f = [](QTextOption flythis) {
    ((QTextOption*)0)->flags();
    flythis.flags();
  };
  if (f == nullptr){}
}
// _ZNK11QTextOption5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 86, column 26>
//   // proto:  Qt::Alignment QTextOption::alignment();
if (true) {
  auto f = [](QTextOption flythis) {
    ((QTextOption*)0)->alignment();
    flythis.alignment();
  };
  if (f == nullptr){}
}
// _ZNK11QTextOption9alignmentEv alignment()
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 99, column 21>
//   // proto:  QTextOption::WrapMode QTextOption::wrapMode();
if (true) {
  auto f = [](QTextOption flythis) {
    ((QTextOption*)0)->wrapMode();
    flythis.wrapMode();
  };
  if (f == nullptr){}
}
// _ZNK11QTextOption8wrapModeEv wrapMode()
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 85, column 17>
//   // proto:  void QTextOption::setAlignment(Qt::Alignment alignment);
if (true) {
  auto f = [](QTextOption flythis, Qt::Alignment arg1) {
    ((QTextOption*)0)->setAlignment(arg1);
    flythis.setAlignment(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QTextOption12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 89, column 32>
//   // proto:  Qt::LayoutDirection QTextOption::textDirection();
if (true) {
  auto f = [](QTextOption flythis) {
    ((QTextOption*)0)->textDirection();
    flythis.textDirection();
  };
  if (f == nullptr){}
}
// _ZNK11QTextOption13textDirectionEv textDirection()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextOption_Class_Size()
{
  return sizeof(QTextOption);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 119, column 16>
//   // proto:  QList<QTextOption::Tab> QTextOption::tabs();
// _ZNK11QTextOption4tabsEv tabs()
extern "C"
QList<QTextOption::Tab>*
C_ZNK11QTextOption4tabsEv(void *qthis) {
  auto ret =
  ((QTextOption*)qthis)->tabs();
  return new QList<QTextOption::Tab>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 82, column 5>
//   // proto:  void QTextOption::QTextOption(const QTextOption & o);
extern "C"
QTextOption*
C_ZN11QTextOptionC2ERKS_(const QTextOption* arg1) {
  auto ret = new QTextOption(*((const QTextOption*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 109, column 17>
//   // proto:  void QTextOption::setFlags(Flags flags);
// _ZN11QTextOption8setFlagsE6QFlagsINS_4FlagEE setFlags(Flags)
extern "C"
void
C_ZN11QTextOption8setFlagsE6QFlagsINS_4FlagEE(void *qthis,
QTextOption::Flags arg1) {
  ((QTextOption*)qthis)->setFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 98, column 17>
//   // proto:  void QTextOption::setWrapMode(QTextOption::WrapMode wrap);
// _ZN11QTextOption11setWrapModeENS_8WrapModeE setWrapMode(enum QTextOption::WrapMode)
extern "C"
void
C_ZN11QTextOption11setWrapModeENS_8WrapModeE(void *qthis,
QTextOption::WrapMode arg1) {
  ((QTextOption*)qthis)->setWrapMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 79, column 18>
//   // proto:  void QTextOption::QTextOption(Qt::Alignment alignment);
extern "C"
QTextOption*
C_ZN11QTextOptionC2E6QFlagsIN2Qt13AlignmentFlagEE(Qt::Alignment* arg1) {
  auto ret = new QTextOption(*((Qt::Alignment*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 113, column 18>
//   // proto:  qreal QTextOption::tabStop();
// _ZNK11QTextOption7tabStopEv tabStop()
extern "C"
double
C_ZNK11QTextOption7tabStopEv(void *qthis) {
  auto ret =
  ((QTextOption*)qthis)->tabStop();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 121, column 10>
//   // proto:  void QTextOption::setUseDesignMetrics(bool b);
// _ZN11QTextOption19setUseDesignMetricsEb setUseDesignMetrics(_Bool)
extern "C"
void
C_ZN11QTextOption19setUseDesignMetricsEb(void *qthis,
bool arg1) {
  ((QTextOption*)qthis)->setUseDesignMetrics(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 112, column 17>
//   // proto:  void QTextOption::setTabStop(qreal tabStop);
// _ZN11QTextOption10setTabStopEd setTabStop(qreal)
extern "C"
void
C_ZN11QTextOption10setTabStopEd(void *qthis,
qreal arg1) {
  ((QTextOption*)qthis)->setTabStop(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 122, column 10>
//   // proto:  bool QTextOption::useDesignMetrics();
// _ZNK11QTextOption16useDesignMetricsEv useDesignMetrics()
extern "C"
bool
C_ZNK11QTextOption16useDesignMetricsEv(void *qthis) {
  auto ret =
  ((QTextOption*)qthis)->useDesignMetrics();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 115, column 10>
//   // proto:  void QTextOption::setTabArray(const QList<qreal> & tabStops);
// _ZN11QTextOption11setTabArrayERK5QListIdE setTabArray(const QList<qreal> &)
extern "C"
void
C_ZN11QTextOption11setTabArrayERK5QListIdE(void *qthis,
const QList<qreal>* arg1) {
  ((QTextOption*)qthis)->setTabArray(*((const QList<qreal>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 88, column 17>
//   // proto:  void QTextOption::setTextDirection(Qt::LayoutDirection aDirection);
// _ZN11QTextOption16setTextDirectionEN2Qt15LayoutDirectionE setTextDirection(Qt::LayoutDirection)
extern "C"
void
C_ZN11QTextOption16setTextDirectionEN2Qt15LayoutDirectionE(void *qthis,
Qt::LayoutDirection* arg1) {
  ((QTextOption*)qthis)->setTextDirection(*((Qt::LayoutDirection*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 110, column 18>
//   // proto:  Flags QTextOption::flags();
// _ZNK11QTextOption5flagsEv flags()
extern "C"
QFlags<QTextOption::Flag>*
C_ZNK11QTextOption5flagsEv(void *qthis) {
  auto ret =
  ((QTextOption*)qthis)->flags();
  return new QFlags<QTextOption::Flag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 86, column 26>
//   // proto:  Qt::Alignment QTextOption::alignment();
// _ZNK11QTextOption9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK11QTextOption9alignmentEv(void *qthis) {
  auto ret =
  ((QTextOption*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 99, column 21>
//   // proto:  QTextOption::WrapMode QTextOption::wrapMode();
// _ZNK11QTextOption8wrapModeEv wrapMode()
extern "C"
QTextOption::WrapMode
C_ZNK11QTextOption8wrapModeEv(void *qthis) {
  auto ret =
  ((QTextOption*)qthis)->wrapMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 85, column 17>
//   // proto:  void QTextOption::setAlignment(Qt::Alignment alignment);
// _ZN11QTextOption12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN11QTextOption12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QTextOption*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 78, column 5>
//   // proto:  void QTextOption::QTextOption();
extern "C"
QTextOption*
C_ZN11QTextOptionC2Ev() {
  auto ret = new QTextOption();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 89, column 32>
//   // proto:  Qt::LayoutDirection QTextOption::textDirection();
// _ZNK11QTextOption13textDirectionEv textDirection()
extern "C"
Qt::LayoutDirection
C_ZNK11QTextOption13textDirectionEv(void *qthis) {
  auto ret =
  ((QTextOption*)qthis)->textDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 116, column 18>
//   // proto:  QList<qreal> QTextOption::tabArray();
// _ZNK11QTextOption8tabArrayEv tabArray()
extern "C"
QList<double>*
C_ZNK11QTextOption8tabArrayEv(void *qthis) {
  auto ret =
  ((QTextOption*)qthis)->tabArray();
  return new QList<double>(ret); // 5
}
//   // proto:  void QTextOption::~QTextOption();
extern "C"
void C_ZN11QTextOptionD2Ev(void *qthis) {
  delete (QTextOption*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextoption.h', line 118, column 10>
//   // proto:  void QTextOption::setTabs(const QList<QTextOption::Tab> & tabStops);
// _ZN11QTextOption7setTabsERK5QListINS_3TabEE setTabs(const QList<struct QTextOption::Tab> &)
extern "C"
void
C_ZN11QTextOption7setTabsERK5QListINS_3TabEE(void *qthis,
const QList<QTextOption::Tab>* arg1) {
  ((QTextOption*)qthis)->setTabs(*((const QList<QTextOption::Tab>*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

