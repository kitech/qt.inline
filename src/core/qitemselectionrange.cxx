//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(itemmodel)
// /usr/include/qt/QtCore/qitemselectionmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemselectionmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QItemSelectionRange is pure virtual: false
// QItemSelectionRange has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQItemSelectionRange_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQItemSelectionRange_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQItemSelectionRange_t qt_meta_stringdata_MyQItemSelectionRange = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQItemSelectionRange"
  },
  "MyQItemSelectionRange"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQItemSelectionRange[] = {
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
class Q_DECL_EXPORT MyQItemSelectionRange : public QItemSelectionRange {
public:
  virtual ~MyQItemSelectionRange() {}
// void QItemSelectionRange()
MyQItemSelectionRange() : QItemSelectionRange() {}
// void QItemSelectionRange(const QItemSelectionRange &)
MyQItemSelectionRange(const QItemSelectionRange & other) : QItemSelectionRange(other) {}
// void QItemSelectionRange(QItemSelectionRange &&)
MyQItemSelectionRange(QItemSelectionRange && other) : QItemSelectionRange(other) {}
// void QItemSelectionRange(const QModelIndex &, const QModelIndex &)
MyQItemSelectionRange(const QModelIndex & topL, const QModelIndex & bottomR) : QItemSelectionRange(topL, bottomR) {}
// void QItemSelectionRange(const QModelIndex &)
MyQItemSelectionRange(const QModelIndex & index) : QItemSelectionRange(index) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:58
// [-2] void QItemSelectionRange()
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionRangeC2Ev() {
  return  new QItemSelectionRange();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:61
// [-2] void QItemSelectionRange(const QItemSelectionRange &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionRangeC2ERKS_(QItemSelectionRange* other) {
  return  new QItemSelectionRange(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:64
// [-2] void QItemSelectionRange(QItemSelectionRange &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionRangeC2EOS_(QItemSelectionRange && other) {
  return  new QItemSelectionRange(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:66
// [16] QItemSelectionRange & operator=(QItemSelectionRange &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionRangeaSEOS_(void *this_, QItemSelectionRange && other) {
  auto& rv = ((QItemSelectionRange*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:69
// [16] QItemSelectionRange & operator=(const QItemSelectionRange &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionRangeaSERKS_(void *this_, QItemSelectionRange* other) {
  auto& rv = ((QItemSelectionRange*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:72
// [-2] void QItemSelectionRange(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionRangeC2ERK11QModelIndexS2_(QModelIndex* topL, QModelIndex* bottomR) {
  return  new QItemSelectionRange(*topL, *bottomR);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:73
// [-2] void QItemSelectionRange(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionRangeC2ERK11QModelIndex(QModelIndex* index) {
  return  new QItemSelectionRange(*index);
}

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qitemselectionmodel.h:75
// [-2] void swap(QItemSelectionRange &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionRange4swapERS_(void *this_, QItemSelectionRange* other) {
  ((QItemSelectionRange*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:81
// [4] int top()
extern "C" Q_DECL_EXPORT
int C_ZNK19QItemSelectionRange3topEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->top();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:82
// [4] int left()
extern "C" Q_DECL_EXPORT
int C_ZNK19QItemSelectionRange4leftEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->left();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:83
// [4] int bottom()
extern "C" Q_DECL_EXPORT
int C_ZNK19QItemSelectionRange6bottomEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->bottom();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:84
// [4] int right()
extern "C" Q_DECL_EXPORT
int C_ZNK19QItemSelectionRange5rightEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->right();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:85
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK19QItemSelectionRange5widthEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:86
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK19QItemSelectionRange6heightEv(void *this_) {
  return (int)((QItemSelectionRange*)this_)->height();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:88
// [8] const QPersistentModelIndex & topLeft()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionRange7topLeftEv(void *this_) {
  auto& rv = ((QItemSelectionRange*)this_)->topLeft();
return new QPersistentModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:89
// [8] const QPersistentModelIndex & bottomRight()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionRange11bottomRightEv(void *this_) {
  auto& rv = ((QItemSelectionRange*)this_)->bottomRight();
return new QPersistentModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:90
// [24] QModelIndex parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionRange6parentEv(void *this_) {
  auto rv = ((QItemSelectionRange*)this_)->parent();
return new QModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:91
// [8] const QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionRange5modelEv(void *this_) {
  return (void*)((QItemSelectionRange*)this_)->model();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:93
// [1] bool contains(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionRange8containsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QItemSelectionRange*)this_)->contains(*index);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:100
// [1] bool contains(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionRange8containsEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parentIndex) {
  return (bool)((QItemSelectionRange*)this_)->contains(row, column, *parentIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:107
// [1] bool intersects(const QItemSelectionRange &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionRange10intersectsERKS_(void *this_, QItemSelectionRange* other) {
  return (bool)((QItemSelectionRange*)this_)->intersects(*other);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:112
// [16] QItemSelectionRange intersected(const QItemSelectionRange &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionRange11intersectedERKS_(void *this_, QItemSelectionRange* other) {
  auto rv = ((QItemSelectionRange*)this_)->intersected(*other);
return new QItemSelectionRange(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:115
// [1] bool operator==(const QItemSelectionRange &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionRangeeqERKS_(void *this_, QItemSelectionRange* other) {
  return (bool)((QItemSelectionRange*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:117
// [1] bool operator!=(const QItemSelectionRange &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionRangeneERKS_(void *this_, QItemSelectionRange* other) {
  return (bool)((QItemSelectionRange*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:119
// [1] bool operator<(const QItemSelectionRange &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionRangeltERKS_(void *this_, QItemSelectionRange* other) {
  return (bool)((QItemSelectionRange*)this_)->operator<(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:121
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionRange7isValidEv(void *this_) {
  return (bool)((QItemSelectionRange*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qitemselectionmodel.h:127
// [1] bool isEmpty()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionRange7isEmptyEv(void *this_) {
  return (bool)((QItemSelectionRange*)this_)->isEmpty();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:129
// [8] QModelIndexList indexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK19QItemSelectionRange7indexesEv(void *this_) {
  auto rv = ((QItemSelectionRange*)this_)->indexes();
return new QModelIndexList(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionRangeD2Ev(void *this_) {
  delete (QItemSelectionRange*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
