//  header block begin

// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractTableModel is pure virtual: true
// QAbstractTableModel has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractTableModel_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractTableModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractTableModel_t qt_meta_stringdata_MyQAbstractTableModel = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQAbstractTableModel"
  },
  "MyQAbstractTableModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractTableModel[] = {
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
class Q_DECL_EXPORT MyQAbstractTableModel : public QAbstractTableModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractTableModel::staticMetaObject,
  qt_meta_stringdata_MyQAbstractTableModel.data,
  qt_meta_data_MyQAbstractTableModel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractTableModel.stringdata0))
      return static_cast<void*>(this);
  return QAbstractTableModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractTableModel() {}
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// void QAbstractTableModel(QObject *)
MyQAbstractTableModel(QObject * parent) : QAbstractTableModel(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QAbstractTableModel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractTableModel* qo = (MyQAbstractTableModel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:183
// [4] int rowCount(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:184
// [4] int columnCount(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:187
// [16] QVariant data(const QModelIndex &, int)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:367
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTableModel10metaObjectEv(void *this_) {
  return (void*)((QAbstractTableModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:367
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTableModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractTableModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:367
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QAbstractTableModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractTableModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:367
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTableModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractTableModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:367
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTableModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractTableModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:370
// [-2] void QAbstractTableModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTableModelC2EP7QObject(QObject * parent) {
  return  new MyQAbstractTableModel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:371
// [-2] void ~QAbstractTableModel()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTableModelD2Ev(void *this_) {
  delete (QAbstractTableModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:373
// [24] QModelIndex index(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTableModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QAbstractTableModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:374
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTableModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QAbstractTableModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:375
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractTableModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractTableModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:378
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK19QAbstractTableModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QAbstractTableModel*)this_)->flags(*index);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
