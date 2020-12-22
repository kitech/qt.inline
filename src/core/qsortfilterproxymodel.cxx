//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(sortfilterproxymodel)
// /usr/include/qt/QtCore/qsortfilterproxymodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsortfilterproxymodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QSortFilterProxyModel is pure virtual: false false
// QSortFilterProxyModel has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSortFilterProxyModel_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSortFilterProxyModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSortFilterProxyModel_t qt_meta_stringdata_MyQSortFilterProxyModel = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQSortFilterProxyModel"
  },
  "MyQSortFilterProxyModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSortFilterProxyModel[] = {
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
class Q_DECL_EXPORT MyQSortFilterProxyModel : public QSortFilterProxyModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSortFilterProxyModel::staticMetaObject,
  qt_meta_stringdata_MyQSortFilterProxyModel.data,
  qt_meta_data_MyQSortFilterProxyModel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSortFilterProxyModel.stringdata0))
      return static_cast<void*>(this);
  return QSortFilterProxyModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSortFilterProxyModel() {}
// void QSortFilterProxyModel(QObject *)
MyQSortFilterProxyModel(QObject * parent) : QSortFilterProxyModel(parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool filterAcceptsRow(int, const QModelIndex &)
  virtual bool filterAcceptsRow(int source_row, const QModelIndex & source_parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"filterAcceptsRow", &handled, 2, (uint64_t)source_row, (uint64_t)&source_parent, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool filterAcceptsColumn(int, const QModelIndex &)
  virtual bool filterAcceptsColumn(int source_column, const QModelIndex & source_parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"filterAcceptsColumn", &handled, 2, (uint64_t)source_column, (uint64_t)&source_parent, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool lessThan(const QModelIndex &, const QModelIndex &)
  virtual bool lessThan(const QModelIndex & source_left, const QModelIndex & source_right) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"lessThan", &handled, 2, (uint64_t)&source_left, (uint64_t)&source_right, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSortFilterProxyModel::lessThan(source_left, source_right);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSortFilterProxyModel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSortFilterProxyModel* qo = (MyQSortFilterProxyModel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsortfilterproxymodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:64
// [8] QString tr(const char *, const char *, int) 
// (12)qm2003109764 (37)_ZN21QSortFilterProxyModel2trEPKcS1_i
//static
/*void qm2003109764(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSortFilterProxyModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSortFilterProxyModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:79
// [-2] void QSortFilterProxyModel(QObject *) 
// (12)qm3088238312 (38)_ZN21QSortFilterProxyModelC2EP7QObject
/*void* qm3088238312(QObject * parent)*/{
  auto _nilp = (MyQSortFilterProxyModel*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QSortFilterProxyModel(parent);
  this_ =  new MyQSortFilterProxyModel(parent);
}


/*void C_ZN21QSortFilterProxyModelD2Ev(void *this_)*/ {
  delete (QSortFilterProxyModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsortfilterproxymodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(sortfilterproxymodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
