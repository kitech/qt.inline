// /usr/include/qt/QtWidgets/qtreewidget.h
#include <qtreewidget.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:257
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QTreeWidget10metaObjectEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:264
// void QTreeWidget(class QWidget *)
extern "C"
void* C_ZN11QTreeWidgetC1EP7QWidget(QWidget * parent) {
  return new QTreeWidget(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:265
// void ~QTreeWidget()
extern "C"
void C_ZN11QTreeWidgetD1Ev(void *this_) {
  delete (QTreeWidget*)(this_);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:267
// int columnCount()
extern "C"
void C_ZNK11QTreeWidget11columnCountEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->columnCount();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:268
// void setColumnCount(int)
extern "C"
void C_ZN11QTreeWidget14setColumnCountEi(void *this_, int columns) {
  ((QTreeWidget*)this_)->setColumnCount(columns);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:270
// QTreeWidgetItem * invisibleRootItem()
extern "C"
void C_ZNK11QTreeWidget17invisibleRootItemEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->invisibleRootItem();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:271
// QTreeWidgetItem * topLevelItem(int)
extern "C"
void C_ZNK11QTreeWidget12topLevelItemEi(void *this_, int index) {
  /*return*/ ((QTreeWidget*)this_)->topLevelItem(index);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:272
// int topLevelItemCount()
extern "C"
void C_ZNK11QTreeWidget17topLevelItemCountEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->topLevelItemCount();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:273
// void insertTopLevelItem(int, class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget18insertTopLevelItemEiP15QTreeWidgetItem(void *this_, int index, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->insertTopLevelItem(index, item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:274
// void addTopLevelItem(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget15addTopLevelItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->addTopLevelItem(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:275
// QTreeWidgetItem * takeTopLevelItem(int)
extern "C"
void C_ZN11QTreeWidget16takeTopLevelItemEi(void *this_, int index) {
  /*return*/ ((QTreeWidget*)this_)->takeTopLevelItem(index);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:276
// int indexOfTopLevelItem(class QTreeWidgetItem *)
extern "C"
void C_ZNK11QTreeWidget19indexOfTopLevelItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  /*return*/ ((QTreeWidget*)this_)->indexOfTopLevelItem(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:278
// void insertTopLevelItems(int, const QList<class QTreeWidgetItem *> &)
extern "C"
void C_ZN11QTreeWidget19insertTopLevelItemsEiRK5QListIP15QTreeWidgetItemE(void *this_, int index, const QList<QTreeWidgetItem *> & items) {
  ((QTreeWidget*)this_)->insertTopLevelItems(index, items);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:279
// void addTopLevelItems(const QList<class QTreeWidgetItem *> &)
extern "C"
void C_ZN11QTreeWidget16addTopLevelItemsERK5QListIP15QTreeWidgetItemE(void *this_, const QList<QTreeWidgetItem *> & items) {
  ((QTreeWidget*)this_)->addTopLevelItems(items);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:281
// QTreeWidgetItem * headerItem()
extern "C"
void C_ZNK11QTreeWidget10headerItemEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->headerItem();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:282
// void setHeaderItem(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget13setHeaderItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->setHeaderItem(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:283
// void setHeaderLabels(const class QStringList &)
extern "C"
void C_ZN11QTreeWidget15setHeaderLabelsERK11QStringList(void *this_, const QStringList & labels) {
  ((QTreeWidget*)this_)->setHeaderLabels(labels);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:284
// void setHeaderLabel(const class QString &)
extern "C"
void C_ZN11QTreeWidget14setHeaderLabelERK7QString(void *this_, const QString & label) {
  ((QTreeWidget*)this_)->setHeaderLabel(label);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:286
// QTreeWidgetItem * currentItem()
extern "C"
void C_ZNK11QTreeWidget11currentItemEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->currentItem();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:287
// int currentColumn()
extern "C"
void C_ZNK11QTreeWidget13currentColumnEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->currentColumn();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:288
// void setCurrentItem(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->setCurrentItem(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:289
// void setCurrentItem(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->setCurrentItem(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:290
// void setCurrentItem(class QTreeWidgetItem *, int, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItemi6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QTreeWidgetItem * item, int column, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTreeWidget*)this_)->setCurrentItem(item, column, command);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:292
// QTreeWidgetItem * itemAt(const class QPoint &)
extern "C"
void C_ZNK11QTreeWidget6itemAtERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QTreeWidget*)this_)->itemAt(p);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:293
// QTreeWidgetItem * itemAt(int, int)
extern "C"
void C_ZNK11QTreeWidget6itemAtEii(void *this_, int x, int y) {
  /*return*/ ((QTreeWidget*)this_)->itemAt(x, y);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:294
// QRect visualItemRect(const class QTreeWidgetItem *)
extern "C"
void C_ZNK11QTreeWidget14visualItemRectEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  /*return*/ ((QTreeWidget*)this_)->visualItemRect(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:296
// int sortColumn()
extern "C"
void C_ZNK11QTreeWidget10sortColumnEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->sortColumn();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:297
// void sortItems(int, Qt::SortOrder)
extern "C"
void C_ZN11QTreeWidget9sortItemsEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeWidget*)this_)->sortItems(column, order);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:299
// void editItem(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget8editItemEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->editItem(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:300
// void openPersistentEditor(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget20openPersistentEditorEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->openPersistentEditor(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:301
// void closePersistentEditor(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget21closePersistentEditorEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->closePersistentEditor(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:303
// QWidget * itemWidget(class QTreeWidgetItem *, int)
extern "C"
void C_ZNK11QTreeWidget10itemWidgetEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  /*return*/ ((QTreeWidget*)this_)->itemWidget(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:304
// void setItemWidget(class QTreeWidgetItem *, int, class QWidget *)
extern "C"
void C_ZN11QTreeWidget13setItemWidgetEP15QTreeWidgetItemiP7QWidget(void *this_, QTreeWidgetItem * item, int column, QWidget * widget) {
  ((QTreeWidget*)this_)->setItemWidget(item, column, widget);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:305
// void removeItemWidget(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget16removeItemWidgetEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->removeItemWidget(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:307
// bool isItemSelected(const class QTreeWidgetItem *)
extern "C"
void C_ZNK11QTreeWidget14isItemSelectedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  /*return*/ ((QTreeWidget*)this_)->isItemSelected(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:308
// void setItemSelected(const class QTreeWidgetItem *, _Bool)
extern "C"
void C_ZN11QTreeWidget15setItemSelectedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool select) {
  ((QTreeWidget*)this_)->setItemSelected(item, select);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:309
// QList<QTreeWidgetItem *> selectedItems()
extern "C"
void C_ZNK11QTreeWidget13selectedItemsEv(void *this_) {
  /*return*/ ((QTreeWidget*)this_)->selectedItems();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:310
// QList<QTreeWidgetItem *> findItems(const class QString &, Qt::MatchFlags, int)
extern "C"
void C_ZNK11QTreeWidget9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEEi(void *this_, const QString & text, QFlags<Qt::MatchFlag> flags, int column) {
  /*return*/ ((QTreeWidget*)this_)->findItems(text, flags, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:313
// bool isItemHidden(const class QTreeWidgetItem *)
extern "C"
void C_ZNK11QTreeWidget12isItemHiddenEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  /*return*/ ((QTreeWidget*)this_)->isItemHidden(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:314
// void setItemHidden(const class QTreeWidgetItem *, _Bool)
extern "C"
void C_ZN11QTreeWidget13setItemHiddenEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool hide) {
  ((QTreeWidget*)this_)->setItemHidden(item, hide);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:316
// bool isItemExpanded(const class QTreeWidgetItem *)
extern "C"
void C_ZNK11QTreeWidget14isItemExpandedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  /*return*/ ((QTreeWidget*)this_)->isItemExpanded(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:317
// void setItemExpanded(const class QTreeWidgetItem *, _Bool)
extern "C"
void C_ZN11QTreeWidget15setItemExpandedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool expand) {
  ((QTreeWidget*)this_)->setItemExpanded(item, expand);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:319
// bool isFirstItemColumnSpanned(const class QTreeWidgetItem *)
extern "C"
void C_ZNK11QTreeWidget24isFirstItemColumnSpannedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  /*return*/ ((QTreeWidget*)this_)->isFirstItemColumnSpanned(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:320
// void setFirstItemColumnSpanned(const class QTreeWidgetItem *, _Bool)
extern "C"
void C_ZN11QTreeWidget25setFirstItemColumnSpannedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool span) {
  ((QTreeWidget*)this_)->setFirstItemColumnSpanned(item, span);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:322
// QTreeWidgetItem * itemAbove(const class QTreeWidgetItem *)
extern "C"
void C_ZNK11QTreeWidget9itemAboveEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  /*return*/ ((QTreeWidget*)this_)->itemAbove(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:323
// QTreeWidgetItem * itemBelow(const class QTreeWidgetItem *)
extern "C"
void C_ZNK11QTreeWidget9itemBelowEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  /*return*/ ((QTreeWidget*)this_)->itemBelow(item);
}
// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:325
// void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN11QTreeWidget17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTreeWidget*)this_)->setSelectionModel(selectionModel);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:328
// void scrollToItem(const class QTreeWidgetItem *, class QAbstractItemView::ScrollHint)
extern "C"
void C_ZN11QTreeWidget12scrollToItemEPK15QTreeWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QTreeWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QTreeWidget*)this_)->scrollToItem(item, hint);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:330
// void expandItem(const class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget10expandItemEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->expandItem(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:331
// void collapseItem(const class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget12collapseItemEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->collapseItem(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:332
// void clear()
extern "C"
void C_ZN11QTreeWidget5clearEv(void *this_) {
  ((QTreeWidget*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:335
// void itemPressed(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemPressed(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:336
// void itemClicked(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemClicked(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:337
// void itemDoubleClicked(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemDoubleClicked(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:338
// void itemActivated(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemActivated(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:339
// void itemEntered(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemEntered(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:340
// void itemChanged(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemChanged(item, column);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:341
// void itemExpanded(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->itemExpanded(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:342
// void itemCollapsed(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->itemCollapsed(item);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:343
// void currentItemChanged(class QTreeWidgetItem *, class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(void *this_, QTreeWidgetItem * current, QTreeWidgetItem * previous) {
  ((QTreeWidget*)this_)->currentItemChanged(current, previous);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:344
// void itemSelectionChanged()
extern "C"
void C_ZN11QTreeWidget20itemSelectionChangedEv(void *this_) {
  ((QTreeWidget*)this_)->itemSelectionChanged();
}