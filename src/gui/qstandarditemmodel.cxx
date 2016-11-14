// /usr/include/qt/QtGui/qstandarditemmodel.h
#include <qstandarditemmodel.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:325
// const QMetaObject * metaObject()
extern "C"
void C_ZNK18QStandardItemModel10metaObjectEv(void *this_) {
  /*return*/ ((QStandardItemModel*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:329
// void QStandardItemModel(class QObject *)
extern "C"
void* C_ZN18QStandardItemModelC1EP7QObject(QObject * parent) {
  return new QStandardItemModel(parent);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:330
// void QStandardItemModel(int, int, class QObject *)
extern "C"
void* C_ZN18QStandardItemModelC1EiiP7QObject(int rows, int columns, QObject * parent) {
  return new QStandardItemModel(rows, columns, parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:331
// void ~QStandardItemModel()
extern "C"
void C_ZN18QStandardItemModelD1Ev(void *this_) {
  delete (QStandardItemModel*)(this_);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:333
// void setItemRoleNames(const QHash<int, class QByteArray> &)
extern "C"
void C_ZN18QStandardItemModel16setItemRoleNamesERK5QHashIi10QByteArrayE(void *this_, const QHash<int, QByteArray> & roleNames) {
  ((QStandardItemModel*)this_)->setItemRoleNames(roleNames);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:335
// QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel5indexEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->index(row, column, parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:336
// QModelIndex parent(const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel6parentERK11QModelIndex(void *this_, const QModelIndex & child) {
  /*return*/ ((QStandardItemModel*)this_)->parent(child);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:338
// int rowCount(const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel8rowCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->rowCount(parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:339
// int columnCount(const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel11columnCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->columnCount(parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:340
// bool hasChildren(const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel11hasChildrenERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->hasChildren(parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:342
// QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & idx) {
  /*return*/ ((QStandardItemModel*)this_)->sibling(row, column, idx);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:344
// QVariant data(const class QModelIndex &, int)
extern "C"
void C_ZNK18QStandardItemModel4dataERK11QModelIndexi(void *this_, const QModelIndex & index, int role) {
  /*return*/ ((QStandardItemModel*)this_)->data(index, role);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:345
// bool setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
void C_ZN18QStandardItemModel7setDataERK11QModelIndexRK8QVarianti(void *this_, const QModelIndex & index, const QVariant & value, int role) {
  /*return*/ ((QStandardItemModel*)this_)->setData(index, value, role);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:347
// QVariant headerData(int, Qt::Orientation, int)
extern "C"
void C_ZNK18QStandardItemModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  /*return*/ ((QStandardItemModel*)this_)->headerData(section, orientation, role);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:349
// bool setHeaderData(int, Qt::Orientation, const class QVariant &, int)
extern "C"
void C_ZN18QStandardItemModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *this_, int section, Qt::Orientation orientation, const QVariant & value, int role) {
  /*return*/ ((QStandardItemModel*)this_)->setHeaderData(section, orientation, value, role);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:352
// bool insertRows(int, int, const class QModelIndex &)
extern "C"
void C_ZN18QStandardItemModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->insertRows(row, count, parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:353
// bool insertColumns(int, int, const class QModelIndex &)
extern "C"
void C_ZN18QStandardItemModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->insertColumns(column, count, parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:354
// bool removeRows(int, int, const class QModelIndex &)
extern "C"
void C_ZN18QStandardItemModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->removeRows(row, count, parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:355
// bool removeColumns(int, int, const class QModelIndex &)
extern "C"
void C_ZN18QStandardItemModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->removeColumns(column, count, parent);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:357
// Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel5flagsERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QStandardItemModel*)this_)->flags(index);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:358
// Qt::DropActions supportedDropActions()
extern "C"
void C_ZNK18QStandardItemModel20supportedDropActionsEv(void *this_) {
  /*return*/ ((QStandardItemModel*)this_)->supportedDropActions();
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:360
// QMap<int, QVariant> itemData(const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel8itemDataERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QStandardItemModel*)this_)->itemData(index);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:361
// bool setItemData(const class QModelIndex &, const QMap<int, class QVariant> &)
extern "C"
void C_ZN18QStandardItemModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE(void *this_, const QModelIndex & index, const QMap<int, QVariant> & roles) {
  /*return*/ ((QStandardItemModel*)this_)->setItemData(index, roles);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:363
// void clear()
extern "C"
void C_ZN18QStandardItemModel5clearEv(void *this_) {
  ((QStandardItemModel*)this_)->clear();
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:367
// void sort(int, Qt::SortOrder)
extern "C"
void C_ZN18QStandardItemModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QStandardItemModel*)this_)->sort(column, order);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:369
// QStandardItem * itemFromIndex(const class QModelIndex &)
extern "C"
void C_ZNK18QStandardItemModel13itemFromIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QStandardItemModel*)this_)->itemFromIndex(index);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:370
// QModelIndex indexFromItem(const class QStandardItem *)
extern "C"
void C_ZNK18QStandardItemModel13indexFromItemEPK13QStandardItem(void *this_, const QStandardItem * item) {
  /*return*/ ((QStandardItemModel*)this_)->indexFromItem(item);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:372
// QStandardItem * item(int, int)
extern "C"
void C_ZNK18QStandardItemModel4itemEii(void *this_, int row, int column) {
  /*return*/ ((QStandardItemModel*)this_)->item(row, column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:373
// void setItem(int, int, class QStandardItem *)
extern "C"
void C_ZN18QStandardItemModel7setItemEiiP13QStandardItem(void *this_, int row, int column, QStandardItem * item) {
  ((QStandardItemModel*)this_)->setItem(row, column, item);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:374
// void setItem(int, class QStandardItem *)
extern "C"
void C_ZN18QStandardItemModel7setItemEiP13QStandardItem(void *this_, int row, QStandardItem * item) {
  ((QStandardItemModel*)this_)->setItem(row, item);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:375
// QStandardItem * invisibleRootItem()
extern "C"
void C_ZNK18QStandardItemModel17invisibleRootItemEv(void *this_) {
  /*return*/ ((QStandardItemModel*)this_)->invisibleRootItem();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:377
// QStandardItem * horizontalHeaderItem(int)
extern "C"
void C_ZNK18QStandardItemModel20horizontalHeaderItemEi(void *this_, int column) {
  /*return*/ ((QStandardItemModel*)this_)->horizontalHeaderItem(column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:378
// void setHorizontalHeaderItem(int, class QStandardItem *)
extern "C"
void C_ZN18QStandardItemModel23setHorizontalHeaderItemEiP13QStandardItem(void *this_, int column, QStandardItem * item) {
  ((QStandardItemModel*)this_)->setHorizontalHeaderItem(column, item);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:379
// QStandardItem * verticalHeaderItem(int)
extern "C"
void C_ZNK18QStandardItemModel18verticalHeaderItemEi(void *this_, int row) {
  /*return*/ ((QStandardItemModel*)this_)->verticalHeaderItem(row);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:380
// void setVerticalHeaderItem(int, class QStandardItem *)
extern "C"
void C_ZN18QStandardItemModel21setVerticalHeaderItemEiP13QStandardItem(void *this_, int row, QStandardItem * item) {
  ((QStandardItemModel*)this_)->setVerticalHeaderItem(row, item);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:382
// void setHorizontalHeaderLabels(const class QStringList &)
extern "C"
void C_ZN18QStandardItemModel25setHorizontalHeaderLabelsERK11QStringList(void *this_, const QStringList & labels) {
  ((QStandardItemModel*)this_)->setHorizontalHeaderLabels(labels);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:383
// void setVerticalHeaderLabels(const class QStringList &)
extern "C"
void C_ZN18QStandardItemModel23setVerticalHeaderLabelsERK11QStringList(void *this_, const QStringList & labels) {
  ((QStandardItemModel*)this_)->setVerticalHeaderLabels(labels);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:385
// void setRowCount(int)
extern "C"
void C_ZN18QStandardItemModel11setRowCountEi(void *this_, int rows) {
  ((QStandardItemModel*)this_)->setRowCount(rows);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:386
// void setColumnCount(int)
extern "C"
void C_ZN18QStandardItemModel14setColumnCountEi(void *this_, int columns) {
  ((QStandardItemModel*)this_)->setColumnCount(columns);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:388
// void appendRow(const QList<class QStandardItem *> &)
extern "C"
void C_ZN18QStandardItemModel9appendRowERK5QListIP13QStandardItemE(void *this_, const QList<QStandardItem *> & items) {
  ((QStandardItemModel*)this_)->appendRow(items);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:389
// void appendColumn(const QList<class QStandardItem *> &)
extern "C"
void C_ZN18QStandardItemModel12appendColumnERK5QListIP13QStandardItemE(void *this_, const QList<QStandardItem *> & items) {
  ((QStandardItemModel*)this_)->appendColumn(items);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:390
// void appendRow(class QStandardItem *)
extern "C"
void C_ZN18QStandardItemModel9appendRowEP13QStandardItem(void *this_, QStandardItem * item) {
  ((QStandardItemModel*)this_)->appendRow(item);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:392
// void insertRow(int, const QList<class QStandardItem *> &)
extern "C"
void C_ZN18QStandardItemModel9insertRowEiRK5QListIP13QStandardItemE(void *this_, int row, const QList<QStandardItem *> & items) {
  ((QStandardItemModel*)this_)->insertRow(row, items);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:393
// void insertColumn(int, const QList<class QStandardItem *> &)
extern "C"
void C_ZN18QStandardItemModel12insertColumnEiRK5QListIP13QStandardItemE(void *this_, int column, const QList<QStandardItem *> & items) {
  ((QStandardItemModel*)this_)->insertColumn(column, items);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:394
// void insertRow(int, class QStandardItem *)
extern "C"
void C_ZN18QStandardItemModel9insertRowEiP13QStandardItem(void *this_, int row, QStandardItem * item) {
  ((QStandardItemModel*)this_)->insertRow(row, item);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:396
// bool insertRow(int, const class QModelIndex &)
extern "C"
void C_ZN18QStandardItemModel9insertRowEiRK11QModelIndex(void *this_, int row, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->insertRow(row, parent);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:397
// bool insertColumn(int, const class QModelIndex &)
extern "C"
void C_ZN18QStandardItemModel12insertColumnEiRK11QModelIndex(void *this_, int column, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->insertColumn(column, parent);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:399
// QStandardItem * takeItem(int, int)
extern "C"
void C_ZN18QStandardItemModel8takeItemEii(void *this_, int row, int column) {
  /*return*/ ((QStandardItemModel*)this_)->takeItem(row, column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:400
// QList<QStandardItem *> takeRow(int)
extern "C"
void C_ZN18QStandardItemModel7takeRowEi(void *this_, int row) {
  /*return*/ ((QStandardItemModel*)this_)->takeRow(row);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:401
// QList<QStandardItem *> takeColumn(int)
extern "C"
void C_ZN18QStandardItemModel10takeColumnEi(void *this_, int column) {
  /*return*/ ((QStandardItemModel*)this_)->takeColumn(column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:403
// QStandardItem * takeHorizontalHeaderItem(int)
extern "C"
void C_ZN18QStandardItemModel24takeHorizontalHeaderItemEi(void *this_, int column) {
  /*return*/ ((QStandardItemModel*)this_)->takeHorizontalHeaderItem(column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:404
// QStandardItem * takeVerticalHeaderItem(int)
extern "C"
void C_ZN18QStandardItemModel22takeVerticalHeaderItemEi(void *this_, int row) {
  /*return*/ ((QStandardItemModel*)this_)->takeVerticalHeaderItem(row);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:406
// const QStandardItem * itemPrototype()
extern "C"
void C_ZNK18QStandardItemModel13itemPrototypeEv(void *this_) {
  /*return*/ ((QStandardItemModel*)this_)->itemPrototype();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:407
// void setItemPrototype(const class QStandardItem *)
extern "C"
void C_ZN18QStandardItemModel16setItemPrototypeEPK13QStandardItem(void *this_, const QStandardItem * item) {
  ((QStandardItemModel*)this_)->setItemPrototype(item);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:409
// QList<QStandardItem *> findItems(const class QString &, Qt::MatchFlags, int)
extern "C"
void C_ZNK18QStandardItemModel9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEEi(void *this_, const QString & text, QFlags<Qt::MatchFlag> flags, int column) {
  /*return*/ ((QStandardItemModel*)this_)->findItems(text, flags, column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:413
// int sortRole()
extern "C"
void C_ZNK18QStandardItemModel8sortRoleEv(void *this_) {
  /*return*/ ((QStandardItemModel*)this_)->sortRole();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:414
// void setSortRole(int)
extern "C"
void C_ZN18QStandardItemModel11setSortRoleEi(void *this_, int role) {
  ((QStandardItemModel*)this_)->setSortRole(role);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:416
// QStringList mimeTypes()
extern "C"
void C_ZNK18QStandardItemModel9mimeTypesEv(void *this_) {
  /*return*/ ((QStandardItemModel*)this_)->mimeTypes();
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:417
// QMimeData * mimeData(const QModelIndexList &)
extern "C"
void C_ZNK18QStandardItemModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  /*return*/ ((QStandardItemModel*)this_)->mimeData(indexes);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:418
// bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
void C_ZN18QStandardItemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QStandardItemModel*)this_)->dropMimeData(data, action, row, column, parent);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:421
// void itemChanged(class QStandardItem *)
extern "C"
void C_ZN18QStandardItemModel11itemChangedEP13QStandardItem(void *this_, QStandardItem * item) {
  ((QStandardItemModel*)this_)->itemChanged(item);
}