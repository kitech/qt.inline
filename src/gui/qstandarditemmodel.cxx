//  header block begin
// /usr/include/qt/QtGui/qstandarditemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstandarditemmodel.h>
#include <QtGui>
#include "callback_inherit.h"

// QStandardItemModel is pure virtual: false
// QStandardItemModel has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStandardItemModel : public QStandardItemModel {
public:
  virtual ~MyQStandardItemModel() {}
// void QStandardItemModel(QObject *)
MyQStandardItemModel(QObject * parent) : QStandardItemModel(parent) {}
// void QStandardItemModel(int, int, QObject *)
MyQStandardItemModel(int rows, int columns, QObject * parent) : QStandardItemModel(rows, columns, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:326
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel10metaObjectEv(void *this_) {
  return (void*)((QStandardItemModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:326
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStandardItemModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStandardItemModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:326
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QStandardItemModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStandardItemModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:326
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStandardItemModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStandardItemModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:326
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStandardItemModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStandardItemModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:330
// [-2] void QStandardItemModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStandardItemModelC2EP7QObject(QObject * parent) {
  return  new MyQStandardItemModel(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:331
// [-2] void QStandardItemModel(int, int, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStandardItemModelC2EiiP7QObject(int rows, int columns, QObject * parent) {
  return  new MyQStandardItemModel(rows, columns, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:332
// [-2] void ~QStandardItemModel()
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModelD2Ev(void *this_) {
  delete (QStandardItemModel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:334
// [-2] void setItemRoleNames(const QHash<int, QByteArray> &)
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel16setItemRoleNamesERK5QHashIi10QByteArrayE(void *this_, QHash<int, QByteArray>* roleNames) {
  ((QStandardItemModel*)this_)->setItemRoleNames(*roleNames);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:336
// [24] QModelIndex index(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QStandardItemModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:337
// [24] QModelIndex parent(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QStandardItemModel*)this_)->parent(*child);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:339
// [4] int rowCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK18QStandardItemModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QStandardItemModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:340
// [4] int columnCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK18QStandardItemModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QStandardItemModel*)this_)->columnCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:341
// [1] bool hasChildren(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QStandardItemModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QStandardItemModel*)this_)->hasChildren(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:343
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QStandardItemModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:345
// [16] QVariant data(const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QStandardItemModel*)this_)->data(*index, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:346
// [1] bool setData(const QModelIndex &, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QStandardItemModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:348
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QStandardItemModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:350
// [1] bool setHeaderData(int, Qt::Orientation, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *this_, int section, Qt::Orientation orientation, QVariant* value, int role) {
  return (bool)((QStandardItemModel*)this_)->setHeaderData(section, orientation, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:353
// [1] bool insertRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QStandardItemModel*)this_)->insertRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:354
// [1] bool insertColumns(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QStandardItemModel*)this_)->insertColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:355
// [1] bool removeRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QStandardItemModel*)this_)->removeRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:356
// [1] bool removeColumns(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QStandardItemModel*)this_)->removeColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:358
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK18QStandardItemModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QStandardItemModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:359
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK18QStandardItemModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QStandardItemModel*)this_)->supportedDropActions();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:361
// [8] QMap<int, QVariant> itemData(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK18QStandardItemModel8itemDataERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QStandardItemModel*)this_)->itemData(*index);
/*return rv;*/
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:362
// [1] bool setItemData(const QModelIndex &, const QMap<int, QVariant> &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE(void *this_, QModelIndex* index, QMap<int, QVariant>* roles) {
  return (bool)((QStandardItemModel*)this_)->setItemData(*index, *roles);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:364
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel5clearEv(void *this_) {
  ((QStandardItemModel*)this_)->clear();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:368
// [-2] void sort(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QStandardItemModel*)this_)->sort(column, order);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:370
// [8] QStandardItem * itemFromIndex(const QModelIndex &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel13itemFromIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  return (void*)((QStandardItemModel*)this_)->itemFromIndex(*index);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:371
// [24] QModelIndex indexFromItem(const QStandardItem *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel13indexFromItemEPK13QStandardItem(void *this_, const QStandardItem * item) {
  auto rv = ((QStandardItemModel*)this_)->indexFromItem(item);
return new QModelIndex(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:373
// [8] QStandardItem * item(int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel4itemEii(void *this_, int row, int column) {
  return (void*)((QStandardItemModel*)this_)->item(row, column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:374
// [-2] void setItem(int, int, QStandardItem *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel7setItemEiiP13QStandardItem(void *this_, int row, int column, QStandardItem * item) {
  ((QStandardItemModel*)this_)->setItem(row, column, item);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:375
// [-2] void setItem(int, QStandardItem *)
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel7setItemEiP13QStandardItem(void *this_, int row, QStandardItem * item) {
  ((QStandardItemModel*)this_)->setItem(row, item);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:376
// [8] QStandardItem * invisibleRootItem()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel17invisibleRootItemEv(void *this_) {
  return (void*)((QStandardItemModel*)this_)->invisibleRootItem();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:378
// [8] QStandardItem * horizontalHeaderItem(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel20horizontalHeaderItemEi(void *this_, int column) {
  return (void*)((QStandardItemModel*)this_)->horizontalHeaderItem(column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:379
// [-2] void setHorizontalHeaderItem(int, QStandardItem *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel23setHorizontalHeaderItemEiP13QStandardItem(void *this_, int column, QStandardItem * item) {
  ((QStandardItemModel*)this_)->setHorizontalHeaderItem(column, item);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:380
// [8] QStandardItem * verticalHeaderItem(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel18verticalHeaderItemEi(void *this_, int row) {
  return (void*)((QStandardItemModel*)this_)->verticalHeaderItem(row);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:381
// [-2] void setVerticalHeaderItem(int, QStandardItem *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel21setVerticalHeaderItemEiP13QStandardItem(void *this_, int row, QStandardItem * item) {
  ((QStandardItemModel*)this_)->setVerticalHeaderItem(row, item);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:383
// [-2] void setHorizontalHeaderLabels(const QStringList &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel25setHorizontalHeaderLabelsERK11QStringList(void *this_, QStringList* labels) {
  ((QStandardItemModel*)this_)->setHorizontalHeaderLabels(*labels);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:384
// [-2] void setVerticalHeaderLabels(const QStringList &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel23setVerticalHeaderLabelsERK11QStringList(void *this_, QStringList* labels) {
  ((QStandardItemModel*)this_)->setVerticalHeaderLabels(*labels);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:386
// [-2] void setRowCount(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel11setRowCountEi(void *this_, int rows) {
  ((QStandardItemModel*)this_)->setRowCount(rows);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:387
// [-2] void setColumnCount(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel14setColumnCountEi(void *this_, int columns) {
  ((QStandardItemModel*)this_)->setColumnCount(columns);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:389
// [-2] void appendRow(const QList<QStandardItem *> &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel9appendRowERK5QListIP13QStandardItemE(void *this_, QList<QStandardItem *>* items) {
  ((QStandardItemModel*)this_)->appendRow(*items);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:390
// [-2] void appendColumn(const QList<QStandardItem *> &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel12appendColumnERK5QListIP13QStandardItemE(void *this_, QList<QStandardItem *>* items) {
  ((QStandardItemModel*)this_)->appendColumn(*items);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:391
// [-2] void appendRow(QStandardItem *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel9appendRowEP13QStandardItem(void *this_, QStandardItem * item) {
  ((QStandardItemModel*)this_)->appendRow(item);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:393
// [-2] void insertRow(int, const QList<QStandardItem *> &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel9insertRowEiRK5QListIP13QStandardItemE(void *this_, int row, QList<QStandardItem *>* items) {
  ((QStandardItemModel*)this_)->insertRow(row, *items);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:394
// [-2] void insertColumn(int, const QList<QStandardItem *> &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel12insertColumnEiRK5QListIP13QStandardItemE(void *this_, int column, QList<QStandardItem *>* items) {
  ((QStandardItemModel*)this_)->insertColumn(column, *items);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:395
// [-2] void insertRow(int, QStandardItem *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel9insertRowEiP13QStandardItem(void *this_, int row, QStandardItem * item) {
  ((QStandardItemModel*)this_)->insertRow(row, item);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:397
// [1] bool insertRow(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel9insertRowEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QStandardItemModel*)this_)->insertRow(row, *parent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:398
// [1] bool insertColumn(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel12insertColumnEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QStandardItemModel*)this_)->insertColumn(column, *parent);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:400
// [8] QStandardItem * takeItem(int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN18QStandardItemModel8takeItemEii(void *this_, int row, int column) {
  return (void*)((QStandardItemModel*)this_)->takeItem(row, column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:401
// [8] QList<QStandardItem *> takeRow(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QList<QStandardItem *>* C_ZN18QStandardItemModel7takeRowEi(void *this_, int row) {
  auto rv = ((QStandardItemModel*)this_)->takeRow(row);
return new QList<QStandardItem *>(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:402
// [8] QList<QStandardItem *> takeColumn(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QList<QStandardItem *>* C_ZN18QStandardItemModel10takeColumnEi(void *this_, int column) {
  auto rv = ((QStandardItemModel*)this_)->takeColumn(column);
return new QList<QStandardItem *>(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:404
// [8] QStandardItem * takeHorizontalHeaderItem(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN18QStandardItemModel24takeHorizontalHeaderItemEi(void *this_, int column) {
  return (void*)((QStandardItemModel*)this_)->takeHorizontalHeaderItem(column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:405
// [8] QStandardItem * takeVerticalHeaderItem(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN18QStandardItemModel22takeVerticalHeaderItemEi(void *this_, int row) {
  return (void*)((QStandardItemModel*)this_)->takeVerticalHeaderItem(row);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:407
// [8] const QStandardItem * itemPrototype()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel13itemPrototypeEv(void *this_) {
  return (void*)((QStandardItemModel*)this_)->itemPrototype();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:408
// [-2] void setItemPrototype(const QStandardItem *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel16setItemPrototypeEPK13QStandardItem(void *this_, const QStandardItem * item) {
  ((QStandardItemModel*)this_)->setItemPrototype(item);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:410
// [8] QList<QStandardItem *> findItems(const QString &, Qt::MatchFlags, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QList<QStandardItem *>* C_ZNK18QStandardItemModel9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEEi(void *this_, QString* text, QFlags<Qt::MatchFlag> flags, int column) {
  auto rv = ((QStandardItemModel*)this_)->findItems(*text, flags, column);
return new QList<QStandardItem *>(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:414
// [4] int sortRole()
extern "C" Q_DECL_EXPORT
int C_ZNK18QStandardItemModel8sortRoleEv(void *this_) {
  return (int)((QStandardItemModel*)this_)->sortRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:415
// [-2] void setSortRole(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel11setSortRoleEi(void *this_, int role) {
  ((QStandardItemModel*)this_)->setSortRole(role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:417
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel9mimeTypesEv(void *this_) {
  auto rv = ((QStandardItemModel*)this_)->mimeTypes();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:418
// [8] QMimeData * mimeData(const QModelIndexList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QStandardItemModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  return (void*)((QStandardItemModel*)this_)->mimeData(indexes);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:419
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QStandardItemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QStandardItemModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qstandarditemmodel.h:422
// [-2] void itemChanged(QStandardItem *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QStandardItemModel11itemChangedEP13QStandardItem(void *this_, QStandardItem * item) {
  ((QStandardItemModel*)this_)->itemChanged(item);
}
#endif // QT_VERSION >= 0x040200

//  main block end
