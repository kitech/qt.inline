//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(itemmodel)
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QModelIndex is pure virtual: false false
// QModelIndex has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQModelIndex_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQModelIndex_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQModelIndex_t qt_meta_stringdata_MyQModelIndex = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQModelIndex"
  },
  "MyQModelIndex"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQModelIndex[] = {
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
class Q_DECL_EXPORT MyQModelIndex : public QModelIndex {
public:
  virtual ~MyQModelIndex() {}
// void QModelIndex()
MyQModelIndex() : QModelIndex() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmodelindex(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:60
// [-2] void QModelIndex() 
// (11)qm756365278 (20)_ZN11QModelIndexC2Ev
/*void* qm756365278()*/{
  ;
  this_ =  new QModelIndex();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:62
// [4] int row() const
// (12)qm3724840192 (23)_ZNK11QModelIndex3rowEv
//static
/*void qm3724840192()*/ {
  ;
  (void) ((QModelIndex*)this_)->row();
   auto xptr = (int (QModelIndex::*)() const ) &QModelIndex::row;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:63
// [4] int column() const
// (12)qm3046022154 (26)_ZNK11QModelIndex6columnEv
//static
/*void qm3046022154()*/ {
  ;
  (void) ((QModelIndex*)this_)->column();
   auto xptr = (int (QModelIndex::*)() const ) &QModelIndex::column;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:64
// [8] quintptr internalId() const
// (10)qm47055808 (31)_ZNK11QModelIndex10internalIdEv
//static
/*void qm47055808()*/ {
  ;
  (void) ((QModelIndex*)this_)->internalId();
   auto xptr = (unsigned long long (QModelIndex::*)() const ) &QModelIndex::internalId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:65
// [8] void * internalPointer() const
// (12)qm2841223468 (36)_ZNK11QModelIndex15internalPointerEv
//static
/*void qm2841223468()*/ {
  ;
  (void) ((QModelIndex*)this_)->internalPointer();
   auto xptr = (void * (QModelIndex::*)() const ) &QModelIndex::internalPointer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:66
// [24] QModelIndex parent() const
// (12)qm1304276158 (26)_ZNK11QModelIndex6parentEv
//static
/*void qm1304276158()*/ {
  ;
  (void) ((QModelIndex*)this_)->parent();
   auto xptr = (QModelIndex (QModelIndex::*)() const ) &QModelIndex::parent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:67
// [24] QModelIndex sibling(int, int) const
// (11)qm128912225 (28)_ZNK11QModelIndex7siblingEii
//static
/*void qm128912225(int row, int column)*/ {
  int row = *(int*)this_; int column = *(int*)this_;
  (void) ((QModelIndex*)this_)->sibling(row, column);
   auto xptr = (QModelIndex (QModelIndex::*)(int, int) const ) &QModelIndex::sibling;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:68
// [24] QModelIndex siblingAtColumn(int) const
// (12)qm2281150179 (36)_ZNK11QModelIndex15siblingAtColumnEi
//static
/*void qm2281150179(int column)*/ {
  int column = *(int*)this_;
  (void) ((QModelIndex*)this_)->siblingAtColumn(column);
   auto xptr = (QModelIndex (QModelIndex::*)(int) const ) &QModelIndex::siblingAtColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:69
// [24] QModelIndex siblingAtRow(int) const
// (12)qm3167847458 (33)_ZNK11QModelIndex12siblingAtRowEi
//static
/*void qm3167847458(int row)*/ {
  int row = *(int*)this_;
  (void) ((QModelIndex*)this_)->siblingAtRow(row);
   auto xptr = (QModelIndex (QModelIndex::*)(int) const ) &QModelIndex::siblingAtRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:73
// [16] QVariant data(int) const
// (12)qm2419095415 (24)_ZNK11QModelIndex4dataEi
//static
/*void qm2419095415(int role)*/ {
  int role = *(int*)this_;
  (void) ((QModelIndex*)this_)->data(role);
   auto xptr = (QVariant (QModelIndex::*)(int) const ) &QModelIndex::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:74
// [4] Qt::ItemFlags flags() const
// (12)qm3598866599 (25)_ZNK11QModelIndex5flagsEv
//static
/*void qm3598866599()*/ {
  ;
  (void) ((QModelIndex*)this_)->flags();
   auto xptr = (QFlags<Qt::ItemFlag> (QModelIndex::*)() const ) &QModelIndex::flags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:75
// [8] const QAbstractItemModel * model() const
// (11)qm662887749 (25)_ZNK11QModelIndex5modelEv
//static
/*void qm662887749()*/ {
  ;
  (void) ((QModelIndex*)this_)->model();
   auto xptr = (const QAbstractItemModel * (QModelIndex::*)() const ) &QModelIndex::model;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:76
// [1] bool isValid() const
// (11)qm603683773 (27)_ZNK11QModelIndex7isValidEv
//static
/*void qm603683773()*/ {
  ;
  (void) ((QModelIndex*)this_)->isValid();
   auto xptr = (bool (QModelIndex::*)() const ) &QModelIndex::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:77
// [1] bool operator==(const QModelIndex &) const
// (11)qm292133890 (24)_ZNK11QModelIndexeqERKS_
//static
/*void qm292133890(const QModelIndex & other)*/ {
  const QModelIndex & other = *(const QModelIndex *)this_;
  (void) ((QModelIndex*)this_)->operator==(other);
  // auto xptr = (bool (QModelIndex::*)(QModelIndex const&) const ) &QModelIndex::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:79
// [1] bool operator!=(const QModelIndex &) const
// (12)qm2334754933 (24)_ZNK11QModelIndexneERKS_
//static
/*void qm2334754933(const QModelIndex & other)*/ {
  const QModelIndex & other = *(const QModelIndex *)this_;
  (void) ((QModelIndex*)this_)->operator!=(other);
  // auto xptr = (bool (QModelIndex::*)(QModelIndex const&) const ) &QModelIndex::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:81
// [1] bool operator<(const QModelIndex &) const
// (12)qm3560720482 (24)_ZNK11QModelIndexltERKS_
//static
/*void qm3560720482(const QModelIndex & other)*/ {
  const QModelIndex & other = *(const QModelIndex *)this_;
  (void) ((QModelIndex*)this_)->operator<(other);
  // auto xptr = (bool (QModelIndex::*)(QModelIndex const&) const ) &QModelIndex::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QModelIndexD2Ev(void *this_)*/ {
  delete (QModelIndex*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmodelindex
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
