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


struct qt_meta_stringdata_MyQStandardItemModel_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStandardItemModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStandardItemModel_t qt_meta_stringdata_MyQStandardItemModel = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQStandardItemModel"
  },
  "MyQStandardItemModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStandardItemModel[] = {
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
class Q_DECL_EXPORT MyQStandardItemModel : public QStandardItemModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStandardItemModel::staticMetaObject,
  qt_meta_stringdata_MyQStandardItemModel.data,
  qt_meta_data_MyQStandardItemModel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStandardItemModel.stringdata0))
      return static_cast<void*>(this);
  return QStandardItemModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQStandardItemModel() {}
// void QStandardItemModel(QObject *)
MyQStandardItemModel(QObject * parent) : QStandardItemModel(parent) {}
// void QStandardItemModel(int, int, QObject *)
MyQStandardItemModel(int rows, int columns, QObject * parent) : QStandardItemModel(rows, columns, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QStandardItemModel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStandardItemModel* qo = (MyQStandardItemModel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

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
  this_ =  new MyQStandardItemModel(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:331
// [-2] void QStandardItemModel(int, int, QObject *) 
// (11)qm450120332 (37)_ZN18QStandardItemModelC2EiiP7QObject
/*void* qm450120332(int rows, int columns, QObject * parent)*/{
  int rows = *(int*)this_; int columns = *(int*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QStandardItemModel(rows, columns, parent);
  this_ =  new MyQStandardItemModel(rows, columns, parent);
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
