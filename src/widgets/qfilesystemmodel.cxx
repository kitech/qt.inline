//  header block begin

// since 0x040400
// /usr/include/qt/QtWidgets/qfilesystemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfilesystemmodel.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFileSystemModel is pure virtual: false
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:149
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QFileSystemModel*)this_)->QFileSystemModel::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:150
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QFileSystemModel5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QFileSystemModel*)this_)->QFileSystemModel::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel10metaObjectEv(void *this_) {
  return (void*)((QFileSystemModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QFileSystemModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFileSystemModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QFileSystemModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFileSystemModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QFileSystemModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSystemModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QFileSystemModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSystemModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:67
// [-2] void rootPathChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel15rootPathChangedERK7QString(void *this_, QString* newPath) {
  ((QFileSystemModel*)this_)->rootPathChanged(*newPath);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:68
// [-2] void fileRenamed(const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(void *this_, QString* path, QString* oldName, QString* newName) {
  ((QFileSystemModel*)this_)->fileRenamed(*path, *oldName, *newName);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:69
// [-2] void directoryLoaded(const QString &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel15directoryLoadedERK7QString(void *this_, QString* path) {
  ((QFileSystemModel*)this_)->directoryLoaded(*path);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:79
// [-2] void QFileSystemModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QFileSystemModelC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQFileSystemModel*)(0);
  return  new MyQFileSystemModel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:80
// [-2] void ~QFileSystemModel()
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModelD2Ev(void *this_) {
  delete (QFileSystemModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:82
// [24] QModelIndex index(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QFileSystemModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:83
// [24] QModelIndex index(const QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel5indexERK7QStringi(void *this_, QString* path, int column) {
  auto rv = ((QFileSystemModel*)this_)->index(*path, column);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:84
// [24] QModelIndex parent(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QFileSystemModel*)this_)->parent(*child);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:86
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QFileSystemModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:87
// [1] bool hasChildren(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QFileSystemModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QFileSystemModel*)this_)->hasChildren(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:88
// [1] bool canFetchMore(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QFileSystemModel12canFetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QFileSystemModel*)this_)->canFetchMore(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:89
// [-2] void fetchMore(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel9fetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  ((QFileSystemModel*)this_)->fetchMore(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:91
// [4] int rowCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK16QFileSystemModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QFileSystemModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:92
// [4] int columnCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK16QFileSystemModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QFileSystemModel*)this_)->columnCount(*parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:94
// [16] QVariant myComputer(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel10myComputerEi(void *this_, int role) {
  auto rv = ((QFileSystemModel*)this_)->myComputer(role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:95
// [16] QVariant data(const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QFileSystemModel*)this_)->data(*index, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:96
// [1] bool setData(const QModelIndex &, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN16QFileSystemModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QFileSystemModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:98
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QFileSystemModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:100
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK16QFileSystemModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QFileSystemModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:102
// [-2] void sort(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QFileSystemModel*)this_)->sort(column, order);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:104
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel9mimeTypesEv(void *this_) {
  auto rv = ((QFileSystemModel*)this_)->mimeTypes();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:105
// [8] QMimeData * mimeData(const QModelIndexList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  return (void*)((QFileSystemModel*)this_)->mimeData(indexes);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:106
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN16QFileSystemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QFileSystemModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:108
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK16QFileSystemModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QFileSystemModel*)this_)->supportedDropActions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:111
// [24] QModelIndex setRootPath(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QFileSystemModel11setRootPathERK7QString(void *this_, QString* path) {
  auto rv = ((QFileSystemModel*)this_)->setRootPath(*path);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:112
// [8] QString rootPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel8rootPathEv(void *this_) {
  auto rv = ((QFileSystemModel*)this_)->rootPath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:113
// [8] QDir rootDirectory()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel13rootDirectoryEv(void *this_) {
  auto rv = ((QFileSystemModel*)this_)->rootDirectory();
return new QDir(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:115
// [-2] void setIconProvider(QFileIconProvider *)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel15setIconProviderEP17QFileIconProvider(void *this_, QFileIconProvider * provider) {
  ((QFileSystemModel*)this_)->setIconProvider(provider);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:116
// [8] QFileIconProvider * iconProvider()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel12iconProviderEv(void *this_) {
  return (void*)((QFileSystemModel*)this_)->iconProvider();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:118
// [-2] void setFilter(QDir::Filters)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel9setFilterE6QFlagsIN4QDir6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  ((QFileSystemModel*)this_)->setFilter(filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:119
// [4] QDir::Filters filter()
extern "C" Q_DECL_EXPORT
QDir::Filters C_ZNK16QFileSystemModel6filterEv(void *this_) {
  return (QDir::Filters)((QFileSystemModel*)this_)->filter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:121
// [-2] void setResolveSymlinks(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel18setResolveSymlinksEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setResolveSymlinks(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:122
// [1] bool resolveSymlinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QFileSystemModel15resolveSymlinksEv(void *this_) {
  return (bool)((QFileSystemModel*)this_)->resolveSymlinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:124
// [-2] void setReadOnly(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel11setReadOnlyEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setReadOnly(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:125
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QFileSystemModel10isReadOnlyEv(void *this_) {
  return (bool)((QFileSystemModel*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:127
// [-2] void setNameFilterDisables(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel21setNameFilterDisablesEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setNameFilterDisables(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:128
// [1] bool nameFilterDisables()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QFileSystemModel18nameFilterDisablesEv(void *this_) {
  return (bool)((QFileSystemModel*)this_)->nameFilterDisables();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:130
// [-2] void setNameFilters(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN16QFileSystemModel14setNameFiltersERK11QStringList(void *this_, QStringList* filters) {
  ((QFileSystemModel*)this_)->setNameFilters(*filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:131
// [8] QStringList nameFilters()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel11nameFiltersEv(void *this_) {
  auto rv = ((QFileSystemModel*)this_)->nameFilters();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:133
// [8] QString filePath(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel8filePathERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->filePath(*index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:134
// [1] bool isDir(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QFileSystemModel5isDirERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QFileSystemModel*)this_)->isDir(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:135
// [8] qint64 size(const QModelIndex &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK16QFileSystemModel4sizeERK11QModelIndex(void *this_, QModelIndex* index) {
  return (qint64)((QFileSystemModel*)this_)->size(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:136
// [8] QString type(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel4typeERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->type(*index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:137
// [8] QDateTime lastModified(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel12lastModifiedERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->lastModified(*index);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:139
// [24] QModelIndex mkdir(const QModelIndex &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QFileSystemModel5mkdirERK11QModelIndexRK7QString(void *this_, QModelIndex* parent, QString* name) {
  auto rv = ((QFileSystemModel*)this_)->mkdir(*parent, *name);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:140
// [1] bool rmdir(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN16QFileSystemModel5rmdirERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QFileSystemModel*)this_)->rmdir(*index);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:141
// [8] QString fileName(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel8fileNameERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->fileName(*index);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:142
// [8] QIcon fileIcon(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel8fileIconERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->fileIcon(*index);
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:143
// [4] QFile::Permissions permissions(const QModelIndex &)
extern "C" Q_DECL_EXPORT
QFile::Permissions C_ZNK16QFileSystemModel11permissionsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (QFile::Permissions)((QFileSystemModel*)this_)->permissions(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:144
// [8] QFileInfo fileInfo(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QFileSystemModel8fileInfoERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->fileInfo(*index);
return new QFileInfo(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:145
// [1] bool remove(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN16QFileSystemModel6removeERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QFileSystemModel*)this_)->remove(*index);
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
