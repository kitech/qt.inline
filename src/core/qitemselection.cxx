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

// QItemSelection is pure virtual: false false
// QItemSelection has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQItemSelection_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQItemSelection_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQItemSelection_t qt_meta_stringdata_MyQItemSelection = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQItemSelection"
  },
  "MyQItemSelection"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQItemSelection[] = {
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
class Q_DECL_EXPORT MyQItemSelection : public QItemSelection {
public:
  virtual ~MyQItemSelection() {}
// void QItemSelection()
MyQItemSelection() : QItemSelection() {}
// void QItemSelection(const QModelIndex &, const QModelIndex &)
MyQItemSelection(const QModelIndex & topLeft, const QModelIndex & bottomRight) : QItemSelection(topLeft, bottomRight) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qitemselection(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:252
// [-2] void QItemSelection() 
// (12)qm3922188993 (23)_ZN14QItemSelectionC2Ev
/*void* qm3922188993()*/{
  ;
  this_ =  new QItemSelection();
}


/*void C_ZN14QItemSelectionD2Ev(void *this_)*/ {
  delete (QItemSelection*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qitemselection
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
