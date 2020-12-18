//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(filesystemmodel)
// /usr/include/qt/QtWidgets/qfilesystemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfilesystemmodel.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFileSystemModel is pure virtual: false false
// QFileSystemModel has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFileSystemModel_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileSystemModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileSystemModel_t qt_meta_stringdata_MyQFileSystemModel = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQFileSystemModel"
  },
  "MyQFileSystemModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileSystemModel[] = {
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
class Q_DECL_EXPORT MyQFileSystemModel : public QFileSystemModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFileSystemModel::staticMetaObject,
  qt_meta_stringdata_MyQFileSystemModel.data,
  qt_meta_data_MyQFileSystemModel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFileSystemModel.stringdata0))
      return static_cast<void*>(this);
  return QFileSystemModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFileSystemModel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFileSystemModel() {}
// void QFileSystemModel(QObject *)
MyQFileSystemModel(QObject * parent) : QFileSystemModel(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFileSystemModel::timerEvent(event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QFileSystemModel::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QFileSystemModel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFileSystemModel* qo = (MyQFileSystemModel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfilesystemmodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm2609278362 (32)_ZN16QFileSystemModel2trEPKcS1_i
//static
/*void qm2609278362(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QFileSystemModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QFileSystemModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:155
// [8] QString fileName(const QModelIndex &) const
// (12)qm3412952651 (47)_ZNK16QFileSystemModel8fileNameERK11QModelIndex
//static
/*void qm3412952651(const QModelIndex & index)*/ {
  const QModelIndex & index = *(const QModelIndex *)this_;
  (void) ((QFileSystemModel*)this_)->fileName(index);
   auto xptr = (QString (QFileSystemModel::*)(QModelIndex const&) const ) &QFileSystemModel::fileName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:156
// [8] QIcon fileIcon(const QModelIndex &) const
// (12)qm4005779888 (47)_ZNK16QFileSystemModel8fileIconERK11QModelIndex
//static
/*void qm4005779888(const QModelIndex & index)*/ {
  const QModelIndex & index = *(const QModelIndex *)this_;
  (void) ((QFileSystemModel*)this_)->fileIcon(index);
   auto xptr = (QIcon (QFileSystemModel::*)(QModelIndex const&) const ) &QFileSystemModel::fileIcon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QFileSystemModelD2Ev(void *this_)*/ {
  delete (QFileSystemModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfilesystemmodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(filesystemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
