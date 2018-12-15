//  header block begin

// /usr/include/qt/QtWidgets/qdirmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdirmodel.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDirModel is pure virtual: false
// QDirModel has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDirModel_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDirModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDirModel_t qt_meta_stringdata_MyQDirModel = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQDirModel"
  },
  "MyQDirModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDirModel[] = {
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
class Q_DECL_EXPORT MyQDirModel : public QDirModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDirModel::staticMetaObject,
  qt_meta_stringdata_MyQDirModel.data,
  qt_meta_data_MyQDirModel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDirModel.stringdata0))
      return static_cast<void*>(this);
  return QDirModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDirModel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDirModel() {}
// void QDirModel(const QStringList &, QDir::Filters, QDir::SortFlags, QObject *)
MyQDirModel(const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort, QObject * parent) : QDirModel(nameFilters, filters, sort, parent) {}
// void QDirModel(QObject *)
MyQDirModel(QObject * parent) : QDirModel(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QDirModel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDirModel* qo = (MyQDirModel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel10metaObjectEv(void *this_) {
  return (void*)((QDirModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDirModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDirModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QDirModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDirModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDirModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDirModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDirModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDirModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:69
// [-2] void QDirModel(const QStringList &, QDir::Filters, QDir::SortFlags, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDirModelC2ERK11QStringList6QFlagsIN4QDir6FilterEES3_INS4_8SortFlagEEP7QObject(QStringList* nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort, QObject * parent) {
  return  new MyQDirModel(*nameFilters, filters, sort, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:71
// [-2] void QDirModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDirModelC2EP7QObject(QObject * parent) {
  return  new MyQDirModel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:72
// [-2] void ~QDirModel()
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModelD2Ev(void *this_) {
  delete (QDirModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:74
// [24] QModelIndex index(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QDirModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:75
// [24] QModelIndex parent(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QDirModel*)this_)->parent(*child);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:77
// [4] int rowCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QDirModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QDirModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:78
// [4] int columnCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QDirModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QDirModel*)this_)->columnCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:80
// [16] QVariant data(const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QDirModel*)this_)->data(*index, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:81
// [1] bool setData(const QModelIndex &, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QDirModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QDirModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:83
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QDirModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:85
// [1] bool hasChildren(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDirModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QDirModel*)this_)->hasChildren(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:86
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK9QDirModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QDirModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:88
// [-2] void sort(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QDirModel*)this_)->sort(column, order);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:90
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel9mimeTypesEv(void *this_) {
  auto rv = ((QDirModel*)this_)->mimeTypes();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:91
// [8] QMimeData * mimeData(const QModelIndexList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  return (void*)((QDirModel*)this_)->mimeData(indexes);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:92
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QDirModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QDirModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:94
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK9QDirModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QDirModel*)this_)->supportedDropActions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:98
// [-2] void setIconProvider(QFileIconProvider *)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel15setIconProviderEP17QFileIconProvider(void *this_, QFileIconProvider * provider) {
  ((QDirModel*)this_)->setIconProvider(provider);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:99
// [8] QFileIconProvider * iconProvider()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel12iconProviderEv(void *this_) {
  return (void*)((QDirModel*)this_)->iconProvider();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:101
// [-2] void setNameFilters(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel14setNameFiltersERK11QStringList(void *this_, QStringList* filters) {
  ((QDirModel*)this_)->setNameFilters(*filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:102
// [8] QStringList nameFilters()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel11nameFiltersEv(void *this_) {
  auto rv = ((QDirModel*)this_)->nameFilters();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:104
// [-2] void setFilter(QDir::Filters)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel9setFilterE6QFlagsIN4QDir6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  ((QDirModel*)this_)->setFilter(filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:105
// [4] QDir::Filters filter()
extern "C" Q_DECL_EXPORT
QDir::Filters C_ZNK9QDirModel6filterEv(void *this_) {
  return (QDir::Filters)((QDirModel*)this_)->filter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:107
// [-2] void setSorting(QDir::SortFlags)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel10setSortingE6QFlagsIN4QDir8SortFlagEE(void *this_, QFlags<QDir::SortFlag> sort) {
  ((QDirModel*)this_)->setSorting(sort);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:108
// [4] QDir::SortFlags sorting()
extern "C" Q_DECL_EXPORT
QDir::SortFlags C_ZNK9QDirModel7sortingEv(void *this_) {
  return (QDir::SortFlags)((QDirModel*)this_)->sorting();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:110
// [-2] void setResolveSymlinks(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel18setResolveSymlinksEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setResolveSymlinks(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:111
// [1] bool resolveSymlinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDirModel15resolveSymlinksEv(void *this_) {
  return (bool)((QDirModel*)this_)->resolveSymlinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:113
// [-2] void setReadOnly(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel11setReadOnlyEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setReadOnly(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:114
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDirModel10isReadOnlyEv(void *this_) {
  return (bool)((QDirModel*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:116
// [-2] void setLazyChildCount(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel17setLazyChildCountEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setLazyChildCount(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:117
// [1] bool lazyChildCount()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDirModel14lazyChildCountEv(void *this_) {
  return (bool)((QDirModel*)this_)->lazyChildCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:119
// [24] QModelIndex index(const QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel5indexERK7QStringi(void *this_, QString* path, int column) {
  auto rv = ((QDirModel*)this_)->index(*path, column);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:121
// [1] bool isDir(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDirModel5isDirERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QDirModel*)this_)->isDir(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:122
// [24] QModelIndex mkdir(const QModelIndex &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDirModel5mkdirERK11QModelIndexRK7QString(void *this_, QModelIndex* parent, QString* name) {
  auto rv = ((QDirModel*)this_)->mkdir(*parent, *name);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:123
// [1] bool rmdir(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QDirModel5rmdirERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QDirModel*)this_)->rmdir(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:124
// [1] bool remove(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QDirModel6removeERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QDirModel*)this_)->remove(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:126
// [8] QString filePath(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel8filePathERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QDirModel*)this_)->filePath(*index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:127
// [8] QString fileName(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel8fileNameERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QDirModel*)this_)->fileName(*index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:128
// [8] QIcon fileIcon(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel8fileIconERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QDirModel*)this_)->fileIcon(*index);
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:129
// [8] QFileInfo fileInfo(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDirModel8fileInfoERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QDirModel*)this_)->fileInfo(*index);
return new QFileInfo(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:134
// [-2] void refresh(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDirModel7refreshERK11QModelIndex(void *this_, QModelIndex* parent) {
  ((QDirModel*)this_)->refresh(*parent);
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
