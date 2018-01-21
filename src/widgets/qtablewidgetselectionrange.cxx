//  header block begin
// /usr/include/qt/QtWidgets/qtablewidget.h
#include <qtablewidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qtablewidget.h:56
// void QTableWidgetSelectionRange()
extern "C"
void* C_ZN26QTableWidgetSelectionRangeC1Ev() {
  return new QTableWidgetSelectionRange();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:57
// void QTableWidgetSelectionRange(int, int, int, int)
extern "C"
void* C_ZN26QTableWidgetSelectionRangeC1Eiiii(int top, int left, int bottom, int right) {
  return new QTableWidgetSelectionRange(top, left, bottom, right);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:59
// void ~QTableWidgetSelectionRange()
extern "C"
void C_ZN26QTableWidgetSelectionRangeD1Ev(void *this_) {
  delete (QTableWidgetSelectionRange*)(this_);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:61
// int topRow()
extern "C"
void C_ZNK26QTableWidgetSelectionRange6topRowEv(void *this_) {
  /*return*/ ((QTableWidgetSelectionRange*)this_)->topRow();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:62
// int bottomRow()
extern "C"
void C_ZNK26QTableWidgetSelectionRange9bottomRowEv(void *this_) {
  /*return*/ ((QTableWidgetSelectionRange*)this_)->bottomRow();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:63
// int leftColumn()
extern "C"
void C_ZNK26QTableWidgetSelectionRange10leftColumnEv(void *this_) {
  /*return*/ ((QTableWidgetSelectionRange*)this_)->leftColumn();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:64
// int rightColumn()
extern "C"
void C_ZNK26QTableWidgetSelectionRange11rightColumnEv(void *this_) {
  /*return*/ ((QTableWidgetSelectionRange*)this_)->rightColumn();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:65
// int rowCount()
extern "C"
void C_ZNK26QTableWidgetSelectionRange8rowCountEv(void *this_) {
  /*return*/ ((QTableWidgetSelectionRange*)this_)->rowCount();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:66
// int columnCount()
extern "C"
void C_ZNK26QTableWidgetSelectionRange11columnCountEv(void *this_) {
  /*return*/ ((QTableWidgetSelectionRange*)this_)->columnCount();
}
//  main block end
