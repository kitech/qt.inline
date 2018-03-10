//  header block begin
// /usr/include/qt/QtWidgets/qlistwidget.h
#ifndef protected
#define protected public
#endif
#include <qlistwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QListWidget is pure virtual: false
// QListWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQListWidget : public QListWidget {
public:
  virtual ~MyQListWidget() {}
// void QListWidget(class QWidget *)
MyQListWidget(QWidget * parent) : QListWidget(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QListWidget::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QStringList mimeTypes()
  virtual QStringList mimeTypes() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mimeTypes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QStringList*)(irv);
      // RecordRecordQStringList
    } else {
    return QListWidget::mimeTypes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool dropMimeData(int, const class QMimeData *, Qt::DropAction)
  virtual bool dropMimeData(int index, const QMimeData * data, Qt::DropAction action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropMimeData", &handled, 3, (uint64_t)index, (uint64_t)data, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QListWidget::dropMimeData(index, data, action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// Qt::DropActions supportedDropActions()
  virtual Qt::DropActions supportedDropActions() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportedDropActions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::DropActions)(int)(irv);
      // ElaboratedRecordQFlags<Qt::DropAction>
    } else {
    return QListWidget::supportedDropActions();
  }
  }

// Protected Visibility=Default Availability=Available
// QModelIndex indexFromItem(class QListWidgetItem *)
  virtual QModelIndex indexFromItem(QListWidgetItem * item) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"indexFromItem", &handled, 1, (uint64_t)item, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    return QListWidget::indexFromItem(item);
  }
  }

// Protected Visibility=Default Availability=Available
// QListWidgetItem * itemFromIndex(const class QModelIndex &)
  virtual QListWidgetItem * itemFromIndex(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"itemFromIndex", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QListWidgetItem *)(irv);
      // PointerPointerQListWidgetItem *
    } else {
    return QListWidget::itemFromIndex(index);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:281
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QListWidget5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QListWidget*)this_)->QListWidget::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:282
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget9mimeTypesEv(void *this_) {
  auto rv = ((QListWidget*)this_)->QListWidget::mimeTypes();
return new QStringList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:289
// [1] bool dropMimeData(int, const class QMimeData *, Qt::DropAction)
extern "C" Q_DECL_EXPORT
bool C_ZN11QListWidget12dropMimeDataEiPK9QMimeDataN2Qt10DropActionE(void *this_, int index, const QMimeData * data, Qt::DropAction action) {
  return (bool)((QListWidget*)this_)->QListWidget::dropMimeData(index, data, action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:290
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK11QListWidget20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QListWidget*)this_)->QListWidget::supportedDropActions();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:300
// [24] QModelIndex indexFromItem(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget13indexFromItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  auto rv = ((QListWidget*)this_)->QListWidget::indexFromItem(item);
return new QModelIndex(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:301
// [8] QListWidgetItem * itemFromIndex(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget13itemFromIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  return (void*)((QListWidget*)this_)->QListWidget::itemFromIndex(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:199
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget10metaObjectEv(void *this_) {
  return (void*)((QListWidget*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:207
// [-2] void QListWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QListWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQListWidget*)(0);
  return  new MyQListWidget(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:208
// [-2] void ~QListWidget()
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidgetD2Ev(void *this_) {
  delete (QListWidget*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:210
// [-2] void setSelectionModel(class QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QListWidget*)this_)->setSelectionModel(selectionModel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:212
// [8] QListWidgetItem * item(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget4itemEi(void *this_, int row) {
  return (void*)((QListWidget*)this_)->item(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:213
// [4] int row(const class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QListWidget3rowEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  return (int)((QListWidget*)this_)->row(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:214
// [-2] void insertItem(int, class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget10insertItemEiP15QListWidgetItem(void *this_, int row, QListWidgetItem * item) {
  ((QListWidget*)this_)->insertItem(row, item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:215
// [-2] void insertItem(int, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget10insertItemEiRK7QString(void *this_, int row, QString* label) {
  ((QListWidget*)this_)->insertItem(row, *label);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:216
// [-2] void insertItems(int, const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11insertItemsEiRK11QStringList(void *this_, int row, QStringList* labels) {
  ((QListWidget*)this_)->insertItems(row, *labels);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:217
// [-2] void addItem(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget7addItemERK7QString(void *this_, QString* label) {
  ((QListWidget*)this_)->addItem(*label);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:218
// [-2] void addItem(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget7addItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->addItem(item);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:219
// [-2] void addItems(const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget8addItemsERK11QStringList(void *this_, QStringList* labels) {
  ((QListWidget*)this_)->addItems(*labels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:220
// [8] QListWidgetItem * takeItem(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QListWidget8takeItemEi(void *this_, int row) {
  return (void*)((QListWidget*)this_)->takeItem(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:221
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK11QListWidget5countEv(void *this_) {
  return (int)((QListWidget*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:223
// [8] QListWidgetItem * currentItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget11currentItemEv(void *this_) {
  return (void*)((QListWidget*)this_)->currentItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:224
// [-2] void setCurrentItem(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget14setCurrentItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->setCurrentItem(item);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qlistwidget.h:225
// [-2] void setCurrentItem(class QListWidgetItem *, class QItemSelectionModel::SelectionFlags)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget14setCurrentItemEP15QListWidgetItem6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QListWidgetItem * item, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QListWidget*)this_)->setCurrentItem(item, command);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:227
// [4] int currentRow()
extern "C" Q_DECL_EXPORT
int C_ZNK11QListWidget10currentRowEv(void *this_) {
  return (int)((QListWidget*)this_)->currentRow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:228
// [-2] void setCurrentRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13setCurrentRowEi(void *this_, int row) {
  ((QListWidget*)this_)->setCurrentRow(row);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qlistwidget.h:229
// [-2] void setCurrentRow(int, class QItemSelectionModel::SelectionFlags)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13setCurrentRowEi6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, int row, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QListWidget*)this_)->setCurrentRow(row, command);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:231
// [8] QListWidgetItem * itemAt(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget6itemAtERK6QPoint(void *this_, QPoint* p) {
  return (void*)((QListWidget*)this_)->itemAt(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:232
// [8] QListWidgetItem * itemAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget6itemAtEii(void *this_, int x, int y) {
  return (void*)((QListWidget*)this_)->itemAt(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:233
// [16] QRect visualItemRect(const class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget14visualItemRectEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  auto rv = ((QListWidget*)this_)->visualItemRect(item);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:235
// [-2] void sortItems(Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget9sortItemsEN2Qt9SortOrderE(void *this_, Qt::SortOrder order) {
  ((QListWidget*)this_)->sortItems(order);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:236
// [-2] void setSortingEnabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget17setSortingEnabledEb(void *this_, bool enable) {
  ((QListWidget*)this_)->setSortingEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:237
// [1] bool isSortingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QListWidget16isSortingEnabledEv(void *this_) {
  return (bool)((QListWidget*)this_)->isSortingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:239
// [-2] void editItem(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget8editItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->editItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:240
// [-2] void openPersistentEditor(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget20openPersistentEditorEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->openPersistentEditor(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:241
// [-2] void closePersistentEditor(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget21closePersistentEditorEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->closePersistentEditor(item);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWidgets/qlistwidget.h:243
// [1] bool isPersistentEditorOpen(class QListWidgetItem *)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK11QListWidget22isPersistentEditorOpenEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  return (bool)((QListWidget*)this_)->isPersistentEditorOpen(item);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qlistwidget.h:245
// [8] QWidget * itemWidget(class QListWidgetItem *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget10itemWidgetEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  return (void*)((QListWidget*)this_)->itemWidget(item);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qlistwidget.h:246
// [-2] void setItemWidget(class QListWidgetItem *, class QWidget *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13setItemWidgetEP15QListWidgetItemP7QWidget(void *this_, QListWidgetItem * item, QWidget * widget) {
  ((QListWidget*)this_)->setItemWidget(item, widget);
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qlistwidget.h:247
// [-2] void removeItemWidget(class QListWidgetItem *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget16removeItemWidgetEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->removeItemWidget(item);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:249
// [1] bool isItemSelected(const class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QListWidget14isItemSelectedEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  return (bool)((QListWidget*)this_)->isItemSelected(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:250
// [-2] void setItemSelected(const class QListWidgetItem *, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget15setItemSelectedEPK15QListWidgetItemb(void *this_, const QListWidgetItem * item, bool select_) {
  ((QListWidget*)this_)->setItemSelected(item, select_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:254
// [1] bool isItemHidden(const class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QListWidget12isItemHiddenEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  return (bool)((QListWidget*)this_)->isItemHidden(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:255
// [-2] void setItemHidden(const class QListWidgetItem *, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13setItemHiddenEPK15QListWidgetItemb(void *this_, const QListWidgetItem * item, bool hide) {
  ((QListWidget*)this_)->setItemHidden(item, hide);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:260
// [-2] void dropEvent(class QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QListWidget*)this_)->dropEvent(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:263
// [-2] void scrollToItem(const class QListWidgetItem *, class QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget12scrollToItemEPK15QListWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QListWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QListWidget*)this_)->scrollToItem(item, hint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:264
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget5clearEv(void *this_) {
  ((QListWidget*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:267
// [-2] void itemPressed(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11itemPressedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemPressed(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:268
// [-2] void itemClicked(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11itemClickedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemClicked(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:269
// [-2] void itemDoubleClicked(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemDoubleClicked(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:270
// [-2] void itemActivated(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13itemActivatedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemActivated(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:271
// [-2] void itemEntered(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11itemEnteredEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemEntered(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:272
// [-2] void itemChanged(class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11itemChangedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemChanged(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:274
// [-2] void currentItemChanged(class QListWidgetItem *, class QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(void *this_, QListWidgetItem * current, QListWidgetItem * previous) {
  ((QListWidget*)this_)->currentItemChanged(current, previous);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:275
// [-2] void currentTextChanged(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget18currentTextChangedERK7QString(void *this_, QString* currentText) {
  ((QListWidget*)this_)->currentTextChanged(*currentText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:276
// [-2] void currentRowChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget17currentRowChangedEi(void *this_, int currentRow) {
  ((QListWidget*)this_)->currentRowChanged(currentRow);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:278
// [-2] void itemSelectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget20itemSelectionChangedEv(void *this_) {
  ((QListWidget*)this_)->itemSelectionChanged();
}

//  main block end
