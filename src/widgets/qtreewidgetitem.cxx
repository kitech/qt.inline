//  header block begin
// /usr/include/qt/QtWidgets/qtreewidget.h
#include <qtreewidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qtreewidget.h:67
// void QTreeWidgetItem(int)
extern "C"
void* C_ZN15QTreeWidgetItemC1Ei(int type) {
  return new QTreeWidgetItem(type);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:68
// void QTreeWidgetItem(const class QStringList &, int)
extern "C"
void* C_ZN15QTreeWidgetItemC1ERK11QStringListi(const QStringList & strings, int type) {
  return new QTreeWidgetItem(strings, type);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:69
// void QTreeWidgetItem(class QTreeWidget *, int)
extern "C"
void* C_ZN15QTreeWidgetItemC1EP11QTreeWidgeti(QTreeWidget * view, int type) {
  return new QTreeWidgetItem(view, type);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:70
// void QTreeWidgetItem(class QTreeWidget *, const class QStringList &, int)
extern "C"
void* C_ZN15QTreeWidgetItemC1EP11QTreeWidgetRK11QStringListi(QTreeWidget * view, const QStringList & strings, int type) {
  return new QTreeWidgetItem(view, strings, type);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:71
// void QTreeWidgetItem(class QTreeWidget *, class QTreeWidgetItem *, int)
extern "C"
void* C_ZN15QTreeWidgetItemC1EP11QTreeWidgetPS_i(QTreeWidget * view, QTreeWidgetItem * after, int type) {
  return new QTreeWidgetItem(view, after, type);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:72
// void QTreeWidgetItem(class QTreeWidgetItem *, int)
extern "C"
void* C_ZN15QTreeWidgetItemC1EPS_i(QTreeWidgetItem * parent, int type) {
  return new QTreeWidgetItem(parent, type);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:73
// void QTreeWidgetItem(class QTreeWidgetItem *, const class QStringList &, int)
extern "C"
void* C_ZN15QTreeWidgetItemC1EPS_RK11QStringListi(QTreeWidgetItem * parent, const QStringList & strings, int type) {
  return new QTreeWidgetItem(parent, strings, type);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:74
// void QTreeWidgetItem(class QTreeWidgetItem *, class QTreeWidgetItem *, int)
extern "C"
void* C_ZN15QTreeWidgetItemC1EPS_S0_i(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type) {
  return new QTreeWidgetItem(parent, after, type);
}
// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:76
// void ~QTreeWidgetItem()
extern "C"
void C_ZN15QTreeWidgetItemD1Ev(void *this_) {
  delete (QTreeWidgetItem*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:78
// QTreeWidgetItem * clone()
extern "C"
void C_ZNK15QTreeWidgetItem5cloneEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->clone();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:80
// QTreeWidget * treeWidget()
extern "C"
void C_ZNK15QTreeWidgetItem10treeWidgetEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->treeWidget();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:82
// void setSelected(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem11setSelectedEb(void *this_, bool select) {
  ((QTreeWidgetItem*)this_)->setSelected(select);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:83
// bool isSelected()
extern "C"
void C_ZNK15QTreeWidgetItem10isSelectedEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->isSelected();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:85
// void setHidden(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem9setHiddenEb(void *this_, bool hide) {
  ((QTreeWidgetItem*)this_)->setHidden(hide);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:86
// bool isHidden()
extern "C"
void C_ZNK15QTreeWidgetItem8isHiddenEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->isHidden();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:88
// void setExpanded(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem11setExpandedEb(void *this_, bool expand) {
  ((QTreeWidgetItem*)this_)->setExpanded(expand);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:89
// bool isExpanded()
extern "C"
void C_ZNK15QTreeWidgetItem10isExpandedEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->isExpanded();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:91
// void setFirstColumnSpanned(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem21setFirstColumnSpannedEb(void *this_, bool span) {
  ((QTreeWidgetItem*)this_)->setFirstColumnSpanned(span);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:92
// bool isFirstColumnSpanned()
extern "C"
void C_ZNK15QTreeWidgetItem20isFirstColumnSpannedEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->isFirstColumnSpanned();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:94
// void setDisabled(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem11setDisabledEb(void *this_, bool disabled) {
  ((QTreeWidgetItem*)this_)->setDisabled(disabled);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:95
// bool isDisabled()
extern "C"
void C_ZNK15QTreeWidgetItem10isDisabledEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->isDisabled();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:98
// void setChildIndicatorPolicy(class QTreeWidgetItem::ChildIndicatorPolicy)
extern "C"
void C_ZN15QTreeWidgetItem23setChildIndicatorPolicyENS_20ChildIndicatorPolicyE(void *this_, QTreeWidgetItem::ChildIndicatorPolicy policy) {
  ((QTreeWidgetItem*)this_)->setChildIndicatorPolicy(policy);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:99
// QTreeWidgetItem::ChildIndicatorPolicy childIndicatorPolicy()
extern "C"
void C_ZNK15QTreeWidgetItem20childIndicatorPolicyEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->childIndicatorPolicy();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:101
// Qt::ItemFlags flags()
extern "C"
void C_ZNK15QTreeWidgetItem5flagsEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->flags();
}
// /usr/include/qt/QtWidgets/qtreewidget.h:102
// void setFlags(Qt::ItemFlags)
extern "C"
void C_ZN15QTreeWidgetItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QTreeWidgetItem*)this_)->setFlags(flags);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:104
// QString text(int)
extern "C"
void C_ZNK15QTreeWidgetItem4textEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->text(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:106
// void setText(int, const class QString &)
extern "C"
void C_ZN15QTreeWidgetItem7setTextEiRK7QString(void *this_, int column, const QString & text) {
  ((QTreeWidgetItem*)this_)->setText(column, text);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:108
// QIcon icon(int)
extern "C"
void C_ZNK15QTreeWidgetItem4iconEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->icon(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:110
// void setIcon(int, const class QIcon &)
extern "C"
void C_ZN15QTreeWidgetItem7setIconEiRK5QIcon(void *this_, int column, const QIcon & icon) {
  ((QTreeWidgetItem*)this_)->setIcon(column, icon);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:112
// QString statusTip(int)
extern "C"
void C_ZNK15QTreeWidgetItem9statusTipEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->statusTip(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:114
// void setStatusTip(int, const class QString &)
extern "C"
void C_ZN15QTreeWidgetItem12setStatusTipEiRK7QString(void *this_, int column, const QString & statusTip) {
  ((QTreeWidgetItem*)this_)->setStatusTip(column, statusTip);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:117
// QString toolTip(int)
extern "C"
void C_ZNK15QTreeWidgetItem7toolTipEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->toolTip(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:119
// void setToolTip(int, const class QString &)
extern "C"
void C_ZN15QTreeWidgetItem10setToolTipEiRK7QString(void *this_, int column, const QString & toolTip) {
  ((QTreeWidgetItem*)this_)->setToolTip(column, toolTip);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:123
// QString whatsThis(int)
extern "C"
void C_ZNK15QTreeWidgetItem9whatsThisEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->whatsThis(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:125
// void setWhatsThis(int, const class QString &)
extern "C"
void C_ZN15QTreeWidgetItem12setWhatsThisEiRK7QString(void *this_, int column, const QString & whatsThis) {
  ((QTreeWidgetItem*)this_)->setWhatsThis(column, whatsThis);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:128
// QFont font(int)
extern "C"
void C_ZNK15QTreeWidgetItem4fontEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->font(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:130
// void setFont(int, const class QFont &)
extern "C"
void C_ZN15QTreeWidgetItem7setFontEiRK5QFont(void *this_, int column, const QFont & font) {
  ((QTreeWidgetItem*)this_)->setFont(column, font);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:132
// int textAlignment(int)
extern "C"
void C_ZNK15QTreeWidgetItem13textAlignmentEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->textAlignment(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:134
// void setTextAlignment(int, int)
extern "C"
void C_ZN15QTreeWidgetItem16setTextAlignmentEii(void *this_, int column, int alignment) {
  ((QTreeWidgetItem*)this_)->setTextAlignment(column, alignment);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:137
// QColor backgroundColor(int)
extern "C"
void C_ZNK15QTreeWidgetItem15backgroundColorEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->backgroundColor(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:139
// void setBackgroundColor(int, const class QColor &)
extern "C"
void C_ZN15QTreeWidgetItem18setBackgroundColorEiRK6QColor(void *this_, int column, const QColor & color) {
  ((QTreeWidgetItem*)this_)->setBackgroundColor(column, color);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:142
// QBrush background(int)
extern "C"
void C_ZNK15QTreeWidgetItem10backgroundEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->background(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:144
// void setBackground(int, const class QBrush &)
extern "C"
void C_ZN15QTreeWidgetItem13setBackgroundEiRK6QBrush(void *this_, int column, const QBrush & brush) {
  ((QTreeWidgetItem*)this_)->setBackground(column, brush);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:147
// QColor textColor(int)
extern "C"
void C_ZNK15QTreeWidgetItem9textColorEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->textColor(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:149
// void setTextColor(int, const class QColor &)
extern "C"
void C_ZN15QTreeWidgetItem12setTextColorEiRK6QColor(void *this_, int column, const QColor & color) {
  ((QTreeWidgetItem*)this_)->setTextColor(column, color);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:152
// QBrush foreground(int)
extern "C"
void C_ZNK15QTreeWidgetItem10foregroundEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->foreground(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:154
// void setForeground(int, const class QBrush &)
extern "C"
void C_ZN15QTreeWidgetItem13setForegroundEiRK6QBrush(void *this_, int column, const QBrush & brush) {
  ((QTreeWidgetItem*)this_)->setForeground(column, brush);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:157
// Qt::CheckState checkState(int)
extern "C"
void C_ZNK15QTreeWidgetItem10checkStateEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->checkState(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:159
// void setCheckState(int, Qt::CheckState)
extern "C"
void C_ZN15QTreeWidgetItem13setCheckStateEiN2Qt10CheckStateE(void *this_, int column, Qt::CheckState state) {
  ((QTreeWidgetItem*)this_)->setCheckState(column, state);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:162
// QSize sizeHint(int)
extern "C"
void C_ZNK15QTreeWidgetItem8sizeHintEi(void *this_, int column) {
  /*return*/ ((QTreeWidgetItem*)this_)->sizeHint(column);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:164
// void setSizeHint(int, const class QSize &)
extern "C"
void C_ZN15QTreeWidgetItem11setSizeHintEiRK5QSize(void *this_, int column, const QSize & size) {
  ((QTreeWidgetItem*)this_)->setSizeHint(column, size);
}
// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:167
// QVariant data(int, int)
extern "C"
void C_ZNK15QTreeWidgetItem4dataEii(void *this_, int column, int role) {
  /*return*/ ((QTreeWidgetItem*)this_)->data(column, role);
}
// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:168
// void setData(int, int, const class QVariant &)
extern "C"
void C_ZN15QTreeWidgetItem7setDataEiiRK8QVariant(void *this_, int column, int role, const QVariant & value) {
  ((QTreeWidgetItem*)this_)->setData(column, role, value);
}
// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:173
// void read(class QDataStream &)
extern "C"
void C_ZN15QTreeWidgetItem4readER11QDataStream(void *this_, QDataStream & in) {
  ((QTreeWidgetItem*)this_)->read(in);
}
// virtual
// /usr/include/qt/QtWidgets/qtreewidget.h:174
// void write(class QDataStream &)
extern "C"
void C_ZNK15QTreeWidgetItem5writeER11QDataStream(void *this_, QDataStream & out) {
  ((QTreeWidgetItem*)this_)->write(out);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:178
// QTreeWidgetItem * parent()
extern "C"
void C_ZNK15QTreeWidgetItem6parentEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->parent();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:179
// QTreeWidgetItem * child(int)
extern "C"
void C_ZNK15QTreeWidgetItem5childEi(void *this_, int index) {
  /*return*/ ((QTreeWidgetItem*)this_)->child(index);
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:185
// int childCount()
extern "C"
void C_ZNK15QTreeWidgetItem10childCountEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->childCount();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:186
// int columnCount()
extern "C"
void C_ZNK15QTreeWidgetItem11columnCountEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->columnCount();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:187
// int indexOfChild(class QTreeWidgetItem *)
extern "C"
void C_ZNK15QTreeWidgetItem12indexOfChildEPS_(void *this_, QTreeWidgetItem * child) {
  /*return*/ ((QTreeWidgetItem*)this_)->indexOfChild(child);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:189
// void addChild(class QTreeWidgetItem *)
extern "C"
void C_ZN15QTreeWidgetItem8addChildEPS_(void *this_, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->addChild(child);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:190
// void insertChild(int, class QTreeWidgetItem *)
extern "C"
void C_ZN15QTreeWidgetItem11insertChildEiPS_(void *this_, int index, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->insertChild(index, child);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:191
// void removeChild(class QTreeWidgetItem *)
extern "C"
void C_ZN15QTreeWidgetItem11removeChildEPS_(void *this_, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->removeChild(child);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:192
// QTreeWidgetItem * takeChild(int)
extern "C"
void C_ZN15QTreeWidgetItem9takeChildEi(void *this_, int index) {
  /*return*/ ((QTreeWidgetItem*)this_)->takeChild(index);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:194
// void addChildren(const QList<class QTreeWidgetItem *> &)
extern "C"
void C_ZN15QTreeWidgetItem11addChildrenERK5QListIPS_E(void *this_, const QList<QTreeWidgetItem *> & children) {
  ((QTreeWidgetItem*)this_)->addChildren(children);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:195
// void insertChildren(int, const QList<class QTreeWidgetItem *> &)
extern "C"
void C_ZN15QTreeWidgetItem14insertChildrenEiRK5QListIPS_E(void *this_, int index, const QList<QTreeWidgetItem *> & children) {
  ((QTreeWidgetItem*)this_)->insertChildren(index, children);
}
// /usr/include/qt/QtWidgets/qtreewidget.h:196
// QList<QTreeWidgetItem *> takeChildren()
extern "C"
void C_ZN15QTreeWidgetItem12takeChildrenEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->takeChildren();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:198
// int type()
extern "C"
void C_ZNK15QTreeWidgetItem4typeEv(void *this_) {
  /*return*/ ((QTreeWidgetItem*)this_)->type();
}
// inline
// /usr/include/qt/QtWidgets/qtreewidget.h:199
// void sortChildren(int, Qt::SortOrder)
extern "C"
void C_ZN15QTreeWidgetItem12sortChildrenEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeWidgetItem*)this_)->sortChildren(column, order);
}
//  main block end
