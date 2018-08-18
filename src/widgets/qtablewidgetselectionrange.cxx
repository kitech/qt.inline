//  header block begin
// /usr/include/qt/QtWidgets/qtablewidget.h
#ifndef protected
#define protected public
#endif
#include <qtablewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableWidgetSelectionRange is pure virtual: false
// QTableWidgetSelectionRange has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTableWidgetSelectionRange : public QTableWidgetSelectionRange {
public:
  virtual ~MyQTableWidgetSelectionRange() {}
// void QTableWidgetSelectionRange()
MyQTableWidgetSelectionRange() : QTableWidgetSelectionRange() {}
// void QTableWidgetSelectionRange(int, int, int, int)
MyQTableWidgetSelectionRange(int top, int left, int bottom, int right) : QTableWidgetSelectionRange(top, left, bottom, right) {}
// void QTableWidgetSelectionRange(const QTableWidgetSelectionRange &)
MyQTableWidgetSelectionRange(const QTableWidgetSelectionRange & other) : QTableWidgetSelectionRange(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:55
// [-2] void QTableWidgetSelectionRange()
extern "C" Q_DECL_EXPORT
void* C_ZN26QTableWidgetSelectionRangeC2Ev() {
  return  new QTableWidgetSelectionRange();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:56
// [-2] void QTableWidgetSelectionRange(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QTableWidgetSelectionRangeC2Eiiii(int top, int left, int bottom, int right) {
  return  new QTableWidgetSelectionRange(top, left, bottom, right);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:57
// [-2] void QTableWidgetSelectionRange(const QTableWidgetSelectionRange &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QTableWidgetSelectionRangeC2ERKS_(QTableWidgetSelectionRange* other) {
  return  new QTableWidgetSelectionRange(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:58
// [-2] void ~QTableWidgetSelectionRange()
extern "C" Q_DECL_EXPORT
void C_ZN26QTableWidgetSelectionRangeD2Ev(void *this_) {
  delete (QTableWidgetSelectionRange*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:60
// [4] int topRow()
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange6topRowEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->topRow();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:61
// [4] int bottomRow()
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange9bottomRowEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->bottomRow();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:62
// [4] int leftColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange10leftColumnEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->leftColumn();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:63
// [4] int rightColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange11rightColumnEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->rightColumn();
}

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:64
// [4] int rowCount()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange8rowCountEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->rowCount();
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:65
// [4] int columnCount()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange11columnCountEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->columnCount();
}
#endif // QT_VERSION >= 0x040100

//  main block end
