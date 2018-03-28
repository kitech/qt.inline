//  header block begin
// since 0x040400
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

class Q_DECL_EXPORT MyQTextTableCellFormat : public QTextTableCellFormat {
public:
  virtual ~MyQTextTableCellFormat() {}
// void QTextTableCellFormat()
MyQTextTableCellFormat() : QTextTableCellFormat() {}
// void QTextTableCellFormat(const QTextFormat &)
MyQTextTableCellFormat(const QTextFormat & fmt_) : QTextTableCellFormat(fmt_) {}
};

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:945
// [-2] void QTextTableCellFormat()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN20QTextTableCellFormatC2Ev() {
  return  new QTextTableCellFormat();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:947
// [1] bool isValid()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK20QTextTableCellFormat7isValidEv(void *this_) {
  return (bool)((QTextTableCellFormat*)this_)->isValid();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:949
// [-2] void setTopPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat13setTopPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setTopPadding(padding);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:950
// [8] qreal topPadding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QTextTableCellFormat10topPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->topPadding();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:952
// [-2] void setBottomPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat16setBottomPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setBottomPadding(padding);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:953
// [8] qreal bottomPadding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QTextTableCellFormat13bottomPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->bottomPadding();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:955
// [-2] void setLeftPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat14setLeftPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setLeftPadding(padding);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:956
// [8] qreal leftPadding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QTextTableCellFormat11leftPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->leftPadding();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:958
// [-2] void setRightPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat15setRightPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setRightPadding(padding);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:959
// [8] qreal rightPadding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QTextTableCellFormat12rightPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->rightPadding();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:961
// [-2] void setPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat10setPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setPadding(padding);
}
#endif // QT_VERSION >= 0x040400


extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormatD2Ev(void *this_) {
  delete (QTextTableCellFormat*)(this_);
}
//  main block end
