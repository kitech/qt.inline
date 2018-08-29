//  header block begin
// since 0x040100
// /usr/include/qt/QtCore/qabstractproxymodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractproxymodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractProxyModel is pure virtual: true
// QAbstractProxyModel has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractProxyModel_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractProxyModel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractProxyModel_t qt_meta_stringdata_MyQAbstractProxyModel = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQAbstractProxyModel"
  },
  "MyQAbstractProxyModel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractProxyModel[] = {
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
class Q_DECL_EXPORT MyQAbstractProxyModel : public QAbstractProxyModel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractProxyModel::staticMetaObject,
  qt_meta_stringdata_MyQAbstractProxyModel.data,
  qt_meta_data_MyQAbstractProxyModel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractProxyModel.stringdata0))
      return static_cast<void*>(this);
  return QAbstractProxyModel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractProxyModel() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [24] QModelIndex mapToSource(const QModelIndex &)
  virtual QModelIndex mapToSource(const QModelIndex & proxyIndex) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mapToSource", &handled, 1, (uint64_t)&proxyIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return (QModelIndex){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [24] QModelIndex mapFromSource(const QModelIndex &)
  virtual QModelIndex mapFromSource(const QModelIndex & sourceIndex) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mapFromSource", &handled, 1, (uint64_t)&sourceIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return (QModelIndex){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// void QAbstractProxyModel(QObject *)
MyQAbstractProxyModel(QObject * parent) : QAbstractProxyModel(parent) {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:65
// [24] QModelIndex mapToSource(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:66
// [24] QModelIndex mapFromSource(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:178
// [24] QModelIndex index(int, int, const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:180
// [24] QModelIndex parent(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:183
// [4] int rowCount(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:184
// [4] int columnCount(const QModelIndex &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel10metaObjectEv(void *this_) {
  return (void*)((QAbstractProxyModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractProxyModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractProxyModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QAbstractProxyModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractProxyModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractProxyModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractProxyModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractProxyModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractProxyModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:59
// [-2] void QAbstractProxyModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractProxyModelC2EP7QObject(QObject * parent) {
  return  new MyQAbstractProxyModel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:60
// [-2] void ~QAbstractProxyModel()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractProxyModelD2Ev(void *this_) {
  delete (QAbstractProxyModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:62
// [-2] void setSourceModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractProxyModel14setSourceModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * sourceModel) {
  ((QAbstractProxyModel*)this_)->setSourceModel(sourceModel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:63
// [8] QAbstractItemModel * sourceModel()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel11sourceModelEv(void *this_) {
  return (void*)((QAbstractProxyModel*)this_)->sourceModel();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:65
// [24] QModelIndex mapToSource(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel11mapToSourceERK11QModelIndex(void *this_, QModelIndex* proxyIndex) {
  auto rv = ((QAbstractProxyModel*)this_)->mapToSource(*proxyIndex);
return new QModelIndex(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:66
// [24] QModelIndex mapFromSource(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel13mapFromSourceERK11QModelIndex(void *this_, QModelIndex* sourceIndex) {
  auto rv = ((QAbstractProxyModel*)this_)->mapFromSource(*sourceIndex);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:68
// [8] QItemSelection mapSelectionToSource(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel20mapSelectionToSourceERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QAbstractProxyModel*)this_)->mapSelectionToSource(*selection);
return new QItemSelection(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:69
// [8] QItemSelection mapSelectionFromSource(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel22mapSelectionFromSourceERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QAbstractProxyModel*)this_)->mapSelectionFromSource(*selection);
return new QItemSelection(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:71
// [1] bool submit()
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractProxyModel6submitEv(void *this_) {
  return (bool)((QAbstractProxyModel*)this_)->submit();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:72
// [-2] void revert()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractProxyModel6revertEv(void *this_) {
  ((QAbstractProxyModel*)this_)->revert();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:74
// [16] QVariant data(const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel4dataERK11QModelIndexi(void *this_, QModelIndex* proxyIndex, int role) {
  auto rv = ((QAbstractProxyModel*)this_)->data(*proxyIndex, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:75
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QAbstractProxyModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:76
// [8] QMap<int, QVariant> itemData(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK19QAbstractProxyModel8itemDataERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractProxyModel*)this_)->itemData(*index);
/*return rv;*/
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:77
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK19QAbstractProxyModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QAbstractProxyModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:79
// [1] bool setData(const QModelIndex &, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractProxyModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QAbstractProxyModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:80
// [1] bool setItemData(const QModelIndex &, const QMap<int, QVariant> &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractProxyModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE(void *this_, QModelIndex* index, QMap<int, QVariant>* roles) {
  return (bool)((QAbstractProxyModel*)this_)->setItemData(*index, *roles);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:81
// [1] bool setHeaderData(int, Qt::Orientation, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *this_, int section, Qt::Orientation orientation, QVariant* value, int role) {
  return (bool)((QAbstractProxyModel*)this_)->setHeaderData(section, orientation, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:83
// [24] QModelIndex buddy(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel5buddyERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractProxyModel*)this_)->buddy(*index);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:84
// [1] bool canFetchMore(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QAbstractProxyModel12canFetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QAbstractProxyModel*)this_)->canFetchMore(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:85
// [-2] void fetchMore(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractProxyModel9fetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  ((QAbstractProxyModel*)this_)->fetchMore(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:86
// [-2] void sort(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractProxyModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QAbstractProxyModel*)this_)->sort(column, order);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:87
// [8] QSize span(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel4spanERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractProxyModel*)this_)->span(*index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:88
// [1] bool hasChildren(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QAbstractProxyModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QAbstractProxyModel*)this_)->hasChildren(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:89
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QAbstractProxyModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:91
// [8] QMimeData * mimeData(const QModelIndexList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  return (void*)((QAbstractProxyModel*)this_)->mimeData(indexes);
}

// Public virtual Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qabstractproxymodel.h:92
// [1] bool canDropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
bool C_ZNK19QAbstractProxyModel15canDropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractProxyModel*)this_)->canDropMimeData(data, action, row, column, *parent);
}
#endif // QT_VERSION >= 0x050400

// Public virtual Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qabstractproxymodel.h:94
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractProxyModel*)this_)->dropMimeData(data, action, row, column, *parent);
}
#endif // QT_VERSION >= 0x050400

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:96
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractProxyModel9mimeTypesEv(void *this_) {
  auto rv = ((QAbstractProxyModel*)this_)->mimeTypes();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:97
// [4] Qt::DropActions supportedDragActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK19QAbstractProxyModel20supportedDragActionsEv(void *this_) {
  return (Qt::DropActions)((QAbstractProxyModel*)this_)->supportedDragActions();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:98
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK19QAbstractProxyModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QAbstractProxyModel*)this_)->supportedDropActions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:101
// [-2] void sourceModelChanged(QAbstractProxyModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractProxyModel18sourceModelChangedENS_14QPrivateSignalE(void *this_, QAbstractProxyModel::QPrivateSignal* arg0) {
  ((QAbstractProxyModel*)this_)->sourceModelChanged(*arg0);
}

//  main block end
