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

// QItemSelection is pure virtual: false
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

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:252
// [-2] void QItemSelection()
extern "C" Q_DECL_EXPORT
void* C_ZN14QItemSelectionC2Ev() {
  return  new QItemSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:253
// [-2] void QItemSelection(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QItemSelectionC2ERK11QModelIndexS2_(QModelIndex* topLeft, QModelIndex* bottomRight) {
  return  new QItemSelection(*topLeft, *bottomRight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:257
// [-2] void select(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN14QItemSelection6selectERK11QModelIndexS2_(void *this_, QModelIndex* topLeft, QModelIndex* bottomRight) {
  ((QItemSelection*)this_)->select(*topLeft, *bottomRight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:258
// [1] bool contains(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QItemSelection8containsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QItemSelection*)this_)->contains(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:259
// [8] QModelIndexList indexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK14QItemSelection7indexesEv(void *this_) {
  auto rv = ((QItemSelection*)this_)->indexes();
return new QModelIndexList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:260
// [-2] void merge(const QItemSelection &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN14QItemSelection5mergeERKS_6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QItemSelection* other, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelection*)this_)->merge(*other, command);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:261
// [-2] void split(const QItemSelectionRange &, const QItemSelectionRange &, QItemSelection *)
extern "C" Q_DECL_EXPORT
void C_ZN14QItemSelection5splitERK19QItemSelectionRangeS2_PS_(QItemSelectionRange* range_, QItemSelectionRange* other, QItemSelection * result) {
  QItemSelection::split(*range_, *other, result);
}


extern "C" Q_DECL_EXPORT
void C_ZN14QItemSelectionD2Ev(void *this_) {
  delete (QItemSelection*)(this_);
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
