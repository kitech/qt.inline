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
// QAbstractProxyModel has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractProxyModel : public QAbstractProxyModel {
public:
  virtual ~MyQAbstractProxyModel() {}
// void QAbstractProxyModel(QObject *)
MyQAbstractProxyModel(QObject * parent) : QAbstractProxyModel(parent) {}
// Protected Visibility=Default Availability=Available
// void resetInternalData()
  virtual void resetInternalData() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resetInternalData", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractProxyModel::resetInternalData();
  }
  }

// void QAbstractProxyModel(QAbstractProxyModelPrivate &, QObject *)
MyQAbstractProxyModel(QAbstractProxyModelPrivate & arg0, QObject * parent) : QAbstractProxyModel(arg0, parent) {}
};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:104
// [-2] void resetInternalData()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractProxyModel17resetInternalDataEv(void *this_) {
  ((QAbstractProxyModel*)this_)->QAbstractProxyModel::resetInternalData();
}

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
  auto _nilp = (MyQAbstractProxyModel*)(0);
  return 0; // new MyQAbstractProxyModel(parent);
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
