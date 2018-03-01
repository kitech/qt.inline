//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTableFormat is pure virtual: false
// QTextTableFormat has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextTableFormat : public QTextTableFormat {
public:
  virtual ~MyQTextTableFormat() {}
// void QTextTableFormat()
MyQTextTableFormat() : QTextTableFormat() {}
// void QTextTableFormat(const class QTextFormat &)
MyQTextTableFormat(const QTextFormat & fmt_) : QTextTableFormat(fmt_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:887
// [-2] void QTextTableFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN16QTextTableFormatC2Ev() {
  return  new QTextTableFormat();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:889
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTextTableFormat7isValidEv(void *this_) {
  return (bool)((QTextTableFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:891
// [4] int columns()
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextTableFormat7columnsEv(void *this_) {
  return (int)((QTextTableFormat*)this_)->columns();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:893
// [-2] void setColumns(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormat10setColumnsEi(void *this_, int columns) {
  ((QTextTableFormat*)this_)->setColumns(columns);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:901
// [-2] void clearColumnWidthConstraints()
extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormat27clearColumnWidthConstraintsEv(void *this_) {
  ((QTextTableFormat*)this_)->clearColumnWidthConstraints();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:904
// [8] qreal cellSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextTableFormat11cellSpacingEv(void *this_) {
  return (qreal)((QTextTableFormat*)this_)->cellSpacing();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:906
// [-2] void setCellSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormat14setCellSpacingEd(void *this_, qreal spacing) {
  ((QTextTableFormat*)this_)->setCellSpacing(spacing);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:909
// [8] qreal cellPadding()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextTableFormat11cellPaddingEv(void *this_) {
  return (qreal)((QTextTableFormat*)this_)->cellPadding();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:911
// [-2] void setCellPadding(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormat14setCellPaddingEd(void *this_, qreal padding) {
  ((QTextTableFormat*)this_)->setCellPadding(padding);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:913
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QTextTableFormat*)this_)->setAlignment(alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:914
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK16QTextTableFormat9alignmentEv(void *this_) {
  return (Qt::Alignment)((QTextTableFormat*)this_)->alignment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:917
// [-2] void setHeaderRowCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormat17setHeaderRowCountEi(void *this_, int count) {
  ((QTextTableFormat*)this_)->setHeaderRowCount(count);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:919
// [4] int headerRowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextTableFormat14headerRowCountEv(void *this_) {
  return (int)((QTextTableFormat*)this_)->headerRowCount();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormatD2Ev(void *this_) {
  delete (QTextTableFormat*)(this_);
}
//  main block end
