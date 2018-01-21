//  header block begin
// /usr/include/qt/QtGui/qtextoption.h
#include <qtextoption.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextoption.h:84
// void QTextOption()
extern "C"
void* C_ZN11QTextOptionC1Ev() {
  return new QTextOption();
}
// /usr/include/qt/QtGui/qtextoption.h:85
// void QTextOption(Qt::Alignment)
extern "C"
void* C_ZN11QTextOptionC1E6QFlagsIN2Qt13AlignmentFlagEE(QFlags<Qt::AlignmentFlag> alignment) {
  return new QTextOption(alignment);
}
// /usr/include/qt/QtGui/qtextoption.h:86
// void ~QTextOption()
extern "C"
void C_ZN11QTextOptionD1Ev(void *this_) {
  delete (QTextOption*)(this_);
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:91
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN11QTextOption12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QTextOption*)this_)->setAlignment(alignment);
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:92
// Qt::Alignment alignment()
extern "C"
void C_ZNK11QTextOption9alignmentEv(void *this_) {
  /*return*/ ((QTextOption*)this_)->alignment();
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:94
// void setTextDirection(Qt::LayoutDirection)
extern "C"
void C_ZN11QTextOption16setTextDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection aDirection) {
  ((QTextOption*)this_)->setTextDirection(aDirection);
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:95
// Qt::LayoutDirection textDirection()
extern "C"
void C_ZNK11QTextOption13textDirectionEv(void *this_) {
  /*return*/ ((QTextOption*)this_)->textDirection();
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:104
// void setWrapMode(enum QTextOption::WrapMode)
extern "C"
void C_ZN11QTextOption11setWrapModeENS_8WrapModeE(void *this_, QTextOption::WrapMode wrap) {
  ((QTextOption*)this_)->setWrapMode(wrap);
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:105
// QTextOption::WrapMode wrapMode()
extern "C"
void C_ZNK11QTextOption8wrapModeEv(void *this_) {
  /*return*/ ((QTextOption*)this_)->wrapMode();
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:116
// void setFlags(Flags)
extern "C"
void C_ZN11QTextOption8setFlagsE6QFlagsINS_4FlagEE(void *this_, QFlags<QTextOption::Flag> flags) {
  ((QTextOption*)this_)->setFlags(flags);
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:117
// Flags flags()
extern "C"
void C_ZNK11QTextOption5flagsEv(void *this_) {
  /*return*/ ((QTextOption*)this_)->flags();
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:119
// void setTabStop(qreal)
extern "C"
void C_ZN11QTextOption10setTabStopEd(void *this_, qreal tabStop) {
  ((QTextOption*)this_)->setTabStop(tabStop);
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:120
// qreal tabStop()
extern "C"
void C_ZNK11QTextOption7tabStopEv(void *this_) {
  /*return*/ ((QTextOption*)this_)->tabStop();
}
// /usr/include/qt/QtGui/qtextoption.h:122
// void setTabArray(const QList<qreal> &)
extern "C"
void C_ZN11QTextOption11setTabArrayERK5QListIdE(void *this_, const QList<qreal> & tabStops) {
  ((QTextOption*)this_)->setTabArray(tabStops);
}
// /usr/include/qt/QtGui/qtextoption.h:123
// QList<qreal> tabArray()
extern "C"
void C_ZNK11QTextOption8tabArrayEv(void *this_) {
  /*return*/ ((QTextOption*)this_)->tabArray();
}
// /usr/include/qt/QtGui/qtextoption.h:125
// void setTabs(const QList<struct QTextOption::Tab> &)
extern "C"
void C_ZN11QTextOption7setTabsERK5QListINS_3TabEE(void *this_, const QList<QTextOption::Tab> & tabStops) {
  ((QTextOption*)this_)->setTabs(tabStops);
}
// /usr/include/qt/QtGui/qtextoption.h:126
// QList<QTextOption::Tab> tabs()
extern "C"
void C_ZNK11QTextOption4tabsEv(void *this_) {
  /*return*/ ((QTextOption*)this_)->tabs();
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:128
// void setUseDesignMetrics(_Bool)
extern "C"
void C_ZN11QTextOption19setUseDesignMetricsEb(void *this_, bool b) {
  ((QTextOption*)this_)->setUseDesignMetrics(b);
}
// inline
// /usr/include/qt/QtGui/qtextoption.h:129
// bool useDesignMetrics()
extern "C"
void C_ZNK11QTextOption16useDesignMetricsEv(void *this_) {
  /*return*/ ((QTextOption*)this_)->useDesignMetrics();
}
//  main block end
