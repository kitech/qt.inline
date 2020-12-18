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


struct qt_meta_stringdata_MyQAbstractItemModel_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractItemModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractItemModel_t qt_meta_stringdata_MyQAbstractItemModel = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQAbstractItemModel"
  },
  "MyQAbstractItemModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractItemModel[] = {
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
class Q_DECL_EXPORT MyQAbstractItemModel : public QAbstractItemModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractItemModel::staticMetaObject,
  qt_meta_stringdata_MyQAbstractItemModel.data,
  qt_meta_data_MyQAbstractItemModel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractItemModel.stringdata0))
      return static_cast<void*>(this);
  return QAbstractItemModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractItemModel() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [24] QModelIndex index(int, int, const QModelIndex &)
  virtual QModelIndex index(int row, int column, const QModelIndex & parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"index", &handled, 3, (uint64_t)row, (uint64_t)column, (uint64_t)&parent, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return (QModelIndex){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [24] QModelIndex parent(const QModelIndex &)
  virtual QModelIndex parent(const QModelIndex & child) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"parent", &handled, 1, (uint64_t)&child, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return (QModelIndex){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int rowCount(const QModelIndex &)
  virtual int rowCount(const QModelIndex & parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowCount", &handled, 1, (uint64_t)&parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int columnCount(const QModelIndex &)
  virtual int columnCount(const QModelIndex & parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnCount", &handled, 1, (uint64_t)&parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [16] QVariant data(const QModelIndex &, int)
  virtual QVariant data(const QModelIndex & index, int role) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"data", &handled, 2, (uint64_t)&index, (uint64_t)role, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// void QAbstractItemModel(QObject *)
MyQAbstractItemModel(QObject * parent) : QAbstractItemModel(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QAbstractItemModel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractItemModel* qo = (MyQAbstractItemModel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

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
