//  header block begin

// /usr/include/qt/QtWidgets/qaccessiblewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessiblewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAccessibleWidget is pure virtual: false false
// QAccessibleWidget has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessiblewidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:56
// [-2] void QAccessibleWidget(QWidget *, QAccessible::Role, const QString &) 
// (12)qm1003490150 (64)_ZN17QAccessibleWidgetC2EP7QWidgetN11QAccessible4RoleERK7QString
/*void* qm1003490150(QWidget * o, QAccessible::Role r, const QString & name)*/{
  QWidget * o = *(QWidget **)this_; QAccessible::Role r = *(QAccessible::Role*)this_; const QString & name = *(const QString *)this_;
  this_ =  new QAccessibleWidget(o, r, name);
}

  return fnptrsumval;
} // end ensure_inline_symbol_qaccessiblewidget
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
