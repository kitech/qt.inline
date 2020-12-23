//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(treewidget)
// /usr/include/qt/QtWidgets/qtreewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtreewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeWidgetItem is pure virtual: false false
// QTreeWidgetItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtreewidgetitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:67
// [-2] void QTreeWidgetItem(int) 
// (12)qm4103294711 (24)_ZN15QTreeWidgetItemC2Ei
/*void* qm4103294711(int type_)*/{
  int type_ = *(int*)this_;
  this_ =  new QTreeWidgetItem(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:68
// [-2] void QTreeWidgetItem(const QStringList &, int) 
// (12)qm2817782461 (39)_ZN15QTreeWidgetItemC2ERK11QStringListi
/*void* qm2817782461(const QStringList & strings, int type_)*/{
  const QStringList & strings = *(const QStringList *)this_; int type_ = *(int*)this_;
  this_ =  new QTreeWidgetItem(strings, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:69
// [-2] void QTreeWidgetItem(QTreeWidget *, int) 
// (12)qm3483897186 (38)_ZN15QTreeWidgetItemC2EP11QTreeWidgeti
/*void* qm3483897186(QTreeWidget * treeview, int type_)*/{
  QTreeWidget * treeview = *(QTreeWidget **)this_; int type_ = *(int*)this_;
  this_ =  new QTreeWidgetItem(treeview, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:70
// [-2] void QTreeWidgetItem(QTreeWidget *, const QStringList &, int) 
// (11)qm641872238 (53)_ZN15QTreeWidgetItemC2EP11QTreeWidgetRK11QStringListi
/*void* qm641872238(QTreeWidget * treeview, const QStringList & strings, int type_)*/{
  QTreeWidget * treeview = *(QTreeWidget **)this_; const QStringList & strings = *(const QStringList *)this_; int type_ = *(int*)this_;
  this_ =  new QTreeWidgetItem(treeview, strings, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:71
// [-2] void QTreeWidgetItem(QTreeWidget *, QTreeWidgetItem *, int) 
// (11)qm858074273 (41)_ZN15QTreeWidgetItemC2EP11QTreeWidgetPS_i
/*void* qm858074273(QTreeWidget * treeview, QTreeWidgetItem * after, int type_)*/{
  QTreeWidget * treeview = *(QTreeWidget **)this_; QTreeWidgetItem * after = *(QTreeWidgetItem **)this_; int type_ = *(int*)this_;
  this_ =  new QTreeWidgetItem(treeview, after, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:72
// [-2] void QTreeWidgetItem(QTreeWidgetItem *, int) 
// (12)qm2728567651 (27)_ZN15QTreeWidgetItemC2EPS_i
/*void* qm2728567651(QTreeWidgetItem * parent, int type_)*/{
  QTreeWidgetItem * parent = *(QTreeWidgetItem **)this_; int type_ = *(int*)this_;
  this_ =  new QTreeWidgetItem(parent, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:73
// [-2] void QTreeWidgetItem(QTreeWidgetItem *, const QStringList &, int) 
// (12)qm2526487548 (42)_ZN15QTreeWidgetItemC2EPS_RK11QStringListi
/*void* qm2526487548(QTreeWidgetItem * parent, const QStringList & strings, int type_)*/{
  QTreeWidgetItem * parent = *(QTreeWidgetItem **)this_; const QStringList & strings = *(const QStringList *)this_; int type_ = *(int*)this_;
  this_ =  new QTreeWidgetItem(parent, strings, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:74
// [-2] void QTreeWidgetItem(QTreeWidgetItem *, QTreeWidgetItem *, int) 
// (12)qm3130188821 (30)_ZN15QTreeWidgetItemC2EPS_S0_i
/*void* qm3130188821(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type_)*/{
  QTreeWidgetItem * parent = *(QTreeWidgetItem **)this_; QTreeWidgetItem * after = *(QTreeWidgetItem **)this_; int type_ = *(int*)this_;
  this_ =  new QTreeWidgetItem(parent, after, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:75
// [-2] void QTreeWidgetItem(const QTreeWidgetItem &) 
// (12)qm2039563189 (27)_ZN15QTreeWidgetItemC2ERKS_
/*void* qm2039563189(const QTreeWidgetItem & other)*/{
  const QTreeWidgetItem & other = *(const QTreeWidgetItem *)this_;
  this_ =  new QTreeWidgetItem(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:80
// [8] QTreeWidget * treeWidget() const
// (12)qm4071041498 (35)_ZNK15QTreeWidgetItem10treeWidgetEv
//static
/*void qm4071041498()*/ {
  ;
  (void) ((QTreeWidgetItem*)this_)->treeWidget();
   auto xptr = (QTreeWidget * (QTreeWidgetItem::*)() const ) &QTreeWidgetItem::treeWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:94
// [-2] void setDisabled(bool) 
// (12)qm3775277660 (35)_ZN15QTreeWidgetItem11setDisabledEb
//static
/*void qm3775277660(bool disabled)*/ {
  bool disabled = *(bool*)this_;
  (void) ((QTreeWidgetItem*)this_)->setDisabled(disabled);
   auto xptr = (void (QTreeWidgetItem::*)(bool) ) &QTreeWidgetItem::setDisabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:95
// [1] bool isDisabled() const
// (11)qm340382277 (35)_ZNK15QTreeWidgetItem10isDisabledEv
//static
/*void qm340382277()*/ {
  ;
  (void) ((QTreeWidgetItem*)this_)->isDisabled();
   auto xptr = (bool (QTreeWidgetItem::*)() const ) &QTreeWidgetItem::isDisabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:104
// [8] QString text(int) const
// (12)qm1337289210 (28)_ZNK15QTreeWidgetItem4textEi
//static
/*void qm1337289210(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->text(column);
   auto xptr = (QString (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::text;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:106
// [-2] void setText(int, const QString &) 
// (11)qm991288472 (40)_ZN15QTreeWidgetItem7setTextEiRK7QString
//static
/*void qm991288472(int column, const QString & text)*/ {
  int column = *(int*)this_; const QString & text = *(const QString *)this_;
  (void) ((QTreeWidgetItem*)this_)->setText(column, text);
   auto xptr = (void (QTreeWidgetItem::*)(int, QString const&) ) &QTreeWidgetItem::setText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:108
// [8] QIcon icon(int) const
// (12)qm2747450527 (28)_ZNK15QTreeWidgetItem4iconEi
//static
/*void qm2747450527(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->icon(column);
   auto xptr = (QIcon (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::icon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:110
// [-2] void setIcon(int, const QIcon &) 
// (12)qm1742854823 (38)_ZN15QTreeWidgetItem7setIconEiRK5QIcon
//static
/*void qm1742854823(int column, const QIcon & icon)*/ {
  int column = *(int*)this_; const QIcon & icon = *(const QIcon *)this_;
  (void) ((QTreeWidgetItem*)this_)->setIcon(column, icon);
   auto xptr = (void (QTreeWidgetItem::*)(int, QIcon const&) ) &QTreeWidgetItem::setIcon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:112
// [8] QString statusTip(int) const
// (11)qm627391753 (33)_ZNK15QTreeWidgetItem9statusTipEi
//static
/*void qm627391753(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->statusTip(column);
   auto xptr = (QString (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::statusTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:114
// [-2] void setStatusTip(int, const QString &) 
// (12)qm2457381370 (46)_ZN15QTreeWidgetItem12setStatusTipEiRK7QString
//static
/*void qm2457381370(int column, const QString & statusTip)*/ {
  int column = *(int*)this_; const QString & statusTip = *(const QString *)this_;
  (void) ((QTreeWidgetItem*)this_)->setStatusTip(column, statusTip);
   auto xptr = (void (QTreeWidgetItem::*)(int, QString const&) ) &QTreeWidgetItem::setStatusTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:117
// [8] QString toolTip(int) const
// (12)qm3476850965 (31)_ZNK15QTreeWidgetItem7toolTipEi
//static
/*void qm3476850965(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->toolTip(column);
   auto xptr = (QString (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::toolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:119
// [-2] void setToolTip(int, const QString &) 
// (12)qm1943391960 (44)_ZN15QTreeWidgetItem10setToolTipEiRK7QString
//static
/*void qm1943391960(int column, const QString & toolTip)*/ {
  int column = *(int*)this_; const QString & toolTip = *(const QString *)this_;
  (void) ((QTreeWidgetItem*)this_)->setToolTip(column, toolTip);
   auto xptr = (void (QTreeWidgetItem::*)(int, QString const&) ) &QTreeWidgetItem::setToolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:123
// [8] QString whatsThis(int) const
// (12)qm3082863751 (33)_ZNK15QTreeWidgetItem9whatsThisEi
//static
/*void qm3082863751(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->whatsThis(column);
   auto xptr = (QString (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::whatsThis;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:125
// [-2] void setWhatsThis(int, const QString &) 
// (12)qm3390794612 (46)_ZN15QTreeWidgetItem12setWhatsThisEiRK7QString
//static
/*void qm3390794612(int column, const QString & whatsThis)*/ {
  int column = *(int*)this_; const QString & whatsThis = *(const QString *)this_;
  (void) ((QTreeWidgetItem*)this_)->setWhatsThis(column, whatsThis);
   auto xptr = (void (QTreeWidgetItem::*)(int, QString const&) ) &QTreeWidgetItem::setWhatsThis;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:128
// [16] QFont font(int) const
// (12)qm1047124616 (28)_ZNK15QTreeWidgetItem4fontEi
//static
/*void qm1047124616(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->font(column);
   auto xptr = (QFont (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::font;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:130
// [-2] void setFont(int, const QFont &) 
// (12)qm3375572611 (38)_ZN15QTreeWidgetItem7setFontEiRK5QFont
//static
/*void qm3375572611(int column, const QFont & font)*/ {
  int column = *(int*)this_; const QFont & font = *(const QFont *)this_;
  (void) ((QTreeWidgetItem*)this_)->setFont(column, font);
   auto xptr = (void (QTreeWidgetItem::*)(int, QFont const&) ) &QTreeWidgetItem::setFont;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:132
// [4] int textAlignment(int) const
// (12)qm4102378169 (38)_ZNK15QTreeWidgetItem13textAlignmentEi
//static
/*void qm4102378169(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->textAlignment(column);
   auto xptr = (int (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::textAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:134
// [-2] void setTextAlignment(int, int) 
// (11)qm438196625 (41)_ZN15QTreeWidgetItem16setTextAlignmentEii
//static
/*void qm438196625(int column, int alignment)*/ {
  int column = *(int*)this_; int alignment = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->setTextAlignment(column, alignment);
   auto xptr = (void (QTreeWidgetItem::*)(int, int) ) &QTreeWidgetItem::setTextAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:146
// [8] QBrush background(int) const
// (11)qm899083829 (35)_ZNK15QTreeWidgetItem10backgroundEi
//static
/*void qm899083829(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->background(column);
   auto xptr = (QBrush (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::background;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:148
// [-2] void setBackground(int, const QBrush &) 
// (12)qm3402859376 (46)_ZN15QTreeWidgetItem13setBackgroundEiRK6QBrush
//static
/*void qm3402859376(int column, const QBrush & brush)*/ {
  int column = *(int*)this_; const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTreeWidgetItem*)this_)->setBackground(column, brush);
   auto xptr = (void (QTreeWidgetItem::*)(int, QBrush const&) ) &QTreeWidgetItem::setBackground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:160
// [8] QBrush foreground(int) const
// (12)qm1682493192 (35)_ZNK15QTreeWidgetItem10foregroundEi
//static
/*void qm1682493192(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->foreground(column);
   auto xptr = (QBrush (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::foreground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:162
// [-2] void setForeground(int, const QBrush &) 
// (11)qm476013943 (46)_ZN15QTreeWidgetItem13setForegroundEiRK6QBrush
//static
/*void qm476013943(int column, const QBrush & brush)*/ {
  int column = *(int*)this_; const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTreeWidgetItem*)this_)->setForeground(column, brush);
   auto xptr = (void (QTreeWidgetItem::*)(int, QBrush const&) ) &QTreeWidgetItem::setForeground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:165
// [4] Qt::CheckState checkState(int) const
// (12)qm2680846129 (35)_ZNK15QTreeWidgetItem10checkStateEi
//static
/*void qm2680846129(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->checkState(column);
   auto xptr = (Qt::CheckState (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::checkState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:167
// [-2] void setCheckState(int, Qt::CheckState) 
// (12)qm3199276786 (54)_ZN15QTreeWidgetItem13setCheckStateEiN2Qt10CheckStateE
//static
/*void qm3199276786(int column, Qt::CheckState state)*/ {
  int column = *(int*)this_; Qt::CheckState state = *(Qt::CheckState*)this_;
  (void) ((QTreeWidgetItem*)this_)->setCheckState(column, state);
   auto xptr = (void (QTreeWidgetItem::*)(int, Qt::CheckState) ) &QTreeWidgetItem::setCheckState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:170
// [8] QSize sizeHint(int) const
// (12)qm4039705855 (32)_ZNK15QTreeWidgetItem8sizeHintEi
//static
/*void qm4039705855(int column)*/ {
  int column = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->sizeHint(column);
   auto xptr = (QSize (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::sizeHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:172
// [-2] void setSizeHint(int, const QSize &) 
// (12)qm2117169628 (43)_ZN15QTreeWidgetItem11setSizeHintEiRK5QSize
//static
/*void qm2117169628(int column, const QSize & size)*/ {
  int column = *(int*)this_; const QSize & size = *(const QSize *)this_;
  (void) ((QTreeWidgetItem*)this_)->setSizeHint(column, size);
   auto xptr = (void (QTreeWidgetItem::*)(int, QSize const&) ) &QTreeWidgetItem::setSizeHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:186
// [8] QTreeWidgetItem * parent() const
// (12)qm1856595439 (30)_ZNK15QTreeWidgetItem6parentEv
//static
/*void qm1856595439()*/ {
  ;
  (void) ((QTreeWidgetItem*)this_)->parent();
   auto xptr = (QTreeWidgetItem * (QTreeWidgetItem::*)() const ) &QTreeWidgetItem::parent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:187
// [8] QTreeWidgetItem * child(int) const
// (12)qm2710941473 (29)_ZNK15QTreeWidgetItem5childEi
//static
/*void qm2710941473(int index)*/ {
  int index = *(int*)this_;
  (void) ((QTreeWidgetItem*)this_)->child(index);
   auto xptr = (QTreeWidgetItem * (QTreeWidgetItem::*)(int) const ) &QTreeWidgetItem::child;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:193
// [4] int childCount() const
// (12)qm3079169631 (35)_ZNK15QTreeWidgetItem10childCountEv
//static
/*void qm3079169631()*/ {
  ;
  (void) ((QTreeWidgetItem*)this_)->childCount();
   auto xptr = (int (QTreeWidgetItem::*)() const ) &QTreeWidgetItem::childCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:194
// [4] int columnCount() const
// (12)qm1319811368 (36)_ZNK15QTreeWidgetItem11columnCountEv
//static
/*void qm1319811368()*/ {
  ;
  (void) ((QTreeWidgetItem*)this_)->columnCount();
   auto xptr = (int (QTreeWidgetItem::*)() const ) &QTreeWidgetItem::columnCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:195
// [4] int indexOfChild(QTreeWidgetItem *) const
// (12)qm2563950412 (39)_ZNK15QTreeWidgetItem12indexOfChildEPS_
//static
/*void qm2563950412(QTreeWidgetItem * child)*/ {
  QTreeWidgetItem * child = *(QTreeWidgetItem **)this_;
  (void) ((QTreeWidgetItem*)this_)->indexOfChild(child);
   auto xptr = (int (QTreeWidgetItem::*)(QTreeWidgetItem*) const ) &QTreeWidgetItem::indexOfChild;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:206
// [4] int type() const
// (12)qm3221094180 (28)_ZNK15QTreeWidgetItem4typeEv
//static
/*void qm3221094180()*/ {
  ;
  (void) ((QTreeWidgetItem*)this_)->type();
   auto xptr = (int (QTreeWidgetItem::*)() const ) &QTreeWidgetItem::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:207
// [-2] void sortChildren(int, Qt::SortOrder) 
// (12)qm3377679396 (51)_ZN15QTreeWidgetItem12sortChildrenEiN2Qt9SortOrderE
//static
/*void qm3377679396(int column, Qt::SortOrder order)*/ {
  int column = *(int*)this_; Qt::SortOrder order = *(Qt::SortOrder*)this_;
  (void) ((QTreeWidgetItem*)this_)->sortChildren(column, order);
   auto xptr = (void (QTreeWidgetItem::*)(int, Qt::SortOrder) ) &QTreeWidgetItem::sortChildren;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QTreeWidgetItemD2Ev(void *this_)*/ {
  delete (QTreeWidgetItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtreewidgetitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(treewidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
