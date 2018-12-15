//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtCore/qitemselectionmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemselectionmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QItemSelectionModel is pure virtual: false
// QItemSelectionModel has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQItemSelectionModel_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQItemSelectionModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQItemSelectionModel_t qt_meta_stringdata_MyQItemSelectionModel = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQItemSelectionModel"
  },
  "MyQItemSelectionModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQItemSelectionModel[] = {
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
class Q_DECL_EXPORT MyQItemSelectionModel : public QItemSelectionModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QItemSelectionModel::staticMetaObject,
  qt_meta_stringdata_MyQItemSelectionModel.data,
  qt_meta_data_MyQItemSelectionModel,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQItemSelectionModel.stringdata0))
      return static_cast<void*>(this);
  return QItemSelectionModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QItemSelectionModel::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQItemSelectionModel() {}
// void QItemSelectionModel(QAbstractItemModel *)
MyQItemSelectionModel(QAbstractItemModel * model) : QItemSelectionModel(model) {}
// void QItemSelectionModel(QAbstractItemModel *, QObject *)
MyQItemSelectionModel(QAbstractItemModel * model, QObject * parent) : QItemSelectionModel(model, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QItemSelectionModel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQItemSelectionModel* qo = (MyQItemSelectionModel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:141
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionModel10metaObjectEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:141
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QItemSelectionModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:141
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QItemSelectionModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QItemSelectionModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:141
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QItemSelectionModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:141
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QItemSelectionModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:169
// [-2] void QItemSelectionModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModelC2EP18QAbstractItemModel(QAbstractItemModel * model) {
  return  new MyQItemSelectionModel(model);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:170
// [-2] void QItemSelectionModel(QAbstractItemModel *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModelC2EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent) {
  return  new MyQItemSelectionModel(model, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:171
// [-2] void ~QItemSelectionModel()
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModelD2Ev(void *this_) {
  delete (QItemSelectionModel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:173
// [24] QModelIndex currentIndex()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionModel12currentIndexEv(void *this_) {
  auto rv = ((QItemSelectionModel*)this_)->currentIndex();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:175
// [1] bool isSelected(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel10isSelectedERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QItemSelectionModel*)this_)->isSelected(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:176
// [1] bool isRowSelected(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel13isRowSelectedEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QItemSelectionModel*)this_)->isRowSelected(row, *parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:177
// [1] bool isColumnSelected(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel16isColumnSelectedEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QItemSelectionModel*)this_)->isColumnSelected(column, *parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:179
// [1] bool rowIntersectsSelection(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel22rowIntersectsSelectionEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QItemSelectionModel*)this_)->rowIntersectsSelection(row, *parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:180
// [1] bool columnIntersectsSelection(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel25columnIntersectsSelectionEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QItemSelectionModel*)this_)->columnIntersectsSelection(column, *parent);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:182
// [1] bool hasSelection()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel12hasSelectionEv(void *this_) {
  return (bool)((QItemSelectionModel*)this_)->hasSelection();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:184
// [8] QModelIndexList selectedIndexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK19QItemSelectionModel15selectedIndexesEv(void *this_) {
  auto rv = ((QItemSelectionModel*)this_)->selectedIndexes();
return new QModelIndexList(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:185
// [8] QModelIndexList selectedRows(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK19QItemSelectionModel12selectedRowsEi(void *this_, int column) {
  auto rv = ((QItemSelectionModel*)this_)->selectedRows(column);
return new QModelIndexList(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:186
// [8] QModelIndexList selectedColumns(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK19QItemSelectionModel15selectedColumnsEi(void *this_, int row) {
  auto rv = ((QItemSelectionModel*)this_)->selectedColumns(row);
return new QModelIndexList(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:187
// [8] const QItemSelection selection()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionModel9selectionEv(void *this_) {
  auto rv = ((QItemSelectionModel*)this_)->selection();
return new QItemSelection(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:190
// [8] const QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionModel5modelEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->model();
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qitemselectionmodel.h:191
// [8] QAbstractItemModel * model()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModel5modelEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->model();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qitemselectionmodel.h:193
// [-2] void setModel(QAbstractItemModel *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QItemSelectionModel*)this_)->setModel(model);
}
#endif // QT_VERSION >= 0x050500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:196
// [-2] void setCurrentIndex(const QModelIndex &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel15setCurrentIndexERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *this_, QModelIndex* index, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->setCurrentIndex(*index, command);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:197
// [-2] void select(const QModelIndex &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel6selectERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *this_, QModelIndex* index, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->select(*index, command);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:198
// [-2] void select(const QItemSelection &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel6selectERK14QItemSelection6QFlagsINS_13SelectionFlagEE(void *this_, QItemSelection* selection, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->select(*selection, command);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:199
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel5clearEv(void *this_) {
  ((QItemSelectionModel*)this_)->clear();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:200
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel5resetEv(void *this_) {
  ((QItemSelectionModel*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:202
// [-2] void clearSelection()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel14clearSelectionEv(void *this_) {
  ((QItemSelectionModel*)this_)->clearSelection();
}
#endif // QT_VERSION >= 0x040200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:203
// [-2] void clearCurrentIndex()
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel17clearCurrentIndexEv(void *this_) {
  ((QItemSelectionModel*)this_)->clearCurrentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:206
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* selected, QItemSelection* deselected) {
  ((QItemSelectionModel*)this_)->selectionChanged(*selected, *deselected);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:207
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QItemSelectionModel*)this_)->currentChanged(*current, *previous);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:208
// [-2] void currentRowChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QItemSelectionModel*)this_)->currentRowChanged(*current, *previous);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:209
// [-2] void currentColumnChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QItemSelectionModel*)this_)->currentColumnChanged(*current, *previous);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qitemselectionmodel.h:210
// [-2] void modelChanged(QAbstractItemModel *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QItemSelectionModel*)this_)->modelChanged(model);
}
#endif // QT_VERSION >= 0x050500

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
