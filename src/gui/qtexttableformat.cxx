//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextformat.h:886
// void QTextTableFormat()
extern "C"
void* C_ZN16QTextTableFormatC1Ev() {
  return new QTextTableFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:888
// bool isValid()
extern "C"
void C_ZNK16QTextTableFormat7isValidEv(void *this_) {
  /*return*/ ((QTextTableFormat*)this_)->isValid();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:890
// int columns()
extern "C"
void C_ZNK16QTextTableFormat7columnsEv(void *this_) {
  /*return*/ ((QTextTableFormat*)this_)->columns();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:892
// void setColumns(int)
extern "C"
void C_ZN16QTextTableFormat10setColumnsEi(void *this_, int columns) {
  ((QTextTableFormat*)this_)->setColumns(columns);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:894
// void setColumnWidthConstraints(const QVector<class QTextLength> &)
extern "C"
void C_ZN16QTextTableFormat25setColumnWidthConstraintsERK7QVectorI11QTextLengthE(void *this_, const QVector<QTextLength> & constraints) {
  ((QTextTableFormat*)this_)->setColumnWidthConstraints(constraints);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:897
// QVector<QTextLength> columnWidthConstraints()
extern "C"
void C_ZNK16QTextTableFormat22columnWidthConstraintsEv(void *this_) {
  /*return*/ ((QTextTableFormat*)this_)->columnWidthConstraints();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:900
// void clearColumnWidthConstraints()
extern "C"
void C_ZN16QTextTableFormat27clearColumnWidthConstraintsEv(void *this_) {
  ((QTextTableFormat*)this_)->clearColumnWidthConstraints();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:903
// qreal cellSpacing()
extern "C"
void C_ZNK16QTextTableFormat11cellSpacingEv(void *this_) {
  /*return*/ ((QTextTableFormat*)this_)->cellSpacing();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:905
// void setCellSpacing(qreal)
extern "C"
void C_ZN16QTextTableFormat14setCellSpacingEd(void *this_, qreal spacing) {
  ((QTextTableFormat*)this_)->setCellSpacing(spacing);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:908
// qreal cellPadding()
extern "C"
void C_ZNK16QTextTableFormat11cellPaddingEv(void *this_) {
  /*return*/ ((QTextTableFormat*)this_)->cellPadding();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:910
// void setCellPadding(qreal)
extern "C"
void C_ZN16QTextTableFormat14setCellPaddingEd(void *this_, qreal padding) {
  ((QTextTableFormat*)this_)->setCellPadding(padding);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:912
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN16QTextTableFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QTextTableFormat*)this_)->setAlignment(alignment);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:913
// Qt::Alignment alignment()
extern "C"
void C_ZNK16QTextTableFormat9alignmentEv(void *this_) {
  /*return*/ ((QTextTableFormat*)this_)->alignment();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:916
// void setHeaderRowCount(int)
extern "C"
void C_ZN16QTextTableFormat17setHeaderRowCountEi(void *this_, int count) {
  ((QTextTableFormat*)this_)->setHeaderRowCount(count);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:918
// int headerRowCount()
extern "C"
void C_ZNK16QTextTableFormat14headerRowCountEv(void *this_) {
  /*return*/ ((QTextTableFormat*)this_)->headerRowCount();
}
//  main block end
