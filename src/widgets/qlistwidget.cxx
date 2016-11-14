// /usr/include/qt/QtWidgets/qlistwidget.h
#include <qlistwidget.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:199
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QListWidget10metaObjectEv(void *this_) {
  /*return*/ ((QListWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qlistwidget.h:207
// void QListWidget(class QWidget *)
extern "C"
void* C_ZN11QListWidgetC1EP7QWidget(QWidget * parent) {
  return new QListWidget(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:208
// void ~QListWidget()
extern "C"
void C_ZN11QListWidgetD1Ev(void *this_) {
  delete (QListWidget*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:210
// void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN11QListWidget17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QListWidget*)this_)->setSelectionModel(selectionModel);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:212
// QListWidgetItem * item(int)
extern "C"
void C_ZNK11QListWidget4itemEi(void *this_, int row) {
  /*return*/ ((QListWidget*)this_)->item(row);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:213
// int row(const class QListWidgetItem *)
extern "C"
void C_ZNK11QListWidget3rowEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  /*return*/ ((QListWidget*)this_)->row(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:214
// void insertItem(int, class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget10insertItemEiP15QListWidgetItem(void *this_, int row, QListWidgetItem * item) {
  ((QListWidget*)this_)->insertItem(row, item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:215
// void insertItem(int, const class QString &)
extern "C"
void C_ZN11QListWidget10insertItemEiRK7QString(void *this_, int row, const QString & label) {
  ((QListWidget*)this_)->insertItem(row, label);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:216
// void insertItems(int, const class QStringList &)
extern "C"
void C_ZN11QListWidget11insertItemsEiRK11QStringList(void *this_, int row, const QStringList & labels) {
  ((QListWidget*)this_)->insertItems(row, labels);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:217
// void addItem(const class QString &)
extern "C"
void C_ZN11QListWidget7addItemERK7QString(void *this_, const QString & label) {
  ((QListWidget*)this_)->addItem(label);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:218
// void addItem(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget7addItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->addItem(item);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:219
// void addItems(const class QStringList &)
extern "C"
void C_ZN11QListWidget8addItemsERK11QStringList(void *this_, const QStringList & labels) {
  ((QListWidget*)this_)->addItems(labels);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:220
// QListWidgetItem * takeItem(int)
extern "C"
void C_ZN11QListWidget8takeItemEi(void *this_, int row) {
  /*return*/ ((QListWidget*)this_)->takeItem(row);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:221
// int count()
extern "C"
void C_ZNK11QListWidget5countEv(void *this_) {
  /*return*/ ((QListWidget*)this_)->count();
}
// /usr/include/qt/QtWidgets/qlistwidget.h:223
// QListWidgetItem * currentItem()
extern "C"
void C_ZNK11QListWidget11currentItemEv(void *this_) {
  /*return*/ ((QListWidget*)this_)->currentItem();
}
// /usr/include/qt/QtWidgets/qlistwidget.h:224
// void setCurrentItem(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget14setCurrentItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->setCurrentItem(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:225
// void setCurrentItem(class QListWidgetItem *, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN11QListWidget14setCurrentItemEP15QListWidgetItem6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QListWidgetItem * item, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QListWidget*)this_)->setCurrentItem(item, command);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:227
// int currentRow()
extern "C"
void C_ZNK11QListWidget10currentRowEv(void *this_) {
  /*return*/ ((QListWidget*)this_)->currentRow();
}
// /usr/include/qt/QtWidgets/qlistwidget.h:228
// void setCurrentRow(int)
extern "C"
void C_ZN11QListWidget13setCurrentRowEi(void *this_, int row) {
  ((QListWidget*)this_)->setCurrentRow(row);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:229
// void setCurrentRow(int, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN11QListWidget13setCurrentRowEi6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, int row, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QListWidget*)this_)->setCurrentRow(row, command);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:231
// QListWidgetItem * itemAt(const class QPoint &)
extern "C"
void C_ZNK11QListWidget6itemAtERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QListWidget*)this_)->itemAt(p);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:232
// QListWidgetItem * itemAt(int, int)
extern "C"
void C_ZNK11QListWidget6itemAtEii(void *this_, int x, int y) {
  /*return*/ ((QListWidget*)this_)->itemAt(x, y);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:233
// QRect visualItemRect(const class QListWidgetItem *)
extern "C"
void C_ZNK11QListWidget14visualItemRectEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  /*return*/ ((QListWidget*)this_)->visualItemRect(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:235
// void sortItems(Qt::SortOrder)
extern "C"
void C_ZN11QListWidget9sortItemsEN2Qt9SortOrderE(void *this_, Qt::SortOrder order) {
  ((QListWidget*)this_)->sortItems(order);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:236
// void setSortingEnabled(_Bool)
extern "C"
void C_ZN11QListWidget17setSortingEnabledEb(void *this_, bool enable) {
  ((QListWidget*)this_)->setSortingEnabled(enable);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:237
// bool isSortingEnabled()
extern "C"
void C_ZNK11QListWidget16isSortingEnabledEv(void *this_) {
  /*return*/ ((QListWidget*)this_)->isSortingEnabled();
}
// /usr/include/qt/QtWidgets/qlistwidget.h:239
// void editItem(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget8editItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->editItem(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:240
// void openPersistentEditor(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget20openPersistentEditorEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->openPersistentEditor(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:241
// void closePersistentEditor(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget21closePersistentEditorEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->closePersistentEditor(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:243
// QWidget * itemWidget(class QListWidgetItem *)
extern "C"
void C_ZNK11QListWidget10itemWidgetEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  /*return*/ ((QListWidget*)this_)->itemWidget(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:244
// void setItemWidget(class QListWidgetItem *, class QWidget *)
extern "C"
void C_ZN11QListWidget13setItemWidgetEP15QListWidgetItemP7QWidget(void *this_, QListWidgetItem * item, QWidget * widget) {
  ((QListWidget*)this_)->setItemWidget(item, widget);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:245
// void removeItemWidget(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget16removeItemWidgetEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->removeItemWidget(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:247
// bool isItemSelected(const class QListWidgetItem *)
extern "C"
void C_ZNK11QListWidget14isItemSelectedEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  /*return*/ ((QListWidget*)this_)->isItemSelected(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:248
// void setItemSelected(const class QListWidgetItem *, _Bool)
extern "C"
void C_ZN11QListWidget15setItemSelectedEPK15QListWidgetItemb(void *this_, const QListWidgetItem * item, bool select) {
  ((QListWidget*)this_)->setItemSelected(item, select);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:249
// QList<QListWidgetItem *> selectedItems()
extern "C"
void C_ZNK11QListWidget13selectedItemsEv(void *this_) {
  /*return*/ ((QListWidget*)this_)->selectedItems();
}
// /usr/include/qt/QtWidgets/qlistwidget.h:250
// QList<QListWidgetItem *> findItems(const class QString &, Qt::MatchFlags)
extern "C"
void C_ZNK11QListWidget9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEE(void *this_, const QString & text, QFlags<Qt::MatchFlag> flags) {
  /*return*/ ((QListWidget*)this_)->findItems(text, flags);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:252
// bool isItemHidden(const class QListWidgetItem *)
extern "C"
void C_ZNK11QListWidget12isItemHiddenEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  /*return*/ ((QListWidget*)this_)->isItemHidden(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:253
// void setItemHidden(const class QListWidgetItem *, _Bool)
extern "C"
void C_ZN11QListWidget13setItemHiddenEPK15QListWidgetItemb(void *this_, const QListWidgetItem * item, bool hide) {
  ((QListWidget*)this_)->setItemHidden(item, hide);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:254
// void dropEvent(class QDropEvent *)
extern "C"
void C_ZN11QListWidget9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QListWidget*)this_)->dropEvent(event);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:257
// void scrollToItem(const class QListWidgetItem *, class QAbstractItemView::ScrollHint)
extern "C"
void C_ZN11QListWidget12scrollToItemEPK15QListWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QListWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QListWidget*)this_)->scrollToItem(item, hint);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:258
// void clear()
extern "C"
void C_ZN11QListWidget5clearEv(void *this_) {
  ((QListWidget*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qlistwidget.h:261
// void itemPressed(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget11itemPressedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemPressed(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:262
// void itemClicked(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget11itemClickedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemClicked(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:263
// void itemDoubleClicked(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemDoubleClicked(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:264
// void itemActivated(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget13itemActivatedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemActivated(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:265
// void itemEntered(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget11itemEnteredEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemEntered(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:266
// void itemChanged(class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget11itemChangedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemChanged(item);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:268
// void currentItemChanged(class QListWidgetItem *, class QListWidgetItem *)
extern "C"
void C_ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(void *this_, QListWidgetItem * current, QListWidgetItem * previous) {
  ((QListWidget*)this_)->currentItemChanged(current, previous);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:269
// void currentTextChanged(const class QString &)
extern "C"
void C_ZN11QListWidget18currentTextChangedERK7QString(void *this_, const QString & currentText) {
  ((QListWidget*)this_)->currentTextChanged(currentText);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:270
// void currentRowChanged(int)
extern "C"
void C_ZN11QListWidget17currentRowChangedEi(void *this_, int currentRow) {
  ((QListWidget*)this_)->currentRowChanged(currentRow);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:272
// void itemSelectionChanged()
extern "C"
void C_ZN11QListWidget20itemSelectionChangedEv(void *this_) {
  ((QListWidget*)this_)->itemSelectionChanged();
}