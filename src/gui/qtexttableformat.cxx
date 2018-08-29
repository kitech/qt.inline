//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTableFormat is pure virtual: false
// QTextTableFormat has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTextTableFormat_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextTableFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextTableFormat_t qt_meta_stringdata_MyQTextTableFormat = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQTextTableFormat"
  },
  "MyQTextTableFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextTableFormat[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQTextTableFormat : public QTextTableFormat {
public:
  virtual ~MyQTextTableFormat() {}
// void QTextTableFormat()
MyQTextTableFormat() : QTextTableFormat() {}
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
// /usr/include/qt/QtGui/qtextformat.h:895
// [-2] void setColumnWidthConstraints(const QVector<QTextLength> &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormat25setColumnWidthConstraintsERK7QVectorI11QTextLengthE(void *this_, QVector<QTextLength>* constraints) {
  ((QTextTableFormat*)this_)->setColumnWidthConstraints(*constraints);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:898
// [8] QVector<QTextLength> columnWidthConstraints()
extern "C" Q_DECL_EXPORT
void C_ZNK16QTextTableFormat22columnWidthConstraintsEv(void *this_) {
  auto rv = ((QTextTableFormat*)this_)->columnWidthConstraints();
/*return rv;*/
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
// since 4.2
// /usr/include/qt/QtGui/qtextformat.h:917
// [-2] void setHeaderRowCount(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormat17setHeaderRowCountEi(void *this_, int count) {
  ((QTextTableFormat*)this_)->setHeaderRowCount(count);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextformat.h:919
// [4] int headerRowCount()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextTableFormat14headerRowCountEv(void *this_) {
  return (int)((QTextTableFormat*)this_)->headerRowCount();
}
#endif // QT_VERSION >= 0x040200


extern "C" Q_DECL_EXPORT
void C_ZN16QTextTableFormatD2Ev(void *this_) {
  delete (QTextTableFormat*)(this_);
}
//  main block end
