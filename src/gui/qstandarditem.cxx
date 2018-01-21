//  header block begin
// /usr/include/qt/QtGui/qstandarditemmodel.h
#include <qstandarditemmodel.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qstandarditemmodel.h:64
// void QStandardItem()
extern "C"
void* C_ZN13QStandardItemC1Ev() {
  return new QStandardItem();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:65
// void QStandardItem(const class QString &)
extern "C"
void* C_ZN13QStandardItemC1ERK7QString(const QString & text) {
  return new QStandardItem(text);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:66
// void QStandardItem(const class QIcon &, const class QString &)
extern "C"
void* C_ZN13QStandardItemC1ERK5QIconRK7QString(const QIcon & icon, const QString & text) {
  return new QStandardItem(icon, text);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:67
// void QStandardItem(int, int)
extern "C"
void* C_ZN13QStandardItemC1Eii(int rows, int columns) {
  return new QStandardItem(rows, columns);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:68
// void ~QStandardItem()
extern "C"
void C_ZN13QStandardItemD1Ev(void *this_) {
  delete (QStandardItem*)(this_);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:70
// QVariant data(int)
extern "C"
void C_ZNK13QStandardItem4dataEi(void *this_, int role) {
  /*return*/ ((QStandardItem*)this_)->data(role);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:71
// void setData(const class QVariant &, int)
extern "C"
void C_ZN13QStandardItem7setDataERK8QVarianti(void *this_, const QVariant & value, int role) {
  ((QStandardItem*)this_)->setData(value, role);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:73
// QString text()
extern "C"
void C_ZNK13QStandardItem4textEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->text();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:76
// void setText(const class QString &)
extern "C"
void C_ZN13QStandardItem7setTextERK7QString(void *this_, const QString & text) {
  ((QStandardItem*)this_)->setText(text);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:78
// QIcon icon()
extern "C"
void C_ZNK13QStandardItem4iconEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->icon();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:81
// void setIcon(const class QIcon &)
extern "C"
void C_ZN13QStandardItem7setIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QStandardItem*)this_)->setIcon(icon);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:84
// QString toolTip()
extern "C"
void C_ZNK13QStandardItem7toolTipEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->toolTip();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:87
// void setToolTip(const class QString &)
extern "C"
void C_ZN13QStandardItem10setToolTipERK7QString(void *this_, const QString & toolTip) {
  ((QStandardItem*)this_)->setToolTip(toolTip);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:91
// QString statusTip()
extern "C"
void C_ZNK13QStandardItem9statusTipEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->statusTip();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:94
// void setStatusTip(const class QString &)
extern "C"
void C_ZN13QStandardItem12setStatusTipERK7QString(void *this_, const QString & statusTip) {
  ((QStandardItem*)this_)->setStatusTip(statusTip);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:98
// QString whatsThis()
extern "C"
void C_ZNK13QStandardItem9whatsThisEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->whatsThis();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:101
// void setWhatsThis(const class QString &)
extern "C"
void C_ZN13QStandardItem12setWhatsThisERK7QString(void *this_, const QString & whatsThis) {
  ((QStandardItem*)this_)->setWhatsThis(whatsThis);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:104
// QSize sizeHint()
extern "C"
void C_ZNK13QStandardItem8sizeHintEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->sizeHint();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:107
// void setSizeHint(const class QSize &)
extern "C"
void C_ZN13QStandardItem11setSizeHintERK5QSize(void *this_, const QSize & sizeHint) {
  ((QStandardItem*)this_)->setSizeHint(sizeHint);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:109
// QFont font()
extern "C"
void C_ZNK13QStandardItem4fontEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->font();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:112
// void setFont(const class QFont &)
extern "C"
void C_ZN13QStandardItem7setFontERK5QFont(void *this_, const QFont & font) {
  ((QStandardItem*)this_)->setFont(font);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:114
// Qt::Alignment textAlignment()
extern "C"
void C_ZNK13QStandardItem13textAlignmentEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->textAlignment();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:117
// void setTextAlignment(Qt::Alignment)
extern "C"
void C_ZN13QStandardItem16setTextAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> textAlignment) {
  ((QStandardItem*)this_)->setTextAlignment(textAlignment);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:119
// QBrush background()
extern "C"
void C_ZNK13QStandardItem10backgroundEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->background();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:122
// void setBackground(const class QBrush &)
extern "C"
void C_ZN13QStandardItem13setBackgroundERK6QBrush(void *this_, const QBrush & brush) {
  ((QStandardItem*)this_)->setBackground(brush);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:124
// QBrush foreground()
extern "C"
void C_ZNK13QStandardItem10foregroundEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->foreground();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:127
// void setForeground(const class QBrush &)
extern "C"
void C_ZN13QStandardItem13setForegroundERK6QBrush(void *this_, const QBrush & brush) {
  ((QStandardItem*)this_)->setForeground(brush);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:129
// Qt::CheckState checkState()
extern "C"
void C_ZNK13QStandardItem10checkStateEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->checkState();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:132
// void setCheckState(Qt::CheckState)
extern "C"
void C_ZN13QStandardItem13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState checkState) {
  ((QStandardItem*)this_)->setCheckState(checkState);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:134
// QString accessibleText()
extern "C"
void C_ZNK13QStandardItem14accessibleTextEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->accessibleText();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:137
// void setAccessibleText(const class QString &)
extern "C"
void C_ZN13QStandardItem17setAccessibleTextERK7QString(void *this_, const QString & accessibleText) {
  ((QStandardItem*)this_)->setAccessibleText(accessibleText);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:139
// QString accessibleDescription()
extern "C"
void C_ZNK13QStandardItem21accessibleDescriptionEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->accessibleDescription();
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:142
// void setAccessibleDescription(const class QString &)
extern "C"
void C_ZN13QStandardItem24setAccessibleDescriptionERK7QString(void *this_, const QString & accessibleDescription) {
  ((QStandardItem*)this_)->setAccessibleDescription(accessibleDescription);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:144
// Qt::ItemFlags flags()
extern "C"
void C_ZNK13QStandardItem5flagsEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->flags();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:145
// void setFlags(Qt::ItemFlags)
extern "C"
void C_ZN13QStandardItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QStandardItem*)this_)->setFlags(flags);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:147
// bool isEnabled()
extern "C"
void C_ZNK13QStandardItem9isEnabledEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isEnabled();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:150
// void setEnabled(_Bool)
extern "C"
void C_ZN13QStandardItem10setEnabledEb(void *this_, bool enabled) {
  ((QStandardItem*)this_)->setEnabled(enabled);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:152
// bool isEditable()
extern "C"
void C_ZNK13QStandardItem10isEditableEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isEditable();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:155
// void setEditable(_Bool)
extern "C"
void C_ZN13QStandardItem11setEditableEb(void *this_, bool editable) {
  ((QStandardItem*)this_)->setEditable(editable);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:157
// bool isSelectable()
extern "C"
void C_ZNK13QStandardItem12isSelectableEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isSelectable();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:160
// void setSelectable(_Bool)
extern "C"
void C_ZN13QStandardItem13setSelectableEb(void *this_, bool selectable) {
  ((QStandardItem*)this_)->setSelectable(selectable);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:162
// bool isCheckable()
extern "C"
void C_ZNK13QStandardItem11isCheckableEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isCheckable();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:165
// void setCheckable(_Bool)
extern "C"
void C_ZN13QStandardItem12setCheckableEb(void *this_, bool checkable) {
  ((QStandardItem*)this_)->setCheckable(checkable);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:167
// bool isAutoTristate()
extern "C"
void C_ZNK13QStandardItem14isAutoTristateEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isAutoTristate();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:170
// void setAutoTristate(_Bool)
extern "C"
void C_ZN13QStandardItem15setAutoTristateEb(void *this_, bool tristate) {
  ((QStandardItem*)this_)->setAutoTristate(tristate);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:172
// bool isUserTristate()
extern "C"
void C_ZNK13QStandardItem14isUserTristateEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isUserTristate();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:175
// void setUserTristate(_Bool)
extern "C"
void C_ZN13QStandardItem15setUserTristateEb(void *this_, bool tristate) {
  ((QStandardItem*)this_)->setUserTristate(tristate);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:178
// bool isTristate()
extern "C"
void C_ZNK13QStandardItem10isTristateEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isTristate();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:179
// void setTristate(_Bool)
extern "C"
void C_ZN13QStandardItem11setTristateEb(void *this_, bool tristate) {
  ((QStandardItem*)this_)->setTristate(tristate);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:183
// bool isDragEnabled()
extern "C"
void C_ZNK13QStandardItem13isDragEnabledEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isDragEnabled();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:186
// void setDragEnabled(_Bool)
extern "C"
void C_ZN13QStandardItem14setDragEnabledEb(void *this_, bool dragEnabled) {
  ((QStandardItem*)this_)->setDragEnabled(dragEnabled);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:188
// bool isDropEnabled()
extern "C"
void C_ZNK13QStandardItem13isDropEnabledEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->isDropEnabled();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:191
// void setDropEnabled(_Bool)
extern "C"
void C_ZN13QStandardItem14setDropEnabledEb(void *this_, bool dropEnabled) {
  ((QStandardItem*)this_)->setDropEnabled(dropEnabled);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:194
// QStandardItem * parent()
extern "C"
void C_ZNK13QStandardItem6parentEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->parent();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:195
// int row()
extern "C"
void C_ZNK13QStandardItem3rowEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->row();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:196
// int column()
extern "C"
void C_ZNK13QStandardItem6columnEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->column();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:197
// QModelIndex index()
extern "C"
void C_ZNK13QStandardItem5indexEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->index();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:198
// QStandardItemModel * model()
extern "C"
void C_ZNK13QStandardItem5modelEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->model();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:200
// int rowCount()
extern "C"
void C_ZNK13QStandardItem8rowCountEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->rowCount();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:201
// void setRowCount(int)
extern "C"
void C_ZN13QStandardItem11setRowCountEi(void *this_, int rows) {
  ((QStandardItem*)this_)->setRowCount(rows);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:202
// int columnCount()
extern "C"
void C_ZNK13QStandardItem11columnCountEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->columnCount();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:203
// void setColumnCount(int)
extern "C"
void C_ZN13QStandardItem14setColumnCountEi(void *this_, int columns) {
  ((QStandardItem*)this_)->setColumnCount(columns);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:205
// bool hasChildren()
extern "C"
void C_ZNK13QStandardItem11hasChildrenEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->hasChildren();
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:206
// QStandardItem * child(int, int)
extern "C"
void C_ZNK13QStandardItem5childEii(void *this_, int row, int column) {
  /*return*/ ((QStandardItem*)this_)->child(row, column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:207
// void setChild(int, int, class QStandardItem *)
extern "C"
void C_ZN13QStandardItem8setChildEiiPS_(void *this_, int row, int column, QStandardItem * item) {
  ((QStandardItem*)this_)->setChild(row, column, item);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:208
// void setChild(int, class QStandardItem *)
extern "C"
void C_ZN13QStandardItem8setChildEiPS_(void *this_, int row, QStandardItem * item) {
  ((QStandardItem*)this_)->setChild(row, item);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:210
// void insertRow(int, const QList<class QStandardItem *> &)
extern "C"
void C_ZN13QStandardItem9insertRowEiRK5QListIPS_E(void *this_, int row, const QList<QStandardItem *> & items) {
  ((QStandardItem*)this_)->insertRow(row, items);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:211
// void insertColumn(int, const QList<class QStandardItem *> &)
extern "C"
void C_ZN13QStandardItem12insertColumnEiRK5QListIPS_E(void *this_, int column, const QList<QStandardItem *> & items) {
  ((QStandardItem*)this_)->insertColumn(column, items);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:212
// void insertRows(int, const QList<class QStandardItem *> &)
extern "C"
void C_ZN13QStandardItem10insertRowsEiRK5QListIPS_E(void *this_, int row, const QList<QStandardItem *> & items) {
  ((QStandardItem*)this_)->insertRows(row, items);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:213
// void insertRows(int, int)
extern "C"
void C_ZN13QStandardItem10insertRowsEii(void *this_, int row, int count) {
  ((QStandardItem*)this_)->insertRows(row, count);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:214
// void insertColumns(int, int)
extern "C"
void C_ZN13QStandardItem13insertColumnsEii(void *this_, int column, int count) {
  ((QStandardItem*)this_)->insertColumns(column, count);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:216
// void removeRow(int)
extern "C"
void C_ZN13QStandardItem9removeRowEi(void *this_, int row) {
  ((QStandardItem*)this_)->removeRow(row);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:217
// void removeColumn(int)
extern "C"
void C_ZN13QStandardItem12removeColumnEi(void *this_, int column) {
  ((QStandardItem*)this_)->removeColumn(column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:218
// void removeRows(int, int)
extern "C"
void C_ZN13QStandardItem10removeRowsEii(void *this_, int row, int count) {
  ((QStandardItem*)this_)->removeRows(row, count);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:219
// void removeColumns(int, int)
extern "C"
void C_ZN13QStandardItem13removeColumnsEii(void *this_, int column, int count) {
  ((QStandardItem*)this_)->removeColumns(column, count);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:221
// void appendRow(const QList<class QStandardItem *> &)
extern "C"
void C_ZN13QStandardItem9appendRowERK5QListIPS_E(void *this_, const QList<QStandardItem *> & items) {
  ((QStandardItem*)this_)->appendRow(items);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:222
// void appendRows(const QList<class QStandardItem *> &)
extern "C"
void C_ZN13QStandardItem10appendRowsERK5QListIPS_E(void *this_, const QList<QStandardItem *> & items) {
  ((QStandardItem*)this_)->appendRows(items);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:223
// void appendColumn(const QList<class QStandardItem *> &)
extern "C"
void C_ZN13QStandardItem12appendColumnERK5QListIPS_E(void *this_, const QList<QStandardItem *> & items) {
  ((QStandardItem*)this_)->appendColumn(items);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:224
// void insertRow(int, class QStandardItem *)
extern "C"
void C_ZN13QStandardItem9insertRowEiPS_(void *this_, int row, QStandardItem * item) {
  ((QStandardItem*)this_)->insertRow(row, item);
}
// inline
// /usr/include/qt/QtGui/qstandarditemmodel.h:225
// void appendRow(class QStandardItem *)
extern "C"
void C_ZN13QStandardItem9appendRowEPS_(void *this_, QStandardItem * item) {
  ((QStandardItem*)this_)->appendRow(item);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:227
// QStandardItem * takeChild(int, int)
extern "C"
void C_ZN13QStandardItem9takeChildEii(void *this_, int row, int column) {
  /*return*/ ((QStandardItem*)this_)->takeChild(row, column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:228
// QList<QStandardItem *> takeRow(int)
extern "C"
void C_ZN13QStandardItem7takeRowEi(void *this_, int row) {
  /*return*/ ((QStandardItem*)this_)->takeRow(row);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:229
// QList<QStandardItem *> takeColumn(int)
extern "C"
void C_ZN13QStandardItem10takeColumnEi(void *this_, int column) {
  /*return*/ ((QStandardItem*)this_)->takeColumn(column);
}
// /usr/include/qt/QtGui/qstandarditemmodel.h:231
// void sortChildren(int, Qt::SortOrder)
extern "C"
void C_ZN13QStandardItem12sortChildrenEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QStandardItem*)this_)->sortChildren(column, order);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:233
// QStandardItem * clone()
extern "C"
void C_ZNK13QStandardItem5cloneEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->clone();
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:236
// int type()
extern "C"
void C_ZNK13QStandardItem4typeEv(void *this_) {
  /*return*/ ((QStandardItem*)this_)->type();
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:239
// void read(class QDataStream &)
extern "C"
void C_ZN13QStandardItem4readER11QDataStream(void *this_, QDataStream & in) {
  ((QStandardItem*)this_)->read(in);
}
// virtual
// /usr/include/qt/QtGui/qstandarditemmodel.h:240
// void write(class QDataStream &)
extern "C"
void C_ZNK13QStandardItem5writeER11QDataStream(void *this_, QDataStream & out) {
  ((QStandardItem*)this_)->write(out);
}
//  main block end
