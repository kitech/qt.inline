//  header block begin
// /usr/include/qt/QtCore/qstringlistmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringlistmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringListModel is pure virtual: false
// QStringListModel has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStringListModel_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStringListModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStringListModel_t qt_meta_stringdata_MyQStringListModel = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQStringListModel"
  },
  "MyQStringListModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStringListModel[] = {
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
class Q_DECL_EXPORT MyQStringListModel : public QStringListModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStringListModel::staticMetaObject,
  qt_meta_stringdata_MyQStringListModel.data,
  qt_meta_data_MyQStringListModel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStringListModel.stringdata0))
      return static_cast<void*>(this);
  return QStringListModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStringListModel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQStringListModel() {}
// void QStringListModel(QObject *)
MyQStringListModel(QObject * parent) : QStringListModel(parent) {}
// void QStringListModel(const QStringList &, QObject *)
MyQStringListModel(const QStringList & strings, QObject * parent) : QStringListModel(strings, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QStringListModel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStringListModel* qo = (MyQStringListModel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QStringListModel10metaObjectEv(void *this_) {
  return (void*)((QStringListModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStringListModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStringListModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QStringListModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStringListModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStringListModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStringListModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStringListModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStringListModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:55
// [-2] void QStringListModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStringListModelC2EP7QObject(QObject * parent) {
  return  new MyQStringListModel(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:56
// [-2] void QStringListModel(const QStringList &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStringListModelC2ERK11QStringListP7QObject(QStringList* strings, QObject * parent) {
  return  new MyQStringListModel(*strings, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:58
// [4] int rowCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK16QStringListModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QStringListModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:59
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QStringListModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QStringListModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:61
// [16] QVariant data(const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QStringListModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QStringListModel*)this_)->data(*index, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:62
// [1] bool setData(const QModelIndex &, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN16QStringListModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QStringListModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:64
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK16QStringListModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QStringListModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:66
// [1] bool insertRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN16QStringListModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QStringListModel*)this_)->insertRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:67
// [1] bool removeRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN16QStringListModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QStringListModel*)this_)->removeRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:69
// [-2] void sort(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN16QStringListModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QStringListModel*)this_)->sort(column, order);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:71
// [8] QStringList stringList()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QStringListModel10stringListEv(void *this_) {
  auto rv = ((QStringListModel*)this_)->stringList();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:72
// [-2] void setStringList(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN16QStringListModel13setStringListERK11QStringList(void *this_, QStringList* strings) {
  ((QStringListModel*)this_)->setStringList(*strings);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:74
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK16QStringListModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QStringListModel*)this_)->supportedDropActions();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QStringListModelD2Ev(void *this_) {
  delete (QStringListModel*)(this_);
}
//  main block end
