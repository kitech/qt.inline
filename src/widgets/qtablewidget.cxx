//  header block begin
// /usr/include/qt/QtWidgets/qtablewidget.h
#include <qtablewidget.h>
#include <QtWidgets>

// QTableWidget is pure virtual: false
// QTableWidget has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:321
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN12QTableWidget5eventEP6QEvent = 0;
extern "C" void set_callback_ZN12QTableWidget5eventEP6QEvent(void*cbfn)
{ callback_ZN12QTableWidget5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:328
// [1] bool dropMimeData(int, int, const class QMimeData *, Qt::DropAction)
extern "C"
void* callback_ZN12QTableWidget12dropMimeDataEiiPK9QMimeDataN2Qt10DropActionE = 0;
extern "C" void set_callback_ZN12QTableWidget12dropMimeDataEiiPK9QMimeDataN2Qt10DropActionE(void*cbfn)
{ callback_ZN12QTableWidget12dropMimeDataEiiPK9QMimeDataN2Qt10DropActionE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:329
// [4] Qt::DropActions supportedDropActions()
extern "C"
void* callback_ZNK12QTableWidget20supportedDropActionsEv = 0;
extern "C" void set_callback_ZNK12QTableWidget20supportedDropActionsEv(void*cbfn)
{ callback_ZNK12QTableWidget20supportedDropActionsEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:338
// [24] QModelIndex indexFromItem(class QTableWidgetItem *)
extern "C"
void* callback_ZNK12QTableWidget13indexFromItemEP16QTableWidgetItem = 0;
extern "C" void set_callback_ZNK12QTableWidget13indexFromItemEP16QTableWidgetItem(void*cbfn)
{ callback_ZNK12QTableWidget13indexFromItemEP16QTableWidgetItem = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:339
// [8] QTableWidgetItem * itemFromIndex(const class QModelIndex &)
extern "C"
void* callback_ZNK12QTableWidget13itemFromIndexERK11QModelIndex = 0;
extern "C" void set_callback_ZNK12QTableWidget13itemFromIndexERK11QModelIndex(void*cbfn)
{ callback_ZNK12QTableWidget13itemFromIndexERK11QModelIndex = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:343
// [-2] void dropEvent(class QDropEvent *)
extern "C"
void* callback_ZN12QTableWidget9dropEventEP10QDropEvent = 0;
extern "C" void set_callback_ZN12QTableWidget9dropEventEP10QDropEvent(void*cbfn)
{ callback_ZN12QTableWidget9dropEventEP10QDropEvent = cbfn; }

class MyQTableWidget : public QTableWidget {
public:
  virtual ~MyQTableWidget() {}
// void QTableWidget(class QWidget *)
MyQTableWidget(QWidget * parent) : QTableWidget(parent) {}
// void QTableWidget(int, int, class QWidget *)
MyQTableWidget(int rows, int columns, QWidget * parent) : QTableWidget(rows, columns, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    if (callback_ZN12QTableWidget5eventEP6QEvent != 0) {
      // callback_ZN12QTableWidget5eventEP6QEvent(e);
    }
    return QTableWidget::event(e);
  }
// bool dropMimeData(int, int, const class QMimeData *, Qt::DropAction)
  virtual bool dropMimeData(int row, int column, const QMimeData * data, Qt::DropAction action) {
    if (callback_ZN12QTableWidget12dropMimeDataEiiPK9QMimeDataN2Qt10DropActionE != 0) {
      // callback_ZN12QTableWidget12dropMimeDataEiiPK9QMimeDataN2Qt10DropActionE(row, column, data, action);
    }
    return QTableWidget::dropMimeData(row, column, data, action);
  }
// Qt::DropActions supportedDropActions()
  virtual Qt::DropActions supportedDropActions() {
    if (callback_ZNK12QTableWidget20supportedDropActionsEv != 0) {
      // callback_ZNK12QTableWidget20supportedDropActionsEv();
    }
    return QTableWidget::supportedDropActions();
  }
// QModelIndex indexFromItem(class QTableWidgetItem *)
  virtual QModelIndex indexFromItem(QTableWidgetItem * item) {
    if (callback_ZNK12QTableWidget13indexFromItemEP16QTableWidgetItem != 0) {
      // callback_ZNK12QTableWidget13indexFromItemEP16QTableWidgetItem(item);
    }
    return QTableWidget::indexFromItem(item);
  }
// QTableWidgetItem * itemFromIndex(const class QModelIndex &)
  virtual QTableWidgetItem * itemFromIndex(const QModelIndex & index) {
    if (callback_ZNK12QTableWidget13itemFromIndexERK11QModelIndex != 0) {
      // callback_ZNK12QTableWidget13itemFromIndexERK11QModelIndex(index);
    }
    return QTableWidget::itemFromIndex(index);
  }
// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * event) {
    if (callback_ZN12QTableWidget9dropEventEP10QDropEvent != 0) {
      // callback_ZN12QTableWidget9dropEventEP10QDropEvent(event);
    }
    QTableWidget::dropEvent(event);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:216
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QTableWidget10metaObjectEv(void *this_) {
  return (void*)((QTableWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:222
// [-2] void QTableWidget(class QWidget *)
extern "C"
void* C_ZN12QTableWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTableWidget*)(0);
  return  new MyQTableWidget(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:223
// [-2] void QTableWidget(int, int, class QWidget *)
extern "C"
void* C_ZN12QTableWidgetC2EiiP7QWidget(int rows, int columns, QWidget * parent) {
  auto _nilp = (MyQTableWidget*)(0);
  return  new MyQTableWidget(rows, columns, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:224
// [-2] void ~QTableWidget()
extern "C"
void C_ZN12QTableWidgetD2Ev(void *this_) {
  delete (QTableWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:226
// [-2] void setRowCount(int)
extern "C"
void C_ZN12QTableWidget11setRowCountEi(void *this_, int rows) {
  ((QTableWidget*)this_)->setRowCount(rows);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:227
// [4] int rowCount()
extern "C"
int C_ZNK12QTableWidget8rowCountEv(void *this_) {
  return (int)((QTableWidget*)this_)->rowCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:229
// [-2] void setColumnCount(int)
extern "C"
void C_ZN12QTableWidget14setColumnCountEi(void *this_, int columns) {
  ((QTableWidget*)this_)->setColumnCount(columns);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:230
// [4] int columnCount()
extern "C"
int C_ZNK12QTableWidget11columnCountEv(void *this_) {
  return (int)((QTableWidget*)this_)->columnCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:232
// [4] int row(const class QTableWidgetItem *)
extern "C"
int C_ZNK12QTableWidget3rowEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  return (int)((QTableWidget*)this_)->row(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:233
// [4] int column(const class QTableWidgetItem *)
extern "C"
int C_ZNK12QTableWidget6columnEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  return (int)((QTableWidget*)this_)->column(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:235
// [8] QTableWidgetItem * item(int, int)
extern "C"
void* C_ZNK12QTableWidget4itemEii(void *this_, int row, int column) {
  return (void*)((QTableWidget*)this_)->item(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:236
// [-2] void setItem(int, int, class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget7setItemEiiP16QTableWidgetItem(void *this_, int row, int column, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setItem(row, column, item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:237
// [8] QTableWidgetItem * takeItem(int, int)
extern "C"
void* C_ZN12QTableWidget8takeItemEii(void *this_, int row, int column) {
  return (void*)((QTableWidget*)this_)->takeItem(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:239
// [8] QTableWidgetItem * verticalHeaderItem(int)
extern "C"
void* C_ZNK12QTableWidget18verticalHeaderItemEi(void *this_, int row) {
  return (void*)((QTableWidget*)this_)->verticalHeaderItem(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:240
// [-2] void setVerticalHeaderItem(int, class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget21setVerticalHeaderItemEiP16QTableWidgetItem(void *this_, int row, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setVerticalHeaderItem(row, item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:241
// [8] QTableWidgetItem * takeVerticalHeaderItem(int)
extern "C"
void* C_ZN12QTableWidget22takeVerticalHeaderItemEi(void *this_, int row) {
  return (void*)((QTableWidget*)this_)->takeVerticalHeaderItem(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:243
// [8] QTableWidgetItem * horizontalHeaderItem(int)
extern "C"
void* C_ZNK12QTableWidget20horizontalHeaderItemEi(void *this_, int column) {
  return (void*)((QTableWidget*)this_)->horizontalHeaderItem(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:244
// [-2] void setHorizontalHeaderItem(int, class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget23setHorizontalHeaderItemEiP16QTableWidgetItem(void *this_, int column, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setHorizontalHeaderItem(column, item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:245
// [8] QTableWidgetItem * takeHorizontalHeaderItem(int)
extern "C"
void* C_ZN12QTableWidget24takeHorizontalHeaderItemEi(void *this_, int column) {
  return (void*)((QTableWidget*)this_)->takeHorizontalHeaderItem(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:246
// [-2] void setVerticalHeaderLabels(const class QStringList &)
extern "C"
void C_ZN12QTableWidget23setVerticalHeaderLabelsERK11QStringList(void *this_, const QStringList & labels) {
  ((QTableWidget*)this_)->setVerticalHeaderLabels(labels);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:247
// [-2] void setHorizontalHeaderLabels(const class QStringList &)
extern "C"
void C_ZN12QTableWidget25setHorizontalHeaderLabelsERK11QStringList(void *this_, const QStringList & labels) {
  ((QTableWidget*)this_)->setHorizontalHeaderLabels(labels);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:249
// [4] int currentRow()
extern "C"
int C_ZNK12QTableWidget10currentRowEv(void *this_) {
  return (int)((QTableWidget*)this_)->currentRow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:250
// [4] int currentColumn()
extern "C"
int C_ZNK12QTableWidget13currentColumnEv(void *this_) {
  return (int)((QTableWidget*)this_)->currentColumn();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:251
// [8] QTableWidgetItem * currentItem()
extern "C"
void* C_ZNK12QTableWidget11currentItemEv(void *this_) {
  return (void*)((QTableWidget*)this_)->currentItem();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:252
// [-2] void setCurrentItem(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget14setCurrentItemEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setCurrentItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:253
// [-2] void setCurrentItem(class QTableWidgetItem *, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN12QTableWidget14setCurrentItemEP16QTableWidgetItem6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QTableWidgetItem * item, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTableWidget*)this_)->setCurrentItem(item, command);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:254
// [-2] void setCurrentCell(int, int)
extern "C"
void C_ZN12QTableWidget14setCurrentCellEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->setCurrentCell(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:255
// [-2] void setCurrentCell(int, int, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN12QTableWidget14setCurrentCellEii6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, int row, int column, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTableWidget*)this_)->setCurrentCell(row, column, command);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:257
// [-2] void sortItems(int, Qt::SortOrder)
extern "C"
void C_ZN12QTableWidget9sortItemsEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTableWidget*)this_)->sortItems(column, order);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:258
// [-2] void setSortingEnabled(_Bool)
extern "C"
void C_ZN12QTableWidget17setSortingEnabledEb(void *this_, bool enable) {
  ((QTableWidget*)this_)->setSortingEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:259
// [1] bool isSortingEnabled()
extern "C"
bool C_ZNK12QTableWidget16isSortingEnabledEv(void *this_) {
  return (bool)((QTableWidget*)this_)->isSortingEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:261
// [-2] void editItem(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget8editItemEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->editItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:262
// [-2] void openPersistentEditor(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget20openPersistentEditorEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->openPersistentEditor(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:263
// [-2] void closePersistentEditor(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget21closePersistentEditorEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->closePersistentEditor(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:265
// [1] bool isPersistentEditorOpen(class QTableWidgetItem *)
extern "C"
bool C_ZNK12QTableWidget22isPersistentEditorOpenEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  return (bool)((QTableWidget*)this_)->isPersistentEditorOpen(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:267
// [8] QWidget * cellWidget(int, int)
extern "C"
void* C_ZNK12QTableWidget10cellWidgetEii(void *this_, int row, int column) {
  return (void*)((QTableWidget*)this_)->cellWidget(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:268
// [-2] void setCellWidget(int, int, class QWidget *)
extern "C"
void C_ZN12QTableWidget13setCellWidgetEiiP7QWidget(void *this_, int row, int column, QWidget * widget) {
  ((QTableWidget*)this_)->setCellWidget(row, column, widget);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:269
// [-2] void removeCellWidget(int, int)
extern "C"
void C_ZN12QTableWidget16removeCellWidgetEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->removeCellWidget(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:271
// [1] bool isItemSelected(const class QTableWidgetItem *)
extern "C"
bool C_ZNK12QTableWidget14isItemSelectedEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  return (bool)((QTableWidget*)this_)->isItemSelected(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:272
// [-2] void setItemSelected(const class QTableWidgetItem *, _Bool)
extern "C"
void C_ZN12QTableWidget15setItemSelectedEPK16QTableWidgetItemb(void *this_, const QTableWidgetItem * item, bool select) {
  ((QTableWidget*)this_)->setItemSelected(item, select);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:273
// [-2] void setRangeSelected(const class QTableWidgetSelectionRange &, _Bool)
extern "C"
void C_ZN12QTableWidget16setRangeSelectedERK26QTableWidgetSelectionRangeb(void *this_, const QTableWidgetSelectionRange & range, bool select) {
  ((QTableWidget*)this_)->setRangeSelected(range, select);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:279
// [4] int visualRow(int)
extern "C"
int C_ZNK12QTableWidget9visualRowEi(void *this_, int logicalRow) {
  return (int)((QTableWidget*)this_)->visualRow(logicalRow);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:280
// [4] int visualColumn(int)
extern "C"
int C_ZNK12QTableWidget12visualColumnEi(void *this_, int logicalColumn) {
  return (int)((QTableWidget*)this_)->visualColumn(logicalColumn);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:282
// [8] QTableWidgetItem * itemAt(const class QPoint &)
extern "C"
void* C_ZNK12QTableWidget6itemAtERK6QPoint(void *this_, const QPoint & p) {
  return (void*)((QTableWidget*)this_)->itemAt(p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:283
// [8] QTableWidgetItem * itemAt(int, int)
extern "C"
void* C_ZNK12QTableWidget6itemAtEii(void *this_, int x, int y) {
  return (void*)((QTableWidget*)this_)->itemAt(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:284
// [16] QRect visualItemRect(const class QTableWidgetItem *)
extern "C"
void* C_ZNK12QTableWidget14visualItemRectEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  auto rv = ((QTableWidget*)this_)->visualItemRect(item);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:286
// [8] const QTableWidgetItem * itemPrototype()
extern "C"
void* C_ZNK12QTableWidget13itemPrototypeEv(void *this_) {
  return (void*)((QTableWidget*)this_)->itemPrototype();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:287
// [-2] void setItemPrototype(const class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget16setItemPrototypeEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setItemPrototype(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:290
// [-2] void scrollToItem(const class QTableWidgetItem *, class QAbstractItemView::ScrollHint)
extern "C"
void C_ZN12QTableWidget12scrollToItemEPK16QTableWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QTableWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QTableWidget*)this_)->scrollToItem(item, hint);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:291
// [-2] void insertRow(int)
extern "C"
void C_ZN12QTableWidget9insertRowEi(void *this_, int row) {
  ((QTableWidget*)this_)->insertRow(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:292
// [-2] void insertColumn(int)
extern "C"
void C_ZN12QTableWidget12insertColumnEi(void *this_, int column) {
  ((QTableWidget*)this_)->insertColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:293
// [-2] void removeRow(int)
extern "C"
void C_ZN12QTableWidget9removeRowEi(void *this_, int row) {
  ((QTableWidget*)this_)->removeRow(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:294
// [-2] void removeColumn(int)
extern "C"
void C_ZN12QTableWidget12removeColumnEi(void *this_, int column) {
  ((QTableWidget*)this_)->removeColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:295
// [-2] void clear()
extern "C"
void C_ZN12QTableWidget5clearEv(void *this_) {
  ((QTableWidget*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:296
// [-2] void clearContents()
extern "C"
void C_ZN12QTableWidget13clearContentsEv(void *this_) {
  ((QTableWidget*)this_)->clearContents();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:299
// [-2] void itemPressed(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget11itemPressedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemPressed(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:300
// [-2] void itemClicked(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget11itemClickedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemClicked(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:301
// [-2] void itemDoubleClicked(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemDoubleClicked(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:303
// [-2] void itemActivated(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemActivated(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:304
// [-2] void itemEntered(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemEntered(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:305
// [-2] void itemChanged(class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget11itemChangedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemChanged(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:307
// [-2] void currentItemChanged(class QTableWidgetItem *, class QTableWidgetItem *)
extern "C"
void C_ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(void *this_, QTableWidgetItem * current, QTableWidgetItem * previous) {
  ((QTableWidget*)this_)->currentItemChanged(current, previous);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:308
// [-2] void itemSelectionChanged()
extern "C"
void C_ZN12QTableWidget20itemSelectionChangedEv(void *this_) {
  ((QTableWidget*)this_)->itemSelectionChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:310
// [-2] void cellPressed(int, int)
extern "C"
void C_ZN12QTableWidget11cellPressedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellPressed(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:311
// [-2] void cellClicked(int, int)
extern "C"
void C_ZN12QTableWidget11cellClickedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellClicked(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:312
// [-2] void cellDoubleClicked(int, int)
extern "C"
void C_ZN12QTableWidget17cellDoubleClickedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellDoubleClicked(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:314
// [-2] void cellActivated(int, int)
extern "C"
void C_ZN12QTableWidget13cellActivatedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellActivated(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:315
// [-2] void cellEntered(int, int)
extern "C"
void C_ZN12QTableWidget11cellEnteredEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellEntered(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:316
// [-2] void cellChanged(int, int)
extern "C"
void C_ZN12QTableWidget11cellChangedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellChanged(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:318
// [-2] void currentCellChanged(int, int, int, int)
extern "C"
void C_ZN12QTableWidget18currentCellChangedEiiii(void *this_, int currentRow, int currentColumn, int previousRow, int previousColumn) {
  ((QTableWidget*)this_)->currentCellChanged(currentRow, currentColumn, previousRow, previousColumn);
}
//  main block end
