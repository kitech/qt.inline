//  header block begin
// /usr/include/qt/QtWidgets/qtreewidget.h
#include <qtreewidget.h>
#include <QtWidgets>

// QTreeWidget is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:349
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QTreeWidget5eventEP6QEvent = 0;
extern "C" void set_callback_ZN11QTreeWidget5eventEP6QEvent(void*cbfn)
{ callback_ZN11QTreeWidget5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:356
// [1] bool dropMimeData(class QTreeWidgetItem *, int, const class QMimeData *, Qt::DropAction)
extern "C"
void* callback_ZN11QTreeWidget12dropMimeDataEP15QTreeWidgetItemiPK9QMimeDataN2Qt10DropActionE = 0;
extern "C" void set_callback_ZN11QTreeWidget12dropMimeDataEP15QTreeWidgetItemiPK9QMimeDataN2Qt10DropActionE(void*cbfn)
{ callback_ZN11QTreeWidget12dropMimeDataEP15QTreeWidgetItemiPK9QMimeDataN2Qt10DropActionE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:358
// [4] Qt::DropActions supportedDropActions()
extern "C"
void* callback_ZNK11QTreeWidget20supportedDropActionsEv = 0;
extern "C" void set_callback_ZNK11QTreeWidget20supportedDropActionsEv(void*cbfn)
{ callback_ZNK11QTreeWidget20supportedDropActionsEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:367
// [24] QModelIndex indexFromItem(const class QTreeWidgetItem *, int)
extern "C"
void* callback_ZNK11QTreeWidget13indexFromItemEPK15QTreeWidgetItemi = 0;
extern "C" void set_callback_ZNK11QTreeWidget13indexFromItemEPK15QTreeWidgetItemi(void*cbfn)
{ callback_ZNK11QTreeWidget13indexFromItemEPK15QTreeWidgetItemi = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:368
// [24] QModelIndex indexFromItem(class QTreeWidgetItem *, int)
extern "C"
void* callback_ZNK11QTreeWidget13indexFromItemEP15QTreeWidgetItemi = 0;
extern "C" void set_callback_ZNK11QTreeWidget13indexFromItemEP15QTreeWidgetItemi(void*cbfn)
{ callback_ZNK11QTreeWidget13indexFromItemEP15QTreeWidgetItemi = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:369
// [8] QTreeWidgetItem * itemFromIndex(const class QModelIndex &)
extern "C"
void* callback_ZNK11QTreeWidget13itemFromIndexERK11QModelIndex = 0;
extern "C" void set_callback_ZNK11QTreeWidget13itemFromIndexERK11QModelIndex(void*cbfn)
{ callback_ZNK11QTreeWidget13itemFromIndexERK11QModelIndex = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:373
// [-2] void dropEvent(class QDropEvent *)
extern "C"
void* callback_ZN11QTreeWidget9dropEventEP10QDropEvent = 0;
extern "C" void set_callback_ZN11QTreeWidget9dropEventEP10QDropEvent(void*cbfn)
{ callback_ZN11QTreeWidget9dropEventEP10QDropEvent = cbfn; }

class MyQTreeWidget : public QTreeWidget {
public:
MyQTreeWidget(QWidget * parent) : QTreeWidget(parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN11QTreeWidget5eventEP6QEvent != 0) {
  // callback_ZN11QTreeWidget5eventEP6QEvent(e);
}}
// bool dropMimeData(class QTreeWidgetItem *, int, const class QMimeData *, Qt::DropAction)
// bool dropMimeData(class QTreeWidgetItem *, int, const class QMimeData *, Qt::DropAction)
virtual bool dropMimeData(QTreeWidgetItem * parent, int index, const QMimeData * data, Qt::DropAction action) {
  if (callback_ZN11QTreeWidget12dropMimeDataEP15QTreeWidgetItemiPK9QMimeDataN2Qt10DropActionE != 0) {
  // callback_ZN11QTreeWidget12dropMimeDataEP15QTreeWidgetItemiPK9QMimeDataN2Qt10DropActionE(parent, index, data, action);
}}
// Qt::DropActions supportedDropActions()
// Qt::DropActions supportedDropActions()
virtual Qt::DropActions supportedDropActions() {
  if (callback_ZNK11QTreeWidget20supportedDropActionsEv != 0) {
  // callback_ZNK11QTreeWidget20supportedDropActionsEv();
}}
// QModelIndex indexFromItem(const class QTreeWidgetItem *, int)
// QModelIndex indexFromItem(const class QTreeWidgetItem *, int)
virtual QModelIndex indexFromItem(const QTreeWidgetItem * item, int column) {
  if (callback_ZNK11QTreeWidget13indexFromItemEPK15QTreeWidgetItemi != 0) {
  // callback_ZNK11QTreeWidget13indexFromItemEPK15QTreeWidgetItemi(item, column);
}}
// QModelIndex indexFromItem(class QTreeWidgetItem *, int)
// QModelIndex indexFromItem(class QTreeWidgetItem *, int)
virtual QModelIndex indexFromItem(QTreeWidgetItem * item, int column) {
  if (callback_ZNK11QTreeWidget13indexFromItemEP15QTreeWidgetItemi != 0) {
  // callback_ZNK11QTreeWidget13indexFromItemEP15QTreeWidgetItemi(item, column);
}}
// QTreeWidgetItem * itemFromIndex(const class QModelIndex &)
// QTreeWidgetItem * itemFromIndex(const class QModelIndex &)
virtual QTreeWidgetItem * itemFromIndex(const QModelIndex & index) {
  if (callback_ZNK11QTreeWidget13itemFromIndexERK11QModelIndex != 0) {
  // callback_ZNK11QTreeWidget13itemFromIndexERK11QModelIndex(index);
}}
// void dropEvent(class QDropEvent *)
// void dropEvent(class QDropEvent *)
virtual void dropEvent(QDropEvent * event) {
  if (callback_ZN11QTreeWidget9dropEventEP10QDropEvent != 0) {
  // callback_ZN11QTreeWidget9dropEventEP10QDropEvent(event);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:257
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QTreeWidget10metaObjectEv(void *this_) {
  return (void*)((QTreeWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:264
// [-2] void QTreeWidget(class QWidget *)
extern "C"
void* C_ZN11QTreeWidgetC1EP7QWidget(QWidget * parent) {
  (MyQTreeWidget*)(0);
  return  new MyQTreeWidget(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:265
// [-2] void ~QTreeWidget()
extern "C"
void C_ZN11QTreeWidgetD1Ev(void *this_) {
  delete (QTreeWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:267
// [4] int columnCount()
extern "C"
int C_ZNK11QTreeWidget11columnCountEv(void *this_) {
  return (int)((QTreeWidget*)this_)->columnCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:268
// [-2] void setColumnCount(int)
extern "C"
void C_ZN11QTreeWidget14setColumnCountEi(void *this_, int columns) {
  ((QTreeWidget*)this_)->setColumnCount(columns);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:270
// [8] QTreeWidgetItem * invisibleRootItem()
extern "C"
void* C_ZNK11QTreeWidget17invisibleRootItemEv(void *this_) {
  return (void*)((QTreeWidget*)this_)->invisibleRootItem();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:271
// [8] QTreeWidgetItem * topLevelItem(int)
extern "C"
void* C_ZNK11QTreeWidget12topLevelItemEi(void *this_, int index) {
  return (void*)((QTreeWidget*)this_)->topLevelItem(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:272
// [4] int topLevelItemCount()
extern "C"
int C_ZNK11QTreeWidget17topLevelItemCountEv(void *this_) {
  return (int)((QTreeWidget*)this_)->topLevelItemCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:273
// [-2] void insertTopLevelItem(int, class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget18insertTopLevelItemEiP15QTreeWidgetItem(void *this_, int index, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->insertTopLevelItem(index, item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:274
// [-2] void addTopLevelItem(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget15addTopLevelItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->addTopLevelItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:275
// [8] QTreeWidgetItem * takeTopLevelItem(int)
extern "C"
void* C_ZN11QTreeWidget16takeTopLevelItemEi(void *this_, int index) {
  return (void*)((QTreeWidget*)this_)->takeTopLevelItem(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:276
// [4] int indexOfTopLevelItem(class QTreeWidgetItem *)
extern "C"
int C_ZNK11QTreeWidget19indexOfTopLevelItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  return (int)((QTreeWidget*)this_)->indexOfTopLevelItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:281
// [8] QTreeWidgetItem * headerItem()
extern "C"
void* C_ZNK11QTreeWidget10headerItemEv(void *this_) {
  return (void*)((QTreeWidget*)this_)->headerItem();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:282
// [-2] void setHeaderItem(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget13setHeaderItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->setHeaderItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:283
// [-2] void setHeaderLabels(const class QStringList &)
extern "C"
void C_ZN11QTreeWidget15setHeaderLabelsERK11QStringList(void *this_, const QStringList & labels) {
  ((QTreeWidget*)this_)->setHeaderLabels(labels);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:284
// [-2] void setHeaderLabel(const class QString &)
extern "C"
void C_ZN11QTreeWidget14setHeaderLabelERK7QString(void *this_, const QString & label) {
  ((QTreeWidget*)this_)->setHeaderLabel(label);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:286
// [8] QTreeWidgetItem * currentItem()
extern "C"
void* C_ZNK11QTreeWidget11currentItemEv(void *this_) {
  return (void*)((QTreeWidget*)this_)->currentItem();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:287
// [4] int currentColumn()
extern "C"
int C_ZNK11QTreeWidget13currentColumnEv(void *this_) {
  return (int)((QTreeWidget*)this_)->currentColumn();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:288
// [-2] void setCurrentItem(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->setCurrentItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:289
// [-2] void setCurrentItem(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->setCurrentItem(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:290
// [-2] void setCurrentItem(class QTreeWidgetItem *, int, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItemi6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QTreeWidgetItem * item, int column, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTreeWidget*)this_)->setCurrentItem(item, column, command);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:292
// [8] QTreeWidgetItem * itemAt(const class QPoint &)
extern "C"
void* C_ZNK11QTreeWidget6itemAtERK6QPoint(void *this_, const QPoint & p) {
  return (void*)((QTreeWidget*)this_)->itemAt(p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:293
// [8] QTreeWidgetItem * itemAt(int, int)
extern "C"
void* C_ZNK11QTreeWidget6itemAtEii(void *this_, int x, int y) {
  return (void*)((QTreeWidget*)this_)->itemAt(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:294
// [16] QRect visualItemRect(const class QTreeWidgetItem *)
extern "C"
void* C_ZNK11QTreeWidget14visualItemRectEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  auto rv = ((QTreeWidget*)this_)->visualItemRect(item);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:296
// [4] int sortColumn()
extern "C"
int C_ZNK11QTreeWidget10sortColumnEv(void *this_) {
  return (int)((QTreeWidget*)this_)->sortColumn();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:297
// [-2] void sortItems(int, Qt::SortOrder)
extern "C"
void C_ZN11QTreeWidget9sortItemsEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeWidget*)this_)->sortItems(column, order);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:299
// [-2] void editItem(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget8editItemEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->editItem(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:300
// [-2] void openPersistentEditor(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget20openPersistentEditorEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->openPersistentEditor(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:301
// [-2] void closePersistentEditor(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget21closePersistentEditorEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->closePersistentEditor(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:303
// [1] bool isPersistentEditorOpen(class QTreeWidgetItem *, int)
extern "C"
bool C_ZNK11QTreeWidget22isPersistentEditorOpenEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  return (bool)((QTreeWidget*)this_)->isPersistentEditorOpen(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:305
// [8] QWidget * itemWidget(class QTreeWidgetItem *, int)
extern "C"
void* C_ZNK11QTreeWidget10itemWidgetEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  return (void*)((QTreeWidget*)this_)->itemWidget(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:306
// [-2] void setItemWidget(class QTreeWidgetItem *, int, class QWidget *)
extern "C"
void C_ZN11QTreeWidget13setItemWidgetEP15QTreeWidgetItemiP7QWidget(void *this_, QTreeWidgetItem * item, int column, QWidget * widget) {
  ((QTreeWidget*)this_)->setItemWidget(item, column, widget);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:307
// [-2] void removeItemWidget(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget16removeItemWidgetEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->removeItemWidget(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:309
// [1] bool isItemSelected(const class QTreeWidgetItem *)
extern "C"
bool C_ZNK11QTreeWidget14isItemSelectedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (bool)((QTreeWidget*)this_)->isItemSelected(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:310
// [-2] void setItemSelected(const class QTreeWidgetItem *, _Bool)
extern "C"
void C_ZN11QTreeWidget15setItemSelectedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool select) {
  ((QTreeWidget*)this_)->setItemSelected(item, select);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:315
// [1] bool isItemHidden(const class QTreeWidgetItem *)
extern "C"
bool C_ZNK11QTreeWidget12isItemHiddenEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (bool)((QTreeWidget*)this_)->isItemHidden(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:316
// [-2] void setItemHidden(const class QTreeWidgetItem *, _Bool)
extern "C"
void C_ZN11QTreeWidget13setItemHiddenEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool hide) {
  ((QTreeWidget*)this_)->setItemHidden(item, hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:318
// [1] bool isItemExpanded(const class QTreeWidgetItem *)
extern "C"
bool C_ZNK11QTreeWidget14isItemExpandedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (bool)((QTreeWidget*)this_)->isItemExpanded(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:319
// [-2] void setItemExpanded(const class QTreeWidgetItem *, _Bool)
extern "C"
void C_ZN11QTreeWidget15setItemExpandedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool expand) {
  ((QTreeWidget*)this_)->setItemExpanded(item, expand);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:321
// [1] bool isFirstItemColumnSpanned(const class QTreeWidgetItem *)
extern "C"
bool C_ZNK11QTreeWidget24isFirstItemColumnSpannedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (bool)((QTreeWidget*)this_)->isFirstItemColumnSpanned(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:322
// [-2] void setFirstItemColumnSpanned(const class QTreeWidgetItem *, _Bool)
extern "C"
void C_ZN11QTreeWidget25setFirstItemColumnSpannedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool span) {
  ((QTreeWidget*)this_)->setFirstItemColumnSpanned(item, span);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:324
// [8] QTreeWidgetItem * itemAbove(const class QTreeWidgetItem *)
extern "C"
void* C_ZNK11QTreeWidget9itemAboveEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (void*)((QTreeWidget*)this_)->itemAbove(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:325
// [8] QTreeWidgetItem * itemBelow(const class QTreeWidgetItem *)
extern "C"
void* C_ZNK11QTreeWidget9itemBelowEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (void*)((QTreeWidget*)this_)->itemBelow(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:327
// [-2] void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN11QTreeWidget17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTreeWidget*)this_)->setSelectionModel(selectionModel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:330
// [-2] void scrollToItem(const class QTreeWidgetItem *, class QAbstractItemView::ScrollHint)
extern "C"
void C_ZN11QTreeWidget12scrollToItemEPK15QTreeWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QTreeWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QTreeWidget*)this_)->scrollToItem(item, hint);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:332
// [-2] void expandItem(const class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget10expandItemEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->expandItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:333
// [-2] void collapseItem(const class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget12collapseItemEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->collapseItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:334
// [-2] void clear()
extern "C"
void C_ZN11QTreeWidget5clearEv(void *this_) {
  ((QTreeWidget*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:337
// [-2] void itemPressed(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemPressed(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:338
// [-2] void itemClicked(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemClicked(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:339
// [-2] void itemDoubleClicked(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemDoubleClicked(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:340
// [-2] void itemActivated(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemActivated(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:341
// [-2] void itemEntered(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemEntered(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:342
// [-2] void itemChanged(class QTreeWidgetItem *, int)
extern "C"
void C_ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemChanged(item, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:343
// [-2] void itemExpanded(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->itemExpanded(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:344
// [-2] void itemCollapsed(class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->itemCollapsed(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:345
// [-2] void currentItemChanged(class QTreeWidgetItem *, class QTreeWidgetItem *)
extern "C"
void C_ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(void *this_, QTreeWidgetItem * current, QTreeWidgetItem * previous) {
  ((QTreeWidget*)this_)->currentItemChanged(current, previous);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:346
// [-2] void itemSelectionChanged()
extern "C"
void C_ZN11QTreeWidget20itemSelectionChangedEv(void *this_) {
  ((QTreeWidget*)this_)->itemSelectionChanged();
}
//  main block end
