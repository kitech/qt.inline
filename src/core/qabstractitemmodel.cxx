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

// QAbstractItemModel is pure virtual: true true
// QAbstractItemModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractitemmodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:170
// [8] QString tr(const char *, const char *, int) 
// (12)qm3082176012 (34)_ZN18QAbstractItemModel2trEPKcS1_i
//static
/*void qm3082176012(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractItemModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractItemModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:228
// [1] bool insertRow(int, const QModelIndex &) 
// (12)qm2197740031 (50)_ZN18QAbstractItemModel9insertRowEiRK11QModelIndex
//static
/*void qm2197740031(int row, const QModelIndex & parent)*/ {
  int row = *(int*)this_; const QModelIndex & parent = *(const QModelIndex *)this_;
  (void) ((QAbstractItemModel*)this_)->insertRow(row, parent);
   auto xptr = (bool (QAbstractItemModel::*)(int, QModelIndex const&) ) &QAbstractItemModel::insertRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:229
// [1] bool insertColumn(int, const QModelIndex &) 
// (12)qm2279385328 (54)_ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex
//static
/*void qm2279385328(int column, const QModelIndex & parent)*/ {
  int column = *(int*)this_; const QModelIndex & parent = *(const QModelIndex *)this_;
  (void) ((QAbstractItemModel*)this_)->insertColumn(column, parent);
   auto xptr = (bool (QAbstractItemModel::*)(int, QModelIndex const&) ) &QAbstractItemModel::insertColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:230
// [1] bool removeRow(int, const QModelIndex &) 
// (12)qm4007650377 (50)_ZN18QAbstractItemModel9removeRowEiRK11QModelIndex
//static
/*void qm4007650377(int row, const QModelIndex & parent)*/ {
  int row = *(int*)this_; const QModelIndex & parent = *(const QModelIndex *)this_;
  (void) ((QAbstractItemModel*)this_)->removeRow(row, parent);
   auto xptr = (bool (QAbstractItemModel::*)(int, QModelIndex const&) ) &QAbstractItemModel::removeRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:231
// [1] bool removeColumn(int, const QModelIndex &) 
// (12)qm1619948254 (54)_ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex
//static
/*void qm1619948254(int column, const QModelIndex & parent)*/ {
  int column = *(int*)this_; const QModelIndex & parent = *(const QModelIndex *)this_;
  (void) ((QAbstractItemModel*)this_)->removeColumn(column, parent);
   auto xptr = (bool (QAbstractItemModel::*)(int, QModelIndex const&) ) &QAbstractItemModel::removeColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:232
// [1] bool moveRow(const QModelIndex &, int, const QModelIndex &, int) 
// (12)qm3803393986 (52)_ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i
//static
/*void qm3803393986(const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild)*/ {
  const QModelIndex & sourceParent = *(const QModelIndex *)this_; int sourceRow = *(int*)this_; const QModelIndex & destinationParent = *(const QModelIndex *)this_; int destinationChild = *(int*)this_;
  (void) ((QAbstractItemModel*)this_)->moveRow(sourceParent, sourceRow, destinationParent, destinationChild);
   auto xptr = (bool (QAbstractItemModel::*)(QModelIndex const&, int, QModelIndex const&, int) ) &QAbstractItemModel::moveRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:234
// [1] bool moveColumn(const QModelIndex &, int, const QModelIndex &, int) 
// (12)qm1894749172 (56)_ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i
//static
/*void qm1894749172(const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild)*/ {
  const QModelIndex & sourceParent = *(const QModelIndex *)this_; int sourceColumn = *(int*)this_; const QModelIndex & destinationParent = *(const QModelIndex *)this_; int destinationChild = *(int*)this_;
  (void) ((QAbstractItemModel*)this_)->moveColumn(sourceParent, sourceColumn, destinationParent, destinationChild);
   auto xptr = (bool (QAbstractItemModel::*)(QModelIndex const&, int, QModelIndex const&, int) ) &QAbstractItemModel::moveColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QAbstractItemModelD2Ev(void *this_)*/ {
  delete (QAbstractItemModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractitemmodel
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
