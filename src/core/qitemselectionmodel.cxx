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

// QItemSelectionModel is pure virtual: false false
// QItemSelectionModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qitemselectionmodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:141
// [8] QString tr(const char *, const char *, int) 
// (12)qm1752598032 (35)_ZN19QItemSelectionModel2trEPKcS1_i
//static
/*void qm1752598032(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QItemSelectionModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QItemSelectionModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:169
// [-2] void QItemSelectionModel(QAbstractItemModel *) 
// (12)qm3441491637 (48)_ZN19QItemSelectionModelC2EP18QAbstractItemModel
/*void* qm3441491637(QAbstractItemModel * model)*/{
  QAbstractItemModel * model = *(QAbstractItemModel **)this_;
  this_ =  new QItemSelectionModel(model);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:170
// [-2] void QItemSelectionModel(QAbstractItemModel *, QObject *) 
// (11)qm183195034 (57)_ZN19QItemSelectionModelC2EP18QAbstractItemModelP7QObject
/*void* qm183195034(QAbstractItemModel * model, QObject * parent)*/{
  QAbstractItemModel * model = *(QAbstractItemModel **)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QItemSelectionModel(model, parent);
}


/*void C_ZN19QItemSelectionModelD2Ev(void *this_)*/ {
  delete (QItemSelectionModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qitemselectionmodel
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
