//  header block begin
// /usr/include/qt/QtWidgets/qtreewidget.h
#include <qtreewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeWidgetItem is pure virtual: false
// QTreeWidgetItem has virtual projected: true
//  header block end

//  main block begin

class MyQTreeWidgetItem : public QTreeWidgetItem {
public:
  virtual ~MyQTreeWidgetItem() {}
// void QTreeWidgetItem(int)
MyQTreeWidgetItem(int type) : QTreeWidgetItem(type) {}
// void QTreeWidgetItem(const class QStringList &, int)
MyQTreeWidgetItem(const QStringList & strings, int type) : QTreeWidgetItem(strings, type) {}
// void QTreeWidgetItem(class QTreeWidget *, int)
MyQTreeWidgetItem(QTreeWidget * view, int type) : QTreeWidgetItem(view, type) {}
// void QTreeWidgetItem(class QTreeWidget *, const class QStringList &, int)
MyQTreeWidgetItem(QTreeWidget * view, const QStringList & strings, int type) : QTreeWidgetItem(view, strings, type) {}
// void QTreeWidgetItem(class QTreeWidget *, class QTreeWidgetItem *, int)
MyQTreeWidgetItem(QTreeWidget * view, QTreeWidgetItem * after, int type) : QTreeWidgetItem(view, after, type) {}
// void QTreeWidgetItem(class QTreeWidgetItem *, int)
MyQTreeWidgetItem(QTreeWidgetItem * parent, int type) : QTreeWidgetItem(parent, type) {}
// void QTreeWidgetItem(class QTreeWidgetItem *, const class QStringList &, int)
MyQTreeWidgetItem(QTreeWidgetItem * parent, const QStringList & strings, int type) : QTreeWidgetItem(parent, strings, type) {}
// void QTreeWidgetItem(class QTreeWidgetItem *, class QTreeWidgetItem *, int)
MyQTreeWidgetItem(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type) : QTreeWidgetItem(parent, after, type) {}
// void emitDataChanged()
  virtual void emitDataChanged() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"emitDataChanged", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeWidgetItem::emitDataChanged();
  }
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:67
// [-2] void QTreeWidgetItem(int)
extern "C"
void* C_ZN15QTreeWidgetItemC2Ei(int type) {
  auto _nilp = (MyQTreeWidgetItem*)(0);
  return  new MyQTreeWidgetItem(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:68
// [-2] void QTreeWidgetItem(const class QStringList &, int)
extern "C"
void* C_ZN15QTreeWidgetItemC2ERK11QStringListi(QStringList* strings, int type) {
  auto _nilp = (MyQTreeWidgetItem*)(0);
  return  new MyQTreeWidgetItem(*strings, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:69
// [-2] void QTreeWidgetItem(class QTreeWidget *, int)
extern "C"
void* C_ZN15QTreeWidgetItemC2EP11QTreeWidgeti(QTreeWidget * view, int type) {
  auto _nilp = (MyQTreeWidgetItem*)(0);
  return  new MyQTreeWidgetItem(view, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:70
// [-2] void QTreeWidgetItem(class QTreeWidget *, const class QStringList &, int)
extern "C"
void* C_ZN15QTreeWidgetItemC2EP11QTreeWidgetRK11QStringListi(QTreeWidget * view, QStringList* strings, int type) {
  auto _nilp = (MyQTreeWidgetItem*)(0);
  return  new MyQTreeWidgetItem(view, *strings, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:71
// [-2] void QTreeWidgetItem(class QTreeWidget *, class QTreeWidgetItem *, int)
extern "C"
void* C_ZN15QTreeWidgetItemC2EP11QTreeWidgetPS_i(QTreeWidget * view, QTreeWidgetItem * after, int type) {
  auto _nilp = (MyQTreeWidgetItem*)(0);
  return  new MyQTreeWidgetItem(view, after, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:72
// [-2] void QTreeWidgetItem(class QTreeWidgetItem *, int)
extern "C"
void* C_ZN15QTreeWidgetItemC2EPS_i(QTreeWidgetItem * parent, int type) {
  auto _nilp = (MyQTreeWidgetItem*)(0);
  return  new MyQTreeWidgetItem(parent, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:73
// [-2] void QTreeWidgetItem(class QTreeWidgetItem *, const class QStringList &, int)
extern "C"
void* C_ZN15QTreeWidgetItemC2EPS_RK11QStringListi(QTreeWidgetItem * parent, QStringList* strings, int type) {
  auto _nilp = (MyQTreeWidgetItem*)(0);
  return  new MyQTreeWidgetItem(parent, *strings, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:74
// [-2] void QTreeWidgetItem(class QTreeWidgetItem *, class QTreeWidgetItem *, int)
extern "C"
void* C_ZN15QTreeWidgetItemC2EPS_S0_i(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type) {
  auto _nilp = (MyQTreeWidgetItem*)(0);
  return  new MyQTreeWidgetItem(parent, after, type);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:76
// [-2] void ~QTreeWidgetItem()
extern "C"
void C_ZN15QTreeWidgetItemD2Ev(void *this_) {
  delete (QTreeWidgetItem*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:78
// [8] QTreeWidgetItem * clone()
extern "C"
void* C_ZNK15QTreeWidgetItem5cloneEv(void *this_) {
  return (void*)((QTreeWidgetItem*)this_)->clone();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:80
// [8] QTreeWidget * treeWidget()
extern "C"
void* C_ZNK15QTreeWidgetItem10treeWidgetEv(void *this_) {
  return (void*)((QTreeWidgetItem*)this_)->treeWidget();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:82
// [-2] void setSelected(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem11setSelectedEb(void *this_, bool select) {
  ((QTreeWidgetItem*)this_)->setSelected(select);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:83
// [1] bool isSelected()
extern "C"
bool C_ZNK15QTreeWidgetItem10isSelectedEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isSelected();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:85
// [-2] void setHidden(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem9setHiddenEb(void *this_, bool hide) {
  ((QTreeWidgetItem*)this_)->setHidden(hide);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:86
// [1] bool isHidden()
extern "C"
bool C_ZNK15QTreeWidgetItem8isHiddenEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isHidden();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:88
// [-2] void setExpanded(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem11setExpandedEb(void *this_, bool expand) {
  ((QTreeWidgetItem*)this_)->setExpanded(expand);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:89
// [1] bool isExpanded()
extern "C"
bool C_ZNK15QTreeWidgetItem10isExpandedEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isExpanded();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:91
// [-2] void setFirstColumnSpanned(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem21setFirstColumnSpannedEb(void *this_, bool span) {
  ((QTreeWidgetItem*)this_)->setFirstColumnSpanned(span);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:92
// [1] bool isFirstColumnSpanned()
extern "C"
bool C_ZNK15QTreeWidgetItem20isFirstColumnSpannedEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isFirstColumnSpanned();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:94
// [-2] void setDisabled(_Bool)
extern "C"
void C_ZN15QTreeWidgetItem11setDisabledEb(void *this_, bool disabled) {
  ((QTreeWidgetItem*)this_)->setDisabled(disabled);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:95
// [1] bool isDisabled()
extern "C"
bool C_ZNK15QTreeWidgetItem10isDisabledEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isDisabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:98
// [-2] void setChildIndicatorPolicy(class QTreeWidgetItem::ChildIndicatorPolicy)
extern "C"
void C_ZN15QTreeWidgetItem23setChildIndicatorPolicyENS_20ChildIndicatorPolicyE(void *this_, QTreeWidgetItem::ChildIndicatorPolicy policy) {
  ((QTreeWidgetItem*)this_)->setChildIndicatorPolicy(policy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:99
// [4] QTreeWidgetItem::ChildIndicatorPolicy childIndicatorPolicy()
extern "C"
QTreeWidgetItem::ChildIndicatorPolicy C_ZNK15QTreeWidgetItem20childIndicatorPolicyEv(void *this_) {
  return (QTreeWidgetItem::ChildIndicatorPolicy)((QTreeWidgetItem*)this_)->childIndicatorPolicy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:101
// [4] Qt::ItemFlags flags()
extern "C"
Qt::ItemFlags C_ZNK15QTreeWidgetItem5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QTreeWidgetItem*)this_)->flags();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:102
// [-2] void setFlags(Qt::ItemFlags)
extern "C"
void C_ZN15QTreeWidgetItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QTreeWidgetItem*)this_)->setFlags(flags);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:104
// [8] QString text(int)
extern "C"
void* C_ZNK15QTreeWidgetItem4textEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->text(column);
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:106
// [-2] void setText(int, const class QString &)
extern "C"
void C_ZN15QTreeWidgetItem7setTextEiRK7QString(void *this_, int column, QString* text) {
  ((QTreeWidgetItem*)this_)->setText(column, *text);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:108
// [8] QIcon icon(int)
extern "C"
void* C_ZNK15QTreeWidgetItem4iconEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->icon(column);
return new QIcon(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:110
// [-2] void setIcon(int, const class QIcon &)
extern "C"
void C_ZN15QTreeWidgetItem7setIconEiRK5QIcon(void *this_, int column, QIcon* icon) {
  ((QTreeWidgetItem*)this_)->setIcon(column, *icon);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:112
// [8] QString statusTip(int)
extern "C"
void* C_ZNK15QTreeWidgetItem9statusTipEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->statusTip(column);
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:114
// [-2] void setStatusTip(int, const class QString &)
extern "C"
void C_ZN15QTreeWidgetItem12setStatusTipEiRK7QString(void *this_, int column, QString* statusTip) {
  ((QTreeWidgetItem*)this_)->setStatusTip(column, *statusTip);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:117
// [8] QString toolTip(int)
extern "C"
void* C_ZNK15QTreeWidgetItem7toolTipEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->toolTip(column);
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:119
// [-2] void setToolTip(int, const class QString &)
extern "C"
void C_ZN15QTreeWidgetItem10setToolTipEiRK7QString(void *this_, int column, QString* toolTip) {
  ((QTreeWidgetItem*)this_)->setToolTip(column, *toolTip);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:123
// [8] QString whatsThis(int)
extern "C"
void* C_ZNK15QTreeWidgetItem9whatsThisEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->whatsThis(column);
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:125
// [-2] void setWhatsThis(int, const class QString &)
extern "C"
void C_ZN15QTreeWidgetItem12setWhatsThisEiRK7QString(void *this_, int column, QString* whatsThis) {
  ((QTreeWidgetItem*)this_)->setWhatsThis(column, *whatsThis);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:128
// [16] QFont font(int)
extern "C"
void* C_ZNK15QTreeWidgetItem4fontEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->font(column);
return new QFont(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:130
// [-2] void setFont(int, const class QFont &)
extern "C"
void C_ZN15QTreeWidgetItem7setFontEiRK5QFont(void *this_, int column, QFont* font) {
  ((QTreeWidgetItem*)this_)->setFont(column, *font);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:132
// [4] int textAlignment(int)
extern "C"
int C_ZNK15QTreeWidgetItem13textAlignmentEi(void *this_, int column) {
  return (int)((QTreeWidgetItem*)this_)->textAlignment(column);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:134
// [-2] void setTextAlignment(int, int)
extern "C"
void C_ZN15QTreeWidgetItem16setTextAlignmentEii(void *this_, int column, int alignment) {
  ((QTreeWidgetItem*)this_)->setTextAlignment(column, alignment);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:137
// [16] QColor backgroundColor(int)
extern "C"
void* C_ZNK15QTreeWidgetItem15backgroundColorEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->backgroundColor(column);
return new QColor(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:139
// [-2] void setBackgroundColor(int, const class QColor &)
extern "C"
void C_ZN15QTreeWidgetItem18setBackgroundColorEiRK6QColor(void *this_, int column, QColor* color) {
  ((QTreeWidgetItem*)this_)->setBackgroundColor(column, *color);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:142
// [8] QBrush background(int)
extern "C"
void* C_ZNK15QTreeWidgetItem10backgroundEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->background(column);
return new QBrush(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:144
// [-2] void setBackground(int, const class QBrush &)
extern "C"
void C_ZN15QTreeWidgetItem13setBackgroundEiRK6QBrush(void *this_, int column, QBrush* brush) {
  ((QTreeWidgetItem*)this_)->setBackground(column, *brush);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:147
// [16] QColor textColor(int)
extern "C"
void* C_ZNK15QTreeWidgetItem9textColorEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->textColor(column);
return new QColor(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:149
// [-2] void setTextColor(int, const class QColor &)
extern "C"
void C_ZN15QTreeWidgetItem12setTextColorEiRK6QColor(void *this_, int column, QColor* color) {
  ((QTreeWidgetItem*)this_)->setTextColor(column, *color);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:152
// [8] QBrush foreground(int)
extern "C"
void* C_ZNK15QTreeWidgetItem10foregroundEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->foreground(column);
return new QBrush(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:154
// [-2] void setForeground(int, const class QBrush &)
extern "C"
void C_ZN15QTreeWidgetItem13setForegroundEiRK6QBrush(void *this_, int column, QBrush* brush) {
  ((QTreeWidgetItem*)this_)->setForeground(column, *brush);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:157
// [4] Qt::CheckState checkState(int)
extern "C"
Qt::CheckState C_ZNK15QTreeWidgetItem10checkStateEi(void *this_, int column) {
  return (Qt::CheckState)((QTreeWidgetItem*)this_)->checkState(column);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:159
// [-2] void setCheckState(int, Qt::CheckState)
extern "C"
void C_ZN15QTreeWidgetItem13setCheckStateEiN2Qt10CheckStateE(void *this_, int column, Qt::CheckState state) {
  ((QTreeWidgetItem*)this_)->setCheckState(column, state);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:162
// [8] QSize sizeHint(int)
extern "C"
void* C_ZNK15QTreeWidgetItem8sizeHintEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->sizeHint(column);
return new QSize(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:164
// [-2] void setSizeHint(int, const class QSize &)
extern "C"
void C_ZN15QTreeWidgetItem11setSizeHintEiRK5QSize(void *this_, int column, QSize* size) {
  ((QTreeWidgetItem*)this_)->setSizeHint(column, *size);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:167
// [16] QVariant data(int, int)
extern "C"
void* C_ZNK15QTreeWidgetItem4dataEii(void *this_, int column, int role) {
  auto rv = ((QTreeWidgetItem*)this_)->data(column, role);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:168
// [-2] void setData(int, int, const class QVariant &)
extern "C"
void C_ZN15QTreeWidgetItem7setDataEiiRK8QVariant(void *this_, int column, int role, QVariant* value) {
  ((QTreeWidgetItem*)this_)->setData(column, role, *value);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:173
// [-2] void read(class QDataStream &)
extern "C"
void C_ZN15QTreeWidgetItem4readER11QDataStream(void *this_, QDataStream* in) {
  ((QTreeWidgetItem*)this_)->read(*in);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:174
// [-2] void write(class QDataStream &)
extern "C"
void C_ZNK15QTreeWidgetItem5writeER11QDataStream(void *this_, QDataStream* out) {
  ((QTreeWidgetItem*)this_)->write(*out);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:178
// [8] QTreeWidgetItem * parent()
extern "C"
void* C_ZNK15QTreeWidgetItem6parentEv(void *this_) {
  return (void*)((QTreeWidgetItem*)this_)->parent();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:179
// [8] QTreeWidgetItem * child(int)
extern "C"
void* C_ZNK15QTreeWidgetItem5childEi(void *this_, int index) {
  return (void*)((QTreeWidgetItem*)this_)->child(index);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:185
// [4] int childCount()
extern "C"
int C_ZNK15QTreeWidgetItem10childCountEv(void *this_) {
  return (int)((QTreeWidgetItem*)this_)->childCount();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:186
// [4] int columnCount()
extern "C"
int C_ZNK15QTreeWidgetItem11columnCountEv(void *this_) {
  return (int)((QTreeWidgetItem*)this_)->columnCount();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:187
// [4] int indexOfChild(class QTreeWidgetItem *)
extern "C"
int C_ZNK15QTreeWidgetItem12indexOfChildEPS_(void *this_, QTreeWidgetItem * child) {
  return (int)((QTreeWidgetItem*)this_)->indexOfChild(child);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:189
// [-2] void addChild(class QTreeWidgetItem *)
extern "C"
void C_ZN15QTreeWidgetItem8addChildEPS_(void *this_, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->addChild(child);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:190
// [-2] void insertChild(int, class QTreeWidgetItem *)
extern "C"
void C_ZN15QTreeWidgetItem11insertChildEiPS_(void *this_, int index, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->insertChild(index, child);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:191
// [-2] void removeChild(class QTreeWidgetItem *)
extern "C"
void C_ZN15QTreeWidgetItem11removeChildEPS_(void *this_, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->removeChild(child);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:192
// [8] QTreeWidgetItem * takeChild(int)
extern "C"
void* C_ZN15QTreeWidgetItem9takeChildEi(void *this_, int index) {
  return (void*)((QTreeWidgetItem*)this_)->takeChild(index);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:198
// [4] int type()
extern "C"
int C_ZNK15QTreeWidgetItem4typeEv(void *this_) {
  return (int)((QTreeWidgetItem*)this_)->type();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:199
// [-2] void sortChildren(int, Qt::SortOrder)
extern "C"
void C_ZN15QTreeWidgetItem12sortChildrenEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeWidgetItem*)this_)->sortChildren(column, order);
}
//  main block end
