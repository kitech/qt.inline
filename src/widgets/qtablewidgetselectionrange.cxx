//  header block begin

// /usr/include/qt/QtWidgets/qtablewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtablewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableWidgetSelectionRange is pure virtual: false
// QTableWidgetSelectionRange has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTableWidgetSelectionRange_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTableWidgetSelectionRange_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTableWidgetSelectionRange_t qt_meta_stringdata_MyQTableWidgetSelectionRange = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQTableWidgetSelectionRange"
  },
  "MyQTableWidgetSelectionRange"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTableWidgetSelectionRange[] = {
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
// /usr/include/qt/QtWidgets/qtablewidget.h:57
// [-2] void QTableWidgetSelectionRange()
extern "C" Q_DECL_EXPORT
void* C_ZN26QTableWidgetSelectionRangeC2Ev() {
  return  new QTableWidgetSelectionRange();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:58
// [-2] void QTableWidgetSelectionRange(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QTableWidgetSelectionRangeC2Eiiii(int top, int left, int bottom, int right) {
  return  new QTableWidgetSelectionRange(top, left, bottom, right);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:59
// [-2] void QTableWidgetSelectionRange(const QTableWidgetSelectionRange &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QTableWidgetSelectionRangeC2ERKS_(QTableWidgetSelectionRange* other) {
  return  new QTableWidgetSelectionRange(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:60
// [-2] void ~QTableWidgetSelectionRange()
extern "C" Q_DECL_EXPORT
void C_ZN26QTableWidgetSelectionRangeD2Ev(void *this_) {
  delete (QTableWidgetSelectionRange*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:62
// [4] int topRow()
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange6topRowEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->topRow();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:63
// [4] int bottomRow()
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange9bottomRowEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->bottomRow();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:64
// [4] int leftColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange10leftColumnEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->leftColumn();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:65
// [4] int rightColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange11rightColumnEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->rightColumn();
}

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:66
// [4] int rowCount()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange8rowCountEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->rowCount();
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:67
// [4] int columnCount()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK26QTableWidgetSelectionRange11columnCountEv(void *this_) {
  return (int)((QTableWidgetSelectionRange*)this_)->columnCount();
}
#endif // QT_VERSION >= 0x040100

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
