//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(itemmodel)
// /usr/include/qt/QtCore/qitemselectionmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemselectionmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QItemSelectionRange is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qitemselectionrange(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:58
// [-2] void QItemSelectionRange() 
// (12)qm3558485819 (28)_ZN19QItemSelectionRangeC2Ev
/*void* qm3558485819()*/{
  ;
  this_ =  new QItemSelectionRange();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:61
// [-2] void QItemSelectionRange(const QItemSelectionRange &) 
// (10)qm31197722 (31)_ZN19QItemSelectionRangeC2ERKS_
/*void* qm31197722(const QItemSelectionRange & other)*/{
  const QItemSelectionRange & other = *(const QItemSelectionRange *)this_;
  this_ =  new QItemSelectionRange(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:63
// [-2] void QItemSelectionRange(QItemSelectionRange &&) 
// (12)qm2537719913 (30)_ZN19QItemSelectionRangeC2EOS_
/*void* qm2537719913(QItemSelectionRange && other)*/{
  QItemSelectionRange && other =  static_cast<QItemSelectionRange &&>(*(QItemSelectionRange *)this_);
  this_ =  new QItemSelectionRange(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:65
// [16] QItemSelectionRange & operator=(QItemSelectionRange &&) 
// (12)qm2037674665 (30)_ZN19QItemSelectionRangeaSEOS_
//static
/*void qm2037674665(QItemSelectionRange && other)*/ {
  QItemSelectionRange && other =  static_cast<QItemSelectionRange &&>(*(QItemSelectionRange *)this_);
  (void) ((QItemSelectionRange*)this_)->operator=(other);
  // auto xptr = (QItemSelectionRange & (QItemSelectionRange::*)(QItemSelectionRange&&) ) &QItemSelectionRange::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:67
// [16] QItemSelectionRange & operator=(const QItemSelectionRange &) 
// (12)qm2589392464 (31)_ZN19QItemSelectionRangeaSERKS_
//static
/*void qm2589392464(const QItemSelectionRange & other)*/ {
  const QItemSelectionRange & other = *(const QItemSelectionRange *)this_;
  (void) ((QItemSelectionRange*)this_)->operator=(other);
  // auto xptr = (QItemSelectionRange & (QItemSelectionRange::*)(QItemSelectionRange const&) ) &QItemSelectionRange::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:70
// [-2] void QItemSelectionRange(const QModelIndex &, const QModelIndex &) 
// (12)qm1480294449 (45)_ZN19QItemSelectionRangeC2ERK11QModelIndexS2_
/*void* qm1480294449(const QModelIndex & topL, const QModelIndex & bottomR)*/{
  const QModelIndex & topL = *(const QModelIndex *)this_; const QModelIndex & bottomR = *(const QModelIndex *)this_;
  this_ =  new QItemSelectionRange(topL, bottomR);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:71
// [-2] void QItemSelectionRange(const QModelIndex &) 
// (12)qm2240717409 (42)_ZN19QItemSelectionRangeC2ERK11QModelIndex
/*void* qm2240717409(const QModelIndex & index)*/{
  const QModelIndex & index = *(const QModelIndex *)this_;
  this_ =  new QItemSelectionRange(index);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:73
// [-2] void swap(QItemSelectionRange &) 
// (11)qm484441476 (33)_ZN19QItemSelectionRange4swapERS_
//static
/*void qm484441476(QItemSelectionRange & other)*/ {
  QItemSelectionRange & other = *(QItemSelectionRange *)this_;
  (void) ((QItemSelectionRange*)this_)->swap(other);
   auto xptr = (void (QItemSelectionRange::*)(QItemSelectionRange&) ) &QItemSelectionRange::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:79
// [4] int top() const
// (11)qm965057264 (31)_ZNK19QItemSelectionRange3topEv
//static
/*void qm965057264()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->top();
   auto xptr = (int (QItemSelectionRange::*)() const ) &QItemSelectionRange::top;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:80
// [4] int left() const
// (11)qm314705935 (32)_ZNK19QItemSelectionRange4leftEv
//static
/*void qm314705935()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->left();
   auto xptr = (int (QItemSelectionRange::*)() const ) &QItemSelectionRange::left;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:81
// [4] int bottom() const
// (12)qm4061937192 (34)_ZNK19QItemSelectionRange6bottomEv
//static
/*void qm4061937192()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->bottom();
   auto xptr = (int (QItemSelectionRange::*)() const ) &QItemSelectionRange::bottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:82
// [4] int right() const
// (12)qm2167269483 (33)_ZNK19QItemSelectionRange5rightEv
//static
/*void qm2167269483()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->right();
   auto xptr = (int (QItemSelectionRange::*)() const ) &QItemSelectionRange::right;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:83
// [4] int width() const
// (12)qm2605059887 (33)_ZNK19QItemSelectionRange5widthEv
//static
/*void qm2605059887()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->width();
   auto xptr = (int (QItemSelectionRange::*)() const ) &QItemSelectionRange::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:84
// [4] int height() const
// (12)qm3515097599 (34)_ZNK19QItemSelectionRange6heightEv
//static
/*void qm3515097599()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->height();
   auto xptr = (int (QItemSelectionRange::*)() const ) &QItemSelectionRange::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:86
// [8] const QPersistentModelIndex & topLeft() const
// (12)qm1043204961 (35)_ZNK19QItemSelectionRange7topLeftEv
//static
/*void qm1043204961()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->topLeft();
   auto xptr = (const QPersistentModelIndex & (QItemSelectionRange::*)() const ) &QItemSelectionRange::topLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:87
// [8] const QPersistentModelIndex & bottomRight() const
// (12)qm1868305477 (40)_ZNK19QItemSelectionRange11bottomRightEv
//static
/*void qm1868305477()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->bottomRight();
   auto xptr = (const QPersistentModelIndex & (QItemSelectionRange::*)() const ) &QItemSelectionRange::bottomRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:88
// [24] QModelIndex parent() const
// (12)qm3157250454 (34)_ZNK19QItemSelectionRange6parentEv
//static
/*void qm3157250454()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->parent();
   auto xptr = (QModelIndex (QItemSelectionRange::*)() const ) &QItemSelectionRange::parent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:89
// [8] const QAbstractItemModel * model() const
// (12)qm1629337492 (33)_ZNK19QItemSelectionRange5modelEv
//static
/*void qm1629337492()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->model();
   auto xptr = (const QAbstractItemModel * (QItemSelectionRange::*)() const ) &QItemSelectionRange::model;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:91
// [1] bool contains(const QModelIndex &) const
// (12)qm3464857811 (50)_ZNK19QItemSelectionRange8containsERK11QModelIndex
//static
/*void qm3464857811(const QModelIndex & index)*/ {
  const QModelIndex & index = *(const QModelIndex *)this_;
  (void) ((QItemSelectionRange*)this_)->contains(index);
   auto xptr = (bool (QItemSelectionRange::*)(QModelIndex const&) const ) &QItemSelectionRange::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:98
// [1] bool contains(int, int, const QModelIndex &) const
// (11)qm663915484 (52)_ZNK19QItemSelectionRange8containsEiiRK11QModelIndex
//static
/*void qm663915484(int row, int column, const QModelIndex & parentIndex)*/ {
  int row = *(int*)this_; int column = *(int*)this_; const QModelIndex & parentIndex = *(const QModelIndex *)this_;
  (void) ((QItemSelectionRange*)this_)->contains(row, column, parentIndex);
   auto xptr = (bool (QItemSelectionRange::*)(int, int, QModelIndex const&) const ) &QItemSelectionRange::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:113
// [1] bool operator==(const QItemSelectionRange &) const
// (12)qm3887936685 (32)_ZNK19QItemSelectionRangeeqERKS_
//static
/*void qm3887936685(const QItemSelectionRange & other)*/ {
  const QItemSelectionRange & other = *(const QItemSelectionRange *)this_;
  (void) ((QItemSelectionRange*)this_)->operator==(other);
  // auto xptr = (bool (QItemSelectionRange::*)(QItemSelectionRange const&) const ) &QItemSelectionRange::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:115
// [1] bool operator!=(const QItemSelectionRange &) const
// (12)qm2113741018 (32)_ZNK19QItemSelectionRangeneERKS_
//static
/*void qm2113741018(const QItemSelectionRange & other)*/ {
  const QItemSelectionRange & other = *(const QItemSelectionRange *)this_;
  (void) ((QItemSelectionRange*)this_)->operator!=(other);
  // auto xptr = (bool (QItemSelectionRange::*)(QItemSelectionRange const&) const ) &QItemSelectionRange::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:121
// [1] bool isValid() const
// (11)qm381632826 (35)_ZNK19QItemSelectionRange7isValidEv
//static
/*void qm381632826()*/ {
  ;
  (void) ((QItemSelectionRange*)this_)->isValid();
   auto xptr = (bool (QItemSelectionRange::*)() const ) &QItemSelectionRange::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QItemSelectionRangeD2Ev(void *this_)*/ {
  delete (QItemSelectionRange*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qitemselectionrange
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
