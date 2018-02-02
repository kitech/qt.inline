//  header block begin
// /usr/include/qt/QtWidgets/qtablewidget.h
#include <qtablewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableWidgetSelectionRange is pure virtual: false
// QTableWidgetSelectionRange has virtual projected: false
//  header block end

//  main block begin

class MyQTableWidgetSelectionRange : public QTableWidgetSelectionRange {
public:
  virtual ~MyQTableWidgetSelectionRange() {}
// void QTableWidgetSelectionRange()
MyQTableWidgetSelectionRange() : QTableWidgetSelectionRange() {}
// void QTableWidgetSelectionRange(int, int, int, int)
MyQTableWidgetSelectionRange(int top, int left, int bottom, int right) : QTableWidgetSelectionRange(top, left, bottom, right) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:55
// [-2] void QTableWidgetSelectionRange()
extern "C"
void* C_ZN26QTableWidgetSelectionRangeC2Ev() {
  return  new QTableWidgetSelectionRange();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:56
// [-2] void QTableWidgetSelectionRange(int, int, int, int)
extern "C"
void* C_ZN26QTableWidgetSelectionRangeC2Eiiii(int top, int left, int bottom, int right) {
  return  new QTableWidgetSelectionRange(top, left, bottom, right);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:58
// [-2] void ~QTableWidgetSelectionRange()
extern "C"
void C_ZN26QTableWidgetSelectionRangeD2Ev(void *this_) {
  delete (QTableWidgetSelectionRange*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:60
// [4] int topRow()
extern "C"
int C_ZNK26QTableWidgetSelectionRange6topRowEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->topRow();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:61
// [4] int bottomRow()
extern "C"
int C_ZNK26QTableWidgetSelectionRange9bottomRowEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->bottomRow();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:62
// [4] int leftColumn()
extern "C"
int C_ZNK26QTableWidgetSelectionRange10leftColumnEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->leftColumn();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:63
// [4] int rightColumn()
extern "C"
int C_ZNK26QTableWidgetSelectionRange11rightColumnEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->rightColumn();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:64
// [4] int rowCount()
extern "C"
int C_ZNK26QTableWidgetSelectionRange8rowCountEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->rowCount();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:65
// [4] int columnCount()
extern "C"
int C_ZNK26QTableWidgetSelectionRange11columnCountEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->columnCount();
}
//  main block end
