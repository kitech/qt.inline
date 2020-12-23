//  header block begin

#ifndef QT_MINIMAL
#include <QtGui/qtguiglobal.h>
#if QT_CONFIG(standarditemmodel)
// /usr/include/qt/QtGui/qstandarditemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstandarditemmodel.h>
#include <QtGui>
#include "callback_inherit.h"

// QStandardItemModel is pure virtual: false false
// QStandardItemModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstandarditemmodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:326
// [8] QString tr(const char *, const char *, int) 
// (11)qm748685543 (34)_ZN18QStandardItemModel2trEPKcS1_i
//static
/*void qm748685543(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStandardItemModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStandardItemModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:330
// [-2] void QStandardItemModel(QObject *) 
// (12)qm1827812101 (35)_ZN18QStandardItemModelC2EP7QObject
/*void* qm1827812101(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QStandardItemModel(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:331
// [-2] void QStandardItemModel(int, int, QObject *) 
// (11)qm450120332 (37)_ZN18QStandardItemModelC2EiiP7QObject
/*void* qm450120332(int rows, int columns, QObject * parent)*/{
  int rows = *(int*)this_; int columns = *(int*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QStandardItemModel(rows, columns, parent);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:377
// [-2] void setItem(int, QStandardItem *) 
// (12)qm2117300645 (49)_ZN18QStandardItemModel7setItemEiP13QStandardItem
//static
/*void qm2117300645(int row, QStandardItem * item)*/ {
  int row = *(int*)this_; QStandardItem * item = *(QStandardItem **)this_;
  (void) ((QStandardItemModel*)this_)->setItem(row, item);
   auto xptr = (void (QStandardItemModel::*)(int, QStandardItem*) ) &QStandardItemModel::setItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:393
// [-2] void appendRow(QStandardItem *) 
// (12)qm2202354191 (50)_ZN18QStandardItemModel9appendRowEP13QStandardItem
//static
/*void qm2202354191(QStandardItem * item)*/ {
  QStandardItem * item = *(QStandardItem **)this_;
  (void) ((QStandardItemModel*)this_)->appendRow(item);
   auto xptr = (void (QStandardItemModel::*)(QStandardItem*) ) &QStandardItemModel::appendRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:397
// [-2] void insertRow(int, QStandardItem *) 
// (12)qm1992972647 (51)_ZN18QStandardItemModel9insertRowEiP13QStandardItem
//static
/*void qm1992972647(int row, QStandardItem * item)*/ {
  int row = *(int*)this_; QStandardItem * item = *(QStandardItem **)this_;
  (void) ((QStandardItemModel*)this_)->insertRow(row, item);
   auto xptr = (void (QStandardItemModel::*)(int, QStandardItem*) ) &QStandardItemModel::insertRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:399
// [1] bool insertRow(int, const QModelIndex &) 
// (12)qm4156930701 (50)_ZN18QStandardItemModel9insertRowEiRK11QModelIndex
//static
/*void qm4156930701(int row, const QModelIndex & parent)*/ {
  int row = *(int*)this_; const QModelIndex & parent = *(const QModelIndex *)this_;
  (void) ((QStandardItemModel*)this_)->insertRow(row, parent);
   auto xptr = (bool (QStandardItemModel::*)(int, QModelIndex const&) ) &QStandardItemModel::insertRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:400
// [1] bool insertColumn(int, const QModelIndex &) 
// (11)qm279371541 (54)_ZN18QStandardItemModel12insertColumnEiRK11QModelIndex
//static
/*void qm279371541(int column, const QModelIndex & parent)*/ {
  int column = *(int*)this_; const QModelIndex & parent = *(const QModelIndex *)this_;
  (void) ((QStandardItemModel*)this_)->insertColumn(column, parent);
   auto xptr = (bool (QStandardItemModel::*)(int, QModelIndex const&) ) &QStandardItemModel::insertColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QStandardItemModelD2Ev(void *this_)*/ {
  delete (QStandardItemModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstandarditemmodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(standarditemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
