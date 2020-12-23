//  header block begin

#ifndef QT_MINIMAL
#include <QtGui/qtguiglobal.h>
#if QT_CONFIG(standarditemmodel)
// /usr/include/qt/QtGui/qstandarditemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstandarditemmodel.h>
#include <QtGui>
#include "callback_inherit.h"

// QStandardItem is pure virtual: false false
// QStandardItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstandarditem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:64
// [-2] void QStandardItem() 
// (12)qm3217880674 (22)_ZN13QStandardItemC2Ev
/*void* qm3217880674()*/{
  ;
  this_ =  new QStandardItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:65
// [-2] void QStandardItem(const QString &) 
// (12)qm1974625333 (31)_ZN13QStandardItemC2ERK7QString
/*void* qm1974625333(const QString & text)*/{
  const QString & text = *(const QString *)this_;
  this_ =  new QStandardItem(text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:66
// [-2] void QStandardItem(const QIcon &, const QString &) 
// (12)qm3295350938 (39)_ZN13QStandardItemC2ERK5QIconRK7QString
/*void* qm3295350938(const QIcon & icon, const QString & text)*/{
  const QIcon & icon = *(const QIcon *)this_; const QString & text = *(const QString *)this_;
  this_ =  new QStandardItem(icon, text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:67
// [-2] void QStandardItem(int, int) 
// (12)qm2285237357 (23)_ZN13QStandardItemC2Eii
/*void* qm2285237357(int rows, int columns)*/{
  int rows = *(int*)this_; int columns = *(int*)this_;
  this_ =  new QStandardItem(rows, columns);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:74
// [8] QString text() const
// (12)qm2756924617 (26)_ZNK13QStandardItem4textEv
//static
/*void qm2756924617()*/ {
  ;
  (void) ((QStandardItem*)this_)->text();
   auto xptr = (QString (QStandardItem::*)() const ) &QStandardItem::text;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:77
// [-2] void setText(const QString &) 
// (12)qm4018926516 (37)_ZN13QStandardItem7setTextERK7QString
//static
/*void qm4018926516(const QString & text)*/ {
  const QString & text = *(const QString *)this_;
  (void) ((QStandardItem*)this_)->setText(text);
   auto xptr = (void (QStandardItem::*)(QString const&) ) &QStandardItem::setText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:79
// [8] QIcon icon() const
// (12)qm1210382764 (26)_ZNK13QStandardItem4iconEv
//static
/*void qm1210382764()*/ {
  ;
  (void) ((QStandardItem*)this_)->icon();
   auto xptr = (QIcon (QStandardItem::*)() const ) &QStandardItem::icon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:82
// [-2] void setIcon(const QIcon &) 
// (12)qm4192121326 (35)_ZN13QStandardItem7setIconERK5QIcon
//static
/*void qm4192121326(const QIcon & icon)*/ {
  const QIcon & icon = *(const QIcon *)this_;
  (void) ((QStandardItem*)this_)->setIcon(icon);
   auto xptr = (void (QStandardItem::*)(QIcon const&) ) &QStandardItem::setIcon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:85
// [8] QString toolTip() const
// (12)qm1340250104 (29)_ZNK13QStandardItem7toolTipEv
//static
/*void qm1340250104()*/ {
  ;
  (void) ((QStandardItem*)this_)->toolTip();
   auto xptr = (QString (QStandardItem::*)() const ) &QStandardItem::toolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:88
// [-2] void setToolTip(const QString &) 
// (12)qm2711109448 (41)_ZN13QStandardItem10setToolTipERK7QString
//static
/*void qm2711109448(const QString & toolTip)*/ {
  const QString & toolTip = *(const QString *)this_;
  (void) ((QStandardItem*)this_)->setToolTip(toolTip);
   auto xptr = (void (QStandardItem::*)(QString const&) ) &QStandardItem::setToolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:92
// [8] QString statusTip() const
// (12)qm2932401325 (31)_ZNK13QStandardItem9statusTipEv
//static
/*void qm2932401325()*/ {
  ;
  (void) ((QStandardItem*)this_)->statusTip();
   auto xptr = (QString (QStandardItem::*)() const ) &QStandardItem::statusTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:95
// [-2] void setStatusTip(const QString &) 
// (12)qm3431889760 (43)_ZN13QStandardItem12setStatusTipERK7QString
//static
/*void qm3431889760(const QString & statusTip)*/ {
  const QString & statusTip = *(const QString *)this_;
  (void) ((QStandardItem*)this_)->setStatusTip(statusTip);
   auto xptr = (void (QStandardItem::*)(QString const&) ) &QStandardItem::setStatusTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:99
// [8] QString whatsThis() const
// (12)qm1013783843 (31)_ZNK13QStandardItem9whatsThisEv
//static
/*void qm1013783843()*/ {
  ;
  (void) ((QStandardItem*)this_)->whatsThis();
   auto xptr = (QString (QStandardItem::*)() const ) &QStandardItem::whatsThis;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:102
// [-2] void setWhatsThis(const QString &) 
// (12)qm3338724445 (43)_ZN13QStandardItem12setWhatsThisERK7QString
//static
/*void qm3338724445(const QString & whatsThis)*/ {
  const QString & whatsThis = *(const QString *)this_;
  (void) ((QStandardItem*)this_)->setWhatsThis(whatsThis);
   auto xptr = (void (QStandardItem::*)(QString const&) ) &QStandardItem::setWhatsThis;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:105
// [8] QSize sizeHint() const
// (12)qm1855997775 (30)_ZNK13QStandardItem8sizeHintEv
//static
/*void qm1855997775()*/ {
  ;
  (void) ((QStandardItem*)this_)->sizeHint();
   auto xptr = (QSize (QStandardItem::*)() const ) &QStandardItem::sizeHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:108
// [-2] void setSizeHint(const QSize &) 
// (12)qm2486433144 (40)_ZN13QStandardItem11setSizeHintERK5QSize
//static
/*void qm2486433144(const QSize & sizeHint)*/ {
  const QSize & sizeHint = *(const QSize *)this_;
  (void) ((QStandardItem*)this_)->setSizeHint(sizeHint);
   auto xptr = (void (QStandardItem::*)(QSize const&) ) &QStandardItem::setSizeHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:110
// [16] QFont font() const
// (12)qm3582977979 (26)_ZNK13QStandardItem4fontEv
//static
/*void qm3582977979()*/ {
  ;
  (void) ((QStandardItem*)this_)->font();
   auto xptr = (QFont (QStandardItem::*)() const ) &QStandardItem::font;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:113
// [-2] void setFont(const QFont &) 
// (12)qm2678507186 (35)_ZN13QStandardItem7setFontERK5QFont
//static
/*void qm2678507186(const QFont & font)*/ {
  const QFont & font = *(const QFont *)this_;
  (void) ((QStandardItem*)this_)->setFont(font);
   auto xptr = (void (QStandardItem::*)(QFont const&) ) &QStandardItem::setFont;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:115
// [4] Qt::Alignment textAlignment() const
// (12)qm1545711604 (36)_ZNK13QStandardItem13textAlignmentEv
//static
/*void qm1545711604()*/ {
  ;
  (void) ((QStandardItem*)this_)->textAlignment();
   auto xptr = (QFlags<Qt::AlignmentFlag> (QStandardItem::*)() const ) &QStandardItem::textAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:118
// [-2] void setTextAlignment(Qt::Alignment) 
// (12)qm1113909400 (66)_ZN13QStandardItem16setTextAlignmentE6QFlagsIN2Qt13AlignmentFlagEE
//static
/*void qm1113909400(QFlags<Qt::AlignmentFlag> textAlignment)*/ {
  QFlags<Qt::AlignmentFlag> textAlignment = *(QFlags<Qt::AlignmentFlag>*)this_;
  (void) ((QStandardItem*)this_)->setTextAlignment(textAlignment);
   auto xptr = (void (QStandardItem::*)(QFlags<Qt::AlignmentFlag>) ) &QStandardItem::setTextAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:120
// [8] QBrush background() const
// (12)qm2592120765 (33)_ZNK13QStandardItem10backgroundEv
//static
/*void qm2592120765()*/ {
  ;
  (void) ((QStandardItem*)this_)->background();
   auto xptr = (QBrush (QStandardItem::*)() const ) &QStandardItem::background;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:123
// [-2] void setBackground(const QBrush &) 
// (12)qm3899156636 (43)_ZN13QStandardItem13setBackgroundERK6QBrush
//static
/*void qm3899156636(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QStandardItem*)this_)->setBackground(brush);
   auto xptr = (void (QStandardItem::*)(QBrush const&) ) &QStandardItem::setBackground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:125
// [8] QBrush foreground() const
// (12)qm3411984000 (33)_ZNK13QStandardItem10foregroundEv
//static
/*void qm3411984000()*/ {
  ;
  (void) ((QStandardItem*)this_)->foreground();
   auto xptr = (QBrush (QStandardItem::*)() const ) &QStandardItem::foreground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:128
// [-2] void setForeground(const QBrush &) 
// (12)qm2989328188 (43)_ZN13QStandardItem13setForegroundERK6QBrush
//static
/*void qm2989328188(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QStandardItem*)this_)->setForeground(brush);
   auto xptr = (void (QStandardItem::*)(QBrush const&) ) &QStandardItem::setForeground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:130
// [4] Qt::CheckState checkState() const
// (11)qm819726009 (33)_ZNK13QStandardItem10checkStateEv
//static
/*void qm819726009()*/ {
  ;
  (void) ((QStandardItem*)this_)->checkState();
   auto xptr = (Qt::CheckState (QStandardItem::*)() const ) &QStandardItem::checkState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:133
// [-2] void setCheckState(Qt::CheckState) 
// (12)qm1871959943 (51)_ZN13QStandardItem13setCheckStateEN2Qt10CheckStateE
//static
/*void qm1871959943(Qt::CheckState checkState)*/ {
  Qt::CheckState checkState = *(Qt::CheckState*)this_;
  (void) ((QStandardItem*)this_)->setCheckState(checkState);
   auto xptr = (void (QStandardItem::*)(Qt::CheckState) ) &QStandardItem::setCheckState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:135
// [8] QString accessibleText() const
// (12)qm3527818036 (37)_ZNK13QStandardItem14accessibleTextEv
//static
/*void qm3527818036()*/ {
  ;
  (void) ((QStandardItem*)this_)->accessibleText();
   auto xptr = (QString (QStandardItem::*)() const ) &QStandardItem::accessibleText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:138
// [-2] void setAccessibleText(const QString &) 
// (12)qm2311528674 (48)_ZN13QStandardItem17setAccessibleTextERK7QString
//static
/*void qm2311528674(const QString & accessibleText)*/ {
  const QString & accessibleText = *(const QString *)this_;
  (void) ((QStandardItem*)this_)->setAccessibleText(accessibleText);
   auto xptr = (void (QStandardItem::*)(QString const&) ) &QStandardItem::setAccessibleText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:140
// [8] QString accessibleDescription() const
// (12)qm1776282084 (44)_ZNK13QStandardItem21accessibleDescriptionEv
//static
/*void qm1776282084()*/ {
  ;
  (void) ((QStandardItem*)this_)->accessibleDescription();
   auto xptr = (QString (QStandardItem::*)() const ) &QStandardItem::accessibleDescription;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:143
// [-2] void setAccessibleDescription(const QString &) 
// (11)qm352733167 (55)_ZN13QStandardItem24setAccessibleDescriptionERK7QString
//static
/*void qm352733167(const QString & accessibleDescription)*/ {
  const QString & accessibleDescription = *(const QString *)this_;
  (void) ((QStandardItem*)this_)->setAccessibleDescription(accessibleDescription);
   auto xptr = (void (QStandardItem::*)(QString const&) ) &QStandardItem::setAccessibleDescription;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:148
// [1] bool isEnabled() const
// (12)qm2845356903 (31)_ZNK13QStandardItem9isEnabledEv
//static
/*void qm2845356903()*/ {
  ;
  (void) ((QStandardItem*)this_)->isEnabled();
   auto xptr = (bool (QStandardItem::*)() const ) &QStandardItem::isEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:153
// [1] bool isEditable() const
// (12)qm3039385001 (33)_ZNK13QStandardItem10isEditableEv
//static
/*void qm3039385001()*/ {
  ;
  (void) ((QStandardItem*)this_)->isEditable();
   auto xptr = (bool (QStandardItem::*)() const ) &QStandardItem::isEditable;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:158
// [1] bool isSelectable() const
// (12)qm1292193189 (35)_ZNK13QStandardItem12isSelectableEv
//static
/*void qm1292193189()*/ {
  ;
  (void) ((QStandardItem*)this_)->isSelectable();
   auto xptr = (bool (QStandardItem::*)() const ) &QStandardItem::isSelectable;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:163
// [1] bool isCheckable() const
// (11)qm401471195 (34)_ZNK13QStandardItem11isCheckableEv
//static
/*void qm401471195()*/ {
  ;
  (void) ((QStandardItem*)this_)->isCheckable();
   auto xptr = (bool (QStandardItem::*)() const ) &QStandardItem::isCheckable;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:168
// [1] bool isAutoTristate() const
// (12)qm1970513784 (37)_ZNK13QStandardItem14isAutoTristateEv
//static
/*void qm1970513784()*/ {
  ;
  (void) ((QStandardItem*)this_)->isAutoTristate();
   auto xptr = (bool (QStandardItem::*)() const ) &QStandardItem::isAutoTristate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:173
// [1] bool isUserTristate() const
// (12)qm1482154893 (37)_ZNK13QStandardItem14isUserTristateEv
//static
/*void qm1482154893()*/ {
  ;
  (void) ((QStandardItem*)this_)->isUserTristate();
   auto xptr = (bool (QStandardItem::*)() const ) &QStandardItem::isUserTristate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:184
// [1] bool isDragEnabled() const
// (12)qm3424411353 (36)_ZNK13QStandardItem13isDragEnabledEv
//static
/*void qm3424411353()*/ {
  ;
  (void) ((QStandardItem*)this_)->isDragEnabled();
   auto xptr = (bool (QStandardItem::*)() const ) &QStandardItem::isDragEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:189
// [1] bool isDropEnabled() const
// (12)qm1528360782 (36)_ZNK13QStandardItem13isDropEnabledEv
//static
/*void qm1528360782()*/ {
  ;
  (void) ((QStandardItem*)this_)->isDropEnabled();
   auto xptr = (bool (QStandardItem::*)() const ) &QStandardItem::isDropEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:209
// [-2] void setChild(int, QStandardItem *) 
// (12)qm4285760773 (32)_ZN13QStandardItem8setChildEiPS_
//static
/*void qm4285760773(int row, QStandardItem * item)*/ {
  int row = *(int*)this_; QStandardItem * item = *(QStandardItem **)this_;
  (void) ((QStandardItem*)this_)->setChild(row, item);
   auto xptr = (void (QStandardItem::*)(int, QStandardItem*) ) &QStandardItem::setChild;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:222
// [-2] void appendRow(const QList<QStandardItem *> &) 
// (12)qm2861476192 (42)_ZN13QStandardItem9appendRowERK5QListIPS_E
//static
/*void qm2861476192(const QList<QStandardItem *> & items)*/ {
  const QList<QStandardItem *> & items = *(const QList<QStandardItem *> *)this_;
  (void) ((QStandardItem*)this_)->appendRow(items);
   auto xptr = (void (QStandardItem::*)(QList<QStandardItem*> const&) ) &QStandardItem::appendRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:223
// [-2] void appendRows(const QList<QStandardItem *> &) 
// (12)qm1686534915 (44)_ZN13QStandardItem10appendRowsERK5QListIPS_E
//static
/*void qm1686534915(const QList<QStandardItem *> & items)*/ {
  const QList<QStandardItem *> & items = *(const QList<QStandardItem *> *)this_;
  (void) ((QStandardItem*)this_)->appendRows(items);
   auto xptr = (void (QStandardItem::*)(QList<QStandardItem*> const&) ) &QStandardItem::appendRows;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:224
// [-2] void appendColumn(const QList<QStandardItem *> &) 
// (11)qm466509761 (46)_ZN13QStandardItem12appendColumnERK5QListIPS_E
//static
/*void qm466509761(const QList<QStandardItem *> & items)*/ {
  const QList<QStandardItem *> & items = *(const QList<QStandardItem *> *)this_;
  (void) ((QStandardItem*)this_)->appendColumn(items);
   auto xptr = (void (QStandardItem::*)(QList<QStandardItem*> const&) ) &QStandardItem::appendColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:225
// [-2] void insertRow(int, QStandardItem *) 
// (11)qm945129770 (33)_ZN13QStandardItem9insertRowEiPS_
//static
/*void qm945129770(int row, QStandardItem * item)*/ {
  int row = *(int*)this_; QStandardItem * item = *(QStandardItem **)this_;
  (void) ((QStandardItem*)this_)->insertRow(row, item);
   auto xptr = (void (QStandardItem::*)(int, QStandardItem*) ) &QStandardItem::insertRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:226
// [-2] void appendRow(QStandardItem *) 
// (12)qm2609337580 (32)_ZN13QStandardItem9appendRowEPS_
//static
/*void qm2609337580(QStandardItem * item)*/ {
  QStandardItem * item = *(QStandardItem **)this_;
  (void) ((QStandardItem*)this_)->appendRow(item);
   auto xptr = (void (QStandardItem::*)(QStandardItem*) ) &QStandardItem::appendRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QStandardItemD2Ev(void *this_)*/ {
  delete (QStandardItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstandarditem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(standarditemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
