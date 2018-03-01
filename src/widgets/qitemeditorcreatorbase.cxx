//  header block begin
// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#ifndef protected
#define protected public
#endif
#include <qitemeditorfactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemEditorCreatorBase is pure virtual: true
// QItemEditorCreatorBase has virtual projected: false
//  header block end

//  main block begin

class MyQItemEditorCreatorBase : public QItemEditorCreatorBase {
public:
  virtual ~MyQItemEditorCreatorBase() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:58
// [-2] void ~QItemEditorCreatorBase()
extern "C" Q_DECL_EXPORT
void C_ZN22QItemEditorCreatorBaseD2Ev(void *this_) {
  delete (QItemEditorCreatorBase*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:60
// [8] QWidget * createWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QItemEditorCreatorBase12createWidgetEP7QWidget(void *this_, QWidget * parent) {
  return (void*)((QItemEditorCreatorBase*)this_)->createWidget(parent);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:61
// [8] QByteArray valuePropertyName()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QItemEditorCreatorBase17valuePropertyNameEv(void *this_) {
  auto rv = ((QItemEditorCreatorBase*)this_)->valuePropertyName();
return new QByteArray(rv);
}

//  main block end
