//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTableCellFormat is pure virtual: false
// QTextTableCellFormat has virtual projected: false
//  header block end

//  main block begin

class MyQTextTableCellFormat : public QTextTableCellFormat {
public:
  virtual ~MyQTextTableCellFormat() {}
// void QTextTableCellFormat()
MyQTextTableCellFormat() : QTextTableCellFormat() {}
// void QTextTableCellFormat(const class QTextFormat &)
MyQTextTableCellFormat(const QTextFormat & fmt_) : QTextTableCellFormat(fmt_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:945
// [-2] void QTextTableCellFormat()
extern "C"
void* C_ZN20QTextTableCellFormatC2Ev() {
  return  new QTextTableCellFormat();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:947
// [1] bool isValid()
extern "C"
bool C_ZNK20QTextTableCellFormat7isValidEv(void *this_) {
  return (bool)((QTextTableCellFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:949
// [-2] void setTopPadding(qreal)
extern "C"
void C_ZN20QTextTableCellFormat13setTopPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setTopPadding(padding);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:950
// [8] qreal topPadding()
extern "C"
qreal C_ZNK20QTextTableCellFormat10topPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->topPadding();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:952
// [-2] void setBottomPadding(qreal)
extern "C"
void C_ZN20QTextTableCellFormat16setBottomPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setBottomPadding(padding);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:953
// [8] qreal bottomPadding()
extern "C"
qreal C_ZNK20QTextTableCellFormat13bottomPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->bottomPadding();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:955
// [-2] void setLeftPadding(qreal)
extern "C"
void C_ZN20QTextTableCellFormat14setLeftPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setLeftPadding(padding);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:956
// [8] qreal leftPadding()
extern "C"
qreal C_ZNK20QTextTableCellFormat11leftPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->leftPadding();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:958
// [-2] void setRightPadding(qreal)
extern "C"
void C_ZN20QTextTableCellFormat15setRightPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setRightPadding(padding);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:959
// [8] qreal rightPadding()
extern "C"
qreal C_ZNK20QTextTableCellFormat12rightPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->rightPadding();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:961
// [-2] void setPadding(qreal)
extern "C"
void C_ZN20QTextTableCellFormat10setPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setPadding(padding);
}


extern "C"
void C_ZN20QTextTableCellFormatD2Ev(void *this_) {
  delete (QTextTableCellFormat*)(this_);
}
//  main block end
