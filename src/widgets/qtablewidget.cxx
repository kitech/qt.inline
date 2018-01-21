//  header block begin
// /usr/include/qt/QtWidgets/qtablewidget.h
#include <qtablewidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qtablewidget.h:217
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QTableWidget10metaObjectEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:223
// void QTableWidget(class QWidget *)
extern "C"
void* C_ZN12QTableWidgetC1EP7QWidget(QWidget * parent) {
  return new QTableWidget(parent);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:224
// void QTableWidget(int, int, class QWidget *)
extern "C"
void* C_ZN12QTableWidgetC1EiiP7QWidget(int rows, int columns, QWidget * parent) {
  return new QTableWidget(rows, columns, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtablewidget.h:225
// void ~QTableWidget()
extern "C"
void C_ZN12QTableWidgetD1Ev(void *this_) {
  delete (QTableWidget*)(this_);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:227
// void setRowCount(int)
extern "C"
void C_ZN12QTableWidget11setRowCountEi(void *this_, int rows) {
  ((QTableWidget*)this_)->setRowCount(rows);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:228
// int rowCount()
extern "C"
void C_ZNK12QTableWidget8rowCountEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->rowCount();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:230
// void setColumnCount(int)
extern "C"
void C_ZN12QTableWidget14setColumnCountEi(void *this_, int columns) {
  ((QTableWidget*)this_)->setColumnCount(columns);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:231
// int columnCount()
extern "C"
void C_ZNK12QTableWidget11columnCountEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->columnCount();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:233
// int row(const class QTableWidgetItem *)
extern "C"
void C_ZNK12QTableWidget3rowEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  /*return*/ ((QTableWidget*)this_)->row(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:234
// int column(const class QTableWidgetItem *)
extern "C"
void C_ZNK12QTableWidget6columnEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  /*return*/ ((QTableWidget*)this_)->column(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:236
// QTableWidgetItem * item(int, int)
extern "C"
void C_ZNK12QTableWidget4itemEii(void *this_, int row, int column) {
  /*return*/ ((QTableWidget*)this_)->item(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:237
// void setItem(int, int, class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget7setItemEiiP16QTableWidgetItem(void *this_, int row, int column, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setItem(row, column, item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:238
// QTableWidgetItem * takeItem(int, int)
extern "C"
void C_ZN12QTableWidget8takeItemEii(void *this_, int row, int column) {
  /*return*/ ((QTableWidget*)this_)->takeItem(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:240
// QTableWidgetItem * verticalHeaderItem(int)
extern "C"
void C_ZNK12QTableWidget18verticalHeaderItemEi(void *this_, int row) {
  /*return*/ ((QTableWidget*)this_)->verticalHeaderItem(row);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:241
// void setVerticalHeaderItem(int, class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget21setVerticalHeaderItemEiP16QTableWidgetItem(void *this_, int row, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setVerticalHeaderItem(row, item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:242
// QTableWidgetItem * takeVerticalHeaderItem(int)
extern "C"
void C_ZN12QTableWidget22takeVerticalHeaderItemEi(void *this_, int row) {
  /*return*/ ((QTableWidget*)this_)->takeVerticalHeaderItem(row);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:244
// QTableWidgetItem * horizontalHeaderItem(int)
extern "C"
void C_ZNK12QTableWidget20horizontalHeaderItemEi(void *this_, int column) {
  /*return*/ ((QTableWidget*)this_)->horizontalHeaderItem(column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:245
// void setHorizontalHeaderItem(int, class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget23setHorizontalHeaderItemEiP16QTableWidgetItem(void *this_, int column, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setHorizontalHeaderItem(column, item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:246
// QTableWidgetItem * takeHorizontalHeaderItem(int)
extern "C"
void C_ZN12QTableWidget24takeHorizontalHeaderItemEi(void *this_, int column) {
  /*return*/ ((QTableWidget*)this_)->takeHorizontalHeaderItem(column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:247
// void setVerticalHeaderLabels(const class QStringList &)
extern "C"
void C_ZN12QTableWidget23setVerticalHeaderLabelsERK11QStringList(void *this_, const QStringList & labels) {
  ((QTableWidget*)this_)->setVerticalHeaderLabels(labels);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:248
// void setHorizontalHeaderLabels(const class QStringList &)
extern "C"
void C_ZN12QTableWidget25setHorizontalHeaderLabelsERK11QStringList(void *this_, const QStringList & labels) {
  ((QTableWidget*)this_)->setHorizontalHeaderLabels(labels);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:250
// int currentRow()
extern "C"
void C_ZNK12QTableWidget10currentRowEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->currentRow();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:251
// int currentColumn()
extern "C"
void C_ZNK12QTableWidget13currentColumnEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->currentColumn();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:252
// QTableWidgetItem * currentItem()
extern "C"
void C_ZNK12QTableWidget11currentItemEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->currentItem();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:253
// void setCurrentItem(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget14setCurrentItemEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setCurrentItem(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:254
// void setCurrentItem(class QTableWidgetItem *, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN12QTableWidget14setCurrentItemEP16QTableWidgetItem6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QTableWidgetItem * item, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTableWidget*)this_)->setCurrentItem(item, command);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:255
// void setCurrentCell(int, int)
extern "C"
void C_ZN12QTableWidget14setCurrentCellEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->setCurrentCell(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:256
// void setCurrentCell(int, int, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN12QTableWidget14setCurrentCellEii6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, int row, int column, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTableWidget*)this_)->setCurrentCell(row, column, command);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:258
// void sortItems(int, Qt::SortOrder)
extern "C"
void C_ZN12QTableWidget9sortItemsEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTableWidget*)this_)->sortItems(column, order);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:259
// void setSortingEnabled(_Bool)
extern "C"
void C_ZN12QTableWidget17setSortingEnabledEb(void *this_, bool enable) {
  ((QTableWidget*)this_)->setSortingEnabled(enable);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:260
// bool isSortingEnabled()
extern "C"
void C_ZNK12QTableWidget16isSortingEnabledEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->isSortingEnabled();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:262
// void editItem(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget8editItemEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->editItem(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:263
// void openPersistentEditor(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget20openPersistentEditorEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->openPersistentEditor(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:264
// void closePersistentEditor(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget21closePersistentEditorEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->closePersistentEditor(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:266
// QWidget * cellWidget(int, int)
extern "C"
void C_ZNK12QTableWidget10cellWidgetEii(void *this_, int row, int column) {
  /*return*/ ((QTableWidget*)this_)->cellWidget(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:267
// void setCellWidget(int, int, class QWidget *)
extern "C"
void C_ZN12QTableWidget13setCellWidgetEiiP7QWidget(void *this_, int row, int column, QWidget * widget) {
  ((QTableWidget*)this_)->setCellWidget(row, column, widget);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:268
// void removeCellWidget(int, int)
extern "C"
void C_ZN12QTableWidget16removeCellWidgetEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->removeCellWidget(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:270
// bool isItemSelected(const class QTableWidgetItem *)
extern "C"
void C_ZNK12QTableWidget14isItemSelectedEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  /*return*/ ((QTableWidget*)this_)->isItemSelected(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:271
// void setItemSelected(const class QTableWidgetItem *, _Bool)
extern "C"
void C_ZN12QTableWidget15setItemSelectedEPK16QTableWidgetItemb(void *this_, const QTableWidgetItem * item, bool select) {
  ((QTableWidget*)this_)->setItemSelected(item, select);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:272
// void setRangeSelected(const class QTableWidgetSelectionRange &, _Bool)
extern "C"
void C_ZN12QTableWidget16setRangeSelectedERK26QTableWidgetSelectionRangeb(void *this_, const QTableWidgetSelectionRange & range, bool select) {
  ((QTableWidget*)this_)->setRangeSelected(range, select);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:274
// QList<QTableWidgetSelectionRange> selectedRanges()
extern "C"
void C_ZNK12QTableWidget14selectedRangesEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->selectedRanges();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:275
// QList<QTableWidgetItem *> selectedItems()
extern "C"
void C_ZNK12QTableWidget13selectedItemsEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->selectedItems();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:276
// QList<QTableWidgetItem *> findItems(const class QString &, Qt::MatchFlags)
extern "C"
void C_ZNK12QTableWidget9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEE(void *this_, const QString & text, QFlags<Qt::MatchFlag> flags) {
  /*return*/ ((QTableWidget*)this_)->findItems(text, flags);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:278
// int visualRow(int)
extern "C"
void C_ZNK12QTableWidget9visualRowEi(void *this_, int logicalRow) {
  /*return*/ ((QTableWidget*)this_)->visualRow(logicalRow);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:279
// int visualColumn(int)
extern "C"
void C_ZNK12QTableWidget12visualColumnEi(void *this_, int logicalColumn) {
  /*return*/ ((QTableWidget*)this_)->visualColumn(logicalColumn);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:281
// QTableWidgetItem * itemAt(const class QPoint &)
extern "C"
void C_ZNK12QTableWidget6itemAtERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QTableWidget*)this_)->itemAt(p);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:282
// QTableWidgetItem * itemAt(int, int)
extern "C"
void C_ZNK12QTableWidget6itemAtEii(void *this_, int x, int y) {
  /*return*/ ((QTableWidget*)this_)->itemAt(x, y);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:283
// QRect visualItemRect(const class QTableWidgetItem *)
extern "C"
void C_ZNK12QTableWidget14visualItemRectEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  /*return*/ ((QTableWidget*)this_)->visualItemRect(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:285
// const QTableWidgetItem * itemPrototype()
extern "C"
void C_ZNK12QTableWidget13itemPrototypeEv(void *this_) {
  /*return*/ ((QTableWidget*)this_)->itemPrototype();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:286
// void setItemPrototype(const class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget16setItemPrototypeEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setItemPrototype(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:289
// void scrollToItem(const class QTableWidgetItem *, class QAbstractItemView::ScrollHint)
extern "C"
void C_ZN12QTableWidget12scrollToItemEPK16QTableWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QTableWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QTableWidget*)this_)->scrollToItem(item, hint);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:290
// void insertRow(int)
extern "C"
void C_ZN12QTableWidget9insertRowEi(void *this_, int row) {
  ((QTableWidget*)this_)->insertRow(row);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:291
// void insertColumn(int)
extern "C"
void C_ZN12QTableWidget12insertColumnEi(void *this_, int column) {
  ((QTableWidget*)this_)->insertColumn(column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:292
// void removeRow(int)
extern "C"
void C_ZN12QTableWidget9removeRowEi(void *this_, int row) {
  ((QTableWidget*)this_)->removeRow(row);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:293
// void removeColumn(int)
extern "C"
void C_ZN12QTableWidget12removeColumnEi(void *this_, int column) {
  ((QTableWidget*)this_)->removeColumn(column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:294
// void clear()
extern "C"
void C_ZN12QTableWidget5clearEv(void *this_) {
  ((QTableWidget*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:295
// void clearContents()
extern "C"
void C_ZN12QTableWidget13clearContentsEv(void *this_) {
  ((QTableWidget*)this_)->clearContents();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:298
// void itemPressed(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget11itemPressedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemPressed(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:299
// void itemClicked(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget11itemClickedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemClicked(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:300
// void itemDoubleClicked(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemDoubleClicked(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:302
// void itemActivated(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemActivated(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:303
// void itemEntered(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemEntered(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:304
// void itemChanged(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget11itemChangedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemChanged(item);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:306
// void currentItemChanged(class QTableWidgetItem *, class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(void *this_, QTableWidgetItem * current, QTableWidgetItem * previous) {
  ((QTableWidget*)this_)->currentItemChanged(current, previous);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:307
// void itemSelectionChanged()
extern "C"
void C_ZN12QTableWidget20itemSelectionChangedEv(void *this_) {
  ((QTableWidget*)this_)->itemSelectionChanged();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:309
// void cellPressed(int, int)
extern "C"
void C_ZN12QTableWidget11cellPressedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellPressed(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:310
// void cellClicked(int, int)
extern "C"
void C_ZN12QTableWidget11cellClickedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellClicked(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:311
// void cellDoubleClicked(int, int)
extern "C"
void C_ZN12QTableWidget17cellDoubleClickedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellDoubleClicked(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:313
// void cellActivated(int, int)
extern "C"
void C_ZN12QTableWidget13cellActivatedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellActivated(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:314
// void cellEntered(int, int)
extern "C"
void C_ZN12QTableWidget11cellEnteredEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellEntered(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:315
// void cellChanged(int, int)
extern "C"
void C_ZN12QTableWidget11cellChangedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellChanged(row, column);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:317
// void currentCellChanged(int, int, int, int)
extern "C"
void C_ZN12QTableWidget18currentCellChangedEiiii(void *this_, int currentRow, int currentColumn, int previousRow, int previousColumn) {
  ((QTableWidget*)this_)->currentCellChanged(currentRow, currentColumn, previousRow, previousColumn);
}
//  main block end
